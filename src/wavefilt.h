// SPDX-License-Identifier: BSD-3-Clause
/*
Copyright (c) 2014, Rafat Hussain
Copyright (c) 2016, Holger Nahrstaedt
*/
#ifndef WAVEFILT_H_
#define WAVEFILT_H_

#include <stdio.h>
#include "conv.h"
#define _USE_MATH_DEFINES
#include "math.h"

#ifdef __cplusplus
extern "C" {
#endif

/** To deal with non-standard GCC extensions */
#if !defined(M_SQRT2)
#define M_SQRT2        1.41421356237309504880  /* sqrt(2) */

#endif /* !defined(M_SQRT2) */

int filtlength(const char* name);

int filtcoef(const char* name, double *lp1, double *hp1, double *lp2, double *hp2);

void copy_reverse(const double *in, int N, double *out);
void qmf_even(const double *in, int N, double *out);
void qmf_wrev(const double *in, int N, double *out);
void copy(const double *in, int N, double *out);
#ifdef __cplusplus
}
#endif


#endif /* WAVEFILT_H_ */
