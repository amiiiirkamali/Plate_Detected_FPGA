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
static const char *ng2 = "Function clamp ended without a return statement";
extern char *STD_STANDARD;
static const char *ng4 = "Function calculate_local_mean ended without a return statement";
static const char *ng5 = "Function denoise_pixel ended without a return statement";
static const char *ng6 = "E:/project/Ise/Licens_Plate_Recognition/adaptive-thresholding-4/adaptive_thresholding.vhd";
extern char *STD_TEXTIO;



int work_a_3784108379_3212880686_sub_3202332950_3057020925(char *t1, int t2, int t3)
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

int work_a_3784108379_3212880686_sub_3202609556_3057020925(char *t1, int t2, int t3)
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

int work_a_3784108379_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
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

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = t4;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

int work_a_3784108379_3212880686_sub_1060647453_3579431146(char *t1, int t2, int t3)
{
    char t4[488];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
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
    char *t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    char *t40;
    int t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    unsigned char t52;
    unsigned char t53;
    unsigned char t54;
    unsigned char t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;

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
    *((int *)t15) = 0;
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
    t30 = (t5 + 4U);
    *((int *)t30) = t2;
    t31 = (t5 + 8U);
    *((int *)t31) = t3;
    t32 = (t1 + 1648U);
    t33 = *((char **)t32);
    t34 = *((int *)t33);
    t32 = (t1 + 1648U);
    t35 = *((char **)t32);
    t36 = *((int *)t35);
    t37 = (-(t36));
    t38 = t37;
    t39 = t34;

LAB2:    if (t38 <= t39)
        goto LAB3;

LAB5:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t34 = *((int *)t8);
    t49 = (t34 > 0);
    if (t49 != 0)
        goto LAB24;

LAB26:    t0 = 128;

LAB1:    return t0;
LAB3:    t32 = (t1 + 1648U);
    t40 = *((char **)t32);
    t41 = *((int *)t40);
    t32 = (t1 + 1648U);
    t42 = *((char **)t32);
    t43 = *((int *)t42);
    t44 = (-(t43));
    t45 = t44;
    t46 = t41;

LAB6:    if (t45 <= t46)
        goto LAB7;

LAB9:
LAB4:    if (t38 == t39)
        goto LAB5;

LAB23:    t34 = (t38 + 1);
    t38 = t34;
    goto LAB2;

LAB7:    t47 = (t2 + t45);
    t32 = (t18 + 56U);
    t48 = *((char **)t32);
    t32 = (t48 + 0);
    *((int *)t32) = t47;
    t34 = (t3 + t38);
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t34;
    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t34 = *((int *)t8);
    t52 = (t34 >= 0);
    if (t52 == 1)
        goto LAB19;

LAB20:    t51 = (unsigned char)0;

LAB21:    if (t51 == 1)
        goto LAB16;

LAB17:    t50 = (unsigned char)0;

LAB18:    if (t50 == 1)
        goto LAB13;

LAB14:    t49 = (unsigned char)0;

LAB15:    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t45 == t46)
        goto LAB9;

LAB22:    t34 = (t45 + 1);
    t45 = t34;
    goto LAB6;

LAB10:    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t43 = *((int *)t14);
    t7 = (t1 + 2128U);
    t16 = *((char **)t7);
    t7 = (t24 + 56U);
    t17 = *((char **)t7);
    t44 = *((int *)t17);
    t47 = (t44 - 0);
    t56 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t44);
    t57 = (t56 * 640U);
    t7 = (t18 + 56U);
    t19 = *((char **)t7);
    t58 = *((int *)t19);
    t59 = (t58 - 0);
    t60 = (t59 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t58);
    t61 = (t57 + t60);
    t62 = (4U * t61);
    t63 = (0 + t62);
    t7 = (t16 + t63);
    t64 = *((int *)t7);
    t65 = (t43 + t64);
    t20 = (t6 + 56U);
    t22 = *((char **)t20);
    t20 = (t22 + 0);
    *((int *)t20) = t65;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t34 = *((int *)t8);
    t36 = (t34 + 1);
    t7 = (t12 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t36;
    goto LAB11;

LAB13:    t7 = (t24 + 56U);
    t13 = *((char **)t7);
    t41 = *((int *)t13);
    t55 = (t41 < 640);
    t49 = t55;
    goto LAB15;

LAB16:    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t37 = *((int *)t11);
    t54 = (t37 >= 0);
    t50 = t54;
    goto LAB18;

LAB19:    t7 = (t18 + 56U);
    t10 = *((char **)t7);
    t36 = *((int *)t10);
    t53 = (t36 < 640);
    t51 = t53;
    goto LAB21;

LAB24:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t36 = *((int *)t10);
    t7 = (t12 + 56U);
    t11 = *((char **)t7);
    t37 = *((int *)t11);
    t38 = (t36 / t37);
    t0 = t38;
    goto LAB1;

LAB25:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB27:    goto LAB25;

LAB28:    goto LAB25;

}

unsigned char work_a_3784108379_3212880686_sub_929675993_3579431146(char *t1, int t2, int t3)
{
    char t4[728];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    char t39[8];
    unsigned char t0;
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
    char *t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    unsigned char t60;
    unsigned char t61;
    unsigned char t62;
    unsigned char t63;
    unsigned char t64;
    int t65;
    unsigned char t66;
    int t67;
    unsigned char t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;

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
    *((int *)t21) = 0;
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
    t42 = (t5 + 4U);
    *((int *)t42) = t2;
    t43 = (t5 + 8U);
    *((int *)t43) = t3;
    t44 = (t1 + 2128U);
    t45 = *((char **)t44);
    t46 = (t3 - 0);
    t47 = (t46 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t48 = (t47 * 640U);
    t49 = (t2 - 0);
    t50 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t51 = (t48 + t50);
    t52 = (4U * t51);
    t53 = (0 + t52);
    t44 = (t45 + t53);
    t54 = *((int *)t44);
    t55 = (t6 + 56U);
    t56 = *((char **)t55);
    t55 = (t56 + 0);
    *((int *)t55) = t54;
    t46 = (-(1));
    t49 = t46;
    t54 = 1;

LAB2:    if (t49 <= t54)
        goto LAB3;

LAB5:    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t46 = *((int *)t8);
    t7 = (t1 + 1768U);
    t10 = *((char **)t7);
    t49 = *((int *)t10);
    t60 = (t46 >= t49);
    t0 = t60;

LAB1:    return t0;
LAB3:    t57 = (-(1));
    t58 = t57;
    t59 = 1;

LAB6:    if (t58 <= t59)
        goto LAB7;

LAB9:
LAB4:    if (t49 == t54)
        goto LAB5;

LAB36:    t46 = (t49 + 1);
    t49 = t46;
    goto LAB2;

LAB7:    t61 = (t58 == 0);
    if (t61 == 1)
        goto LAB13;

LAB14:    t60 = (unsigned char)0;

LAB15:    if (t60 != 0)
        goto LAB10;

LAB12:
LAB11:    t46 = (t2 + t58);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t46;
    t46 = (t3 + t49);
    t7 = (t36 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t46;
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t46 = *((int *)t8);
    t63 = (t46 >= 0);
    if (t63 == 1)
        goto LAB26;

LAB27:    t62 = (unsigned char)0;

LAB28:    if (t62 == 1)
        goto LAB23;

LAB24:    t61 = (unsigned char)0;

LAB25:    if (t61 == 1)
        goto LAB20;

LAB21:    t60 = (unsigned char)0;

LAB22:    if (t60 != 0)
        goto LAB17;

LAB19:
LAB18:
LAB8:    if (t58 == t59)
        goto LAB9;

LAB35:    t46 = (t58 + 1);
    t58 = t46;
    goto LAB6;

LAB10:    goto LAB8;

LAB13:    t62 = (t49 == 0);
    t60 = t62;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t7 = (t1 + 2128U);
    t14 = *((char **)t7);
    t7 = (t36 + 56U);
    t16 = *((char **)t7);
    t69 = *((int *)t16);
    t70 = (t69 - 0);
    t47 = (t70 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t69);
    t48 = (t47 * 640U);
    t7 = (t30 + 56U);
    t17 = *((char **)t7);
    t71 = *((int *)t17);
    t72 = (t71 - 0);
    t50 = (t72 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t51 = (t48 + t50);
    t52 = (4U * t51);
    t53 = (0 + t52);
    t7 = (t14 + t53);
    t73 = *((int *)t7);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = t73;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t46 = *((int *)t8);
    t7 = (t12 + 56U);
    t10 = *((char **)t7);
    t57 = *((int *)t10);
    t60 = (t46 > t57);
    if (t60 != 0)
        goto LAB29;

LAB31:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t46 = *((int *)t8);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t57 = *((int *)t10);
    t65 = (t46 - t57);
    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t65;

LAB30:    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t46 = *((int *)t8);
    t7 = (t18 + 56U);
    t10 = *((char **)t7);
    t57 = *((int *)t10);
    t60 = (t46 > t57);
    if (t60 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB18;

LAB20:    t7 = (t36 + 56U);
    t13 = *((char **)t7);
    t67 = *((int *)t13);
    t68 = (t67 < 640);
    t60 = t68;
    goto LAB22;

LAB23:    t7 = (t36 + 56U);
    t11 = *((char **)t7);
    t65 = *((int *)t11);
    t66 = (t65 >= 0);
    t61 = t66;
    goto LAB25;

LAB26:    t7 = (t30 + 56U);
    t10 = *((char **)t7);
    t57 = *((int *)t10);
    t64 = (t57 < 640);
    t62 = t64;
    goto LAB28;

LAB29:    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t65 = *((int *)t11);
    t7 = (t12 + 56U);
    t13 = *((char **)t7);
    t67 = *((int *)t13);
    t69 = (t65 - t67);
    t7 = (t24 + 56U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t69;
    goto LAB30;

LAB32:    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t65 = *((int *)t11);
    t7 = (t18 + 56U);
    t13 = *((char **)t7);
    t7 = (t13 + 0);
    *((int *)t7) = t65;
    goto LAB33;

LAB37:;
}

int work_a_3784108379_3212880686_sub_2045160283_3579431146(char *t1, int t2, int t3)
{
    char t4[728];
    char t5[16];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t33[8];
    char t39[8];
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
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    char *t51;
    char *t52;
    unsigned char t53;
    unsigned char t54;
    unsigned char t55;
    unsigned char t56;
    unsigned char t57;
    unsigned char t58;
    int t59;
    unsigned char t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;

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
    *((int *)t15) = 0;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    *((int *)t21) = 0;
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
    t42 = (t5 + 4U);
    *((int *)t42) = t2;
    t43 = (t5 + 8U);
    *((int *)t43) = t3;
    t44 = (-(1));
    t45 = t44;
    t46 = 1;

LAB2:    if (t45 <= t46)
        goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t44 = *((int *)t8);
    t7 = (t12 + 56U);
    t10 = *((char **)t7);
    t45 = *((int *)t10);
    t53 = (t44 > t45);
    if (t53 != 0)
        goto LAB27;

LAB29:    t0 = 0;

LAB1:    return t0;
LAB3:    t47 = (-(1));
    t48 = t47;
    t49 = 1;

LAB6:    if (t48 <= t49)
        goto LAB7;

LAB9:
LAB4:    if (t45 == t46)
        goto LAB5;

LAB26:    t44 = (t45 + 1);
    t45 = t44;
    goto LAB2;

LAB7:    t50 = (t2 + t48);
    t51 = (t24 + 56U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    *((int *)t51) = t50;
    t44 = (t3 + t45);
    t7 = (t30 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t44;
    t7 = (t24 + 56U);
    t8 = *((char **)t7);
    t44 = *((int *)t8);
    t56 = (t44 >= 0);
    if (t56 == 1)
        goto LAB19;

LAB20:    t55 = (unsigned char)0;

LAB21:    if (t55 == 1)
        goto LAB16;

LAB17:    t54 = (unsigned char)0;

LAB18:    if (t54 == 1)
        goto LAB13;

LAB14:    t53 = (unsigned char)0;

LAB15:    if (t53 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t48 == t49)
        goto LAB9;

LAB25:    t44 = (t48 + 1);
    t48 = t44;
    goto LAB6;

LAB10:    t7 = (t1 + 2248U);
    t14 = *((char **)t7);
    t7 = (t30 + 56U);
    t16 = *((char **)t7);
    t61 = *((int *)t16);
    t62 = (t61 - 0);
    t63 = (t62 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t61);
    t64 = (t63 * 640U);
    t7 = (t24 + 56U);
    t17 = *((char **)t7);
    t65 = *((int *)t17);
    t66 = (t65 - 0);
    t67 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t65);
    t68 = (t64 + t67);
    t69 = (4U * t68);
    t70 = (0 + t69);
    t7 = (t14 + t70);
    t71 = *((int *)t7);
    t19 = (t36 + 56U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = t71;
    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t44 = *((int *)t8);
    t47 = (t44 + 1);
    t7 = (t18 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t47;
    t7 = (t36 + 56U);
    t8 = *((char **)t7);
    t44 = *((int *)t8);
    t53 = (t44 == 255);
    if (t53 != 0)
        goto LAB22;

LAB24:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t44 = *((int *)t8);
    t47 = (t44 + 1);
    t7 = (t12 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t47;

LAB23:    goto LAB11;

LAB13:    t7 = (t30 + 56U);
    t13 = *((char **)t7);
    t59 = *((int *)t13);
    t60 = (t59 < 640);
    t53 = t60;
    goto LAB15;

LAB16:    t7 = (t30 + 56U);
    t11 = *((char **)t7);
    t50 = *((int *)t11);
    t58 = (t50 >= 0);
    t54 = t58;
    goto LAB18;

LAB19:    t7 = (t24 + 56U);
    t10 = *((char **)t7);
    t47 = *((int *)t10);
    t57 = (t47 < 640);
    t55 = t57;
    goto LAB21;

LAB22:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t47 = *((int *)t10);
    t50 = (t47 + 1);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t50;
    goto LAB23;

LAB27:    t0 = 255;
    goto LAB1;

LAB28:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB30:    goto LAB28;

LAB31:    goto LAB28;

}

static void work_a_3784108379_3212880686_p_0(char *t0)
{
    char t10[16];
    char t12[16];
    char t31[16];
    char t36[16];
    char t38[16];
    char t41[16];
    char t45[16];
    char t50[16];
    char t52[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t53;
    char *t54;
    int t55;
    unsigned char t56;
    unsigned char t57;
    unsigned char t58;
    int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned char t71;
    int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned char t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned char t97;
    int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned char t110;
    int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;

LAB0:    t1 = (t0 + 4472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(167, ng6);
    t2 = (t0 + 3286304);
    xsi_report(t2, 46U, 0);
    xsi_set_current_line(168, ng6);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3176U);
    t4 = (t0 + 3286350);
    t6 = (t0 + 9124U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(169, ng6);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(173, ng6);
    t2 = (t0 + 3286464);
    xsi_report(t2, 15U, 0);
    xsi_set_current_line(174, ng6);
    t15 = (640 - 1);
    t2 = (t0 + 3286479);
    *((int *)t2) = 0;
    t3 = (t0 + 3286483);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB7:    if (t17 <= t18)
        goto LAB8;

LAB10:    xsi_set_current_line(190, ng6);
    t2 = (t0 + 3176U);
    std_textio_file_close(t2);
    xsi_set_current_line(193, ng6);
    t2 = (t0 + 3286510);
    xsi_report(t2, 30U, 0);
    xsi_set_current_line(194, ng6);
    t15 = (640 - 1);
    t2 = (t0 + 3286540);
    *((int *)t2) = 0;
    t3 = (t0 + 3286544);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB23:    if (t17 <= t18)
        goto LAB24;

LAB26:    xsi_set_current_line(223, ng6);
    t2 = (t0 + 3286571);
    xsi_report(t2, 17U, 0);
    xsi_set_current_line(224, ng6);
    t15 = (640 - 2);
    t2 = (t0 + 3286588);
    *((int *)t2) = 1;
    t3 = (t0 + 3286592);
    *((int *)t3) = t15;
    t17 = 1;
    t18 = t15;

LAB42:    if (t17 <= t18)
        goto LAB43;

LAB45:    xsi_set_current_line(240, ng6);
    t2 = (t0 + 3286604);
    xsi_report(t2, 20U, 0);
    xsi_set_current_line(241, ng6);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3280U);
    t4 = (t0 + 3286624);
    t6 = (t0 + 9140U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(242, ng6);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB81;

LAB83:
LAB82:    xsi_set_current_line(246, ng6);
    t15 = (640 - 1);
    t2 = (t0 + 3286746);
    *((int *)t2) = 0;
    t3 = (t0 + 3286750);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB84:    if (t17 <= t18)
        goto LAB85;

LAB87:    xsi_set_current_line(256, ng6);
    t2 = (t0 + 3280U);
    std_textio_file_close(t2);
    xsi_set_current_line(259, ng6);
    t2 = (t0 + 3286776);
    xsi_report(t2, 47U, 0);
    xsi_set_current_line(260, ng6);
    t2 = (t0 + 3286823);
    t4 = (t0 + 3286835);
    t9 = ((STD_STANDARD) + 1008);
    t11 = (t12 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 1;
    t13 = (t11 + 4U);
    *((int *)t13) = 12;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t15 = (12 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t16;
    t13 = (t0 + 9124U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (12U + 43U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(261, ng6);
    t2 = (t0 + 3286878);
    t4 = (t0 + 3286890);
    t9 = ((STD_STANDARD) + 1008);
    t11 = (t12 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 1;
    t13 = (t11 + 4U);
    *((int *)t13) = 12;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t15 = (12 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t16;
    t13 = (t0 + 9140U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (12U + 47U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(262, ng6);
    t2 = (t0 + 3286937);
    t4 = ((STD_STANDARD) + 384);
    t5 = xsi_int_to_mem(640);
    t6 = xsi_string_variable_get_image(t10, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t13 = (t31 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 14;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (14 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t9 = xsi_base_array_concat(t9, t12, t11, (char)97, t2, t31, (char)97, t6, t10, (char)101);
    t14 = (t0 + 3286951);
    t34 = ((STD_STANDARD) + 1008);
    t35 = (t38 + 0U);
    t37 = (t35 + 0U);
    *((int *)t37) = 1;
    t37 = (t35 + 4U);
    *((int *)t37) = 1;
    t37 = (t35 + 8U);
    *((int *)t37) = 1;
    t17 = (1 - 1);
    t16 = (t17 * 1);
    t16 = (t16 + 1);
    t37 = (t35 + 12U);
    *((unsigned int *)t37) = t16;
    t33 = xsi_base_array_concat(t33, t36, t34, (char)97, t9, t12, (char)97, t14, t38, (char)101);
    t37 = ((STD_STANDARD) + 384);
    t39 = xsi_int_to_mem(640);
    t40 = xsi_string_variable_get_image(t41, t37, t39);
    t43 = ((STD_STANDARD) + 1008);
    t42 = xsi_base_array_concat(t42, t45, t43, (char)97, t33, t36, (char)97, t40, t41, (char)101);
    t16 = (14U + 3U);
    t24 = (t16 + 1U);
    t27 = (t24 + 3U);
    xsi_report(t42, t27, 0);
    xsi_set_current_line(263, ng6);
    t2 = (t0 + 3286952);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1408U);
    t6 = *((char **)t5);
    t15 = *((int *)t6);
    t5 = xsi_int_to_mem(t15);
    t9 = xsi_string_variable_get_image(t10, t4, t5);
    t13 = ((STD_STANDARD) + 1008);
    t14 = (t31 + 0U);
    t32 = (t14 + 0U);
    *((int *)t32) = 1;
    t32 = (t14 + 4U);
    *((int *)t32) = 13;
    t32 = (t14 + 8U);
    *((int *)t32) = 1;
    t17 = (13 - 1);
    t16 = (t17 * 1);
    t16 = (t16 + 1);
    t32 = (t14 + 12U);
    *((unsigned int *)t32) = t16;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)97, t2, t31, (char)97, t9, t10, (char)101);
    t32 = (t0 + 3286965);
    t35 = ((STD_STANDARD) + 1008);
    t37 = (t38 + 0U);
    t39 = (t37 + 0U);
    *((int *)t39) = 1;
    t39 = (t37 + 4U);
    *((int *)t39) = 1;
    t39 = (t37 + 8U);
    *((int *)t39) = 1;
    t18 = (1 - 1);
    t16 = (t18 * 1);
    t16 = (t16 + 1);
    t39 = (t37 + 12U);
    *((unsigned int *)t39) = t16;
    t34 = xsi_base_array_concat(t34, t36, t35, (char)97, t11, t12, (char)97, t32, t38, (char)101);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t0 + 1408U);
    t42 = *((char **)t40);
    t19 = *((int *)t42);
    t40 = xsi_int_to_mem(t19);
    t43 = xsi_string_variable_get_image(t41, t39, t40);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t34, t36, (char)97, t43, t41, (char)101);
    t16 = (13U + 2U);
    t24 = (t16 + 1U);
    t27 = (t24 + 2U);
    xsi_report(t44, t27, 0);
    xsi_set_current_line(264, ng6);
    t2 = (t0 + 3286966);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t15 = *((int *)t6);
    t5 = xsi_int_to_mem(t15);
    t9 = xsi_string_variable_get_image(t10, t4, t5);
    t13 = ((STD_STANDARD) + 1008);
    t14 = (t31 + 0U);
    t32 = (t14 + 0U);
    *((int *)t32) = 1;
    t32 = (t14 + 4U);
    *((int *)t32) = 8;
    t32 = (t14 + 8U);
    *((int *)t32) = 1;
    t17 = (8 - 1);
    t16 = (t17 * 1);
    t16 = (t16 + 1);
    t32 = (t14 + 12U);
    *((unsigned int *)t32) = t16;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)97, t2, t31, (char)97, t9, t10, (char)101);
    t16 = (8U + 1U);
    xsi_report(t11, t16, 0);
    xsi_set_current_line(265, ng6);
    t2 = (t0 + 3286974);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1768U);
    t6 = *((char **)t5);
    t15 = *((int *)t6);
    t5 = xsi_int_to_mem(t15);
    t9 = xsi_string_variable_get_image(t10, t4, t5);
    t13 = ((STD_STANDARD) + 1008);
    t14 = (t31 + 0U);
    t32 = (t14 + 0U);
    *((int *)t32) = 1;
    t32 = (t14 + 4U);
    *((int *)t32) = 16;
    t32 = (t14 + 8U);
    *((int *)t32) = 1;
    t17 = (16 - 1);
    t16 = (t17 * 1);
    t16 = (t16 + 1);
    t32 = (t14 + 12U);
    *((unsigned int *)t32) = t16;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)97, t2, t31, (char)97, t9, t10, (char)101);
    t16 = (16U + 2U);
    xsi_report(t11, t16, 0);
    xsi_set_current_line(266, ng6);
    t2 = (t0 + 3286990);
    xsi_report(t2, 21U, 0);
    xsi_set_current_line(267, ng6);
    t2 = (t0 + 3287011);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(268, ng6);
    t2 = (t0 + 3287039);
    xsi_report(t2, 19U, 0);
    xsi_set_current_line(269, ng6);
    t2 = (t0 + 3287058);
    xsi_report(t2, 16U, 0);
    xsi_set_current_line(270, ng6);
    t2 = (t0 + 3287074);
    xsi_report(t2, 23U, 0);
    xsi_set_current_line(272, ng6);

LAB99:    *((char **)t1) = &&LAB100;

LAB1:    return;
LAB4:    xsi_set_current_line(170, ng6);
    t2 = (t0 + 3286393);
    t5 = (t0 + 3286421);
    t11 = ((STD_STANDARD) + 1008);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 28;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (28 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t0 + 9124U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 43U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB5;

LAB8:    xsi_set_current_line(175, ng6);
    t19 = (640 - 1);
    t4 = (t0 + 3286487);
    *((int *)t4) = 0;
    t5 = (t0 + 3286491);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB11:    if (t20 <= t21)
        goto LAB12;

LAB14:    xsi_set_current_line(186, ng6);
    t2 = (t0 + 3286479);
    t15 = xsi_vhdl_mod(*((int *)t2), 80);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB9:    t2 = (t0 + 3286479);
    t17 = *((int *)t2);
    t3 = (t0 + 3286483);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB10;

LAB22:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 3286479);
    *((int *)t4) = t17;
    goto LAB7;

LAB12:    xsi_set_current_line(176, ng6);
    t6 = (t0 + 3176U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(181, ng6);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 3286479);
    t15 = *((int *)t2);
    t19 = (t15 - 0);
    t16 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t4 = (t0 + 3286487);
    t22 = *((int *)t4);
    t23 = (t22 - 0);
    t27 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t5 = (t3 + t30);
    *((int *)t5) = 0;

LAB16:
LAB13:    t2 = (t0 + 3286487);
    t20 = *((int *)t2);
    t3 = (t0 + 3286491);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB14;

LAB18:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 3286487);
    *((int *)t4) = t20;
    goto LAB11;

LAB15:    xsi_set_current_line(177, ng6);
    t9 = (t0 + 4280);
    t11 = (t0 + 3176U);
    t13 = (t0 + 3456U);
    std_textio_readline(STD_TEXTIO, t9, t11, t13);
    xsi_set_current_line(178, ng6);
    t2 = (t0 + 4280);
    t3 = (t0 + 3456U);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(179, ng6);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t19 = work_a_3784108379_3212880686_sub_2489298628_3057020925(t0, t15, 0, 255);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t2 = (t0 + 3286479);
    t22 = *((int *)t2);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t5 = (t0 + 3286487);
    t25 = *((int *)t5);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t6 = (t4 + t30);
    *((int *)t6) = t19;
    goto LAB16;

LAB19:    xsi_set_current_line(187, ng6);
    t3 = (t0 + 3286495);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 3286479);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 11;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t19 = (11 - 1);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t31, (char)97, t11, t10, (char)101);
    t33 = (t0 + 3286506);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 1;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t20 = (1 - 1);
    t16 = (t20 * 1);
    t16 = (t16 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t16;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t13, t12, (char)97, t33, t38, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t42 = xsi_int_to_mem(640);
    t43 = xsi_string_variable_get_image(t41, t40, t42);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t35, t36, (char)97, t43, t41, (char)101);
    t47 = (t0 + 3286507);
    t51 = ((STD_STANDARD) + 1008);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 3;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t21 = (3 - 1);
    t16 = (t21 * 1);
    t16 = (t16 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t16;
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t44, t45, (char)97, t47, t52, (char)101);
    t54 = (t10 + 12U);
    t16 = *((unsigned int *)t54);
    t24 = (11U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    t29 = (t28 + 3U);
    xsi_report(t49, t29, 0);
    goto LAB20;

LAB24:    xsi_set_current_line(195, ng6);
    t19 = (640 - 1);
    t4 = (t0 + 3286548);
    *((int *)t4) = 0;
    t5 = (t0 + 3286552);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB27:    if (t20 <= t21)
        goto LAB28;

LAB30:    xsi_set_current_line(217, ng6);
    t2 = (t0 + 3286540);
    t15 = xsi_vhdl_mod(*((int *)t2), 80);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB38;

LAB40:
LAB39:
LAB25:    t2 = (t0 + 3286540);
    t17 = *((int *)t2);
    t3 = (t0 + 3286544);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB26;

LAB41:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 3286540);
    *((int *)t4) = t17;
    goto LAB23;

LAB28:    xsi_set_current_line(196, ng6);
    t6 = (t0 + 2128U);
    t9 = *((char **)t6);
    t6 = (t0 + 3286540);
    t22 = *((int *)t6);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t24 = (t16 * 640U);
    t11 = (t0 + 3286548);
    t25 = *((int *)t11);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t13 = (t9 + t30);
    t55 = *((int *)t13);
    t14 = (t0 + 2848U);
    t32 = *((char **)t14);
    t14 = (t32 + 0);
    *((int *)t14) = t55;
    xsi_set_current_line(199, ng6);
    t2 = (t0 + 3286548);
    t3 = (t0 + 3286540);
    t15 = work_a_3784108379_3212880686_sub_1060647453_3579431146(t0, *((int *)t2), *((int *)t3));
    t4 = (t0 + 2608U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t15;
    xsi_set_current_line(202, ng6);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t19 = *((int *)t4);
    t22 = (t15 - t19);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t22;
    xsi_set_current_line(205, ng6);
    t2 = (t0 + 3286548);
    t3 = (t0 + 3286540);
    t7 = work_a_3784108379_3212880686_sub_929675993_3579431146(t0, *((int *)t2), *((int *)t3));
    if (t7 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(210, ng6);
    t2 = (t0 + 2848U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t19 = *((int *)t4);
    t22 = work_a_3784108379_3212880686_sub_2489298628_3057020925(t0, t19, 0, 255);
    t7 = (t15 > t22);
    if (t7 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(213, ng6);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 3286540);
    t15 = *((int *)t2);
    t19 = (t15 - 0);
    t16 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t4 = (t0 + 3286548);
    t22 = *((int *)t4);
    t23 = (t22 - 0);
    t27 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t5 = (t3 + t30);
    *((int *)t5) = 0;

LAB35:
LAB29:    t2 = (t0 + 3286548);
    t20 = *((int *)t2);
    t3 = (t0 + 3286552);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB30;

LAB37:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 3286548);
    *((int *)t4) = t20;
    goto LAB27;

LAB31:    xsi_set_current_line(206, ng6);
    t4 = (t0 + 2728U);
    t5 = *((char **)t4);
    t15 = *((int *)t5);
    t19 = (t15 - 5);
    t4 = (t0 + 2728U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    *((int *)t4) = t19;
    goto LAB32;

LAB34:    xsi_set_current_line(211, ng6);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t2 = (t0 + 3286540);
    t23 = *((int *)t2);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t6 = (t0 + 3286548);
    t26 = *((int *)t6);
    t55 = (t26 - 0);
    t27 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t9 = (t5 + t30);
    *((int *)t9) = 255;
    goto LAB35;

LAB38:    xsi_set_current_line(218, ng6);
    t3 = (t0 + 3286556);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 3286540);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 11;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t19 = (11 - 1);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t31, (char)97, t11, t10, (char)101);
    t33 = (t0 + 3286567);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 1;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t20 = (1 - 1);
    t16 = (t20 * 1);
    t16 = (t16 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t16;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t13, t12, (char)97, t33, t38, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t42 = xsi_int_to_mem(640);
    t43 = xsi_string_variable_get_image(t41, t40, t42);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t35, t36, (char)97, t43, t41, (char)101);
    t47 = (t0 + 3286568);
    t51 = ((STD_STANDARD) + 1008);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 3;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t21 = (3 - 1);
    t16 = (t21 * 1);
    t16 = (t16 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t16;
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t44, t45, (char)97, t47, t52, (char)101);
    t54 = (t10 + 12U);
    t16 = *((unsigned int *)t54);
    t24 = (11U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    t29 = (t28 + 3U);
    xsi_report(t49, t29, 0);
    goto LAB39;

LAB43:    xsi_set_current_line(225, ng6);
    t19 = (640 - 2);
    t4 = (t0 + 3286596);
    *((int *)t4) = 1;
    t5 = (t0 + 3286600);
    *((int *)t5) = t19;
    t20 = 1;
    t21 = t19;

LAB46:    if (t20 <= t21)
        goto LAB47;

LAB49:
LAB44:    t2 = (t0 + 3286588);
    t17 = *((int *)t2);
    t3 = (t0 + 3286592);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB45;

LAB80:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 3286588);
    *((int *)t4) = t17;
    goto LAB42;

LAB47:    xsi_set_current_line(227, ng6);
    t6 = (t0 + 2248U);
    t9 = *((char **)t6);
    t6 = (t0 + 3286588);
    t22 = *((int *)t6);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t24 = (t16 * 640U);
    t11 = (t0 + 3286596);
    t25 = *((int *)t11);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t13 = (t9 + t30);
    t55 = *((int *)t13);
    t58 = (t55 == 255);
    if (t58 == 1)
        goto LAB62;

LAB63:    t57 = (unsigned char)0;

LAB64:    if (t57 == 1)
        goto LAB59;

LAB60:    t56 = (unsigned char)0;

LAB61:    if (t56 == 1)
        goto LAB56;

LAB57:    t8 = (unsigned char)0;

LAB58:    if (t8 == 1)
        goto LAB53;

LAB54:    t7 = (unsigned char)0;

LAB55:    if (t7 != 0)
        goto LAB50;

LAB52:    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 3286588);
    t15 = *((int *)t2);
    t19 = (t15 - 0);
    t16 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t4 = (t0 + 3286596);
    t22 = *((int *)t4);
    t23 = (t22 - 0);
    t27 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t5 = (t3 + t30);
    t25 = *((int *)t5);
    t58 = (t25 == 0);
    if (t58 == 1)
        goto LAB76;

LAB77:    t57 = (unsigned char)0;

LAB78:    if (t57 == 1)
        goto LAB73;

LAB74:    t56 = (unsigned char)0;

LAB75:    if (t56 == 1)
        goto LAB70;

LAB71:    t8 = (unsigned char)0;

LAB72:    if (t8 == 1)
        goto LAB67;

LAB68:    t7 = (unsigned char)0;

LAB69:    if (t7 != 0)
        goto LAB65;

LAB66:
LAB51:
LAB48:    t2 = (t0 + 3286596);
    t20 = *((int *)t2);
    t3 = (t0 + 3286600);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB49;

LAB79:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 3286596);
    *((int *)t4) = t20;
    goto LAB46;

LAB50:    xsi_set_current_line(230, ng6);
    t53 = (t0 + 2248U);
    t54 = *((char **)t53);
    t53 = (t0 + 3286588);
    t111 = *((int *)t53);
    t112 = (t111 - 0);
    t113 = (t112 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t53));
    t114 = (t113 * 640U);
    t115 = (t0 + 3286596);
    t116 = *((int *)t115);
    t117 = (t116 - 0);
    t118 = (t117 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t115));
    t119 = (t114 + t118);
    t120 = (4U * t119);
    t121 = (0 + t120);
    t122 = (t54 + t121);
    *((int *)t122) = 0;
    goto LAB51;

LAB53:    t47 = (t0 + 2248U);
    t48 = *((char **)t47);
    t47 = (t0 + 3286588);
    t98 = *((int *)t47);
    t99 = (t98 - 0);
    t100 = (t99 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t47));
    t101 = (t100 * 640U);
    t49 = (t0 + 3286596);
    t102 = *((int *)t49);
    t103 = (t102 + 1);
    t104 = (t103 - 0);
    t105 = (t104 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t103);
    t106 = (t101 + t105);
    t107 = (4U * t106);
    t108 = (0 + t107);
    t51 = (t48 + t108);
    t109 = *((int *)t51);
    t110 = (t109 == 0);
    t7 = t110;
    goto LAB55;

LAB56:    t42 = (t0 + 2248U);
    t43 = *((char **)t42);
    t42 = (t0 + 3286588);
    t85 = *((int *)t42);
    t86 = (t85 - 0);
    t87 = (t86 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t42));
    t88 = (t87 * 640U);
    t44 = (t0 + 3286596);
    t89 = *((int *)t44);
    t90 = (t89 - 1);
    t91 = (t90 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t90);
    t93 = (t88 + t92);
    t94 = (4U * t93);
    t95 = (0 + t94);
    t46 = (t43 + t95);
    t96 = *((int *)t46);
    t97 = (t96 == 0);
    t8 = t97;
    goto LAB58;

LAB59:    t35 = (t0 + 2248U);
    t37 = *((char **)t35);
    t35 = (t0 + 3286588);
    t72 = *((int *)t35);
    t73 = (t72 + 1);
    t74 = (t73 - 0);
    t75 = (t74 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t73);
    t76 = (t75 * 640U);
    t39 = (t0 + 3286596);
    t77 = *((int *)t39);
    t78 = (t77 - 0);
    t79 = (t78 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t39));
    t80 = (t76 + t79);
    t81 = (4U * t80);
    t82 = (0 + t81);
    t40 = (t37 + t82);
    t83 = *((int *)t40);
    t84 = (t83 == 0);
    t56 = t84;
    goto LAB61;

LAB62:    t14 = (t0 + 2248U);
    t32 = *((char **)t14);
    t14 = (t0 + 3286588);
    t59 = *((int *)t14);
    t60 = (t59 - 1);
    t61 = (t60 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t60);
    t63 = (t62 * 640U);
    t33 = (t0 + 3286596);
    t64 = *((int *)t33);
    t65 = (t64 - 0);
    t66 = (t65 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t33));
    t67 = (t63 + t66);
    t68 = (4U * t67);
    t69 = (0 + t68);
    t34 = (t32 + t69);
    t70 = *((int *)t34);
    t71 = (t70 == 0);
    t57 = t71;
    goto LAB64;

LAB65:    xsi_set_current_line(234, ng6);
    t47 = (t0 + 2248U);
    t48 = *((char **)t47);
    t47 = (t0 + 3286588);
    t104 = *((int *)t47);
    t109 = (t104 - 0);
    t113 = (t109 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t47));
    t114 = (t113 * 640U);
    t49 = (t0 + 3286596);
    t111 = *((int *)t49);
    t112 = (t111 - 0);
    t118 = (t112 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t49));
    t119 = (t114 + t118);
    t120 = (4U * t119);
    t121 = (0 + t120);
    t51 = (t48 + t121);
    *((int *)t51) = 255;
    goto LAB51;

LAB67:    t42 = (t0 + 2248U);
    t43 = *((char **)t42);
    t42 = (t0 + 3286588);
    t91 = *((int *)t42);
    t96 = (t91 - 0);
    t100 = (t96 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t42));
    t101 = (t100 * 640U);
    t44 = (t0 + 3286596);
    t98 = *((int *)t44);
    t99 = (t98 + 1);
    t102 = (t99 - 0);
    t105 = (t102 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t99);
    t106 = (t101 + t105);
    t107 = (4U * t106);
    t108 = (0 + t107);
    t46 = (t43 + t108);
    t103 = *((int *)t46);
    t110 = (t103 == 255);
    t7 = t110;
    goto LAB69;

LAB70:    t35 = (t0 + 2248U);
    t37 = *((char **)t35);
    t35 = (t0 + 3286588);
    t78 = *((int *)t35);
    t83 = (t78 - 0);
    t87 = (t83 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t35));
    t88 = (t87 * 640U);
    t39 = (t0 + 3286596);
    t85 = *((int *)t39);
    t86 = (t85 - 1);
    t89 = (t86 - 0);
    t92 = (t89 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t86);
    t93 = (t88 + t92);
    t94 = (4U * t93);
    t95 = (0 + t94);
    t40 = (t37 + t95);
    t90 = *((int *)t40);
    t97 = (t90 == 255);
    t8 = t97;
    goto LAB72;

LAB73:    t14 = (t0 + 2248U);
    t32 = *((char **)t14);
    t14 = (t0 + 3286588);
    t65 = *((int *)t14);
    t70 = (t65 + 1);
    t72 = (t70 - 0);
    t75 = (t72 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t70);
    t76 = (t75 * 640U);
    t33 = (t0 + 3286596);
    t73 = *((int *)t33);
    t74 = (t73 - 0);
    t79 = (t74 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t33));
    t80 = (t76 + t79);
    t81 = (4U * t80);
    t82 = (0 + t81);
    t34 = (t32 + t82);
    t77 = *((int *)t34);
    t84 = (t77 == 255);
    t56 = t84;
    goto LAB75;

LAB76:    t6 = (t0 + 2248U);
    t9 = *((char **)t6);
    t6 = (t0 + 3286588);
    t26 = *((int *)t6);
    t55 = (t26 - 1);
    t59 = (t55 - 0);
    t62 = (t59 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t55);
    t63 = (t62 * 640U);
    t11 = (t0 + 3286596);
    t60 = *((int *)t11);
    t61 = (t60 - 0);
    t66 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t67 = (t63 + t66);
    t68 = (4U * t67);
    t69 = (0 + t68);
    t13 = (t9 + t69);
    t64 = *((int *)t13);
    t71 = (t64 == 255);
    t57 = t71;
    goto LAB78;

LAB81:    xsi_set_current_line(243, ng6);
    t2 = (t0 + 3286671);
    t5 = (t0 + 3286699);
    t11 = ((STD_STANDARD) + 1008);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 28;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (28 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t0 + 9140U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 47U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB82;

LAB85:    xsi_set_current_line(247, ng6);
    t19 = (640 - 1);
    t4 = (t0 + 3286754);
    *((int *)t4) = 0;
    t5 = (t0 + 3286758);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB88:    if (t20 <= t21)
        goto LAB89;

LAB91:    xsi_set_current_line(252, ng6);
    t2 = (t0 + 3286746);
    t15 = xsi_vhdl_mod(*((int *)t2), 80);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB93;

LAB95:
LAB94:
LAB86:    t2 = (t0 + 3286746);
    t17 = *((int *)t2);
    t3 = (t0 + 3286750);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB87;

LAB96:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 3286746);
    *((int *)t4) = t17;
    goto LAB84;

LAB89:    xsi_set_current_line(248, ng6);
    t6 = (t0 + 4280);
    t9 = (t0 + 3528U);
    t11 = (t0 + 2248U);
    t13 = *((char **)t11);
    t11 = (t0 + 3286746);
    t22 = *((int *)t11);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t24 = (t16 * 640U);
    t14 = (t0 + 3286754);
    t25 = *((int *)t14);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t14));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t32 = (t13 + t30);
    t55 = *((int *)t32);
    std_textio_write5(STD_TEXTIO, t6, t9, t55, (unsigned char)0, 0);
    xsi_set_current_line(249, ng6);
    t2 = (t0 + 4280);
    t3 = (t0 + 3280U);
    t4 = (t0 + 3528U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB90:    t2 = (t0 + 3286754);
    t20 = *((int *)t2);
    t3 = (t0 + 3286758);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB91;

LAB92:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 3286754);
    *((int *)t4) = t20;
    goto LAB88;

LAB93:    xsi_set_current_line(253, ng6);
    t3 = (t0 + 3286762);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 3286746);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 10;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t19 = (10 - 1);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t31, (char)97, t11, t10, (char)101);
    t33 = (t0 + 3286772);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 1;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t20 = (1 - 1);
    t16 = (t20 * 1);
    t16 = (t16 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t16;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t13, t12, (char)97, t33, t38, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t42 = xsi_int_to_mem(640);
    t43 = xsi_string_variable_get_image(t41, t40, t42);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t35, t36, (char)97, t43, t41, (char)101);
    t47 = (t0 + 3286773);
    t51 = ((STD_STANDARD) + 1008);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 3;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t21 = (3 - 1);
    t16 = (t21 * 1);
    t16 = (t16 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t16;
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t44, t45, (char)97, t47, t52, (char)101);
    t54 = (t10 + 12U);
    t16 = *((unsigned int *)t54);
    t24 = (10U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    t29 = (t28 + 3U);
    xsi_report(t49, t29, 0);
    goto LAB94;

LAB97:    goto LAB2;

LAB98:    goto LAB97;

LAB100:    goto LAB98;

}


extern void work_a_3784108379_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3784108379_3212880686_p_0};
	static char *se[] = {(void *)work_a_3784108379_3212880686_sub_3202332950_3057020925,(void *)work_a_3784108379_3212880686_sub_3202609556_3057020925,(void *)work_a_3784108379_3212880686_sub_2489298628_3057020925,(void *)work_a_3784108379_3212880686_sub_1060647453_3579431146,(void *)work_a_3784108379_3212880686_sub_929675993_3579431146,(void *)work_a_3784108379_3212880686_sub_2045160283_3579431146};
	xsi_register_didat("work_a_3784108379_3212880686", "isim/adaptive_thresholding_optimized_isim_beh.exe.sim/work/a_3784108379_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
