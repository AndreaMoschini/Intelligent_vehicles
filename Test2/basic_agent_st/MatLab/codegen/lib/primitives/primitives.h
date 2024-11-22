//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: primitives.h
//
// MATLAB Coder version            : 24.2
// C/C++ source code generated on  : 22-Nov-2024 12:57:44
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

extern double final_opt_time_pass(double v0, double a0, double sf, double vf);

extern double final_opt_time_stop(double v0, double a0, double sf);

extern double final_opt_vel_pass(double v0, double a0, double sf, double T);

extern double j_opt(double t, double v0, double a0, double sf, double vf,
                    double af, double T);

extern void pass_primitive(double v0, double a0, double sf, double vfmin,
                           double vfmax, double Tmin, double Tmax,
                           double coeffsT2[6], double *v2, double *T2,
                           double coeffsT1[6], double *v1, double *T1);

extern void primitives_initialize();

extern void primitives_terminate();

extern double s_opt(double t, double v0, double a0, double sf, double vf,
                    double af, double T);

extern void stop_primitive(double v0, double a0, double sf, double coefs[6],
                           double *maxsf, double *tf);

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
