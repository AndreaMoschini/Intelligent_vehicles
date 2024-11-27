%#codegen
%%
%          Agent Logic
%         Pass Primitive J0
%              2024
%
%
%%

function [coefsj0, vfj0, tfj0] = pass_primitive_j0( v0, a0, sf, vfmin, vfmax)

    tempp = final_opt_time_pass_zero_jerk(v0, a0, sf);
    T1 = tempp(1);
    v1 = final_opt_vel_pass_zero_jerk(v0, a0, sf, T1);

    if(vfmin < v1 && vfmax > v1)

        coefsj0 = coef_list(v0, a0, sf, v1, 0, T1);
        vfj0 = v1;
        tfj0 = T1;

    else

        temppp = final_opt_time_pass_zero_jerk(v0, a0, sf);
        T2 = temppp(2);
        v2 = final_opt_vel_pass_zero_jerk(v0, a0, sf, T2);

        if(vfmin < v2 && vfmax > v2)

            coefsj0 = coef_list(v0, a0, sf, v2, 0, T2);
            vfj0 = v2;
            tfj0 = T2;

        else

            coefsj0 = [0,0,0,0,0,0];
            vfj0 = 0;
            tfj0 = 0;
        end
    end

end