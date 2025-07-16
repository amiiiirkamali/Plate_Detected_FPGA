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
static const char *ng0 = "Function clamp ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "Function horizontal_closing ended without a return statement";
static const char *ng3 = "Function advanced_noise_removal ended without a return statement";
static const char *ng4 = "E:/project/Ise/Licens_Plate_Recognition/morphological-5/morphological.vhd";
extern char *STD_TEXTIO;



int work_a_3524752965_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
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

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = t4;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

int work_a_3524752965_3212880686_sub_639026599_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[368];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    int t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    unsigned char t49;
    unsigned char t50;
    int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned char t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 639;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (639 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t7 + 16U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 639;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t13 = (639 - 0);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t11;
    t12 = (t5 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = 255;
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 124U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 244U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t6 + 4U);
    t32 = (t2 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t6 + 12U);
    *((char **)t33) = t7;
    t34 = (t6 + 20U);
    *((int *)t34) = t3;
    t35 = (t6 + 24U);
    *((int *)t35) = t4;
    t36 = (-(1));
    t37 = t36;
    t38 = 1;

LAB4:    if (t37 <= t38)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t31) = t2;
    goto LAB2;

LAB5:    t39 = (-(1));
    t40 = t39;
    t41 = 1;

LAB8:    if (t40 <= t41)
        goto LAB9;

LAB11:
LAB6:    if (t37 == t38)
        goto LAB7;

LAB28:    t10 = (t37 + 1);
    t37 = t10;
    goto LAB4;

LAB9:    t42 = (t3 + t40);
    t43 = (t19 + 56U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    *((int *)t43) = t42;
    t10 = (t4 + t37);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t47 = (t10 >= 0);
    if (t47 == 1)
        goto LAB21;

LAB22:    t46 = (unsigned char)0;

LAB23:    if (t46 == 1)
        goto LAB18;

LAB19:    t45 = (unsigned char)0;

LAB20:    if (t45 == 1)
        goto LAB15;

LAB16:    t32 = (unsigned char)0;

LAB17:    if (t32 != 0)
        goto LAB12;

LAB14:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = 0;

LAB13:
LAB10:    if (t40 == t41)
        goto LAB11;

LAB27:    t10 = (t40 + 1);
    t40 = t10;
    goto LAB8;

LAB12:    t8 = (t25 + 56U);
    t18 = *((char **)t8);
    t42 = *((int *)t18);
    t51 = (t42 - 0);
    t11 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t42);
    t52 = (t11 * 640U);
    t8 = (t19 + 56U);
    t20 = *((char **)t8);
    t53 = *((int *)t20);
    t54 = (t53 - 0);
    t55 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t53);
    t56 = (t52 + t55);
    t57 = (4U * t56);
    t58 = (0 + t57);
    t8 = (t2 + t58);
    t59 = *((int *)t8);
    t21 = (t12 + 56U);
    t23 = *((char **)t21);
    t60 = *((int *)t23);
    t61 = (t59 < t60);
    if (t61 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB13;

LAB15:    t8 = (t25 + 56U);
    t17 = *((char **)t8);
    t39 = *((int *)t17);
    t50 = (t39 < 640);
    t32 = t50;
    goto LAB17;

LAB18:    t8 = (t25 + 56U);
    t15 = *((char **)t8);
    t36 = *((int *)t15);
    t49 = (t36 >= 0);
    t45 = t49;
    goto LAB20;

LAB21:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t48 = (t13 < 640);
    t46 = t48;
    goto LAB23;

LAB24:    t21 = (t25 + 56U);
    t24 = *((char **)t21);
    t62 = *((int *)t24);
    t63 = (t62 - 0);
    t64 = (t63 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t62);
    t65 = (t64 * 640U);
    t21 = (t19 + 56U);
    t26 = *((char **)t21);
    t66 = *((int *)t26);
    t67 = (t66 - 0);
    t68 = (t67 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t66);
    t69 = (t65 + t68);
    t70 = (4U * t69);
    t71 = (0 + t70);
    t21 = (t2 + t71);
    t72 = *((int *)t21);
    t27 = (t12 + 56U);
    t29 = *((char **)t27);
    t27 = (t29 + 0);
    *((int *)t27) = t72;
    goto LAB25;

LAB29:;
}

int work_a_3524752965_3212880686_sub_982417968_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[368];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    int t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    unsigned char t49;
    unsigned char t50;
    int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned char t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 639;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (639 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t7 + 16U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 639;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t13 = (639 - 0);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t11;
    t12 = (t5 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = 0;
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 124U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 244U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t6 + 4U);
    t32 = (t2 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t6 + 12U);
    *((char **)t33) = t7;
    t34 = (t6 + 20U);
    *((int *)t34) = t3;
    t35 = (t6 + 24U);
    *((int *)t35) = t4;
    t36 = (-(1));
    t37 = t36;
    t38 = 1;

LAB4:    if (t37 <= t38)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t31) = t2;
    goto LAB2;

LAB5:    t39 = (-(1));
    t40 = t39;
    t41 = 1;

LAB8:    if (t40 <= t41)
        goto LAB9;

LAB11:
LAB6:    if (t37 == t38)
        goto LAB7;

LAB28:    t10 = (t37 + 1);
    t37 = t10;
    goto LAB4;

LAB9:    t42 = (t3 + t40);
    t43 = (t19 + 56U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    *((int *)t43) = t42;
    t10 = (t4 + t37);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t47 = (t10 >= 0);
    if (t47 == 1)
        goto LAB21;

LAB22:    t46 = (unsigned char)0;

LAB23:    if (t46 == 1)
        goto LAB18;

LAB19:    t45 = (unsigned char)0;

LAB20:    if (t45 == 1)
        goto LAB15;

LAB16:    t32 = (unsigned char)0;

LAB17:    if (t32 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    if (t40 == t41)
        goto LAB11;

LAB27:    t10 = (t40 + 1);
    t40 = t10;
    goto LAB8;

LAB12:    t8 = (t25 + 56U);
    t18 = *((char **)t8);
    t42 = *((int *)t18);
    t51 = (t42 - 0);
    t11 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t42);
    t52 = (t11 * 640U);
    t8 = (t19 + 56U);
    t20 = *((char **)t8);
    t53 = *((int *)t20);
    t54 = (t53 - 0);
    t55 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t53);
    t56 = (t52 + t55);
    t57 = (4U * t56);
    t58 = (0 + t57);
    t8 = (t2 + t58);
    t59 = *((int *)t8);
    t21 = (t12 + 56U);
    t23 = *((char **)t21);
    t60 = *((int *)t23);
    t61 = (t59 > t60);
    if (t61 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB13;

LAB15:    t8 = (t25 + 56U);
    t17 = *((char **)t8);
    t39 = *((int *)t17);
    t50 = (t39 < 640);
    t32 = t50;
    goto LAB17;

LAB18:    t8 = (t25 + 56U);
    t15 = *((char **)t8);
    t36 = *((int *)t15);
    t49 = (t36 >= 0);
    t45 = t49;
    goto LAB20;

LAB21:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t48 = (t13 < 640);
    t46 = t48;
    goto LAB23;

LAB24:    t21 = (t25 + 56U);
    t24 = *((char **)t21);
    t62 = *((int *)t24);
    t63 = (t62 - 0);
    t64 = (t63 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t62);
    t65 = (t64 * 640U);
    t21 = (t19 + 56U);
    t26 = *((char **)t21);
    t66 = *((int *)t26);
    t67 = (t66 - 0);
    t68 = (t67 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t66);
    t69 = (t65 + t68);
    t70 = (4U * t69);
    t71 = (0 + t70);
    t21 = (t2 + t71);
    t72 = *((int *)t21);
    t27 = (t12 + 56U);
    t29 = *((char **)t27);
    t27 = (t29 + 0);
    *((int *)t27) = t72;
    goto LAB25;

LAB29:;
}

int work_a_3524752965_3212880686_sub_1861156582_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[488];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    char t34[8];
    int t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    int t50;
    char *t51;
    char *t52;
    unsigned char t53;
    unsigned char t54;
    int t55;
    int t56;
    int t57;
    unsigned char t58;
    unsigned char t59;
    unsigned char t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned char t69;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 639;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (639 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t7 + 16U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 639;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t13 = (639 - 0);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t11;
    t12 = (t5 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = 0;
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 124U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 244U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t5 + 364U);
    t32 = ((STD_STANDARD) + 384);
    t33 = (t31 + 88U);
    *((char **)t33) = t32;
    t35 = (t31 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, 0);
    t36 = (t31 + 80U);
    *((unsigned int *)t36) = 4U;
    t37 = (t6 + 4U);
    t38 = (t2 != 0);
    if (t38 == 1)
        goto LAB3;

LAB2:    t39 = (t6 + 12U);
    *((char **)t39) = t7;
    t40 = (t6 + 20U);
    *((int *)t40) = t3;
    t41 = (t6 + 24U);
    *((int *)t41) = t4;
    t42 = (t4 - 0);
    t11 = (t42 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t43 = (t11 * 640U);
    t44 = (t3 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t46 = (t43 + t45);
    t47 = (4U * t46);
    t48 = (0 + t47);
    t49 = (t2 + t48);
    t50 = *((int *)t49);
    t51 = (t31 + 56U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    *((int *)t51) = t50;
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t38 = (t10 == 0);
    if (t38 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t37) = t2;
    goto LAB2;

LAB4:    t13 = (-(2));
    t42 = t13;
    t44 = 2;

LAB7:    if (t42 <= t44)
        goto LAB8;

LAB10:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t38 = (t10 == 255);
    if (t38 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB5;

LAB8:    t50 = (t3 + t42);
    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t50;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t53 = (t10 >= 0);
    if (t53 == 1)
        goto LAB14;

LAB15:    t38 = (unsigned char)0;

LAB16:    if (t38 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    if (t42 == t44)
        goto LAB10;

LAB20:    t10 = (t42 + 1);
    t42 = t10;
    goto LAB7;

LAB11:    t50 = (t4 - 0);
    t11 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t43 = (t11 * 640U);
    t8 = (t19 + 56U);
    t15 = *((char **)t8);
    t55 = *((int *)t15);
    t56 = (t55 - 0);
    t45 = (t56 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t55);
    t46 = (t43 + t45);
    t47 = (4U * t46);
    t48 = (0 + t47);
    t8 = (t2 + t48);
    t57 = *((int *)t8);
    t58 = (t57 == 255);
    if (t58 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB12;

LAB14:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t54 = (t13 < 640);
    t38 = t54;
    goto LAB16;

LAB17:    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((int *)t17) = 255;
    goto LAB18;

LAB21:    t54 = (t4 > 0);
    if (t54 == 1)
        goto LAB27;

LAB28:    t53 = (unsigned char)0;

LAB29:    if (t53 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB22;

LAB24:    t42 = (t4 - 1);
    t44 = (t42 - 0);
    t11 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t42);
    t43 = (t11 * 640U);
    t50 = (t3 - 0);
    t45 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t46 = (t43 + t45);
    t47 = (4U * t46);
    t48 = (0 + t47);
    t8 = (t2 + t48);
    t55 = *((int *)t8);
    t60 = (t55 == 255);
    if (t60 == 1)
        goto LAB33;

LAB34:    t56 = (t4 + 1);
    t57 = (t56 - 0);
    t61 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t56);
    t62 = (t61 * 640U);
    t63 = (t3 - 0);
    t64 = (t63 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t65 = (t62 + t64);
    t66 = (4U * t65);
    t67 = (0 + t66);
    t14 = (t2 + t67);
    t68 = *((int *)t14);
    t69 = (t68 == 255);
    t59 = t69;

LAB35:    if (t59 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB25;

LAB27:    t13 = (640 - 1);
    t58 = (t4 < t13);
    t53 = t58;
    goto LAB29;

LAB30:    t0 = 255;
    goto LAB1;

LAB33:    t59 = (unsigned char)1;
    goto LAB35;

LAB36:    goto LAB31;

LAB37:;
}

int work_a_3524752965_3212880686_sub_3437706077_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[368];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    int t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    int t49;
    int t50;
    int t51;
    int t52;
    unsigned char t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 639;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (639 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t7 + 16U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 639;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t13 = (639 - 0);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t11;
    t12 = (t5 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = 0;
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 124U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 244U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t6 + 4U);
    t32 = (t2 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t6 + 12U);
    *((char **)t33) = t7;
    t34 = (t6 + 20U);
    *((int *)t34) = t3;
    t35 = (t6 + 24U);
    *((int *)t35) = t4;
    t36 = (t4 - 0);
    t11 = (t36 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t37 = (t11 * 640U);
    t38 = (t3 - 0);
    t39 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t40 = (t37 + t39);
    t41 = (4U * t40);
    t42 = (0 + t41);
    t43 = (t2 + t42);
    t44 = *((int *)t43);
    t45 = (t25 + 56U);
    t46 = *((char **)t45);
    t45 = (t46 + 0);
    *((int *)t45) = t44;
    t10 = (-(2));
    t13 = t10;
    t36 = 2;

LAB4:    if (t13 <= t36)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t32 = (t10 == 255);
    if (t32 != 0)
        goto LAB18;

LAB20:    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t31) = t2;
    goto LAB2;

LAB5:    t38 = (t3 + t13);
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t38;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t47 = (t10 >= 0);
    if (t47 == 1)
        goto LAB11;

LAB12:    t32 = (unsigned char)0;

LAB13:    if (t32 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t13 == t36)
        goto LAB7;

LAB17:    t10 = (t13 + 1);
    t13 = t10;
    goto LAB4;

LAB8:    t44 = (t4 - 0);
    t11 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t37 = (t11 * 640U);
    t8 = (t19 + 56U);
    t15 = *((char **)t8);
    t49 = *((int *)t15);
    t50 = (t49 - 0);
    t39 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t49);
    t40 = (t37 + t39);
    t41 = (4U * t40);
    t42 = (0 + t41);
    t8 = (t2 + t42);
    t51 = *((int *)t8);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t52 = *((int *)t18);
    t53 = (t51 > t52);
    if (t53 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB9;

LAB11:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t38 = *((int *)t14);
    t48 = (t38 < 640);
    t32 = t48;
    goto LAB13;

LAB14:    t54 = (t4 - 0);
    t55 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t56 = (t55 * 640U);
    t17 = (t19 + 56U);
    t20 = *((char **)t17);
    t57 = *((int *)t20);
    t58 = (t57 - 0);
    t59 = (t58 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t57);
    t60 = (t56 + t59);
    t61 = (4U * t60);
    t62 = (0 + t61);
    t17 = (t2 + t62);
    t63 = *((int *)t17);
    t21 = (t12 + 56U);
    t23 = *((char **)t21);
    t21 = (t23 + 0);
    *((int *)t21) = t63;
    goto LAB15;

LAB18:    t0 = 255;
    goto LAB1;

LAB19:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB21:    goto LAB19;

LAB22:    goto LAB19;

}

int work_a_3524752965_3212880686_sub_2001254363_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[608];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    char t34[8];
    char t40[8];
    int t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    int t56;
    char *t57;
    char *t58;
    int t59;
    unsigned char t60;
    unsigned char t61;
    unsigned char t62;
    unsigned char t63;
    int t64;
    unsigned char t65;
    int t66;
    unsigned char t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    unsigned char t73;
    int t74;
    int t75;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 639;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (639 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t7 + 16U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 639;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t13 = (639 - 0);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t11;
    t12 = (t5 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 124U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    *((int *)t22) = 0;
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 244U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    *((int *)t28) = 0;
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t5 + 364U);
    t32 = ((STD_STANDARD) + 384);
    t33 = (t31 + 88U);
    *((char **)t33) = t32;
    t35 = (t31 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, 0);
    t36 = (t31 + 80U);
    *((unsigned int *)t36) = 4U;
    t37 = (t5 + 484U);
    t38 = ((STD_STANDARD) + 384);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, 0);
    t42 = (t37 + 80U);
    *((unsigned int *)t42) = 4U;
    t43 = (t6 + 4U);
    t44 = (t2 != 0);
    if (t44 == 1)
        goto LAB3;

LAB2:    t45 = (t6 + 12U);
    *((char **)t45) = t7;
    t46 = (t6 + 20U);
    *((int *)t46) = t3;
    t47 = (t6 + 24U);
    *((int *)t47) = t4;
    t48 = (t4 - 0);
    t11 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t49 = (t11 * 640U);
    t50 = (t3 - 0);
    t51 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t52 = (t49 + t51);
    t53 = (4U * t52);
    t54 = (0 + t53);
    t55 = (t2 + t54);
    t56 = *((int *)t55);
    t57 = (t12 + 56U);
    t58 = *((char **)t57);
    t57 = (t58 + 0);
    *((int *)t57) = t56;
    t10 = (-(1));
    t13 = t10;
    t48 = 1;

LAB4:    if (t13 <= t48)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t44 = (t10 == 255);
    if (t44 != 0)
        goto LAB36;

LAB38:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t44 = (t10 >= 7);
    if (t44 != 0)
        goto LAB44;

LAB46:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t60 = (t10 >= 5);
    if (t60 == 1)
        goto LAB50;

LAB51:    t44 = (unsigned char)0;

LAB52:    if (t44 != 0)
        goto LAB48;

LAB49:    t0 = 0;

LAB1:    return t0;
LAB3:    *((char **)t43) = t2;
    goto LAB2;

LAB5:    t50 = (-(1));
    t56 = t50;
    t59 = 1;

LAB8:    if (t56 <= t59)
        goto LAB9;

LAB11:
LAB6:    if (t13 == t48)
        goto LAB7;

LAB35:    t10 = (t13 + 1);
    t13 = t10;
    goto LAB4;

LAB9:    t60 = (t56 == 0);
    if (t60 == 1)
        goto LAB15;

LAB16:    t44 = (unsigned char)0;

LAB17:    if (t44 != 0)
        goto LAB12;

LAB14:
LAB13:    t10 = (t3 + t56);
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t10 = (t4 + t13);
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t62 = (t10 >= 0);
    if (t62 == 1)
        goto LAB28;

LAB29:    t61 = (unsigned char)0;

LAB30:    if (t61 == 1)
        goto LAB25;

LAB26:    t60 = (unsigned char)0;

LAB27:    if (t60 == 1)
        goto LAB22;

LAB23:    t44 = (unsigned char)0;

LAB24:    if (t44 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB10:    if (t56 == t59)
        goto LAB11;

LAB34:    t10 = (t56 + 1);
    t56 = t10;
    goto LAB8;

LAB12:    goto LAB10;

LAB15:    t61 = (t13 == 0);
    t44 = t61;
    goto LAB17;

LAB18:    goto LAB13;

LAB19:    t8 = (t37 + 56U);
    t18 = *((char **)t8);
    t68 = *((int *)t18);
    t69 = (t68 - 0);
    t11 = (t69 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t68);
    t49 = (t11 * 640U);
    t8 = (t31 + 56U);
    t20 = *((char **)t8);
    t70 = *((int *)t20);
    t71 = (t70 - 0);
    t51 = (t71 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t70);
    t52 = (t49 + t51);
    t53 = (4U * t52);
    t54 = (0 + t53);
    t8 = (t2 + t54);
    t72 = *((int *)t8);
    t73 = (t72 == 255);
    if (t73 != 0)
        goto LAB31;

LAB33:    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t50 = (t10 + 1);
    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t50;

LAB32:    goto LAB20;

LAB22:    t8 = (t37 + 56U);
    t17 = *((char **)t8);
    t66 = *((int *)t17);
    t67 = (t66 < 640);
    t44 = t67;
    goto LAB24;

LAB25:    t8 = (t37 + 56U);
    t15 = *((char **)t8);
    t64 = *((int *)t15);
    t65 = (t64 >= 0);
    t60 = t65;
    goto LAB27;

LAB28:    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t50 = *((int *)t14);
    t63 = (t50 < 640);
    t61 = t63;
    goto LAB30;

LAB31:    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    t74 = *((int *)t23);
    t75 = (t74 + 1);
    t21 = (t19 + 56U);
    t24 = *((char **)t21);
    t21 = (t24 + 0);
    *((int *)t21) = t75;
    goto LAB32;

LAB36:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t60 = (t13 <= 1);
    if (t60 != 0)
        goto LAB39;

LAB41:    t0 = 255;
    goto LAB1;

LAB37:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB39:    t0 = 0;
    goto LAB1;

LAB40:    goto LAB37;

LAB42:    goto LAB40;

LAB43:    goto LAB40;

LAB44:    t0 = 255;
    goto LAB1;

LAB45:    goto LAB37;

LAB47:    goto LAB45;

LAB48:    t0 = 255;
    goto LAB1;

LAB50:    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t61 = (t13 <= 2);
    t44 = t61;
    goto LAB52;

LAB53:    goto LAB45;

LAB54:    goto LAB45;

}

static void work_a_3524752965_3212880686_p_0(char *t0)
{
    char t10[16];
    char t12[16];
    char t31[16];
    char t36[16];
    char t38[16];
    char t41[16];
    char t45[16];
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
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(202, ng4);
    t2 = (t0 + 4923284);
    xsi_report(t2, 35U, 0);
    xsi_set_current_line(203, ng4);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 2576U);
    t4 = (t0 + 4923319);
    t6 = (t0 + 7732U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(208, ng4);
    t2 = (t0 + 4923439);
    xsi_report(t2, 15U, 0);
    xsi_set_current_line(209, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923454);
    *((int *)t2) = 0;
    t3 = (t0 + 4923458);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB7:    if (t17 <= t18)
        goto LAB8;

LAB10:    xsi_set_current_line(224, ng4);
    t2 = (t0 + 2576U);
    std_textio_file_close(t2);
    xsi_set_current_line(229, ng4);
    t2 = (t0 + 4923482);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(230, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923510);
    *((int *)t2) = 0;
    t3 = (t0 + 4923514);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB23:    if (t17 <= t18)
        goto LAB24;

LAB26:    xsi_set_current_line(237, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923526);
    *((int *)t2) = 0;
    t3 = (t0 + 4923530);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB33:    if (t17 <= t18)
        goto LAB34;

LAB36:    xsi_set_current_line(244, ng4);
    t2 = (t0 + 4923542);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(245, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923570);
    *((int *)t2) = 0;
    t3 = (t0 + 4923574);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB43:    if (t17 <= t18)
        goto LAB44;

LAB46:    xsi_set_current_line(252, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923586);
    *((int *)t2) = 0;
    t3 = (t0 + 4923590);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB53:    if (t17 <= t18)
        goto LAB54;

LAB56:    xsi_set_current_line(259, ng4);
    t2 = (t0 + 4923602);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(262, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923627);
    *((int *)t2) = 0;
    t3 = (t0 + 4923631);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB63:    if (t17 <= t18)
        goto LAB64;

LAB66:    xsi_set_current_line(269, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923643);
    *((int *)t2) = 0;
    t3 = (t0 + 4923647);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB73:    if (t17 <= t18)
        goto LAB74;

LAB76:    xsi_set_current_line(276, ng4);
    t2 = (t0 + 4923659);
    xsi_report(t2, 20U, 0);
    xsi_set_current_line(277, ng4);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 2680U);
    t4 = (t0 + 4923679);
    t6 = (t0 + 7748U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(278, ng4);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB83;

LAB85:
LAB84:    xsi_set_current_line(282, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 4923789);
    *((int *)t2) = 0;
    t3 = (t0 + 4923793);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB86:    if (t17 <= t18)
        goto LAB87;

LAB89:    xsi_set_current_line(292, ng4);
    t2 = (t0 + 2680U);
    std_textio_file_close(t2);
    xsi_set_current_line(295, ng4);
    t2 = (t0 + 4923816);
    xsi_report(t2, 31U, 0);
    xsi_set_current_line(296, ng4);
    t2 = (t0 + 4923847);
    t4 = (t0 + 4923859);
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
    t13 = (t0 + 7732U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (12U + 46U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(297, ng4);
    t2 = (t0 + 4923905);
    t4 = (t0 + 4923917);
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
    t13 = (t0 + 7748U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (12U + 41U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(298, ng4);
    t2 = (t0 + 4923958);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(299, ng4);
    t2 = (t0 + 4923958);
    xsi_report(t2, 17U, 0);
    xsi_set_current_line(300, ng4);
    t2 = (t0 + 4923975);
    xsi_report(t2, 36U, 0);
    xsi_set_current_line(301, ng4);
    t2 = (t0 + 4924011);
    xsi_report(t2, 33U, 0);
    xsi_set_current_line(302, ng4);
    t2 = (t0 + 4924044);
    xsi_report(t2, 32U, 0);
    xsi_set_current_line(303, ng4);
    t2 = (t0 + 4924076);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(304, ng4);
    t2 = (t0 + 4924076);
    xsi_report(t2, 14U, 0);
    xsi_set_current_line(305, ng4);
    t2 = (t0 + 4924090);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(306, ng4);
    t2 = (t0 + 4924108);
    xsi_report(t2, 19U, 0);
    xsi_set_current_line(307, ng4);
    t2 = (t0 + 4924127);
    xsi_report(t2, 22U, 0);
    xsi_set_current_line(309, ng4);

LAB101:    *((char **)t1) = &&LAB102;

LAB1:    return;
LAB4:    xsi_set_current_line(205, ng4);
    t2 = (t0 + 4923365);
    t5 = (t0 + 4923393);
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
    t14 = (t0 + 7732U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 46U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB5;

LAB8:    xsi_set_current_line(210, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923462);
    *((int *)t4) = 0;
    t5 = (t0 + 4923466);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB11:    if (t20 <= t21)
        goto LAB12;

LAB14:    xsi_set_current_line(220, ng4);
    t2 = (t0 + 4923454);
    t15 = xsi_vhdl_mod(*((int *)t2), 100);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB9:    t2 = (t0 + 4923454);
    t17 = *((int *)t2);
    t3 = (t0 + 4923458);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB10;

LAB22:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923454);
    *((int *)t4) = t17;
    goto LAB7;

LAB12:    xsi_set_current_line(211, ng4);
    t6 = (t0 + 2576U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(216, ng4);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4923454);
    t15 = *((int *)t2);
    t19 = (t15 - 0);
    t16 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t4 = (t0 + 4923462);
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
LAB13:    t2 = (t0 + 4923462);
    t20 = *((int *)t2);
    t3 = (t0 + 4923466);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB14;

LAB18:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923462);
    *((int *)t4) = t20;
    goto LAB11;

LAB15:    xsi_set_current_line(212, ng4);
    t9 = (t0 + 3680);
    t11 = (t0 + 2576U);
    t13 = (t0 + 2856U);
    std_textio_readline(STD_TEXTIO, t9, t11, t13);
    xsi_set_current_line(213, ng4);
    t2 = (t0 + 3680);
    t3 = (t0 + 2856U);
    t4 = (t0 + 1768U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(214, ng4);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t19 = work_a_3524752965_3212880686_sub_2489298628_3057020925(t0, t15, 0, 255);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 4923454);
    t22 = *((int *)t2);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t5 = (t0 + 4923462);
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

LAB19:    xsi_set_current_line(221, ng4);
    t3 = (t0 + 4923470);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4923454);
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
    t33 = (t0 + 4923481);
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
    t47 = (t10 + 12U);
    t16 = *((unsigned int *)t47);
    t24 = (11U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    xsi_report(t44, t28, 0);
    goto LAB20;

LAB24:    xsi_set_current_line(231, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923518);
    *((int *)t4) = 0;
    t5 = (t0 + 4923522);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB27:    if (t20 <= t21)
        goto LAB28;

LAB30:
LAB25:    t2 = (t0 + 4923510);
    t17 = *((int *)t2);
    t3 = (t0 + 4923514);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB26;

LAB32:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923510);
    *((int *)t4) = t17;
    goto LAB23;

LAB28:    xsi_set_current_line(232, ng4);
    t6 = (t0 + 2008U);
    t9 = *((char **)t6);
    t6 = (t0 + 4923518);
    t11 = (t0 + 4923510);
    t22 = work_a_3524752965_3212880686_sub_2001254363_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2128U);
    t14 = *((char **)t13);
    t13 = (t0 + 4923510);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 4923518);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB29:    t2 = (t0 + 4923518);
    t20 = *((int *)t2);
    t3 = (t0 + 4923522);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB30;

LAB31:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923518);
    *((int *)t4) = t20;
    goto LAB27;

LAB34:    xsi_set_current_line(238, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923534);
    *((int *)t4) = 0;
    t5 = (t0 + 4923538);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB37:    if (t20 <= t21)
        goto LAB38;

LAB40:
LAB35:    t2 = (t0 + 4923526);
    t17 = *((int *)t2);
    t3 = (t0 + 4923530);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB36;

LAB42:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923526);
    *((int *)t4) = t17;
    goto LAB33;

LAB38:    xsi_set_current_line(239, ng4);
    t6 = (t0 + 2128U);
    t9 = *((char **)t6);
    t6 = (t0 + 4923526);
    t22 = *((int *)t6);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t24 = (t16 * 640U);
    t11 = (t0 + 4923534);
    t25 = *((int *)t11);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t13 = (t9 + t30);
    t48 = *((int *)t13);
    t14 = (t0 + 2248U);
    t32 = *((char **)t14);
    t14 = (t0 + 4923526);
    t49 = *((int *)t14);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t14));
    t52 = (t51 * 640U);
    t33 = (t0 + 4923534);
    t53 = *((int *)t33);
    t54 = (t53 - 0);
    t55 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t33));
    t56 = (t52 + t55);
    t57 = (4U * t56);
    t58 = (0 + t57);
    t34 = (t32 + t58);
    *((int *)t34) = t48;

LAB39:    t2 = (t0 + 4923534);
    t20 = *((int *)t2);
    t3 = (t0 + 4923538);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB40;

LAB41:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923534);
    *((int *)t4) = t20;
    goto LAB37;

LAB44:    xsi_set_current_line(246, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923578);
    *((int *)t4) = 0;
    t5 = (t0 + 4923582);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB47:    if (t20 <= t21)
        goto LAB48;

LAB50:
LAB45:    t2 = (t0 + 4923570);
    t17 = *((int *)t2);
    t3 = (t0 + 4923574);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB46;

LAB52:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923570);
    *((int *)t4) = t17;
    goto LAB43;

LAB48:    xsi_set_current_line(247, ng4);
    t6 = (t0 + 2248U);
    t9 = *((char **)t6);
    t6 = (t0 + 4923578);
    t11 = (t0 + 4923570);
    t22 = work_a_3524752965_3212880686_sub_3437706077_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2128U);
    t14 = *((char **)t13);
    t13 = (t0 + 4923570);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 4923578);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB49:    t2 = (t0 + 4923578);
    t20 = *((int *)t2);
    t3 = (t0 + 4923582);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB50;

LAB51:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923578);
    *((int *)t4) = t20;
    goto LAB47;

LAB54:    xsi_set_current_line(253, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923594);
    *((int *)t4) = 0;
    t5 = (t0 + 4923598);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB57:    if (t20 <= t21)
        goto LAB58;

LAB60:
LAB55:    t2 = (t0 + 4923586);
    t17 = *((int *)t2);
    t3 = (t0 + 4923590);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB56;

LAB62:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923586);
    *((int *)t4) = t17;
    goto LAB53;

LAB58:    xsi_set_current_line(254, ng4);
    t6 = (t0 + 2128U);
    t9 = *((char **)t6);
    t6 = (t0 + 4923586);
    t22 = *((int *)t6);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t24 = (t16 * 640U);
    t11 = (t0 + 4923594);
    t25 = *((int *)t11);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t13 = (t9 + t30);
    t48 = *((int *)t13);
    t14 = (t0 + 2248U);
    t32 = *((char **)t14);
    t14 = (t0 + 4923586);
    t49 = *((int *)t14);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t14));
    t52 = (t51 * 640U);
    t33 = (t0 + 4923594);
    t53 = *((int *)t33);
    t54 = (t53 - 0);
    t55 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t33));
    t56 = (t52 + t55);
    t57 = (4U * t56);
    t58 = (0 + t57);
    t34 = (t32 + t58);
    *((int *)t34) = t48;

LAB59:    t2 = (t0 + 4923594);
    t20 = *((int *)t2);
    t3 = (t0 + 4923598);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB60;

LAB61:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923594);
    *((int *)t4) = t20;
    goto LAB57;

LAB64:    xsi_set_current_line(263, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923635);
    *((int *)t4) = 0;
    t5 = (t0 + 4923639);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB67:    if (t20 <= t21)
        goto LAB68;

LAB70:
LAB65:    t2 = (t0 + 4923627);
    t17 = *((int *)t2);
    t3 = (t0 + 4923631);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB66;

LAB72:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923627);
    *((int *)t4) = t17;
    goto LAB63;

LAB68:    xsi_set_current_line(264, ng4);
    t6 = (t0 + 2248U);
    t9 = *((char **)t6);
    t6 = (t0 + 4923635);
    t11 = (t0 + 4923627);
    t22 = work_a_3524752965_3212880686_sub_639026599_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2008U);
    t14 = *((char **)t13);
    t13 = (t0 + 4923627);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 4923635);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB69:    t2 = (t0 + 4923635);
    t20 = *((int *)t2);
    t3 = (t0 + 4923639);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB70;

LAB71:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923635);
    *((int *)t4) = t20;
    goto LAB67;

LAB74:    xsi_set_current_line(270, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923651);
    *((int *)t4) = 0;
    t5 = (t0 + 4923655);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB77:    if (t20 <= t21)
        goto LAB78;

LAB80:
LAB75:    t2 = (t0 + 4923643);
    t17 = *((int *)t2);
    t3 = (t0 + 4923647);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB76;

LAB82:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923643);
    *((int *)t4) = t17;
    goto LAB73;

LAB78:    xsi_set_current_line(271, ng4);
    t6 = (t0 + 2008U);
    t9 = *((char **)t6);
    t6 = (t0 + 4923651);
    t11 = (t0 + 4923643);
    t22 = work_a_3524752965_3212880686_sub_982417968_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2128U);
    t14 = *((char **)t13);
    t13 = (t0 + 4923643);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 4923651);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB79:    t2 = (t0 + 4923651);
    t20 = *((int *)t2);
    t3 = (t0 + 4923655);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB80;

LAB81:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923651);
    *((int *)t4) = t20;
    goto LAB77;

LAB83:    xsi_set_current_line(279, ng4);
    t2 = (t0 + 4923720);
    t5 = (t0 + 4923748);
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
    t14 = (t0 + 7748U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 41U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB84;

LAB87:    xsi_set_current_line(283, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 4923797);
    *((int *)t4) = 0;
    t5 = (t0 + 4923801);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB90:    if (t20 <= t21)
        goto LAB91;

LAB93:    xsi_set_current_line(288, ng4);
    t2 = (t0 + 4923789);
    t15 = xsi_vhdl_mod(*((int *)t2), 100);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB95;

LAB97:
LAB96:
LAB88:    t2 = (t0 + 4923789);
    t17 = *((int *)t2);
    t3 = (t0 + 4923793);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB89;

LAB98:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 4923789);
    *((int *)t4) = t17;
    goto LAB86;

LAB91:    xsi_set_current_line(284, ng4);
    t6 = (t0 + 3680);
    t9 = (t0 + 2928U);
    t11 = (t0 + 2128U);
    t13 = *((char **)t11);
    t11 = (t0 + 4923789);
    t22 = *((int *)t11);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t24 = (t16 * 640U);
    t14 = (t0 + 4923797);
    t25 = *((int *)t14);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t14));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t32 = (t13 + t30);
    t48 = *((int *)t32);
    std_textio_write5(STD_TEXTIO, t6, t9, t48, (unsigned char)0, 0);
    xsi_set_current_line(285, ng4);
    t2 = (t0 + 3680);
    t3 = (t0 + 2680U);
    t4 = (t0 + 2928U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB92:    t2 = (t0 + 4923797);
    t20 = *((int *)t2);
    t3 = (t0 + 4923801);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB93;

LAB94:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 4923797);
    *((int *)t4) = t20;
    goto LAB90;

LAB95:    xsi_set_current_line(289, ng4);
    t3 = (t0 + 4923805);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4923789);
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
    t33 = (t0 + 4923815);
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
    t47 = (t10 + 12U);
    t16 = *((unsigned int *)t47);
    t24 = (10U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    xsi_report(t44, t28, 0);
    goto LAB96;

LAB99:    goto LAB2;

LAB100:    goto LAB99;

LAB102:    goto LAB100;

}


extern void work_a_3524752965_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3524752965_3212880686_p_0};
	static char *se[] = {(void *)work_a_3524752965_3212880686_sub_2489298628_3057020925,(void *)work_a_3524752965_3212880686_sub_639026599_3579431146,(void *)work_a_3524752965_3212880686_sub_982417968_3579431146,(void *)work_a_3524752965_3212880686_sub_1861156582_3579431146,(void *)work_a_3524752965_3212880686_sub_3437706077_3579431146,(void *)work_a_3524752965_3212880686_sub_2001254363_3579431146};
	xsi_register_didat("work_a_3524752965_3212880686", "isim/morphology_simple_effective_isim_beh.exe.sim/work/a_3524752965_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
