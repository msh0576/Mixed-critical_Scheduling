%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   run TOSSIM_interface.py on a terminal
%   and then run this file
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all;
clc;

save_file_name = 'Simul_results_DMAC_maxUtil.mat';     % stored results for a simulation
field_name_P1 = 'MAE_P1';  
field_name_P2 = 'MAE_P2';  
MAE_P1 = [];
MAE_P2 = [];

% Comments button: 1 for execution, 0 for skip
Init_butt = 0;
RunSimul_butt = 1;
GetResult_butt = 0;

%%% Delete already existing .mat %%%
% It should be run once at first simulation
if Init_butt ~= 0
    if exist(save_file_name)
        delete(save_file_name); 
        save(save_file_name, field_name_P1, field_name_P2);
    else
        save(save_file_name, field_name_P1, field_name_P2);
    end
end


%%% Run TOSSIM & Simulink %%%
if RunSimul_butt ~= 0
    num_simulation = 50;
    t = tcpip('127.0.0.1', 10030);  % Which signal to TOSSIM_interface.py
    fopen(t);
    for i=1:num_simulation
        pause (1);
        fwrite(t,'Open TOSSIM');
        pause (1);
        run('robot_arm_main_utilization.m')
        pause (1);
    end
    fclose(t);
end



%%% After N simulations %%%
if GetResult_butt ~= 0
    %N_result_1Hz = load('Simul_results_1Hz.mat');
    %N_result_15Hz = load('Simul_results_1.5Hz.mat');
    N_result_WH = load('Simul_results_WH_sameUtil.mat');
    %N_result_WH_tmp = load('Simul_results_WH_P2.mat');
    N_result_DMAC = load('Simul_results_DMAC_maxUtil.mat');
    
    %N_result_1Hz_P1 = getfield(N_result_1Hz, field_name_P1);
    
    %N_result_15Hz_P1 = getfield(N_result_15Hz, field_name_P1);
    
    N_result_WH_P1 = getfield(N_result_WH, field_name_P1);
    N_result_WH_P2 = getfield(N_result_WH, field_name_P2);
    
    N_result_DMAC_P1 = getfield(N_result_DMAC, field_name_P1);
    N_result_DMAC_P2 = getfield(N_result_DMAC, field_name_P2);

    boxplot([N_result_DMAC_P1' N_result_DMAC_P2' N_result_WH_P1' N_result_WH_P2'], 'labels', {'DMAC:P1', 'DMAC:P2', 'WH:P1', 'WH:P2'});
    ylabel('MAE');
end

