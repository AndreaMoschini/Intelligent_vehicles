//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_primitives_api.h
//
// MATLAB Coder version            : 24.2
// C/C++ source code generated on  : 22-Nov-2024 12:57:44
//

#ifndef _CODER_PRIMITIVES_API_H
#define _CODER_PRIMITIVES_API_H

// Include Files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
real_T a_opt(real_T t, real_T v0, real_T a0, real_T sf, real_T vf, real_T af,
             real_T T);

void a_opt_api(const mxArray *const prhs[7], const mxArray **plhs);

void coef_list(real_T v0, real_T a0, real_T sf, real_T vf, real_T af, real_T T,
               real_T coef_list_var[6]);

void coef_list_api(const mxArray *const prhs[6], const mxArray **plhs);

real_T final_opt_time_pass(real_T v0, real_T a0, real_T sf, real_T vf);

void final_opt_time_pass_api(const mxArray *const prhs[4],
                             const mxArray **plhs);

real_T final_opt_time_stop(real_T v0, real_T a0, real_T sf);

void final_opt_time_stop_api(const mxArray *const prhs[3],
                             const mxArray **plhs);

real_T final_opt_vel_pass(real_T v0, real_T a0, real_T sf, real_T T);

void final_opt_vel_pass_api(const mxArray *const prhs[4], const mxArray **plhs);

real_T j_opt(real_T t, real_T v0, real_T a0, real_T sf, real_T vf, real_T af,
             real_T T);

void j_opt_api(const mxArray *const prhs[7], const mxArray **plhs);

void pass_primitive(real_T v0, real_T a0, real_T sf, real_T vfmin, real_T vfmax,
                    real_T Tmin, real_T Tmax, real_T coeffsT2[6], real_T *v2,
                    real_T *T2, real_T coeffsT1[6], real_T *v1, real_T *T1);

void pass_primitive_api(const mxArray *const prhs[7], int32_T nlhs,
                        const mxArray *plhs[6]);

void primitives_atexit();

void primitives_initialize();

void primitives_terminate();

void primitives_xil_shutdown();

void primitives_xil_terminate();

real_T s_opt(real_T t, real_T v0, real_T a0, real_T sf, real_T vf, real_T af,
             real_T T);

void s_opt_api(const mxArray *const prhs[7], const mxArray **plhs);

void stop_primitive(real_T v0, real_T a0, real_T sf, real_T coefs[6],
                    real_T *maxsf, real_T *tf);

void stop_primitive_api(const mxArray *const prhs[3], int32_T nlhs,
                        const mxArray *plhs[3]);

real_T time_min_vel(real_T a0, real_T sf);

void time_min_vel_api(const mxArray *const prhs[2], const mxArray **plhs);

real_T total_cost(real_T v0, real_T a0, real_T sf, real_T vf, real_T af,
                  real_T T);

void total_cost_api(const mxArray *const prhs[6], const mxArray **plhs);

real_T v_opt(real_T t, real_T v0, real_T a0, real_T sf, real_T vf, real_T af,
             real_T T);

void v_opt_api(const mxArray *const prhs[7], const mxArray **plhs);

#endif
//
// File trailer for _coder_primitives_api.h
//
// [EOF]
//
