%%
%           Agent Logic
%         Stop Primitive with zero jerk
%              2024
%
%
%% Determine the optimal time to stop with zero jerk %%

%% Simbolic definition of the optimal distance to stop

final_opt_pos_stop_zero_jerk_var = solve(subs(sol_opt.j, [t, vf, af], [0,0,0]) == 0, sf);
final_opt_pos_stop_zero_jerk_fun = matlabFunction(final_opt_pos_stop_zero_jerk_var,'Vars',[v0,a0,T],'File','final_opt_pos_stop_zero_jerk.m');

%% Simbolic definition of the optimal time to stop
final_opt_time_stop_zero_jerk_var = solve(final_opt_time_stop(v0,a0,final_opt_pos_stop_zero_jerk_var) == T, T);
final_opt_time_stop_zero_jerk_fun = matlabFunction(final_opt_time_stop_zero_jerk_var(2),'Vars',[v0,a0],'File','final_opt_time_stop_zero_jerk.m');