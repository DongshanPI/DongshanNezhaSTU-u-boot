/*
 * drivers/video/sunxi/disp2/disp/de/lowlevel_v2x/de_csc_type.h
 *
 * Copyright (c) 2007-2019 Allwinnertech Co., Ltd.
 * Author: zhengxiaobin <zhengxiaobin@allwinnertech.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __DE_CSC_TYPE_H__
#define __DE_CSC_TYPE_H__

union CSC_BYPASS_REG {
	unsigned int dwval;
	struct {
		unsigned int enable:1;
		unsigned int res0:31;
	} bits;
};

union CSC_BYPASS_REG2 {
	unsigned int dwval;
	struct {
		unsigned int res0:1;
		unsigned int enable:1;
		unsigned int res1:30;
	} bits;
};

union CSC_COEFF_REG {
	unsigned int dwval;
	struct {
		unsigned int coeff:13;
		unsigned int res0:19;
	} bits;
};

union CSC_CONST_REG {
	unsigned int dwval;
	struct {
		unsigned int cnst:20;
		unsigned int res0:12;
	} bits;
};

union CSC_CONST_REG2 {
	unsigned int dwval;
	struct {
		unsigned int cnst:14;
		unsigned int res0:18;
	} bits;
};

union GLB_ALPHA_REG {
	unsigned int dwval;
	struct {
		unsigned int cnst:24;
		unsigned int alpha:8;
	} bits;
};

/* Channel CSC and Device CSC */
struct __csc_reg_t {
	union CSC_BYPASS_REG bypass;
	unsigned int res[3];
	union CSC_COEFF_REG c00;
	union CSC_COEFF_REG c01;
	union CSC_COEFF_REG c02;
	union CSC_CONST_REG c03;
	union CSC_COEFF_REG c10;
	union CSC_COEFF_REG c11;
	union CSC_COEFF_REG c12;
	union CSC_CONST_REG c13;
	union CSC_COEFF_REG c20;
	union CSC_COEFF_REG c21;
	union CSC_COEFF_REG c22;
	union CSC_CONST_REG c23;
	union GLB_ALPHA_REG alpha;
};

/* CSC IN SMBL */
struct __csc2_reg_t {
	union CSC_BYPASS_REG2 bypass;
	unsigned int res[31];
	union CSC_COEFF_REG c00;
	union CSC_COEFF_REG c01;
	union CSC_COEFF_REG c02;
	union CSC_CONST_REG2 c03;
	union CSC_COEFF_REG c10;
	union CSC_COEFF_REG c11;
	union CSC_COEFF_REG c12;
	union CSC_CONST_REG2 c13;
	union CSC_COEFF_REG c20;
	union CSC_COEFF_REG c21;
	union CSC_COEFF_REG c22;
	union CSC_CONST_REG2 c23;
};

/* Input CSC in FCE */
struct __icsc_reg_t {
	union CSC_BYPASS_REG bypass;
};
#endif
