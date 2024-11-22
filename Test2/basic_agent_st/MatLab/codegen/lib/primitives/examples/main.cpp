//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 24.2
// C/C++ source code generated on  : 22-Nov-2024 12:57:44
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include Files
#include "main.h"
#include "primitives.h"
#include "rt_nonfinite.h"

// Function Declarations
static double argInit_real_T();

// Function Definitions
//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : int argc
//                char **argv
// Return Type  : int
//
int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_a_opt();
  main_coef_list();
  main_final_opt_time_pass();
  main_final_opt_time_stop();
  main_final_opt_vel_pass();
  main_j_opt();
  main_pass_primitive();
  main_s_opt();
  main_stop_primitive();
  main_time_min_vel();
  main_total_cost();
  main_v_opt();
  // Terminate the application.
  // You do not need to do this more than one time.
  primitives_terminate();
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
void main_a_opt()
{
  double t_tmp;
  // Initialize function 'a_opt' input arguments.
  t_tmp = argInit_real_T();
  // Call the entry-point 'a_opt'.
  t_tmp = a_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_coef_list()
{
  double coef_list_var[6];
  double v0_tmp;
  // Initialize function 'coef_list' input arguments.
  v0_tmp = argInit_real_T();
  // Call the entry-point 'coef_list'.
  coef_list(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, coef_list_var);
}

//
// Arguments    : void
// Return Type  : void
//
void main_final_opt_time_pass()
{
  double v0_tmp;
  // Initialize function 'final_opt_time_pass' input arguments.
  v0_tmp = argInit_real_T();
  // Call the entry-point 'final_opt_time_pass'.
  v0_tmp = final_opt_time_pass(v0_tmp, v0_tmp, v0_tmp, v0_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_final_opt_time_stop()
{
  double v0_tmp;
  // Initialize function 'final_opt_time_stop' input arguments.
  v0_tmp = argInit_real_T();
  // Call the entry-point 'final_opt_time_stop'.
  v0_tmp = final_opt_time_stop(v0_tmp, v0_tmp, v0_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_final_opt_vel_pass()
{
  double v0_tmp;
  // Initialize function 'final_opt_vel_pass' input arguments.
  v0_tmp = argInit_real_T();
  // Call the entry-point 'final_opt_vel_pass'.
  v0_tmp = final_opt_vel_pass(v0_tmp, v0_tmp, v0_tmp, v0_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_j_opt()
{
  double t_tmp;
  // Initialize function 'j_opt' input arguments.
  t_tmp = argInit_real_T();
  // Call the entry-point 'j_opt'.
  t_tmp = j_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_pass_primitive()
{
  double coeffsT1[6];
  double coeffsT2[6];
  double T1;
  double T2;
  double v0_tmp;
  double v1;
  double v2;
  // Initialize function 'pass_primitive' input arguments.
  v0_tmp = argInit_real_T();
  // Call the entry-point 'pass_primitive'.
  pass_primitive(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp,
                 coeffsT2, &v2, &T2, coeffsT1, &v1, &T1);
}

//
// Arguments    : void
// Return Type  : void
//
void main_s_opt()
{
  double t_tmp;
  // Initialize function 's_opt' input arguments.
  t_tmp = argInit_real_T();
  // Call the entry-point 's_opt'.
  t_tmp = s_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_stop_primitive()
{
  double coefs[6];
  double maxsf;
  double tf;
  // Initialize function 'stop_primitive' input arguments.
  maxsf = argInit_real_T();
  // Call the entry-point 'stop_primitive'.
  stop_primitive(maxsf, maxsf, maxsf, coefs, &maxsf, &tf);
}

//
// Arguments    : void
// Return Type  : void
//
void main_time_min_vel()
{
  double a0_tmp;
  // Initialize function 'time_min_vel' input arguments.
  a0_tmp = argInit_real_T();
  // Call the entry-point 'time_min_vel'.
  a0_tmp = time_min_vel(a0_tmp, a0_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_total_cost()
{
  double v0_tmp;
  // Initialize function 'total_cost' input arguments.
  v0_tmp = argInit_real_T();
  // Call the entry-point 'total_cost'.
  v0_tmp = total_cost(v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp, v0_tmp);
}

//
// Arguments    : void
// Return Type  : void
//
void main_v_opt()
{
  double t_tmp;
  // Initialize function 'v_opt' input arguments.
  t_tmp = argInit_real_T();
  // Call the entry-point 'v_opt'.
  t_tmp = v_opt(t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp, t_tmp);
}

//
// File trailer for main.cpp
//
// [EOF]
//
