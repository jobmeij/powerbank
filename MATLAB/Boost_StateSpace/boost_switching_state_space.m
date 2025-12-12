%% Switching state space simulation for boost converter
% Job Meijer - December 2025
clear all; close all; clc;


%% Boost converter parameters
L  = 68e-6;       % Inductance [H]
R_L = 0.1;       % Inductor resistance [Ohm]
C  = 470e-6;        % Capacitance [F]
R  = 10;           % Load resistance [Ohm]
Vin = 3.7;        % Input voltage [V]
Vout_setp = 20;   % Setpoint output voltage [V]
fsw = 100e3;      % Switching frequency [Hz]
tsw = 1/fsw;
duty = 0.5;       % Duty cycle of low side switch[-]
t_final = 5e-3;   % Simulation end time [s]  
x0 = [0; 0];      % Initial conditions iL [A] and vC [V]
% State vector: x = [iL; vC]

% ODE settings
opts = odeset('RelTol',1e-9,'AbsTol',1e-12, 'MaxStep', 1e-6);     % Tolerance options, at least 2 timesteps per switching period

% currentloop_freq = 10e3;        % update frequency of current control loop

% Computing some steady state things 
duty_setp = 1-(Vin/Vout_setp);
% duty = duty_setp 

I_out_ss = Vout_setp / R    % Current through load in steady state
I_in_ss = I_out_ss * (Vout_setp / Vin)      % Assuming 100% efficiency

% x0 = [I_in_ss; Vout_setp]   % Initial conditions based on computed steady states

delta_IL_on = (Vin*duty*tsw)/L;
delta_IL_off = ((Vin-Vout_setp)*(1-duty)*tsw) / L;

%% State space model
% Mode 1: Switch ON (inductor charging)
A_on = [-R_L/L, 0;
        0, -1/(R*C)];
B_on = [1/L;
        0];

% Mode 2: Switch OFF (inductor discharging)
A_off = [-R_L/L, -1/L;
         1/C, -1/(R*C)];
B_off = [1/L;
         0];

C = [1 1];                              % Output both iL and vC
D = 0;

ss_on = ss2tf(A_on, B_on, C, D);        % No TF since no output to Vc?
ss_off = ss2tf(A_off, B_off, C, D);     % 



%% Open loop simulation
if false
    % Simulate for N switching periods    
    [t, x] = ode15s(@(t,x) boost_dyn(t,x,A_on,B_on,A_off,B_off,Vin,fsw,duty), [0 t_final], x0, opts);
    
    
    % Plotting
    figure;
    hold on
    plot(t, x(:,1));    % iL
    plot(t, x(:,2));    % vC / V_out
    % DUTY
    % P_IN
    % P_OUT
    hold off
    grid on;
    xlabel('Time (s)');
    ylabel('States');
    legend('i_L','v_C');
    title('Boost converter state-space switching simulation');
end

%% Control simulation

fs_control = 10e3;      % Control loop frequency
ts_control = 1/fs_control;

t_all = [];
x_all = [];
duty_all = [];
t_offset = 0;

steps = t_final / ts_control;
for i = 1:steps
    % Run part of the simulation for given control loop iteration
    tstart = ts_control * i;                    % Start time of this control loop simulation
    tstop = ts_control * i + ts_control;        % Stop time of this control loop simulation
    [t_i, x_i] = ode15s(@(t,x) boost_dyn(t,x,A_on,B_on,A_off,B_off,Vin,fsw,duty), [tstart tstop], x0, opts);

    % Store time, states and input (duty) for all iterations
    samples = length(t_i);
    t_all = [t_all; t_i];
    x_all = [x_all; x_i];
    duty_all = [duty_all; (duty*ones(samples,1))];

    % Store values for next iteration
    t_offset = t_all(end);              % Get latest time
    x0 = x_i(end,:);                    % Get latest states and pass them on to next run

    % Compute duty cycle for next run   
    duty = compute_duty(x0);
end


% Plotting results
figure();
hold on
plot(t_all,x_all(:,1))
plot(t_all,x_all(:,2))
plot(t_all,duty_all);
hold off
grid on
xlabel('Time [s]')
legend('i_{L}','v_{C}','Duty','Location','Best')
title('Controlled simulation output')



%% Differential equation function
function dx = boost_dyn(t, x, A_on, B_on, A_off, B_off, Vin, fsw, duty)

    T = 1/fsw;             % Switching period
    t_mod = mod(t, T);     % Position inside switching cycle

    % t_mod is the time in the current switching cycle

    if t_mod < duty*T
        % Low side switch ON mode, high side OFF
        A = A_on;
        B = B_on;
    else
        % Low side switch OFF mode, high side ON
        A = A_off;
        B = B_off;
    end

    dx = A*x + B*Vin;
end


%% Control loop function
function duty = compute_duty(x0)
    iC = x0(1);
    vC = x0(2);
    
    
    duty = rand;        % TODO compute duty, for now a random between 0 and 1.
end
