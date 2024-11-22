//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.h
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

#ifndef MAIN_H
#define MAIN_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern int main(int argc, char **argv);

extern void main_a_opt();

extern void main_coef_list();

extern void main_final_opt_time_pass();

extern void main_final_opt_time_stop();

extern void main_final_opt_vel_pass();

extern void main_j_opt();

extern void main_pass_primitive();

extern void main_s_opt();

extern void main_stop_primitive();

extern void main_time_min_vel();

extern void main_total_cost();

extern void main_v_opt();

#endif
//
// File trailer for main.h
//
// [EOF]
//