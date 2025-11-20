%% Boost converter simulation
% 13 nov 2025
% Job Meijer
clear all; close all; clc


% Parameters
Vin_min = 3.2;      % Min input voltage [Volt]
Vin_max = 4.2;      % Max input voltage [Volt]
Vin = 3.7;          % Avg input voltage [Volt]
R_Vin = 30*10^-3;   % Battery internal resistance [Ohm]

Fsw = 50*10^3;     % Switching frequency [Hertz]
Tsw = 1/Fsw;        % Switching period [seconds]

L1 = 5*10^-3;    % Inductance of coil 1 [Henry]
R_L1 = 0.1%9.5;         % Resistance of coil 1 [Ohm]

Cin = 10^-12;            % Capacitor input side [Farad] 
Cout = 470*10^-6;     % Capacitor output side [Farad]

Rload = 400;          % Output load resistance [Ohm]
Vout_setp = 20;     % Output voltage setpoint [Volt]

% Initial conditions
Vinit_Cout = Vin;
Vinit_Cin = Vin;
Iinit_L1 = -Vinit_Cout / Rload;


%% KVL
% Vin - V_Cin = 0
% V_Cin + V_L1 - V_SL = 0
% V_SL + V_SH - V_Cout = 0
% V_Cout - V_Rload = 0

%% KCL
% I_in - I_Cin - I_L1 = 0
% I_L1 - I_SL - I_SH = 0
% I_SH - I_Cout - I_Rload = 0
% I_Rload + I_Cout + I_SL + I_Cin - I_in = 0



%% Simulation 
Tsim = 0.2;         % Simulation duration [Seconds]
% Duty = 25;
PWMenable = 1;      % Enable PWM [Boolean]

Tstep = 10^-7;       % Simulation step size [Seconds]

% invDuty = 1-(Duty/100);
% Vout = (1/(1-invDuty))*Vin
invDuty_setp = 1-(Vin/Vout_setp)
Duty = (1-invDuty_setp)*100