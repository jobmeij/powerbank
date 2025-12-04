%% Switching state space simulation for boost converter
% Job Meijer - December 2025
clear all; close all; clc;

% Boost converter parameters
L  = 40e-6;       % Inductance [H]
R_L = 0.1;        % Inductor resistance [Ohm]
C  = 10e-6;       % Capacitance [F]
R  = 7;           % Load resistance [Ohm]
Vin = 3.7;        % Input voltage [V]
fsw = 500e3;      % Switching frequency [Hz]
duty = 0.7;       % Duty cycle [-]
t_final = 1e-3;   % Simulation end time [s]  
x0 = [0; 0];      % Initial conditions iL [A] and vC [V]

% State vector: x = [iL; vC]

% Mode 1: Switch ON (inductor charging)
A_on = [-R_L/L, 0;
        0, -R/C];

B_on = [1/L;
        0];

% Mode 2: Switch OFF (inductor discharging)
A_off = [-R_L/L, -1/L;
         1/C, -1/(R*C)];

B_off = [1/L;
         0];

% Simulate for N switching periods
[t, x] = ode45(@(t,x) boost_dyn(t,x,A_on,B_on,A_off,B_off,Vin,fsw,duty), [0 t_final], x0);

% Plot
figure; plot(t, x(:,1), t, x(:,2)); grid on;
xlabel('Time (s)');
ylabel('States');
legend('i_L','v_C');
title('Boost converter state-space switching simulation');




function dx = boost_dyn(t, x, A_on, B_on, A_off, B_off, Vin, fsw, duty)

    T = 1/fsw;             % Switching period
    t_mod = mod(t, T);     % Position inside switching cycle

    if t_mod < duty*T
        % Switch ON mode
        A = A_on;
        B = B_on;
    else
        % Switch OFF mode
        A = A_off;
        B = B_off;
    end

    dx = A*x + B*Vin;
end
