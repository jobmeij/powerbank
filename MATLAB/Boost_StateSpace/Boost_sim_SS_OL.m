%% Boost converter open loop State space simulation 
clear all; close all; clc


%% Parameters
Vin = 10;           % Input voltage [V]
L = 0.05e-3;        % Inductor [H]
C = 10e-6;          % Output capacitor [F]
R = 15;             % Load resistor [Ohm]
Fsw = 100e3;        % Switching frequency [Hz]
Tsw = 1/Fsw;        % Switching time [s]


%% State space matrices (Augmented)
% Switch on
Aon = [-1/(R*C), 0, 0;
       0, 0, 1/L;
       0, 0, 0];

% Switch off
Aoff = [-1/(R*C), 1/C, 0;
        -1/L, 0, 1/L;
        0, 0, 0];

% Initial states [V_C, i_L, Vin
x0 = [0; 0; Vin];

%% Simulation Open Loop
y = x0;
t0 = 0;
steps = 150;
duty = 0.5;

for i = 1:steps
    t(i) = t0;
    y(:,i) = x0;
    x0 = expm(Aoff*(1-duty)*Tsw) * expm(Aon*duty*Tsw) * x0;
    t0 = t0+1;
end


%% Plotting
figure()
subplot 211     % Voltages
hold on
plot(t,y(1,:))  % V_C
plot(t,y(3,:))  % Vin
hold off
grid on
legend('V_{out}','V_{in}');
title('Simulation output')
ylabel('Voltage [V]')

subplot 212     % Currents
plot(t,y(2,:))
grid on
legend('i_{L}');
xlabel('Time steps [N]')
ylabel('Current [A]')

