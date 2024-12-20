%#codegen
%%
%           Agent Logic
%         Stop Primitive J0
%              2024
%
%
%%

function [coefsj0,sfj0,tfj0] = stop_primitive_j0(v0,a0)


    if(v0 > 0 && a0 < 0)
        tfj0 = final_opt_time_stop_zero_jerk(v0, a0);
        sfj0 = final_opt_pos_stop_zero_jerk(v0, a0, tfj0);
        coefsj0 = coef_list(v0, a0, sfj0, 0, 0, tfj0);
    else
        tfj0 = 0;
        sfj0 = 0;
        coefsj0 = [0, 0, 0, 0, 0, 0];
    end
end