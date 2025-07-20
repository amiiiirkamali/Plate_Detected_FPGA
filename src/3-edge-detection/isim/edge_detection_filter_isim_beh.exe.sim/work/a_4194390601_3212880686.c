/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function max ended without a return statement";
static const char *ng1 = "Function min ended without a return statement";
static const char *ng2 = "Function abs_val ended without a return statement";
extern char *STD_STANDARD;
static const char *ng4 = "Function clamp ended without a return statement";
static const char *ng5 = "Function non_max_suppression_enhanced ended without a return statement";
static const char *ng6 = "Function double_threshold_enhanced ended without a return statement";
static const char *ng7 = "Function edge_tracking_enhanced ended without a return statement";
static const char *ng8 = "E:/project/Ise/Licens_Plate_Recognition/edge-detection-3/edge_detection.vhd";
extern char *STD_TEXTIO;



int work_a_4194390601_3212880686_sub_3202332950_3057020925(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 > t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int work_a_4194390601_3212880686_sub_3202609556_3057020925(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 < t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int work_a_4194390601_3212880686_sub_2481671141_3057020925(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;
    int t7;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 < 0);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = t2;

LAB1:    return t0;
LAB2:    t7 = (-(t2));
    t0 = t7;
    goto LAB1;

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int work_a_4194390601_3212880686_sub_4033714418_3057020925(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    unsigned char t24;
    char *t25;
    int t26;
    char *t27;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = 0;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = 1;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;

LAB2:    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t11 + 56U);
    t21 = *((char **)t18);
    t22 = *((int *)t21);
    t23 = (t20 * t22);
    t24 = (t23 <= t2);
    if (t24 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t0 = t20;

LAB1:    return t0;
LAB3:    t18 = (t11 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t18 = (t5 + 56U);
    t27 = *((char **)t18);
    t18 = (t27 + 0);
    *((int *)t18) = t26;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t22 = (t20 + 1);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB2;

LAB4:;
LAB6:;
}

int work_a_4194390601_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t10 = (t2 < t3);
    if (t10 != 0)
        goto LAB2;

LAB4:    t10 = (t2 > t4);
    if (t10 != 0)
        goto LAB6;

LAB7:    t0 = t2;

LAB1:    return t0;
LAB2:    t0 = t3;
    goto LAB1;

LAB3:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = t4;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

int work_a_4194390601_3212880686_sub_2154771485_3579431146(char *t1, int t2, int t3)
{
    char t4[608];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    unsigned char t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    int t67;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 364U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t4 + 484U);
    t31 = ((STD_STANDARD) + 384);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t5 + 4U);
    *((int *)t36) = t2;
    t37 = (t5 + 8U);
    *((int *)t37) = t3;
    t38 = 0;
    t39 = 2;

LAB2:    if (t38 <= t39)
        goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t38 = *((int *)t8);
    t39 = work_a_4194390601_3212880686_sub_2489298628_3057020925(t1, t38, 0, 255);
    t0 = t39;

LAB1:    return t0;
LAB3:    t40 = 0;
    t41 = 2;

LAB6:    if (t40 <= t41)
        goto LAB7;

LAB9:
LAB4:    if (t38 == t39)
        goto LAB5;

LAB23:    t40 = (t38 + 1);
    t38 = t40;
    goto LAB2;

LAB7:    t42 = (t2 + t40);
    t43 = (t42 - 1);
    t44 = (t24 + 56U);
    t45 = *((char **)t44);
    t44 = (t45 + 0);
    *((int *)t44) = t43;
    t42 = (t3 + t38);
    t43 = (t42 - 1);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t43;
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB10;

LAB12:
LAB11:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB13;

LAB15:
LAB14:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB19;

LAB21:
LAB20:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t7 = (t1 + 2128U);
    t10 = *((char **)t7);
    t7 = (t30 + 56U);
    t11 = *((char **)t7);
    t43 = *((int *)t11);
    t47 = (t43 - 0);
    t48 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t43);
    t49 = (t48 * 640U);
    t7 = (t24 + 56U);
    t13 = *((char **)t7);
    t50 = *((int *)t13);
    t51 = (t50 - 0);
    t52 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t50);
    t53 = (t49 + t52);
    t54 = (4U * t53);
    t55 = (0 + t54);
    t7 = (t10 + t55);
    t56 = *((int *)t7);
    t14 = (t1 + 3688U);
    t16 = *((char **)t14);
    t57 = (t38 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t38);
    t59 = (t58 * 3U);
    t60 = (t40 - 0);
    t61 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t40);
    t62 = (t59 + t61);
    t63 = (4U * t62);
    t64 = (0 + t63);
    t14 = (t16 + t64);
    t65 = *((int *)t14);
    t66 = (t56 * t65);
    t67 = (t42 + t66);
    t17 = (t6 + 56U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    *((int *)t17) = t67;

LAB8:    if (t40 == t41)
        goto LAB9;

LAB22:    t42 = (t40 + 1);
    t40 = t42;
    goto LAB6;

LAB10:    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB11;

LAB13:    t43 = (640 - 1);
    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB14;

LAB16:    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB17;

LAB19:    t43 = (640 - 1);
    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB20;

LAB24:;
}

int work_a_4194390601_3212880686_sub_991140282_3579431146(char *t1, int t2, int t3)
{
    char t4[608];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    unsigned char t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    int t67;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 364U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t4 + 484U);
    t31 = ((STD_STANDARD) + 384);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t5 + 4U);
    *((int *)t36) = t2;
    t37 = (t5 + 8U);
    *((int *)t37) = t3;
    t38 = 0;
    t39 = 2;

LAB2:    if (t38 <= t39)
        goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t38 = *((int *)t8);
    t7 = (t1 + 3328U);
    t10 = *((char **)t7);
    t39 = *((int *)t10);
    t40 = (t38 / t39);
    t0 = t40;

LAB1:    return t0;
LAB3:    t40 = 0;
    t41 = 2;

LAB6:    if (t40 <= t41)
        goto LAB7;

LAB9:
LAB4:    if (t38 == t39)
        goto LAB5;

LAB23:    t40 = (t38 + 1);
    t38 = t40;
    goto LAB2;

LAB7:    t42 = (t2 + t40);
    t43 = (t42 - 1);
    t44 = (t24 + 56U);
    t45 = *((char **)t44);
    t44 = (t45 + 0);
    *((int *)t44) = t43;
    t42 = (t3 + t38);
    t43 = (t42 - 1);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t43;
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB10;

LAB12:
LAB11:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB13;

LAB15:
LAB14:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB19;

LAB21:
LAB20:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t7 = (t1 + 2248U);
    t10 = *((char **)t7);
    t7 = (t30 + 56U);
    t11 = *((char **)t7);
    t43 = *((int *)t11);
    t47 = (t43 - 0);
    t48 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t43);
    t49 = (t48 * 640U);
    t7 = (t24 + 56U);
    t13 = *((char **)t7);
    t50 = *((int *)t13);
    t51 = (t50 - 0);
    t52 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t50);
    t53 = (t49 + t52);
    t54 = (4U * t53);
    t55 = (0 + t54);
    t7 = (t10 + t55);
    t56 = *((int *)t7);
    t14 = (t1 + 3208U);
    t16 = *((char **)t14);
    t57 = (t38 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t38);
    t59 = (t58 * 3U);
    t60 = (t40 - 0);
    t61 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t40);
    t62 = (t59 + t61);
    t63 = (4U * t62);
    t64 = (0 + t63);
    t14 = (t16 + t64);
    t65 = *((int *)t14);
    t66 = (t56 * t65);
    t67 = (t42 + t66);
    t17 = (t6 + 56U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    *((int *)t17) = t67;

LAB8:    if (t40 == t41)
        goto LAB9;

LAB22:    t42 = (t40 + 1);
    t40 = t42;
    goto LAB6;

LAB10:    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB11;

LAB13:    t43 = (640 - 1);
    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB14;

LAB16:    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB17;

LAB19:    t43 = (640 - 1);
    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB20;

LAB24:;
}

int work_a_4194390601_3212880686_sub_3930756559_3579431146(char *t1, int t2, int t3)
{
    char t4[608];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    unsigned char t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    int t67;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 364U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t4 + 484U);
    t31 = ((STD_STANDARD) + 384);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t5 + 4U);
    *((int *)t36) = t2;
    t37 = (t5 + 8U);
    *((int *)t37) = t3;
    t38 = 0;
    t39 = 2;

LAB2:    if (t38 <= t39)
        goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t38 = *((int *)t8);
    t7 = (t1 + 1768U);
    t10 = *((char **)t7);
    t39 = *((int *)t10);
    t40 = (t38 * t39);
    t0 = t40;

LAB1:    return t0;
LAB3:    t40 = 0;
    t41 = 2;

LAB6:    if (t40 <= t41)
        goto LAB7;

LAB9:
LAB4:    if (t38 == t39)
        goto LAB5;

LAB23:    t40 = (t38 + 1);
    t38 = t40;
    goto LAB2;

LAB7:    t42 = (t2 + t40);
    t43 = (t42 - 1);
    t44 = (t24 + 56U);
    t45 = *((char **)t44);
    t44 = (t45 + 0);
    *((int *)t44) = t43;
    t42 = (t3 + t38);
    t43 = (t42 - 1);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t43;
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB10;

LAB12:
LAB11:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB13;

LAB15:
LAB14:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB19;

LAB21:
LAB20:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t7 = (t1 + 2368U);
    t10 = *((char **)t7);
    t7 = (t30 + 56U);
    t11 = *((char **)t7);
    t43 = *((int *)t11);
    t47 = (t43 - 0);
    t48 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t43);
    t49 = (t48 * 640U);
    t7 = (t24 + 56U);
    t13 = *((char **)t7);
    t50 = *((int *)t13);
    t51 = (t50 - 0);
    t52 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t50);
    t53 = (t49 + t52);
    t54 = (4U * t53);
    t55 = (0 + t54);
    t7 = (t10 + t55);
    t56 = *((int *)t7);
    t14 = (t1 + 3448U);
    t16 = *((char **)t14);
    t57 = (t38 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t38);
    t59 = (t58 * 3U);
    t60 = (t40 - 0);
    t61 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t40);
    t62 = (t59 + t61);
    t63 = (4U * t62);
    t64 = (0 + t63);
    t14 = (t16 + t64);
    t65 = *((int *)t14);
    t66 = (t56 * t65);
    t67 = (t42 + t66);
    t17 = (t6 + 56U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    *((int *)t17) = t67;

LAB8:    if (t40 == t41)
        goto LAB9;

LAB22:    t42 = (t40 + 1);
    t40 = t42;
    goto LAB6;

LAB10:    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB11;

LAB13:    t43 = (640 - 1);
    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB14;

LAB16:    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB17;

LAB19:    t43 = (640 - 1);
    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB20;

LAB24:;
}

int work_a_4194390601_3212880686_sub_457044784_3579431146(char *t1, int t2, int t3)
{
    char t4[608];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    unsigned char t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    int t67;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 364U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t4 + 484U);
    t31 = ((STD_STANDARD) + 384);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t5 + 4U);
    *((int *)t36) = t2;
    t37 = (t5 + 8U);
    *((int *)t37) = t3;
    t38 = 0;
    t39 = 2;

LAB2:    if (t38 <= t39)
        goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t38 = *((int *)t8);
    t7 = (t1 + 1768U);
    t10 = *((char **)t7);
    t39 = *((int *)t10);
    t40 = (t38 * t39);
    t0 = t40;

LAB1:    return t0;
LAB3:    t40 = 0;
    t41 = 2;

LAB6:    if (t40 <= t41)
        goto LAB7;

LAB9:
LAB4:    if (t38 == t39)
        goto LAB5;

LAB23:    t40 = (t38 + 1);
    t38 = t40;
    goto LAB2;

LAB7:    t42 = (t2 + t40);
    t43 = (t42 - 1);
    t44 = (t24 + 56U);
    t45 = *((char **)t44);
    t44 = (t45 + 0);
    *((int *)t44) = t43;
    t42 = (t3 + t38);
    t43 = (t42 - 1);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t43;
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB10;

LAB12:
LAB11:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB13;

LAB15:
LAB14:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 < 0);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t46 = (t42 >= 640);
    if (t46 != 0)
        goto LAB19;

LAB21:
LAB20:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t42 = *((int *)t8);
    t7 = (t1 + 2368U);
    t10 = *((char **)t7);
    t7 = (t30 + 56U);
    t11 = *((char **)t7);
    t43 = *((int *)t11);
    t47 = (t43 - 0);
    t48 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t43);
    t49 = (t48 * 640U);
    t7 = (t24 + 56U);
    t13 = *((char **)t7);
    t50 = *((int *)t13);
    t51 = (t50 - 0);
    t52 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t50);
    t53 = (t49 + t52);
    t54 = (4U * t53);
    t55 = (0 + t54);
    t7 = (t10 + t55);
    t56 = *((int *)t7);
    t14 = (t1 + 3568U);
    t16 = *((char **)t14);
    t57 = (t38 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t38);
    t59 = (t58 * 3U);
    t60 = (t40 - 0);
    t61 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, t40);
    t62 = (t59 + t61);
    t63 = (4U * t62);
    t64 = (0 + t63);
    t14 = (t16 + t64);
    t65 = *((int *)t14);
    t66 = (t56 * t65);
    t67 = (t42 + t66);
    t17 = (t6 + 56U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    *((int *)t17) = t67;

LAB8:    if (t40 == t41)
        goto LAB9;

LAB22:    t42 = (t40 + 1);
    t40 = t42;
    goto LAB6;

LAB10:    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB11;

LAB13:    t43 = (640 - 1);
    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB14;

LAB16:    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 0;
    goto LAB17;

LAB19:    t43 = (640 - 1);
    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t43;
    goto LAB20;

LAB24:;
}

int work_a_4194390601_3212880686_sub_2630324757_3579431146(char *t1, int t2, int t3)
{
    char t4[968];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    char t39[8];
    char t45[8];
    char t51[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    char *t67;
    char *t68;
    unsigned char t69;
    unsigned char t70;
    unsigned char t71;
    unsigned char t72;
    unsigned char t73;
    unsigned char t74;
    int t75;
    unsigned char t76;
    int t77;
    int t78;
    int t79;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 364U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t4 + 484U);
    t31 = ((STD_STANDARD) + 384);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t4 + 604U);
    t37 = ((STD_STANDARD) + 384);
    t38 = (t36 + 88U);
    *((char **)t38) = t37;
    t40 = (t36 + 56U);
    *((char **)t40) = t39;
    xsi_type_set_default_value(t37, t39, 0);
    t41 = (t36 + 80U);
    *((unsigned int *)t41) = 4U;
    t42 = (t4 + 724U);
    t43 = ((STD_STANDARD) + 384);
    t44 = (t42 + 88U);
    *((char **)t44) = t43;
    t46 = (t42 + 56U);
    *((char **)t46) = t45;
    xsi_type_set_default_value(t43, t45, 0);
    t47 = (t42 + 80U);
    *((unsigned int *)t47) = 4U;
    t48 = (t4 + 844U);
    t49 = ((STD_STANDARD) + 384);
    t50 = (t48 + 88U);
    *((char **)t50) = t49;
    t52 = (t48 + 56U);
    *((char **)t52) = t51;
    xsi_type_set_default_value(t49, t51, 0);
    t53 = (t48 + 80U);
    *((unsigned int *)t53) = 4U;
    t54 = (t5 + 4U);
    *((int *)t54) = t2;
    t55 = (t5 + 8U);
    *((int *)t55) = t3;
    t56 = (t1 + 2488U);
    t57 = *((char **)t56);
    t58 = (t3 - 0);
    t59 = (t58 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t60 = (t59 * 640U);
    t61 = (t2 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t56 = (t57 + t65);
    t66 = *((int *)t56);
    t67 = (t6 + 56U);
    t68 = *((char **)t67);
    t67 = (t68 + 0);
    *((int *)t67) = t66;
    t7 = (t1 + 2608U);
    t8 = *((char **)t7);
    t58 = (t3 - 0);
    t59 = (t58 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t60 = (t59 * 640U);
    t61 = (t2 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t66 = *((int *)t7);
    t10 = (t12 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t66;
    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t58 = (t3 - 0);
    t59 = (t58 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t60 = (t59 * 640U);
    t61 = (t2 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t66 = *((int *)t7);
    t10 = (t18 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t66;
    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t69 = (t58 == 0);
    if (t69 != 0)
        goto LAB2;

LAB4:
LAB3:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t61 = work_a_4194390601_3212880686_sub_2481671141_3057020925(t1, t58);
    t7 = (t42 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t61;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t61 = work_a_4194390601_3212880686_sub_2481671141_3057020925(t1, t58);
    t7 = (t48 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t61;
    t7 = (t42 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t7 = (t48 + 56U);
    t10 = *((char **)t7);
    t61 = *((int *)t10);
    t66 = (t61 * 2);
    t69 = (t58 > t66);
    if (t69 != 0)
        goto LAB6;

LAB8:    t7 = (t48 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t7 = (t42 + 56U);
    t10 = *((char **)t7);
    t61 = *((int *)t10);
    t66 = (t61 * 2);
    t69 = (t58 > t66);
    if (t69 != 0)
        goto LAB9;

LAB10:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t71 = (t58 > 0);
    if (t71 == 1)
        goto LAB16;

LAB17:    t70 = (unsigned char)0;

LAB18:    if (t70 == 1)
        goto LAB13;

LAB14:    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t66 = *((int *)t11);
    t74 = (t66 < 0);
    if (t74 == 1)
        goto LAB19;

LAB20:    t73 = (unsigned char)0;

LAB21:    t69 = t73;

LAB15:    if (t69 != 0)
        goto LAB11;

LAB12:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 135;

LAB7:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    if (t58 == 0)
        goto LAB23;

LAB28:    if (t58 == 45)
        goto LAB24;

LAB29:    if (t58 == 90)
        goto LAB25;

LAB30:    if (t58 == 135)
        goto LAB26;

LAB31:
LAB27:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t0 = t58;

LAB1:    return t0;
LAB2:    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = 0;
    goto LAB7;

LAB9:    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = 90;
    goto LAB7;

LAB11:    t7 = (t24 + 56U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = 45;
    goto LAB7;

LAB13:    t69 = (unsigned char)1;
    goto LAB15;

LAB16:    t7 = (t12 + 56U);
    t10 = *((char **)t7);
    t61 = *((int *)t10);
    t72 = (t61 > 0);
    t70 = t72;
    goto LAB18;

LAB19:    t7 = (t12 + 56U);
    t13 = *((char **)t7);
    t75 = *((int *)t13);
    t76 = (t75 < 0);
    t73 = t76;
    goto LAB21;

LAB22:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t61 = *((int *)t10);
    t70 = (t58 >= t61);
    if (t70 == 1)
        goto LAB77;

LAB78:    t69 = (unsigned char)0;

LAB79:    if (t69 != 0)
        goto LAB74;

LAB76:    t0 = 0;
    goto LAB1;

LAB23:    t70 = (t2 > 0);
    if (t70 == 1)
        goto LAB36;

LAB37:    t69 = (unsigned char)0;

LAB38:    if (t69 != 0)
        goto LAB33;

LAB35:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t0 = t58;
    goto LAB1;

LAB24:    t72 = (t2 > 0);
    if (t72 == 1)
        goto LAB49;

LAB50:    t71 = (unsigned char)0;

LAB51:    if (t71 == 1)
        goto LAB46;

LAB47:    t70 = (unsigned char)0;

LAB48:    if (t70 == 1)
        goto LAB43;

LAB44:    t69 = (unsigned char)0;

LAB45:    if (t69 != 0)
        goto LAB40;

LAB42:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t0 = t58;
    goto LAB1;

LAB25:    t70 = (t3 > 0);
    if (t70 == 1)
        goto LAB56;

LAB57:    t69 = (unsigned char)0;

LAB58:    if (t69 != 0)
        goto LAB53;

LAB55:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t0 = t58;
    goto LAB1;

LAB26:    t72 = (t2 > 0);
    if (t72 == 1)
        goto LAB69;

LAB70:    t71 = (unsigned char)0;

LAB71:    if (t71 == 1)
        goto LAB66;

LAB67:    t70 = (unsigned char)0;

LAB68:    if (t70 == 1)
        goto LAB63;

LAB64:    t69 = (unsigned char)0;

LAB65:    if (t69 != 0)
        goto LAB60;

LAB62:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t58 = *((int *)t8);
    t0 = t58;
    goto LAB1;

LAB32:;
LAB33:    t7 = (t1 + 2728U);
    t10 = *((char **)t7);
    t66 = (t3 - 0);
    t59 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t60 = (t59 * 640U);
    t75 = (t2 - 1);
    t77 = (t75 - 0);
    t62 = (t77 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t75);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t10 + t65);
    t78 = *((int *)t7);
    t11 = (t30 + 56U);
    t13 = *((char **)t11);
    t11 = (t13 + 0);
    *((int *)t11) = t78;
    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t58 = (t3 - 0);
    t59 = (t58 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t60 = (t59 * 640U);
    t61 = (t2 + 1);
    t66 = (t61 - 0);
    t62 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t61);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t75 = *((int *)t7);
    t10 = (t36 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t75;

LAB34:    goto LAB22;

LAB36:    t61 = (640 - 1);
    t71 = (t2 < t61);
    t69 = t71;
    goto LAB38;

LAB39:    goto LAB34;

LAB40:    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t66 = (t3 - 1);
    t75 = (t66 - 0);
    t59 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t66);
    t60 = (t59 * 640U);
    t77 = (t2 + 1);
    t78 = (t77 - 0);
    t62 = (t78 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t77);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t79 = *((int *)t7);
    t10 = (t30 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t79;
    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t58 = (t3 + 1);
    t61 = (t58 - 0);
    t59 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t58);
    t60 = (t59 * 640U);
    t66 = (t2 - 1);
    t75 = (t66 - 0);
    t62 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t66);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t77 = *((int *)t7);
    t10 = (t36 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t77;

LAB41:    goto LAB22;

LAB43:    t61 = (640 - 1);
    t76 = (t3 < t61);
    t69 = t76;
    goto LAB45;

LAB46:    t74 = (t3 > 0);
    t70 = t74;
    goto LAB48;

LAB49:    t58 = (640 - 1);
    t73 = (t2 < t58);
    t71 = t73;
    goto LAB51;

LAB52:    goto LAB41;

LAB53:    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t61 = (t3 - 1);
    t66 = (t61 - 0);
    t59 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t61);
    t60 = (t59 * 640U);
    t75 = (t2 - 0);
    t62 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t77 = *((int *)t7);
    t10 = (t30 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t77;
    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t58 = (t3 + 1);
    t61 = (t58 - 0);
    t59 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t58);
    t60 = (t59 * 640U);
    t66 = (t2 - 0);
    t62 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t75 = *((int *)t7);
    t10 = (t36 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t75;

LAB54:    goto LAB22;

LAB56:    t58 = (640 - 1);
    t71 = (t3 < t58);
    t69 = t71;
    goto LAB58;

LAB59:    goto LAB54;

LAB60:    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t66 = (t3 - 1);
    t75 = (t66 - 0);
    t59 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t66);
    t60 = (t59 * 640U);
    t77 = (t2 - 1);
    t78 = (t77 - 0);
    t62 = (t78 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t77);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t79 = *((int *)t7);
    t10 = (t30 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t79;
    t7 = (t1 + 2728U);
    t8 = *((char **)t7);
    t58 = (t3 + 1);
    t61 = (t58 - 0);
    t59 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t58);
    t60 = (t59 * 640U);
    t66 = (t2 + 1);
    t75 = (t66 - 0);
    t62 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t66);
    t63 = (t60 + t62);
    t64 = (4U * t63);
    t65 = (0 + t64);
    t7 = (t8 + t65);
    t77 = *((int *)t7);
    t10 = (t36 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t77;

LAB61:    goto LAB22;

LAB63:    t61 = (640 - 1);
    t76 = (t3 < t61);
    t69 = t76;
    goto LAB65;

LAB66:    t74 = (t3 > 0);
    t70 = t74;
    goto LAB68;

LAB69:    t58 = (640 - 1);
    t73 = (t2 < t58);
    t71 = t73;
    goto LAB71;

LAB72:    goto LAB61;

LAB73:    goto LAB22;

LAB74:    t7 = (t18 + 56U);
    t14 = *((char **)t7);
    t77 = *((int *)t14);
    t0 = t77;
    goto LAB1;

LAB75:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB77:    t7 = (t18 + 56U);
    t11 = *((char **)t7);
    t66 = *((int *)t11);
    t7 = (t36 + 56U);
    t13 = *((char **)t7);
    t75 = *((int *)t13);
    t71 = (t66 >= t75);
    t69 = t71;
    goto LAB79;

LAB80:    goto LAB75;

LAB81:    goto LAB75;

}

int work_a_4194390601_3212880686_sub_1840617423_3579431146(char *t1, int t2, int t3)
{
    char t4[128];
    char t5[16];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    char *t25;
    char *t26;
    unsigned char t27;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t1 + 2968U);
    t15 = *((char **)t14);
    t16 = (t3 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t18 = (t17 * 640U);
    t19 = (t2 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t21 = (t18 + t20);
    t22 = (4U * t21);
    t23 = (0 + t22);
    t14 = (t15 + t23);
    t24 = *((int *)t14);
    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    *((int *)t25) = t24;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t16 = *((int *)t8);
    t7 = (t1 + 1648U);
    t10 = *((char **)t7);
    t19 = *((int *)t10);
    t27 = (t16 >= t19);
    if (t27 != 0)
        goto LAB2;

LAB4:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t16 = *((int *)t8);
    t7 = (t1 + 1528U);
    t10 = *((char **)t7);
    t19 = *((int *)t10);
    t27 = (t16 >= t19);
    if (t27 != 0)
        goto LAB6;

LAB7:    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 255;
    goto LAB1;

LAB3:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = 128;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

int work_a_4194390601_3212880686_sub_89791653_3579431146(char *t1, int t2, int t3)
{
    char t4[848];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    char t39[8];
    char t45[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    char *t61;
    char *t62;
    unsigned char t63;
    int t64;
    int t65;
    int t66;
    unsigned char t67;
    unsigned char t68;
    unsigned char t69;
    unsigned char t70;
    int t71;
    unsigned char t72;
    int t73;
    unsigned char t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 364U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t4 + 484U);
    t31 = ((STD_STANDARD) + 384);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t4 + 604U);
    t37 = ((STD_STANDARD) + 384);
    t38 = (t36 + 88U);
    *((char **)t38) = t37;
    t40 = (t36 + 56U);
    *((char **)t40) = t39;
    xsi_type_set_default_value(t37, t39, 0);
    t41 = (t36 + 80U);
    *((unsigned int *)t41) = 4U;
    t42 = (t4 + 724U);
    t43 = ((STD_STANDARD) + 384);
    t44 = (t42 + 88U);
    *((char **)t44) = t43;
    t46 = (t42 + 56U);
    *((char **)t46) = t45;
    *((int *)t45) = 0;
    t47 = (t42 + 80U);
    *((unsigned int *)t47) = 4U;
    t48 = (t5 + 4U);
    *((int *)t48) = t2;
    t49 = (t5 + 8U);
    *((int *)t49) = t3;
    t50 = (t1 + 3088U);
    t51 = *((char **)t50);
    t52 = (t3 - 0);
    t53 = (t52 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t54 = (t53 * 640U);
    t55 = (t2 - 0);
    t56 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t57 = (t54 + t56);
    t58 = (4U * t57);
    t59 = (0 + t58);
    t50 = (t51 + t59);
    t60 = *((int *)t50);
    t61 = (t6 + 56U);
    t62 = *((char **)t61);
    t61 = (t62 + 0);
    *((int *)t61) = t60;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t52 = *((int *)t8);
    t63 = (t52 == 255);
    if (t63 != 0)
        goto LAB2;

LAB4:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t52 = *((int *)t8);
    t63 = (t52 == 0);
    if (t63 != 0)
        goto LAB6;

LAB7:    t52 = (-(1));
    t55 = t52;
    t60 = 1;

LAB9:    if (t55 <= t60)
        goto LAB10;

LAB12:    t7 = (t42 + 56U);
    t8 = *((char **)t7);
    t52 = *((int *)t8);
    t63 = (t52 > 0);
    if (t63 != 0)
        goto LAB41;

LAB43:    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 255;
    goto LAB1;

LAB3:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = 0;
    goto LAB1;

LAB8:    goto LAB3;

LAB10:    t64 = (-(1));
    t65 = t64;
    t66 = 1;

LAB13:    if (t65 <= t66)
        goto LAB14;

LAB16:
LAB11:    if (t55 == t60)
        goto LAB12;

LAB40:    t52 = (t55 + 1);
    t55 = t52;
    goto LAB9;

LAB14:    t67 = (t65 == 0);
    if (t67 == 1)
        goto LAB20;

LAB21:    t63 = (unsigned char)0;

LAB22:    if (t63 != 0)
        goto LAB17;

LAB19:
LAB18:    t52 = (t2 + t65);
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t52;
    t52 = (t3 + t55);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t52;
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t52 = *((int *)t8);
    t69 = (t52 >= 0);
    if (t69 == 1)
        goto LAB33;

LAB34:    t68 = (unsigned char)0;

LAB35:    if (t68 == 1)
        goto LAB30;

LAB31:    t67 = (unsigned char)0;

LAB32:    if (t67 == 1)
        goto LAB27;

LAB28:    t63 = (unsigned char)0;

LAB29:    if (t63 != 0)
        goto LAB24;

LAB26:
LAB25:
LAB15:    if (t65 == t66)
        goto LAB16;

LAB39:    t52 = (t65 + 1);
    t65 = t52;
    goto LAB13;

LAB17:    goto LAB15;

LAB20:    t68 = (t55 == 0);
    t63 = t68;
    goto LAB22;

LAB23:    goto LAB18;

LAB24:    t7 = (t1 + 3088U);
    t14 = *((char **)t7);
    t7 = (t30 + 56U);
    t16 = *((char **)t7);
    t75 = *((int *)t16);
    t76 = (t75 - 0);
    t53 = (t76 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t75);
    t54 = (t53 * 640U);
    t7 = (t24 + 56U);
    t17 = *((char **)t7);
    t77 = *((int *)t17);
    t78 = (t77 - 0);
    t56 = (t78 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t77);
    t57 = (t54 + t56);
    t58 = (4U * t57);
    t59 = (0 + t58);
    t7 = (t14 + t59);
    t79 = *((int *)t7);
    t19 = (t36 + 56U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = t79;
    t7 = (t36 + 56U);
    t8 = *((char **)t7);
    t52 = *((int *)t8);
    t63 = (t52 == 255);
    if (t63 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB25;

LAB27:    t7 = (t30 + 56U);
    t13 = *((char **)t7);
    t73 = *((int *)t13);
    t74 = (t73 < 640);
    t63 = t74;
    goto LAB29;

LAB30:    t7 = (t30 + 56U);
    t11 = *((char **)t7);
    t71 = *((int *)t11);
    t72 = (t71 >= 0);
    t67 = t72;
    goto LAB32;

LAB33:    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t64 = *((int *)t10);
    t70 = (t64 < 640);
    t68 = t70;
    goto LAB35;

LAB36:    t7 = (t42 + 56U);
    t10 = *((char **)t7);
    t64 = *((int *)t10);
    t71 = (t64 + 1);
    t7 = (t42 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t71;
    goto LAB37;

LAB41:    t0 = 255;
    goto LAB1;

LAB42:    goto LAB3;

LAB44:    goto LAB42;

LAB45:    goto LAB42;

}

static void work_a_4194390601_3212880686_p_0(char *t0)
{
    char t86[16];
    char t87[16];
    char t88[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    int t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    int t68;
    int t69;
    int t70;
    int t71;
    char *t72;
    char *t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;

LAB0:    t1 = (t0 + 5312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(342, ng8);
    t2 = (t0 + 14757428);
    xsi_report(t2, 22U, 0);
    xsi_set_current_line(343, ng8);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4016U);
    t4 = (t0 + 14757450);
    t6 = (t0 + 11232U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(344, ng8);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(348, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757516);
    *((int *)t2) = 0;
    t3 = (t0 + 14757520);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB7:    if (t10 <= t11)
        goto LAB8;

LAB10:    xsi_set_current_line(359, ng8);
    t2 = (t0 + 4016U);
    std_textio_file_close(t2);
    xsi_set_current_line(362, ng8);
    t2 = (t0 + 14757532);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(363, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757560);
    *((int *)t2) = 0;
    t3 = (t0 + 14757564);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB20:    if (t10 <= t11)
        goto LAB21;

LAB23:    xsi_set_current_line(370, ng8);
    t2 = (t0 + 14757576);
    xsi_report(t2, 35U, 0);
    xsi_set_current_line(371, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757611);
    *((int *)t2) = 0;
    t3 = (t0 + 14757615);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB30:    if (t10 <= t11)
        goto LAB31;

LAB33:    xsi_set_current_line(378, ng8);
    t2 = (t0 + 14757627);
    xsi_report(t2, 33U, 0);
    xsi_set_current_line(379, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757660);
    *((int *)t2) = 0;
    t3 = (t0 + 14757664);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB40:    if (t10 <= t11)
        goto LAB41;

LAB43:    xsi_set_current_line(394, ng8);
    t2 = (t0 + 14757676);
    xsi_report(t2, 44U, 0);
    xsi_set_current_line(395, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757720);
    *((int *)t2) = 0;
    t3 = (t0 + 14757724);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB50:    if (t10 <= t11)
        goto LAB51;

LAB53:    xsi_set_current_line(402, ng8);
    t2 = (t0 + 14757736);
    xsi_report(t2, 37U, 0);
    xsi_set_current_line(403, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757773);
    *((int *)t2) = 0;
    t3 = (t0 + 14757777);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB60:    if (t10 <= t11)
        goto LAB61;

LAB63:    xsi_set_current_line(410, ng8);
    t2 = (t0 + 14757789);
    xsi_report(t2, 39U, 0);
    xsi_set_current_line(411, ng8);
    t2 = (t0 + 14757828);
    *((int *)t2) = 1;
    t3 = (t0 + 14757832);
    *((int *)t3) = 5;
    t9 = 1;
    t10 = 5;

LAB70:    if (t9 <= t10)
        goto LAB71;

LAB73:    xsi_set_current_line(422, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757852);
    *((int *)t2) = 0;
    t3 = (t0 + 14757856);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB88:    if (t10 <= t11)
        goto LAB89;

LAB91:    xsi_set_current_line(431, ng8);
    t2 = (t0 + 14757868);
    xsi_report(t2, 39U, 0);
    xsi_set_current_line(432, ng8);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4120U);
    t4 = (t0 + 14757907);
    t6 = (t0 + 11248U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(433, ng8);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB101;

LAB103:
LAB102:    xsi_set_current_line(437, ng8);
    t9 = (640 - 1);
    t2 = (t0 + 14757975);
    *((int *)t2) = 0;
    t3 = (t0 + 14757979);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB104:    if (t10 <= t11)
        goto LAB105;

LAB107:    xsi_set_current_line(443, ng8);
    t2 = (t0 + 4120U);
    std_textio_file_close(t2);
    xsi_set_current_line(445, ng8);
    t2 = (t0 + 14757991);
    xsi_report(t2, 40U, 0);
    xsi_set_current_line(446, ng8);
    t2 = (t0 + 14758031);
    t4 = (t0 + 14758039);
    t15 = ((STD_STANDARD) + 1008);
    t16 = (t87 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 8;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t9 = (8 - 1);
    t19 = (t9 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t0 + 11248U);
    t6 = xsi_base_array_concat(t6, t86, t15, (char)97, t2, t87, (char)97, t4, t17, (char)101);
    t19 = (8U + 43U);
    xsi_report(t6, t19, 0);
    xsi_set_current_line(447, ng8);
    t2 = (t0 + 14758082);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t9 = *((int *)t6);
    t5 = xsi_int_to_mem(t9);
    t15 = xsi_string_variable_get_image(t86, t4, t5);
    t17 = ((STD_STANDARD) + 1008);
    t27 = (t88 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = 1;
    t30 = (t27 + 4U);
    *((int *)t30) = 15;
    t30 = (t27 + 8U);
    *((int *)t30) = 1;
    t10 = (15 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t19;
    t16 = xsi_base_array_concat(t16, t87, t17, (char)97, t2, t88, (char)97, t15, t86, (char)101);
    t19 = (15U + 2U);
    xsi_report(t16, t19, 0);
    xsi_set_current_line(448, ng8);
    t2 = (t0 + 14758097);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1648U);
    t6 = *((char **)t5);
    t9 = *((int *)t6);
    t5 = xsi_int_to_mem(t9);
    t15 = xsi_string_variable_get_image(t86, t4, t5);
    t17 = ((STD_STANDARD) + 1008);
    t27 = (t88 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = 1;
    t30 = (t27 + 4U);
    *((int *)t30) = 16;
    t30 = (t27 + 8U);
    *((int *)t30) = 1;
    t10 = (16 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t19;
    t16 = xsi_base_array_concat(t16, t87, t17, (char)97, t2, t88, (char)97, t15, t86, (char)101);
    t19 = (16U + 3U);
    xsi_report(t16, t19, 0);
    xsi_set_current_line(449, ng8);
    t2 = (t0 + 14758113);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1768U);
    t6 = *((char **)t5);
    t9 = *((int *)t6);
    t5 = xsi_int_to_mem(t9);
    t15 = xsi_string_variable_get_image(t86, t4, t5);
    t17 = ((STD_STANDARD) + 1008);
    t27 = (t88 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = 1;
    t30 = (t27 + 4U);
    *((int *)t30) = 20;
    t30 = (t27 + 8U);
    *((int *)t30) = 1;
    t10 = (20 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t19;
    t16 = xsi_base_array_concat(t16, t87, t17, (char)97, t2, t88, (char)97, t15, t86, (char)101);
    t19 = (20U + 1U);
    xsi_report(t16, t19, 0);
    xsi_set_current_line(451, ng8);

LAB116:    *((char **)t1) = &&LAB117;

LAB1:    return;
LAB4:    xsi_set_current_line(345, ng8);
    t2 = (t0 + 14757492);
    xsi_report(t2, 24U, (unsigned char)3);
    goto LAB5;

LAB8:    xsi_set_current_line(349, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757524);
    *((int *)t4) = 0;
    t5 = (t0 + 14757528);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB11:    if (t13 <= t14)
        goto LAB12;

LAB14:
LAB9:    t2 = (t0 + 14757516);
    t10 = *((int *)t2);
    t3 = (t0 + 14757520);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB10;

LAB19:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757516);
    *((int *)t4) = t10;
    goto LAB7;

LAB12:    xsi_set_current_line(350, ng8);
    t6 = (t0 + 4016U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(355, ng8);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 14757516);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t19 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t20 = (t19 * 640U);
    t4 = (t0 + 14757524);
    t18 = *((int *)t4);
    t21 = (t18 - 0);
    t23 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t5 = (t3 + t26);
    *((int *)t5) = 0;

LAB16:
LAB13:    t2 = (t0 + 14757524);
    t13 = *((int *)t2);
    t3 = (t0 + 14757528);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB14;

LAB18:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757524);
    *((int *)t4) = t13;
    goto LAB11;

LAB15:    xsi_set_current_line(351, ng8);
    t15 = (t0 + 5120);
    t16 = (t0 + 4016U);
    t17 = (t0 + 4296U);
    std_textio_readline(STD_TEXTIO, t15, t16, t17);
    xsi_set_current_line(352, ng8);
    t2 = (t0 + 5120);
    t3 = (t0 + 4296U);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(353, ng8);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t2 = (t0 + 14757516);
    t12 = *((int *)t2);
    t18 = (t12 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t20 = (t19 * 640U);
    t5 = (t0 + 14757524);
    t21 = *((int *)t5);
    t22 = (t21 - 0);
    t23 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t6 = (t4 + t26);
    *((int *)t6) = t9;
    goto LAB16;

LAB21:    xsi_set_current_line(364, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757568);
    *((int *)t4) = 0;
    t5 = (t0 + 14757572);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB24:    if (t13 <= t14)
        goto LAB25;

LAB27:
LAB22:    t2 = (t0 + 14757560);
    t10 = *((int *)t2);
    t3 = (t0 + 14757564);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB23;

LAB29:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757560);
    *((int *)t4) = t10;
    goto LAB20;

LAB25:    xsi_set_current_line(365, ng8);
    t6 = (t0 + 14757568);
    t15 = (t0 + 14757560);
    t18 = work_a_4194390601_3212880686_sub_2154771485_3579431146(t0, *((int *)t6), *((int *)t15));
    t16 = (t0 + 2248U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757560);
    t21 = *((int *)t16);
    t22 = (t21 - 0);
    t19 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757568);
    t28 = *((int *)t27);
    t29 = (t28 - 0);
    t23 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    *((int *)t30) = t18;

LAB26:    t2 = (t0 + 14757568);
    t13 = *((int *)t2);
    t3 = (t0 + 14757572);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB27;

LAB28:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757568);
    *((int *)t4) = t13;
    goto LAB24;

LAB31:    xsi_set_current_line(372, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757619);
    *((int *)t4) = 0;
    t5 = (t0 + 14757623);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB34:    if (t13 <= t14)
        goto LAB35;

LAB37:
LAB32:    t2 = (t0 + 14757611);
    t10 = *((int *)t2);
    t3 = (t0 + 14757615);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB33;

LAB39:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757611);
    *((int *)t4) = t10;
    goto LAB30;

LAB35:    xsi_set_current_line(373, ng8);
    t6 = (t0 + 14757619);
    t15 = (t0 + 14757611);
    t18 = work_a_4194390601_3212880686_sub_991140282_3579431146(t0, *((int *)t6), *((int *)t15));
    t16 = (t0 + 2368U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757611);
    t21 = *((int *)t16);
    t22 = (t21 - 0);
    t19 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757619);
    t28 = *((int *)t27);
    t29 = (t28 - 0);
    t23 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    *((int *)t30) = t18;

LAB36:    t2 = (t0 + 14757619);
    t13 = *((int *)t2);
    t3 = (t0 + 14757623);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB37;

LAB38:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757619);
    *((int *)t4) = t13;
    goto LAB34;

LAB41:    xsi_set_current_line(380, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757668);
    *((int *)t4) = 0;
    t5 = (t0 + 14757672);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB44:    if (t13 <= t14)
        goto LAB45;

LAB47:
LAB42:    t2 = (t0 + 14757660);
    t10 = *((int *)t2);
    t3 = (t0 + 14757664);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB43;

LAB49:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757660);
    *((int *)t4) = t10;
    goto LAB40;

LAB45:    xsi_set_current_line(381, ng8);
    t6 = (t0 + 14757668);
    t15 = (t0 + 14757660);
    t18 = work_a_4194390601_3212880686_sub_3930756559_3579431146(t0, *((int *)t6), *((int *)t15));
    t16 = (t0 + 2488U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757660);
    t21 = *((int *)t16);
    t22 = (t21 - 0);
    t19 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757668);
    t28 = *((int *)t27);
    t29 = (t28 - 0);
    t23 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    *((int *)t30) = t18;
    xsi_set_current_line(382, ng8);
    t2 = (t0 + 14757668);
    t3 = (t0 + 14757660);
    t9 = work_a_4194390601_3212880686_sub_457044784_3579431146(t0, *((int *)t2), *((int *)t3));
    t4 = (t0 + 2608U);
    t5 = *((char **)t4);
    t4 = (t0 + 14757660);
    t12 = *((int *)t4);
    t18 = (t12 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t20 = (t19 * 640U);
    t6 = (t0 + 14757668);
    t21 = *((int *)t6);
    t22 = (t21 - 0);
    t23 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t15 = (t5 + t26);
    *((int *)t15) = t9;
    xsi_set_current_line(385, ng8);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 14757660);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t19 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t20 = (t19 * 640U);
    t4 = (t0 + 14757668);
    t18 = *((int *)t4);
    t21 = (t18 - 0);
    t23 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t5 = (t3 + t26);
    t22 = *((int *)t5);
    t6 = (t0 + 2488U);
    t15 = *((char **)t6);
    t6 = (t0 + 14757660);
    t28 = *((int *)t6);
    t29 = (t28 - 0);
    t31 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t32 = (t31 * 640U);
    t16 = (t0 + 14757668);
    t33 = *((int *)t16);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t36 = (t32 + t35);
    t37 = (4U * t36);
    t38 = (0 + t37);
    t17 = (t15 + t38);
    t39 = *((int *)t17);
    t40 = (t22 * t39);
    t27 = (t0 + 2608U);
    t30 = *((char **)t27);
    t27 = (t0 + 14757660);
    t41 = *((int *)t27);
    t42 = (t41 - 0);
    t43 = (t42 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t44 = (t43 * 640U);
    t45 = (t0 + 14757668);
    t46 = *((int *)t45);
    t47 = (t46 - 0);
    t48 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t45));
    t49 = (t44 + t48);
    t50 = (4U * t49);
    t51 = (0 + t50);
    t52 = (t30 + t51);
    t53 = *((int *)t52);
    t54 = (t0 + 2608U);
    t55 = *((char **)t54);
    t54 = (t0 + 14757660);
    t56 = *((int *)t54);
    t57 = (t56 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t54));
    t59 = (t58 * 640U);
    t60 = (t0 + 14757668);
    t61 = *((int *)t60);
    t62 = (t61 - 0);
    t63 = (t62 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t60));
    t64 = (t59 + t63);
    t65 = (4U * t64);
    t66 = (0 + t65);
    t67 = (t55 + t66);
    t68 = *((int *)t67);
    t69 = (t53 * t68);
    t70 = (t40 + t69);
    t71 = work_a_4194390601_3212880686_sub_4033714418_3057020925(t0, t70);
    t72 = (t0 + 2728U);
    t73 = *((char **)t72);
    t72 = (t0 + 14757660);
    t74 = *((int *)t72);
    t75 = (t74 - 0);
    t76 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t72));
    t77 = (t76 * 640U);
    t78 = (t0 + 14757668);
    t79 = *((int *)t78);
    t80 = (t79 - 0);
    t81 = (t80 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t78));
    t82 = (t77 + t81);
    t83 = (4U * t82);
    t84 = (0 + t83);
    t85 = (t73 + t84);
    *((int *)t85) = t71;
    xsi_set_current_line(389, ng8);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t0 + 14757660);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t19 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t20 = (t19 * 640U);
    t4 = (t0 + 14757668);
    t18 = *((int *)t4);
    t21 = (t18 - 0);
    t23 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t5 = (t3 + t26);
    t22 = *((int *)t5);
    t28 = work_a_4194390601_3212880686_sub_2489298628_3057020925(t0, t22, 0, 255);
    t6 = (t0 + 2728U);
    t15 = *((char **)t6);
    t6 = (t0 + 14757660);
    t29 = *((int *)t6);
    t33 = (t29 - 0);
    t31 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t32 = (t31 * 640U);
    t16 = (t0 + 14757668);
    t34 = *((int *)t16);
    t39 = (t34 - 0);
    t35 = (t39 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t36 = (t32 + t35);
    t37 = (4U * t36);
    t38 = (0 + t37);
    t17 = (t15 + t38);
    *((int *)t17) = t28;

LAB46:    t2 = (t0 + 14757668);
    t13 = *((int *)t2);
    t3 = (t0 + 14757672);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB47;

LAB48:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757668);
    *((int *)t4) = t13;
    goto LAB44;

LAB51:    xsi_set_current_line(396, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757728);
    *((int *)t4) = 0;
    t5 = (t0 + 14757732);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB54:    if (t13 <= t14)
        goto LAB55;

LAB57:
LAB52:    t2 = (t0 + 14757720);
    t10 = *((int *)t2);
    t3 = (t0 + 14757724);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB53;

LAB59:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757720);
    *((int *)t4) = t10;
    goto LAB50;

LAB55:    xsi_set_current_line(397, ng8);
    t6 = (t0 + 14757728);
    t15 = (t0 + 14757720);
    t18 = work_a_4194390601_3212880686_sub_2630324757_3579431146(t0, *((int *)t6), *((int *)t15));
    t16 = (t0 + 2968U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757720);
    t21 = *((int *)t16);
    t22 = (t21 - 0);
    t19 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757728);
    t28 = *((int *)t27);
    t29 = (t28 - 0);
    t23 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    *((int *)t30) = t18;

LAB56:    t2 = (t0 + 14757728);
    t13 = *((int *)t2);
    t3 = (t0 + 14757732);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB57;

LAB58:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757728);
    *((int *)t4) = t13;
    goto LAB54;

LAB61:    xsi_set_current_line(404, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757781);
    *((int *)t4) = 0;
    t5 = (t0 + 14757785);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB64:    if (t13 <= t14)
        goto LAB65;

LAB67:
LAB62:    t2 = (t0 + 14757773);
    t10 = *((int *)t2);
    t3 = (t0 + 14757777);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB63;

LAB69:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757773);
    *((int *)t4) = t10;
    goto LAB60;

LAB65:    xsi_set_current_line(405, ng8);
    t6 = (t0 + 14757781);
    t15 = (t0 + 14757773);
    t18 = work_a_4194390601_3212880686_sub_1840617423_3579431146(t0, *((int *)t6), *((int *)t15));
    t16 = (t0 + 3088U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757773);
    t21 = *((int *)t16);
    t22 = (t21 - 0);
    t19 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757781);
    t28 = *((int *)t27);
    t29 = (t28 - 0);
    t23 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    *((int *)t30) = t18;

LAB66:    t2 = (t0 + 14757781);
    t13 = *((int *)t2);
    t3 = (t0 + 14757785);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB67;

LAB68:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757781);
    *((int *)t4) = t13;
    goto LAB64;

LAB71:    xsi_set_current_line(412, ng8);
    t11 = (640 - 1);
    t4 = (t0 + 14757836);
    *((int *)t4) = 0;
    t5 = (t0 + 14757840);
    *((int *)t5) = t11;
    t12 = 0;
    t13 = t11;

LAB74:    if (t12 <= t13)
        goto LAB75;

LAB77:
LAB72:    t2 = (t0 + 14757828);
    t9 = *((int *)t2);
    t3 = (t0 + 14757832);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB73;

LAB87:    t11 = (t9 + 1);
    t9 = t11;
    t4 = (t0 + 14757828);
    *((int *)t4) = t9;
    goto LAB70;

LAB75:    xsi_set_current_line(413, ng8);
    t14 = (640 - 1);
    t6 = (t0 + 14757844);
    *((int *)t6) = 0;
    t15 = (t0 + 14757848);
    *((int *)t15) = t14;
    t18 = 0;
    t21 = t14;

LAB78:    if (t18 <= t21)
        goto LAB79;

LAB81:
LAB76:    t2 = (t0 + 14757836);
    t12 = *((int *)t2);
    t3 = (t0 + 14757840);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB77;

LAB86:    t11 = (t12 + 1);
    t12 = t11;
    t4 = (t0 + 14757836);
    *((int *)t4) = t12;
    goto LAB74;

LAB79:    xsi_set_current_line(414, ng8);
    t16 = (t0 + 3088U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757836);
    t22 = *((int *)t16);
    t28 = (t22 - 0);
    t19 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757844);
    t29 = *((int *)t27);
    t33 = (t29 - 0);
    t23 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    t34 = *((int *)t30);
    t7 = (t34 == 128);
    if (t7 != 0)
        goto LAB82;

LAB84:
LAB83:
LAB80:    t2 = (t0 + 14757844);
    t18 = *((int *)t2);
    t3 = (t0 + 14757848);
    t21 = *((int *)t3);
    if (t18 == t21)
        goto LAB81;

LAB85:    t11 = (t18 + 1);
    t18 = t11;
    t4 = (t0 + 14757844);
    *((int *)t4) = t18;
    goto LAB78;

LAB82:    xsi_set_current_line(415, ng8);
    t45 = (t0 + 14757844);
    t52 = (t0 + 14757836);
    t39 = work_a_4194390601_3212880686_sub_89791653_3579431146(t0, *((int *)t45), *((int *)t52));
    t54 = (t0 + 3088U);
    t55 = *((char **)t54);
    t54 = (t0 + 14757836);
    t40 = *((int *)t54);
    t41 = (t40 - 0);
    t31 = (t41 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t54));
    t32 = (t31 * 640U);
    t60 = (t0 + 14757844);
    t42 = *((int *)t60);
    t46 = (t42 - 0);
    t35 = (t46 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t60));
    t36 = (t32 + t35);
    t37 = (4U * t36);
    t38 = (0 + t37);
    t67 = (t55 + t38);
    *((int *)t67) = t39;
    goto LAB83;

LAB89:    xsi_set_current_line(423, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757860);
    *((int *)t4) = 0;
    t5 = (t0 + 14757864);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB92:    if (t13 <= t14)
        goto LAB93;

LAB95:
LAB90:    t2 = (t0 + 14757852);
    t10 = *((int *)t2);
    t3 = (t0 + 14757856);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB91;

LAB100:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757852);
    *((int *)t4) = t10;
    goto LAB88;

LAB93:    xsi_set_current_line(424, ng8);
    t6 = (t0 + 3088U);
    t15 = *((char **)t6);
    t6 = (t0 + 14757852);
    t18 = *((int *)t6);
    t21 = (t18 - 0);
    t19 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t20 = (t19 * 640U);
    t16 = (t0 + 14757860);
    t22 = *((int *)t16);
    t28 = (t22 - 0);
    t23 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t17 = (t15 + t26);
    t29 = *((int *)t17);
    t7 = (t29 == 128);
    if (t7 != 0)
        goto LAB96;

LAB98:
LAB97:
LAB94:    t2 = (t0 + 14757860);
    t13 = *((int *)t2);
    t3 = (t0 + 14757864);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB95;

LAB99:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757860);
    *((int *)t4) = t13;
    goto LAB92;

LAB96:    xsi_set_current_line(425, ng8);
    t27 = (t0 + 3088U);
    t30 = *((char **)t27);
    t27 = (t0 + 14757852);
    t33 = *((int *)t27);
    t34 = (t33 - 0);
    t31 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t32 = (t31 * 640U);
    t45 = (t0 + 14757860);
    t39 = *((int *)t45);
    t40 = (t39 - 0);
    t35 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t45));
    t36 = (t32 + t35);
    t37 = (4U * t36);
    t38 = (0 + t37);
    t52 = (t30 + t38);
    *((int *)t52) = 0;
    goto LAB97;

LAB101:    xsi_set_current_line(434, ng8);
    t2 = (t0 + 14757950);
    xsi_report(t2, 25U, (unsigned char)3);
    goto LAB102;

LAB105:    xsi_set_current_line(438, ng8);
    t12 = (640 - 1);
    t4 = (t0 + 14757983);
    *((int *)t4) = 0;
    t5 = (t0 + 14757987);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB108:    if (t13 <= t14)
        goto LAB109;

LAB111:
LAB106:    t2 = (t0 + 14757975);
    t10 = *((int *)t2);
    t3 = (t0 + 14757979);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB107;

LAB113:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 14757975);
    *((int *)t4) = t10;
    goto LAB104;

LAB109:    xsi_set_current_line(439, ng8);
    t6 = (t0 + 5120);
    t15 = (t0 + 4368U);
    t16 = (t0 + 3088U);
    t17 = *((char **)t16);
    t16 = (t0 + 14757975);
    t18 = *((int *)t16);
    t21 = (t18 - 0);
    t19 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t20 = (t19 * 640U);
    t27 = (t0 + 14757983);
    t22 = *((int *)t27);
    t28 = (t22 - 0);
    t23 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t27));
    t24 = (t20 + t23);
    t25 = (4U * t24);
    t26 = (0 + t25);
    t30 = (t17 + t26);
    t29 = *((int *)t30);
    std_textio_write5(STD_TEXTIO, t6, t15, t29, (unsigned char)0, 0);
    xsi_set_current_line(440, ng8);
    t2 = (t0 + 5120);
    t3 = (t0 + 4120U);
    t4 = (t0 + 4368U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB110:    t2 = (t0 + 14757983);
    t13 = *((int *)t2);
    t3 = (t0 + 14757987);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB111;

LAB112:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 14757983);
    *((int *)t4) = t13;
    goto LAB108;

LAB114:    goto LAB2;

LAB115:    goto LAB114;

LAB117:    goto LAB115;

}


extern void work_a_4194390601_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4194390601_3212880686_p_0};
	static char *se[] = {(void *)work_a_4194390601_3212880686_sub_3202332950_3057020925,(void *)work_a_4194390601_3212880686_sub_3202609556_3057020925,(void *)work_a_4194390601_3212880686_sub_2481671141_3057020925,(void *)work_a_4194390601_3212880686_sub_4033714418_3057020925,(void *)work_a_4194390601_3212880686_sub_2489298628_3057020925,(void *)work_a_4194390601_3212880686_sub_2154771485_3579431146,(void *)work_a_4194390601_3212880686_sub_991140282_3579431146,(void *)work_a_4194390601_3212880686_sub_3930756559_3579431146,(void *)work_a_4194390601_3212880686_sub_457044784_3579431146,(void *)work_a_4194390601_3212880686_sub_2630324757_3579431146,(void *)work_a_4194390601_3212880686_sub_1840617423_3579431146,(void *)work_a_4194390601_3212880686_sub_89791653_3579431146};
	xsi_register_didat("work_a_4194390601_3212880686", "isim/edge_detection_filter_isim_beh.exe.sim/work/a_4194390601_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
