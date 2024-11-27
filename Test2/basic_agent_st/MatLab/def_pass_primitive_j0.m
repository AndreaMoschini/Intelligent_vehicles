%%
%           Agent Logic
%         Pass Primitive with zero jerk
%              2024
%
%
%% Pass primitive with zero jerk %%

%% Determine the optimal final velocity to pass %%
final_opt_vel_pass_zero_jerk_var = solve(subs(sol_opt.j, [t, af], [0,0]) == 0, vf);
final_opt_vel_pass_zero_jerk_fun = matlabFunction(final_opt_vel_pass_zero_jerk_var,'Vars',[v0,a0,sf,T],'File','final_opt_vel_pass_zero_jerk.m');

%% Determine the optimal time to reach to final velocity %%
sym z; % We create this variable for more stable solution of the equations

final_opt_time_pass_zero_jerk_var = 1./solve(subs(final_opt_time_pass(v0, a0, sf, final_opt_vel_pass_zero_jerk_var) == T, T, 1/z), z);
final_opt_time_pass_zero_jerk_fun = matlabFunction(final_opt_time_pass_zero_jerk_var,'Vars',[v0,a0,sf],'File','final_opt_time_pass_zero_jerk.m');

