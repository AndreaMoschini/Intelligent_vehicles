//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: primitives.h
//
// MATLAB Coder version            : 24.2
// C/C++ source code generated on  : 27-Nov-2024 16:53:14
//

#ifndef PRIMITIVES_H
#define PRIMITIVES_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern double a_opt(double t, double v0, double a0, double sf, double vf,
                    double af, double T);

extern void coef_list(double v0, double a0, double sf, double vf, double af,
                      double T, double coef_list_var[6]);

extern double final_opt_pos_stop_zero_jerk(double v0, double a0, double T);

extern double final_opt_time_pass(double v0, double a0, double sf, double vf);

extern void
final_opt_time_pass_zero_jerk(double v0, double a0, double sf,
                              double final_opt_time_pass_zero_jerk_var[2]);

extern double final_opt_time_stop(double v0, double a0, double sf);

extern double final_opt_time_stop_zero_jerk(double v0, double a0);

extern double final_opt_vel_pass(double v0, double a0, double sf, double T);

extern double final_opt_vel_pass_zero_jerk(double v0, double a0, double sf,
                                           double T);

extern double j_opt(double t, double v0, double a0, double sf, double vf,
                    double af, double T);

extern void pass_primitive(double v0, double a0, double sf, double vfmin,
                           double vfmax, double Tmin, double Tmax,
                           double coeffsT2[6], double *v2, double *T2,
                           double coeffsT1[6], double *v1, double *T1);

extern void pass_primitive_j0(double v0, double a0, double sf, double vfmin,
                              double vfmax, double coefsj0[6], double *vfj0,
                              double *tfj0);

extern void primitives_initialize();

extern void primitives_terminate();

extern double s_opt(double t, double v0, double a0, double sf, double vf,
                    double af, double T);

extern void stop_primitive(double v0, double a0, double sf, double coefs[6],
                           double *maxsf, double *tf);

extern void stop_primitive_j0(double v0, double a0, double coefsj0[6],
                              double *sfj0, double *tfj0);

extern double time_min_vel(double a0, double sf);

extern double total_cost(double v0, double a0, double sf, double vf, double af,
                         double T);

extern double v_opt(double t, double v0, double a0, double sf, double vf,
                    double af, double T);

#endif
//
// File trailer for primitives.h
//
// [EOF]
//
