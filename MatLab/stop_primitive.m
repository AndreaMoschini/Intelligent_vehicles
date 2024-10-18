%#codegen
%%
%          Agent Logic
%         Stop Primitive
%              2024
%
%
%%

function [coefs,maxsf,tf] = stop_primitive(v0,a0,sf)
    if(v0 <= 0 || sf == 0)
        coefs = coef_list(0, 0, 0, 0, 0, 0);
    end
    if((4* v0^2 + 5*a0*sf) < 0)
        maxsf = -(4* v0^2)/5*a0*sf;
        tf = (10*maxsf)/2*v0;
    else
        maxsf = sf;
        tf = final_opt_time_stop(v0, a0, maxsf);
    end
    coefs = coef_list(v0, a0, maxsf, 0, 0, tf);
end