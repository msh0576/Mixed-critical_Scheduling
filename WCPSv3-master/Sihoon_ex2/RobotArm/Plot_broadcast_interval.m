%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Plot broadcast_interval results generated from N simulations
% ('Execute_main_broadcast_interval.m' file)
% 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all;
clc;


%% Log file
file_name_Ours_4hop = 'Simul_results_Ours_broadcast_interval_4hop.mat';     % store results for a simulation
file_name_WH_4hop = 'Simul_results_WH_broadcast_interval_4hop.mat';
field_name_P1 = 'Log_broad_interv_P1';  
Ours_Log_broad_interv_P1_4hop = [];
WH_Log_broad_interv_P1_4hop = [];

file_name_Ours_4hop_500hp = 'Simul_results_Ours_broadcast_interval_4hop_500hp.mat';
file_name_WH_4hop_500hp = 'Simul_results_WH_broadcast_interval_4hop_500hp.mat';
Ours_Log_broad_interv_P1_4hop_500hp = [];
WH_Log_broad_interv_P1_4hop_500hp = [];


%% Get log data
Ours_results_4hop = load(file_name_Ours_4hop);
Ours_Log_broad_interv_P1_4hop = getfield(Ours_results_4hop, field_name_P1);
WH_results_4hop = load(file_name_WH_4hop);
WH_Log_broad_interv_P1_4hop = getfield(WH_results_4hop, field_name_P1);

Ours_results_4hop_500hp = load(file_name_Ours_4hop_500hp);
Ours_Log_broad_interv_P1_4hop_500hp = getfield(Ours_results_4hop_500hp, field_name_P1);
WH_results_4hop_500hp = load(file_name_WH_4hop_500hp);
WH_Log_broad_interv_P1_4hop_500hp = getfield(WH_results_4hop_500hp, field_name_P1);


%% Plot with CDF graph
fig_width     = 4; % inch
fig_height    = 3;
margin_vert_u = 0.3;
margin_vert_d = 0.45;
margin_horz_l = 0.55;
margin_horz_r = 0.25;

fontname = 'times new roman';
set(0, 'defaultaxesfontname', fontname);
set(0, 'defaulttextfontname', fontname);

fontsize = 9; %pt
set(0, 'defaultaxesfontsize', fontsize);
set(0, 'defaulttextfontsize', fontsize);
set(0, 'fixedwidthfontname', 'times');

hFig = figure;
set(hFig, 'renderer', 'painters');
set(hFig, 'units', 'inches');
set(hFig, 'position', [3 6 fig_width fig_height]);
set(hFig, 'PaperUnits', 'inches');
set(hFig, 'PaperSize', [fig_width fig_height]);
set(hFig, 'PaperPositionMode', 'manual');
set(hFig, 'PaperPosition', [0 0 fig_width fig_height]);

hAxe = axes;

set(hAxe, 'activepositionproperty', 'outerposition');
set(hAxe, 'units', 'inches');
ax_pos = get(hAxe, 'position');
ax_pos(4) = fig_height-margin_vert_u-margin_vert_d;
ax_pos(2) = fig_height-(margin_vert_u+ax_pos(4));
ax_pos(3) = fig_width-margin_horz_l-margin_horz_r;
ax_pos(1) = margin_horz_l;
set(hAxe, 'position', ax_pos);

box(hAxe,'on');

hold on;

X1 = cdfplot(Ours_Log_broad_interv_P1_4hop);
X4 = cdfplot(Ours_Log_broad_interv_P1_4hop_500hp);

X2 = cdfplot(WH_Log_broad_interv_P1_4hop);
X3 = cdfplot(WH_Log_broad_interv_P1_4hop_500hp);


set(X1, 'LineWidth', 3, 'Color', [.1 .1 .8]);
set(X2, 'LineWidth', 3, 'Color', [.8 .1 .1]);
set(X3, 'LineStyle', ':', 'LineWidth', 3, 'Color', [.8 .1 .5]);
set(X4, 'LineStyle', ':', 'LineWidth', 3, 'Color', [.1 .5 .8]);

title('');
xlabel('Broadcast interval (s)','fontweight', 'bold');
ylabel('CDF','fontweight', 'bold');
xlim([0 1]);
ylim([0 1]);
legend('ERA-250hp', 'ERA-500hp', 'WH-250hp', 'WH-500hp');
a = get(gca, 'XTickLabel');
set(gca, 'XTickLabel', a, 'FontWeight', 'bold');