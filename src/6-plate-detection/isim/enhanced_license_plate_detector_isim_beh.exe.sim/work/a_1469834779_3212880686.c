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
static const char *ng1 = "Function max ended without a return statement";
static const char *ng2 = "Function min ended without a return statement";
static const char *ng3 = "Function abs_diff ended without a return statement";
extern char *STD_STANDARD;
static const char *ng5 = "Function regions_overlap ended without a return statement";
static const char *ng6 = "E:/project/Ise/Licens_Plate_Recognition/plate-detection-6/plate_detection.vhd";
extern char *STD_TEXTIO;



int work_a_1469834779_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
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

int work_a_1469834779_3212880686_sub_3202332950_3057020925(char *t1, int t2, int t3)
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

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int work_a_1469834779_3212880686_sub_3202609556_3057020925(char *t1, int t2, int t3)
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

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int work_a_1469834779_3212880686_sub_2812277502_3057020925(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;
    int t9;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 > t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t9 = (t3 - t2);
    t0 = t9;

LAB1:    return t0;
LAB2:    t9 = (t2 - t3);
    t0 = t9;
    goto LAB1;

LAB3:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

unsigned char work_a_1469834779_3212880686_sub_2780842967_3057020925(char *t1, int t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 >= 200);
    t0 = t6;

LAB1:    return t0;
LAB2:;
}

unsigned char work_a_1469834779_3212880686_sub_1403480711_3057020925(char *t1, int t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 >= 150);
    t0 = t6;

LAB1:    return t0;
LAB2:;
}

unsigned char work_a_1469834779_3212880686_sub_1416977871_3057020925(char *t1, char *t2, int t3, int t4)
{
    char t5[248];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    unsigned char t0;
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
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    int t34;
    unsigned char t35;
    unsigned char t36;
    int t37;
    unsigned char t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    int t55;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 479;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (479 - 0);
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
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t6 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t6 + 12U);
    *((char **)t27) = t7;
    t28 = (t6 + 20U);
    *((int *)t28) = t3;
    t29 = (t6 + 24U);
    *((int *)t29) = t4;
    t33 = (t3 <= 0);
    if (t33 == 1)
        goto LAB13;

LAB14:    t34 = (640 - 1);
    t35 = (t3 >= t34);
    t32 = t35;

LAB15:    if (t32 == 1)
        goto LAB10;

LAB11:    t36 = (t4 <= 0);
    t31 = t36;

LAB12:    if (t31 == 1)
        goto LAB7;

LAB8:    t37 = (480 - 1);
    t38 = (t4 >= t37);
    t30 = t38;

LAB9:    if (t30 != 0)
        goto LAB4;

LAB6:
LAB5:    t10 = (t4 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t4);
    t39 = (t11 * 640U);
    t13 = (t3 + 1);
    t34 = (t13 - 0);
    t40 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t13);
    t41 = (t39 + t40);
    t42 = (4U * t41);
    t43 = (0 + t42);
    t8 = (t2 + t43);
    t37 = *((int *)t8);
    t44 = (t4 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t4);
    t46 = (t45 * 640U);
    t47 = (t3 - 1);
    t48 = (t47 - 0);
    t49 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t47);
    t50 = (t46 + t49);
    t51 = (4U * t50);
    t52 = (0 + t51);
    t9 = (t2 + t52);
    t53 = *((int *)t9);
    t54 = (t37 - t53);
    t55 = (t54>=0?t54: -t54);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t55;
    t10 = (t4 + 1);
    t13 = (t10 - 0);
    t11 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t10);
    t39 = (t11 * 640U);
    t34 = (t3 - 0);
    t40 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t41 = (t39 + t40);
    t42 = (4U * t41);
    t43 = (0 + t42);
    t8 = (t2 + t43);
    t37 = *((int *)t8);
    t44 = (t4 - 1);
    t47 = (t44 - 0);
    t45 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t44);
    t46 = (t45 * 640U);
    t48 = (t3 - 0);
    t49 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t50 = (t46 + t49);
    t51 = (4U * t50);
    t52 = (0 + t51);
    t9 = (t2 + t52);
    t53 = *((int *)t9);
    t54 = (t37 - t53);
    t55 = (t54>=0?t54: -t54);
    t14 = (t19 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t55;
    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t34 = (t10 + t13);
    t26 = (t34 > 150);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB4:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t30 = (unsigned char)1;
    goto LAB9;

LAB10:    t31 = (unsigned char)1;
    goto LAB12;

LAB13:    t32 = (unsigned char)1;
    goto LAB15;

LAB16:    goto LAB5;

LAB17:;
}

int work_a_1469834779_3212880686_sub_650732511_3057020925(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;
    int t9;
    int t10;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t3 == 0);
    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    t9 = (t2 * 1000);
    t10 = (t9 / t3);
    t0 = t10;

LAB1:    return t0;
LAB2:    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:;
}

int work_a_1469834779_3212880686_sub_3016499035_3057020925(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;
    int t9;
    int t10;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t3 == 0);
    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    t9 = (t2 * 100000);
    t10 = (t9 / t3);
    t0 = t10;

LAB1:    return t0;
LAB2:    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:;
}

int work_a_1469834779_3212880686_sub_2307700616_3579431146(char *t1, char *t2, char *t3, int t4, int t5)
{
    char t6[1328];
    char t7[40];
    char t8[32];
    char t17[8];
    char t23[8];
    char t29[8];
    char t35[8];
    char t41[8];
    char t47[8];
    char t53[8];
    char t59[8];
    char t65[8];
    char t71[8];
    char t77[8];
    int t0;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    unsigned char t81;
    char *t82;
    char *t83;
    unsigned char t84;
    char *t85;
    char *t86;
    char *t87;
    int t88;
    int t89;
    char *t90;
    char *t91;
    unsigned char t92;
    int t93;
    int t94;
    unsigned int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned char t107;
    unsigned char t108;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 479;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (479 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t8 + 16U);
    t13 = (t10 + 0U);
    *((int *)t13) = 0;
    t13 = (t10 + 4U);
    *((int *)t13) = 639;
    t13 = (t10 + 8U);
    *((int *)t13) = 1;
    t14 = (639 - 0);
    t12 = (t14 * 1);
    t12 = (t12 + 1);
    t13 = (t10 + 12U);
    *((unsigned int *)t13) = t12;
    t13 = (t6 + 4U);
    t15 = ((STD_STANDARD) + 384);
    t16 = (t13 + 88U);
    *((char **)t16) = t15;
    t18 = (t13 + 56U);
    *((char **)t18) = t17;
    *((int *)t17) = 0;
    t19 = (t13 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = 0;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t26 = (t6 + 244U);
    t27 = ((STD_STANDARD) + 384);
    t28 = (t26 + 88U);
    *((char **)t28) = t27;
    t30 = (t26 + 56U);
    *((char **)t30) = t29;
    *((int *)t29) = 0;
    t31 = (t26 + 80U);
    *((unsigned int *)t31) = 4U;
    t32 = (t6 + 364U);
    t33 = ((STD_STANDARD) + 384);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    *((int *)t35) = 0;
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t6 + 484U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t6 + 604U);
    t45 = ((STD_STANDARD) + 384);
    t46 = (t44 + 88U);
    *((char **)t46) = t45;
    t48 = (t44 + 56U);
    *((char **)t48) = t47;
    xsi_type_set_default_value(t45, t47, 0);
    t49 = (t44 + 80U);
    *((unsigned int *)t49) = 4U;
    t50 = (t6 + 724U);
    t51 = ((STD_STANDARD) + 384);
    t52 = (t50 + 88U);
    *((char **)t52) = t51;
    t54 = (t50 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, 0);
    t55 = (t50 + 80U);
    *((unsigned int *)t55) = 4U;
    t56 = (t6 + 844U);
    t57 = ((STD_STANDARD) + 384);
    t58 = (t56 + 88U);
    *((char **)t58) = t57;
    t60 = (t56 + 56U);
    *((char **)t60) = t59;
    xsi_type_set_default_value(t57, t59, 0);
    t61 = (t56 + 80U);
    *((unsigned int *)t61) = 4U;
    t62 = (t6 + 964U);
    t63 = ((STD_STANDARD) + 384);
    t64 = (t62 + 88U);
    *((char **)t64) = t63;
    t66 = (t62 + 56U);
    *((char **)t66) = t65;
    *((int *)t65) = 0;
    t67 = (t62 + 80U);
    *((unsigned int *)t67) = 4U;
    t68 = (t6 + 1084U);
    t69 = ((STD_STANDARD) + 384);
    t70 = (t68 + 88U);
    *((char **)t70) = t69;
    t72 = (t68 + 56U);
    *((char **)t72) = t71;
    *((int *)t71) = 2;
    t73 = (t68 + 80U);
    *((unsigned int *)t73) = 4U;
    t74 = (t6 + 1204U);
    t75 = ((STD_STANDARD) + 384);
    t76 = (t74 + 88U);
    *((char **)t76) = t75;
    t78 = (t74 + 56U);
    *((char **)t78) = t77;
    xsi_type_set_default_value(t75, t77, 0);
    t79 = (t74 + 80U);
    *((unsigned int *)t79) = 4U;
    t80 = (t7 + 4U);
    t81 = (t2 != 0);
    if (t81 == 1)
        goto LAB3;

LAB2:    t82 = (t7 + 12U);
    *((char **)t82) = t8;
    t83 = (t7 + 20U);
    t84 = (t3 != 0);
    if (t84 == 1)
        goto LAB5;

LAB4:    t85 = (t7 + 28U);
    *((int *)t85) = t4;
    t86 = (t7 + 32U);
    *((int *)t86) = t5;
    t12 = (0 + 20U);
    t87 = (t3 + t12);
    t88 = *((int *)t87);
    t89 = (t88 + 2);
    t90 = (t74 + 56U);
    t91 = *((char **)t90);
    t90 = (t91 + 0);
    *((int *)t90) = t89;
    t11 = 1;
    t14 = t5;

LAB6:    if (t11 <= t14)
        goto LAB7;

LAB9:    t0 = t5;

LAB1:    return t0;
LAB3:    *((char **)t80) = t2;
    goto LAB2;

LAB5:    *((char **)t83) = t3;
    goto LAB4;

LAB7:    t81 = (t4 < 0);
    if (t81 != 0)
        goto LAB10;

LAB12:    t12 = (0 + 4U);
    t9 = (t3 + t12);
    t88 = *((int *)t9);
    t89 = (t88 + t11);
    t10 = (t38 + 56U);
    t15 = *((char **)t10);
    t10 = (t15 + 0);
    *((int *)t10) = t89;

LAB11:    t9 = (t38 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t84 = (t88 < 0);
    if (t84 == 1)
        goto LAB16;

LAB17:    t9 = (t38 + 56U);
    t15 = *((char **)t9);
    t89 = *((int *)t15);
    t92 = (t89 >= 640);
    t81 = t92;

LAB18:    if (t81 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t44 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = 0;
    t9 = (t50 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = 0;
    t9 = (t56 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = 0;
    t88 = (480 - 1);
    t12 = (0 + 12U);
    t9 = (t3 + t12);
    t89 = *((int *)t9);
    t93 = (t89 + 1);
    t94 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t88, t93);
    t95 = (0 + 8U);
    t10 = (t3 + t95);
    t96 = *((int *)t10);
    t97 = (t96 - 1);
    t98 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 0, t97);
    t99 = t98;
    t100 = t94;

LAB20:    if (t99 <= t100)
        goto LAB21;

LAB23:    t9 = (t44 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t81 = (t88 == 0);
    if (t81 != 0)
        goto LAB34;

LAB36:    t9 = (t62 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = 0;

LAB35:    t9 = (t62 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t9 = (t68 + 56U);
    t15 = *((char **)t9);
    t89 = *((int *)t15);
    t81 = (t88 >= t89);
    if (t81 != 0)
        goto LAB37;

LAB39:
LAB38:    t92 = (t11 > 2);
    if (t92 == 1)
        goto LAB47;

LAB48:    t84 = (unsigned char)0;

LAB49:    if (t84 == 1)
        goto LAB44;

LAB45:    t81 = (unsigned char)0;

LAB46:    if (t81 != 0)
        goto LAB41;

LAB43:
LAB42:
LAB8:    if (t11 == t14)
        goto LAB9;

LAB51:    t88 = (t11 + 1);
    t11 = t88;
    goto LAB6;

LAB10:    t12 = (0 + 0U);
    t9 = (t3 + t12);
    t88 = *((int *)t9);
    t89 = (t88 - t11);
    t10 = (t38 + 56U);
    t15 = *((char **)t10);
    t10 = (t15 + 0);
    *((int *)t10) = t89;
    goto LAB11;

LAB13:    t93 = (t11 - 1);
    t0 = t93;
    goto LAB1;

LAB16:    t81 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB21:    t15 = (t32 + 56U);
    t16 = *((char **)t15);
    t101 = *((int *)t16);
    t102 = (t101 + 1);
    t15 = (t32 + 56U);
    t18 = *((char **)t15);
    t15 = (t18 + 0);
    *((int *)t15) = t102;
    t88 = (t99 - 0);
    t12 = (t88 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t99);
    t95 = (t12 * 640U);
    t9 = (t38 + 56U);
    t10 = *((char **)t9);
    t89 = *((int *)t10);
    t93 = (t89 - 0);
    t103 = (t93 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t89);
    t104 = (t95 + t103);
    t105 = (4U * t104);
    t106 = (0 + t105);
    t9 = (t2 + t106);
    t94 = *((int *)t9);
    t81 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t1, t94);
    if (t81 != 0)
        goto LAB24;

LAB26:
LAB25:    t88 = (t99 - 0);
    t12 = (t88 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t99);
    t95 = (t12 * 640U);
    t9 = (t38 + 56U);
    t10 = *((char **)t9);
    t89 = *((int *)t10);
    t93 = (t89 - 0);
    t103 = (t93 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t89);
    t104 = (t95 + t103);
    t105 = (4U * t104);
    t106 = (0 + t105);
    t9 = (t2 + t106);
    t94 = *((int *)t9);
    t81 = work_a_1469834779_3212880686_sub_2780842967_3057020925(t1, t94);
    if (t81 != 0)
        goto LAB27;

LAB29:
LAB28:    t9 = (t38 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t81 = work_a_1469834779_3212880686_sub_1416977871_3057020925(t1, t2, t88, t99);
    if (t81 != 0)
        goto LAB30;

LAB32:
LAB31:
LAB22:    if (t99 == t100)
        goto LAB23;

LAB33:    t88 = (t99 + 1);
    t99 = t88;
    goto LAB20;

LAB24:    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t96 = *((int *)t16);
    t97 = (t96 + 1);
    t15 = (t13 + 56U);
    t18 = *((char **)t15);
    t15 = (t18 + 0);
    *((int *)t15) = t97;
    t9 = (t44 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t89 = (t88 + 1);
    t9 = (t44 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((int *)t9) = t89;
    goto LAB25;

LAB27:    t15 = (t20 + 56U);
    t16 = *((char **)t15);
    t96 = *((int *)t16);
    t97 = (t96 + 1);
    t15 = (t20 + 56U);
    t18 = *((char **)t15);
    t15 = (t18 + 0);
    *((int *)t15) = t97;
    t9 = (t50 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t89 = (t88 + 1);
    t9 = (t50 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((int *)t9) = t89;
    goto LAB28;

LAB30:    t9 = (t26 + 56U);
    t15 = *((char **)t9);
    t89 = *((int *)t15);
    t93 = (t89 + 1);
    t9 = (t26 + 56U);
    t16 = *((char **)t9);
    t9 = (t16 + 0);
    *((int *)t9) = t93;
    t9 = (t56 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t89 = (t88 + 1);
    t9 = (t56 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((int *)t9) = t89;
    goto LAB31;

LAB34:    t9 = (t62 + 56U);
    t15 = *((char **)t9);
    t89 = *((int *)t15);
    t93 = (t89 + 1);
    t9 = (t62 + 56U);
    t16 = *((char **)t9);
    t9 = (t16 + 0);
    *((int *)t9) = t93;
    goto LAB35;

LAB37:    t9 = (t68 + 56U);
    t16 = *((char **)t9);
    t93 = *((int *)t16);
    t94 = (t11 - t93);
    t0 = t94;
    goto LAB1;

LAB40:    goto LAB38;

LAB41:    t93 = (t11 - 1);
    t0 = t93;
    goto LAB1;

LAB44:    t9 = (t44 + 56U);
    t15 = *((char **)t9);
    t89 = *((int *)t15);
    t108 = (t89 < 2);
    t81 = t108;
    goto LAB46;

LAB47:    t9 = (t56 + 56U);
    t10 = *((char **)t9);
    t88 = *((int *)t10);
    t107 = (t88 < 1);
    t84 = t107;
    goto LAB49;

LAB50:    goto LAB42;

LAB52:;
}

char *work_a_1469834779_3212880686_sub_3783596958_3579431146(char *t1, char *t2, char *t3, char *t4)
{
    char t5[1088];
    char t6[48];
    char t7[32];
    char t14[32];
    char t21[80];
    char t27[8];
    char t33[8];
    char t39[8];
    char t45[8];
    char t51[8];
    char t57[8];
    char t63[8];
    char t69[8];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t15;
    int t16;
    char *t17;
    int t18;
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
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    unsigned char t73;
    char *t74;
    char *t75;
    unsigned char t76;
    char *t77;
    unsigned char t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    int t97;
    int t98;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 479;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (479 - 0);
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
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 479;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t16 = (479 - 0);
    t11 = (t16 * 1);
    t11 = (t11 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t11;
    t15 = (t14 + 16U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 639;
    t17 = (t15 + 8U);
    *((int *)t17) = 1;
    t18 = (639 - 0);
    t11 = (t18 * 1);
    t11 = (t11 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t11;
    t17 = (t5 + 4U);
    t19 = (t1 + 10248);
    t20 = (t17 + 88U);
    *((char **)t20) = t19;
    t22 = (t17 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t17 + 80U);
    *((unsigned int *)t23) = 80U;
    t24 = (t5 + 124U);
    t25 = ((STD_STANDARD) + 0);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    *((unsigned char *)t27) = (unsigned char)0;
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 1U;
    t30 = (t5 + 244U);
    t31 = ((STD_STANDARD) + 0);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    *((unsigned char *)t33) = (unsigned char)0;
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 1U;
    t36 = (t5 + 364U);
    t37 = ((STD_STANDARD) + 0);
    t38 = (t36 + 88U);
    *((char **)t38) = t37;
    t40 = (t36 + 56U);
    *((char **)t40) = t39;
    *((unsigned char *)t39) = (unsigned char)0;
    t41 = (t36 + 80U);
    *((unsigned int *)t41) = 1U;
    t42 = (t5 + 484U);
    t43 = ((STD_STANDARD) + 0);
    t44 = (t42 + 88U);
    *((char **)t44) = t43;
    t46 = (t42 + 56U);
    *((char **)t46) = t45;
    *((unsigned char *)t45) = (unsigned char)0;
    t47 = (t42 + 80U);
    *((unsigned int *)t47) = 1U;
    t48 = (t5 + 604U);
    t49 = ((STD_STANDARD) + 384);
    t50 = (t48 + 88U);
    *((char **)t50) = t49;
    t52 = (t48 + 56U);
    *((char **)t52) = t51;
    *((int *)t51) = 3;
    t53 = (t48 + 80U);
    *((unsigned int *)t53) = 4U;
    t54 = (t5 + 724U);
    t55 = ((STD_STANDARD) + 384);
    t56 = (t54 + 88U);
    *((char **)t56) = t55;
    t58 = (t54 + 56U);
    *((char **)t58) = t57;
    *((int *)t57) = 2;
    t59 = (t54 + 80U);
    *((unsigned int *)t59) = 4U;
    t60 = (t5 + 844U);
    t61 = ((STD_STANDARD) + 384);
    t62 = (t60 + 88U);
    *((char **)t62) = t61;
    t64 = (t60 + 56U);
    *((char **)t64) = t63;
    xsi_type_set_default_value(t61, t63, 0);
    t65 = (t60 + 80U);
    *((unsigned int *)t65) = 4U;
    t66 = (t5 + 964U);
    t67 = ((STD_STANDARD) + 384);
    t68 = (t66 + 88U);
    *((char **)t68) = t67;
    t70 = (t66 + 56U);
    *((char **)t70) = t69;
    xsi_type_set_default_value(t67, t69, 0);
    t71 = (t66 + 80U);
    *((unsigned int *)t71) = 4U;
    t72 = (t6 + 4U);
    t73 = (t2 != 0);
    if (t73 == 1)
        goto LAB3;

LAB2:    t74 = (t6 + 12U);
    *((char **)t74) = t7;
    t75 = (t6 + 20U);
    t76 = (t3 != 0);
    if (t76 == 1)
        goto LAB5;

LAB4:    t77 = (t6 + 28U);
    t78 = (t4 != 0);
    if (t78 == 1)
        goto LAB7;

LAB6:    t79 = (t6 + 36U);
    *((char **)t79) = t14;
    t80 = (t17 + 56U);
    t81 = *((char **)t80);
    t80 = (t81 + 0);
    memcpy(t80, t3, 80U);
    t11 = (0 + 4U);
    t8 = (t3 + t11);
    t10 = *((int *)t8);
    t13 = (640 - 1);
    t16 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t10, t13);
    t82 = (0 + 0U);
    t9 = (t3 + t82);
    t18 = *((int *)t9);
    t83 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, 0);
    t84 = t83;
    t85 = t16;

LAB8:    if (t84 <= t85)
        goto LAB9;

LAB11:    t11 = (0 + 0U);
    t8 = (t3 + t11);
    t10 = *((int *)t8);
    t13 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t10, 0);
    t82 = (0 + 4U);
    t9 = (t3 + t82);
    t16 = *((int *)t9);
    t18 = (640 - 1);
    t83 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t16, t18);
    t84 = t83;
    t85 = t13;

LAB31:    if (t84 >= t85)
        goto LAB32;

LAB34:    t11 = (0 + 8U);
    t8 = (t3 + t11);
    t10 = *((int *)t8);
    t82 = (0 + 20U);
    t9 = (t3 + t82);
    t13 = *((int *)t9);
    t16 = (t13 / 2);
    t18 = (t10 + t16);
    t83 = (480 - 1);
    t84 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t18, t83);
    t89 = (0 + 8U);
    t12 = (t3 + t89);
    t85 = *((int *)t12);
    t86 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t85, 0);
    t87 = t86;
    t88 = t84;

LAB54:    if (t87 <= t88)
        goto LAB55;

LAB57:    t11 = (0 + 12U);
    t8 = (t3 + t11);
    t10 = *((int *)t8);
    t82 = (0 + 20U);
    t9 = (t3 + t82);
    t13 = *((int *)t9);
    t16 = (t13 / 2);
    t18 = (t10 - t16);
    t83 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, 0);
    t89 = (0 + 12U);
    t12 = (t3 + t89);
    t84 = *((int *)t12);
    t85 = (480 - 1);
    t86 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t84, t85);
    t87 = t86;
    t88 = t83;

LAB71:    if (t87 >= t88)
        goto LAB72;

LAB74:    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t82 = (0 + 0U);
    t12 = (t15 + t82);
    t13 = *((int *)t12);
    t16 = (t10 - t13);
    t18 = (t16 + 1);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t89 = (0 + 16U);
    t19 = (t20 + t89);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 12U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t82 = (0 + 8U);
    t12 = (t15 + t82);
    t13 = *((int *)t12);
    t16 = (t10 - t13);
    t18 = (t16 + 1);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t89 = (0 + 20U);
    t19 = (t20 + t89);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 0U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t82 = (0 + 4U);
    t12 = (t15 + t82);
    t13 = *((int *)t12);
    t16 = (t10 + t13);
    t18 = (t16 / 2);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t89 = (0 + 72U);
    t19 = (t20 + t89);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 8U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t82 = (0 + 12U);
    t12 = (t15 + t82);
    t13 = *((int *)t12);
    t16 = (t10 + t13);
    t18 = (t16 / 2);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t89 = (0 + 76U);
    t19 = (t20 + t89);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t0 = xsi_get_transient_memory(80U);
    memcpy(t0, t9, 80U);

LAB1:    return t0;
LAB3:    *((char **)t72) = t2;
    goto LAB2;

LAB5:    *((char **)t75) = t3;
    goto LAB4;

LAB7:    *((char **)t77) = t4;
    goto LAB6;

LAB9:    t12 = (t60 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = 0;
    t8 = (t66 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = 0;
    t11 = (0 + 12U);
    t8 = (t3 + t11);
    t10 = *((int *)t8);
    t13 = (480 - 1);
    t16 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t10, t13);
    t82 = (0 + 8U);
    t9 = (t3 + t82);
    t18 = *((int *)t9);
    t83 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, 0);
    t86 = t83;
    t87 = t16;

LAB12:    if (t86 <= t87)
        goto LAB13;

LAB15:    t8 = (t60 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t76 = (t10 >= t13);
    if (t76 == 1)
        goto LAB26;

LAB27:    t8 = (t66 + 56U);
    t15 = *((char **)t8);
    t16 = *((int *)t15);
    t8 = (t54 + 56U);
    t19 = *((char **)t8);
    t18 = *((int *)t19);
    t78 = (t16 >= t18);
    t73 = t78;

LAB28:    if (t73 != 0)
        goto LAB23;

LAB25:
LAB24:
LAB10:    if (t84 == t85)
        goto LAB11;

LAB30:    t10 = (t84 + 1);
    t84 = t10;
    goto LAB8;

LAB13:    t88 = (t86 - 0);
    t89 = (t88 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t86);
    t90 = (t89 * 640U);
    t91 = (t84 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t84);
    t93 = (t90 + t92);
    t94 = (4U * t93);
    t95 = (0 + t94);
    t12 = (t2 + t95);
    t96 = *((int *)t12);
    t73 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t1, t96);
    if (t73 != 0)
        goto LAB16;

LAB18:
LAB17:    t10 = (t86 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t86);
    t82 = (t11 * 640U);
    t13 = (t84 - 0);
    t89 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t84);
    t90 = (t82 + t89);
    t92 = (1U * t90);
    t93 = (0 + t92);
    t8 = (t4 + t93);
    t73 = *((unsigned char *)t8);
    if (t73 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB14:    if (t86 == t87)
        goto LAB15;

LAB22:    t10 = (t86 + 1);
    t86 = t10;
    goto LAB12;

LAB16:    t15 = (t60 + 56U);
    t19 = *((char **)t15);
    t97 = *((int *)t19);
    t98 = (t97 + 1);
    t15 = (t60 + 56U);
    t20 = *((char **)t15);
    t15 = (t20 + 0);
    *((int *)t15) = t98;
    goto LAB17;

LAB19:    t9 = (t66 + 56U);
    t12 = *((char **)t9);
    t16 = *((int *)t12);
    t18 = (t16 + 1);
    t9 = (t66 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((int *)t9) = t18;
    goto LAB20;

LAB23:    t8 = (t17 + 56U);
    t20 = *((char **)t8);
    t11 = (0 + 0U);
    t8 = (t20 + t11);
    *((int *)t8) = t84;
    t8 = (t24 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB11;

LAB26:    t73 = (unsigned char)1;
    goto LAB28;

LAB29:    goto LAB24;

LAB32:    t12 = (t60 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = 0;
    t8 = (t66 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = 0;
    t11 = (0 + 12U);
    t8 = (t3 + t11);
    t10 = *((int *)t8);
    t13 = (480 - 1);
    t16 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t10, t13);
    t82 = (0 + 8U);
    t9 = (t3 + t82);
    t18 = *((int *)t9);
    t83 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, 0);
    t86 = t83;
    t87 = t16;

LAB35:    if (t86 <= t87)
        goto LAB36;

LAB38:    t8 = (t60 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t76 = (t10 >= t13);
    if (t76 == 1)
        goto LAB49;

LAB50:    t8 = (t66 + 56U);
    t15 = *((char **)t8);
    t16 = *((int *)t15);
    t8 = (t54 + 56U);
    t19 = *((char **)t8);
    t18 = *((int *)t19);
    t78 = (t16 >= t18);
    t73 = t78;

LAB51:    if (t73 != 0)
        goto LAB46;

LAB48:
LAB47:
LAB33:    if (t84 == t85)
        goto LAB34;

LAB53:    t10 = (t84 + -1);
    t84 = t10;
    goto LAB31;

LAB36:    t88 = (t86 - 0);
    t89 = (t88 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t86);
    t90 = (t89 * 640U);
    t91 = (t84 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t84);
    t93 = (t90 + t92);
    t94 = (4U * t93);
    t95 = (0 + t94);
    t12 = (t2 + t95);
    t96 = *((int *)t12);
    t73 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t1, t96);
    if (t73 != 0)
        goto LAB39;

LAB41:
LAB40:    t10 = (t86 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t86);
    t82 = (t11 * 640U);
    t13 = (t84 - 0);
    t89 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t84);
    t90 = (t82 + t89);
    t92 = (1U * t90);
    t93 = (0 + t92);
    t8 = (t4 + t93);
    t73 = *((unsigned char *)t8);
    if (t73 != 0)
        goto LAB42;

LAB44:
LAB43:
LAB37:    if (t86 == t87)
        goto LAB38;

LAB45:    t10 = (t86 + 1);
    t86 = t10;
    goto LAB35;

LAB39:    t15 = (t60 + 56U);
    t19 = *((char **)t15);
    t97 = *((int *)t19);
    t98 = (t97 + 1);
    t15 = (t60 + 56U);
    t20 = *((char **)t15);
    t15 = (t20 + 0);
    *((int *)t15) = t98;
    goto LAB40;

LAB42:    t9 = (t66 + 56U);
    t12 = *((char **)t9);
    t16 = *((int *)t12);
    t18 = (t16 + 1);
    t9 = (t66 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((int *)t9) = t18;
    goto LAB43;

LAB46:    t8 = (t17 + 56U);
    t20 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t20 + t11);
    *((int *)t8) = t84;
    t8 = (t30 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB34;

LAB49:    t73 = (unsigned char)1;
    goto LAB51;

LAB52:    goto LAB47;

LAB55:    t15 = (t60 + 56U);
    t19 = *((char **)t15);
    t15 = (t19 + 0);
    *((int *)t15) = 0;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t13 = (640 - 1);
    t16 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t10, t13);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t82 = (0 + 0U);
    t12 = (t15 + t82);
    t18 = *((int *)t12);
    t83 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, 0);
    t84 = t83;
    t85 = t16;

LAB58:    if (t84 <= t85)
        goto LAB59;

LAB61:    t8 = (t60 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t73 = (t10 >= t13);
    if (t73 != 0)
        goto LAB66;

LAB68:
LAB67:
LAB56:    if (t87 == t88)
        goto LAB57;

LAB70:    t10 = (t87 + 1);
    t87 = t10;
    goto LAB54;

LAB59:    t86 = (t87 - 0);
    t89 = (t86 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t87);
    t90 = (t89 * 640U);
    t91 = (t84 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t84);
    t93 = (t90 + t92);
    t94 = (4U * t93);
    t95 = (0 + t94);
    t19 = (t2 + t95);
    t96 = *((int *)t19);
    t73 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t1, t96);
    if (t73 != 0)
        goto LAB62;

LAB64:
LAB63:
LAB60:    if (t84 == t85)
        goto LAB61;

LAB65:    t10 = (t84 + 1);
    t84 = t10;
    goto LAB58;

LAB62:    t20 = (t60 + 56U);
    t22 = *((char **)t20);
    t97 = *((int *)t22);
    t98 = (t97 + 1);
    t20 = (t60 + 56U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    *((int *)t20) = t98;
    goto LAB63;

LAB66:    t8 = (t17 + 56U);
    t15 = *((char **)t8);
    t11 = (0 + 8U);
    t8 = (t15 + t11);
    *((int *)t8) = t87;
    t8 = (t36 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB57;

LAB69:    goto LAB67;

LAB72:    t15 = (t60 + 56U);
    t19 = *((char **)t15);
    t15 = (t19 + 0);
    *((int *)t15) = 0;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t13 = (640 - 1);
    t16 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t10, t13);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t82 = (0 + 0U);
    t12 = (t15 + t82);
    t18 = *((int *)t12);
    t83 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, 0);
    t84 = t83;
    t85 = t16;

LAB75:    if (t84 <= t85)
        goto LAB76;

LAB78:    t8 = (t60 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t73 = (t10 >= t13);
    if (t73 != 0)
        goto LAB83;

LAB85:
LAB84:
LAB73:    if (t87 == t88)
        goto LAB74;

LAB87:    t10 = (t87 + -1);
    t87 = t10;
    goto LAB71;

LAB76:    t86 = (t87 - 0);
    t89 = (t86 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t87);
    t90 = (t89 * 640U);
    t91 = (t84 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t84);
    t93 = (t90 + t92);
    t94 = (4U * t93);
    t95 = (0 + t94);
    t19 = (t2 + t95);
    t96 = *((int *)t19);
    t73 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t1, t96);
    if (t73 != 0)
        goto LAB79;

LAB81:
LAB80:
LAB77:    if (t84 == t85)
        goto LAB78;

LAB82:    t10 = (t84 + 1);
    t84 = t10;
    goto LAB75;

LAB79:    t20 = (t60 + 56U);
    t22 = *((char **)t20);
    t97 = *((int *)t22);
    t98 = (t97 + 1);
    t20 = (t60 + 56U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    *((int *)t20) = t98;
    goto LAB80;

LAB83:    t8 = (t17 + 56U);
    t15 = *((char **)t8);
    t11 = (0 + 12U);
    t8 = (t15 + t11);
    *((int *)t8) = t87;
    t8 = (t42 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB74;

LAB86:    goto LAB84;

LAB88:;
}

char *work_a_1469834779_3212880686_sub_1204415402_3579431146(char *t1, char *t2, char *t3, int t4, int t5, char *t6)
{
    char t7[1328];
    char t8[56];
    char t9[32];
    char t16[32];
    char t23[80];
    char t29[8];
    char t35[8];
    char t41[8];
    char t47[8];
    char t53[8];
    char t59[8];
    char t65[8];
    char t71[8];
    char t77[8];
    char t83[8];
    char *t0;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned char t94;
    char *t95;
    char *t96;
    char *t97;
    int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 479;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (479 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t9 + 16U);
    t14 = (t11 + 0U);
    *((int *)t14) = 0;
    t14 = (t11 + 4U);
    *((int *)t14) = 639;
    t14 = (t11 + 8U);
    *((int *)t14) = 1;
    t15 = (639 - 0);
    t13 = (t15 * 1);
    t13 = (t13 + 1);
    t14 = (t11 + 12U);
    *((unsigned int *)t14) = t13;
    t14 = (t16 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 0;
    t17 = (t14 + 4U);
    *((int *)t17) = 479;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t18 = (479 - 0);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t13;
    t17 = (t16 + 16U);
    t19 = (t17 + 0U);
    *((int *)t19) = 0;
    t19 = (t17 + 4U);
    *((int *)t19) = 639;
    t19 = (t17 + 8U);
    *((int *)t19) = 1;
    t20 = (639 - 0);
    t13 = (t20 * 1);
    t13 = (t13 + 1);
    t19 = (t17 + 12U);
    *((unsigned int *)t19) = t13;
    t19 = (t7 + 4U);
    t21 = (t1 + 10248);
    t22 = (t19 + 88U);
    *((char **)t22) = t21;
    t24 = (t19 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, 0);
    t25 = (t19 + 80U);
    *((unsigned int *)t25) = 80U;
    t26 = (t7 + 124U);
    t27 = ((STD_STANDARD) + 384);
    t28 = (t26 + 88U);
    *((char **)t28) = t27;
    t30 = (t26 + 56U);
    *((char **)t30) = t29;
    xsi_type_set_default_value(t27, t29, 0);
    t31 = (t26 + 80U);
    *((unsigned int *)t31) = 4U;
    t32 = (t7 + 244U);
    t33 = ((STD_STANDARD) + 384);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, 0);
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t7 + 364U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t7 + 484U);
    t45 = ((STD_STANDARD) + 384);
    t46 = (t44 + 88U);
    *((char **)t46) = t45;
    t48 = (t44 + 56U);
    *((char **)t48) = t47;
    xsi_type_set_default_value(t45, t47, 0);
    t49 = (t44 + 80U);
    *((unsigned int *)t49) = 4U;
    t50 = (t7 + 604U);
    t51 = ((STD_STANDARD) + 384);
    t52 = (t50 + 88U);
    *((char **)t52) = t51;
    t54 = (t50 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, 0);
    t55 = (t50 + 80U);
    *((unsigned int *)t55) = 4U;
    t56 = (t7 + 724U);
    t57 = ((STD_STANDARD) + 384);
    t58 = (t56 + 88U);
    *((char **)t58) = t57;
    t60 = (t56 + 56U);
    *((char **)t60) = t59;
    xsi_type_set_default_value(t57, t59, 0);
    t61 = (t56 + 80U);
    *((unsigned int *)t61) = 4U;
    t62 = (t7 + 844U);
    t63 = ((STD_STANDARD) + 384);
    t64 = (t62 + 88U);
    *((char **)t64) = t63;
    t66 = (t62 + 56U);
    *((char **)t66) = t65;
    xsi_type_set_default_value(t63, t65, 0);
    t67 = (t62 + 80U);
    *((unsigned int *)t67) = 4U;
    t68 = (t7 + 964U);
    t69 = ((STD_STANDARD) + 384);
    t70 = (t68 + 88U);
    *((char **)t70) = t69;
    t72 = (t68 + 56U);
    *((char **)t72) = t71;
    xsi_type_set_default_value(t69, t71, 0);
    t73 = (t68 + 80U);
    *((unsigned int *)t73) = 4U;
    t74 = (t7 + 1084U);
    t75 = ((STD_STANDARD) + 384);
    t76 = (t74 + 88U);
    *((char **)t76) = t75;
    t78 = (t74 + 56U);
    *((char **)t78) = t77;
    xsi_type_set_default_value(t75, t77, 0);
    t79 = (t74 + 80U);
    *((unsigned int *)t79) = 4U;
    t80 = (t7 + 1204U);
    t81 = ((STD_STANDARD) + 384);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 4U;
    t86 = (t8 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t8 + 12U);
    *((char **)t88) = t9;
    t89 = (t8 + 20U);
    t90 = (t3 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t8 + 28U);
    *((int *)t91) = t4;
    t92 = (t8 + 32U);
    *((int *)t92) = t5;
    t93 = (t8 + 36U);
    t94 = (t6 != 0);
    if (t94 == 1)
        goto LAB7;

LAB6:    t95 = (t8 + 44U);
    *((char **)t95) = t16;
    t96 = (t19 + 56U);
    t97 = *((char **)t96);
    t96 = (t97 + 0);
    memcpy(t96, t3, 80U);
    t13 = (0 + 16U);
    t10 = (t3 + t13);
    t12 = *((int *)t10);
    t15 = (t12 * 8);
    t18 = (t15 / 100);
    t20 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 2, t18);
    t11 = (t26 + 56U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((int *)t11) = t20;
    t13 = (0 + 20U);
    t10 = (t3 + t13);
    t12 = *((int *)t10);
    t15 = (t12 * 10);
    t18 = (t15 / 100);
    t20 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 1, t18);
    t11 = (t32 + 56U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((int *)t11) = t20;
    t12 = (-(1));
    t15 = work_a_1469834779_3212880686_sub_2307700616_3579431146(t1, t2, t3, t12, 20);
    t10 = (t38 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t15;
    t12 = work_a_1469834779_3212880686_sub_2307700616_3579431146(t1, t2, t3, 1, 20);
    t10 = (t44 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t12;
    t10 = (t74 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;
    t10 = (t80 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;
    t12 = 1;
    t15 = 20;

LAB8:    if (t12 <= t15)
        goto LAB9;

LAB11:    t10 = (t26 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = (t12 + 2);
    t10 = (t38 + 56U);
    t14 = *((char **)t10);
    t18 = *((int *)t14);
    t10 = (t74 + 56U);
    t17 = *((char **)t10);
    t20 = *((int *)t17);
    t98 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, t20);
    t100 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t15, t98);
    t10 = (t50 + 56U);
    t21 = *((char **)t10);
    t10 = (t21 + 0);
    *((int *)t10) = t100;
    t10 = (t26 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = (t12 + 2);
    t10 = (t44 + 56U);
    t14 = *((char **)t10);
    t18 = *((int *)t14);
    t10 = (t80 + 56U);
    t17 = *((char **)t10);
    t20 = *((int *)t17);
    t98 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t18, t20);
    t100 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t15, t98);
    t10 = (t56 + 56U);
    t21 = *((char **)t10);
    t10 = (t21 + 0);
    *((int *)t10) = t100;
    t10 = (t32 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = (t12 / 2);
    t18 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 1, t15);
    t10 = (t62 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t18;
    t10 = (t32 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 1, t12);
    t10 = (t68 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t15;
    t13 = (0 + 0U);
    t10 = (t3 + t13);
    t12 = *((int *)t10);
    t11 = (t50 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t4 - 1);
    t98 = work_a_1469834779_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t99 = (0 + 0U);
    t11 = (t17 + t99);
    *((int *)t11) = t98;
    t13 = (0 + 4U);
    t10 = (t3 + t13);
    t12 = *((int *)t10);
    t11 = (t56 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t4 - 1);
    t98 = work_a_1469834779_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t99 = (0 + 4U);
    t11 = (t17 + t99);
    *((int *)t11) = t98;
    t13 = (0 + 8U);
    t10 = (t3 + t13);
    t12 = *((int *)t10);
    t11 = (t62 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t5 - 1);
    t98 = work_a_1469834779_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t99 = (0 + 8U);
    t11 = (t17 + t99);
    *((int *)t11) = t98;
    t13 = (0 + 12U);
    t10 = (t3 + t13);
    t12 = *((int *)t10);
    t11 = (t68 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t5 - 1);
    t98 = work_a_1469834779_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t99 = (0 + 12U);
    t11 = (t17 + t99);
    *((int *)t11) = t98;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 4U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t99 = (0 + 0U);
    t14 = (t17 + t99);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t18 + 1);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t102 = (0 + 16U);
    t21 = (t22 + t102);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 12U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t99 = (0 + 8U);
    t14 = (t17 + t99);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t18 + 1);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t102 = (0 + 20U);
    t21 = (t22 + t102);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 0U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t99 = (0 + 4U);
    t14 = (t17 + t99);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t18 / 2);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t102 = (0 + 72U);
    t21 = (t22 + t102);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 8U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t99 = (0 + 12U);
    t14 = (t17 + t99);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t18 / 2);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t102 = (0 + 76U);
    t21 = (t22 + t102);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t0 = xsi_get_transient_memory(80U);
    memcpy(t0, t11, 80U);

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t3;
    goto LAB4;

LAB7:    *((char **)t93) = t6;
    goto LAB6;

LAB9:    t13 = (0 + 0U);
    t10 = (t3 + t13);
    t18 = *((int *)t10);
    t20 = (t18 - t12);
    t87 = (t20 >= 0);
    if (t87 != 0)
        goto LAB12;

LAB14:
LAB13:    t13 = (0 + 4U);
    t10 = (t3 + t13);
    t18 = *((int *)t10);
    t20 = (t18 + t12);
    t87 = (t20 < 640);
    if (t87 != 0)
        goto LAB24;

LAB26:
LAB25:
LAB10:    if (t12 == t15)
        goto LAB11;

LAB36:    t18 = (t12 + 1);
    t12 = t18;
    goto LAB8;

LAB12:    t98 = (480 - 1);
    t99 = (0 + 12U);
    t11 = (t3 + t99);
    t100 = *((int *)t11);
    t101 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t98, t100);
    t102 = (0 + 8U);
    t14 = (t3 + t102);
    t103 = *((int *)t14);
    t104 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 0, t103);
    t105 = t104;
    t106 = t101;

LAB15:    if (t105 <= t106)
        goto LAB16;

LAB18:    goto LAB13;

LAB16:    t107 = (t105 - 0);
    t108 = (t107 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t105);
    t109 = (t108 * 640U);
    t110 = (0 + 0U);
    t17 = (t3 + t110);
    t111 = *((int *)t17);
    t112 = (t111 - t12);
    t113 = (t112 - 0);
    t114 = (t113 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t112);
    t115 = (t109 + t114);
    t116 = (1U * t115);
    t117 = (0 + t116);
    t21 = (t6 + t117);
    t90 = *((unsigned char *)t21);
    if (t90 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB17:    if (t105 == t106)
        goto LAB18;

LAB23:    t18 = (t105 + 1);
    t105 = t18;
    goto LAB15;

LAB19:    t22 = (t74 + 56U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    *((int *)t22) = t12;
    goto LAB18;

LAB22:    goto LAB20;

LAB24:    t98 = (480 - 1);
    t99 = (0 + 12U);
    t11 = (t3 + t99);
    t100 = *((int *)t11);
    t101 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t98, t100);
    t102 = (0 + 8U);
    t14 = (t3 + t102);
    t103 = *((int *)t14);
    t104 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 0, t103);
    t105 = t104;
    t106 = t101;

LAB27:    if (t105 <= t106)
        goto LAB28;

LAB30:    goto LAB25;

LAB28:    t107 = (t105 - 0);
    t108 = (t107 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t105);
    t109 = (t108 * 640U);
    t110 = (0 + 4U);
    t17 = (t3 + t110);
    t111 = *((int *)t17);
    t112 = (t111 + t12);
    t113 = (t112 - 0);
    t114 = (t113 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t112);
    t115 = (t109 + t114);
    t116 = (1U * t115);
    t117 = (0 + t116);
    t21 = (t6 + t117);
    t90 = *((unsigned char *)t21);
    if (t90 != 0)
        goto LAB31;

LAB33:
LAB32:
LAB29:    if (t105 == t106)
        goto LAB30;

LAB35:    t18 = (t105 + 1);
    t105 = t18;
    goto LAB27;

LAB31:    t22 = (t80 + 56U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    *((int *)t22) = t12;
    goto LAB30;

LAB34:    goto LAB32;

LAB37:;
}

unsigned char work_a_1469834779_3212880686_sub_4049322568_3579431146(char *t1, char *t2, char *t3, int t4)
{
    char t5[608];
    char t6[24];
    char t10[8];
    char t16[8];
    char t22[8];
    char t28[8];
    char t34[8];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
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
    unsigned char t40;
    char *t41;
    unsigned int t42;
    char *t43;
    int t44;
    unsigned int t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    char *t50;
    int t51;
    unsigned int t52;
    char *t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    char *t59;
    char *t60;
    unsigned char t61;
    int t62;
    unsigned char t63;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t5 + 124U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t5 + 244U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t25 = (t5 + 364U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t5 + 484U);
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
    t40 = (t3 != 0);
    if (t40 == 1)
        goto LAB5;

LAB4:    t41 = (t6 + 20U);
    *((int *)t41) = t4;
    t42 = (0 + 4U);
    t43 = (t2 + t42);
    t44 = *((int *)t43);
    t45 = (0 + 4U);
    t46 = (t3 + t45);
    t47 = *((int *)t46);
    t48 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t44, t47);
    t49 = (0 + 0U);
    t50 = (t2 + t49);
    t51 = *((int *)t50);
    t52 = (0 + 0U);
    t53 = (t3 + t52);
    t54 = *((int *)t53);
    t55 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t51, t54);
    t56 = (t48 - t55);
    t57 = (t56 + 1);
    t58 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 0, t57);
    t59 = (t7 + 56U);
    t60 = *((char **)t59);
    t59 = (t60 + 0);
    *((int *)t59) = t58;
    t42 = (0 + 12U);
    t8 = (t2 + t42);
    t44 = *((int *)t8);
    t45 = (0 + 12U);
    t9 = (t3 + t45);
    t47 = *((int *)t9);
    t48 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t44, t47);
    t49 = (0 + 8U);
    t11 = (t2 + t49);
    t51 = *((int *)t11);
    t52 = (0 + 8U);
    t12 = (t3 + t52);
    t54 = *((int *)t12);
    t55 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, t51, t54);
    t56 = (t48 - t55);
    t57 = (t56 + 1);
    t58 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t1, 0, t57);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t58;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t44 = *((int *)t9);
    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t47 = *((int *)t11);
    t48 = (t44 * t47);
    t8 = (t25 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t48;
    t42 = (0 + 16U);
    t8 = (t2 + t42);
    t44 = *((int *)t8);
    t45 = (0 + 20U);
    t9 = (t2 + t45);
    t47 = *((int *)t9);
    t48 = (t44 * t47);
    t49 = (0 + 16U);
    t11 = (t3 + t49);
    t51 = *((int *)t11);
    t52 = (0 + 20U);
    t12 = (t3 + t52);
    t54 = *((int *)t12);
    t55 = (t51 * t54);
    t56 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, t48, t55);
    t14 = (t19 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t56;
    t42 = (0 + 72U);
    t8 = (t2 + t42);
    t44 = *((int *)t8);
    t45 = (0 + 72U);
    t9 = (t3 + t45);
    t47 = *((int *)t9);
    t48 = (t44 - t47);
    t51 = (t48>=0?t48: -t48);
    t49 = (0 + 76U);
    t11 = (t2 + t49);
    t54 = *((int *)t11);
    t52 = (0 + 76U);
    t12 = (t3 + t52);
    t55 = *((int *)t12);
    t56 = (t54 - t55);
    t57 = (t56>=0?t56: -t56);
    t58 = (t51 + t57);
    t14 = (t31 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t58;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t44 = *((int *)t9);
    t38 = (t44 > 0);
    if (t38 != 0)
        goto LAB6;

LAB8:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB3:    *((char **)t37) = t2;
    goto LAB2;

LAB5:    *((char **)t39) = t3;
    goto LAB4;

LAB6:    t8 = (t25 + 56U);
    t11 = *((char **)t8);
    t47 = *((int *)t11);
    t48 = (t47 * 100);
    t8 = (t19 + 56U);
    t12 = *((char **)t8);
    t51 = *((int *)t12);
    t54 = (t48 / t51);
    t61 = (t54 >= t4);
    if (t61 == 1)
        goto LAB9;

LAB10:    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t55 = *((int *)t14);
    t42 = (0 + 16U);
    t8 = (t2 + t42);
    t56 = *((int *)t8);
    t45 = (0 + 16U);
    t15 = (t3 + t45);
    t57 = *((int *)t15);
    t58 = (t56 + t57);
    t62 = (t58 / 4);
    t63 = (t55 < t62);
    t40 = t63;

LAB11:    t0 = t40;
    goto LAB1;

LAB7:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB9:    t40 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    goto LAB7;

}

void work_a_1469834779_3212880686_sub_2407428414_3579431146(char *t0, char *t1, char *t2, char *t3, char *t4, int t5, int t6, int t7, char *t8)
{
    char t9[1208];
    char t10[72];
    char t11[32];
    char t18[32];
    char t23[32];
    char t28[16];
    char t33[160000];
    char t39[16];
    char t45[160000];
    char t55[8];
    char t61[8];
    char t67[8];
    char t73[8];
    char t79[8];
    char t85[8];
    char t91[8];
    char t97[8];
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t24;
    int t25;
    char *t26;
    int t27;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t98;
    char *t99;
    char *t100;
    unsigned char t101;
    char *t102;
    char *t103;
    unsigned char t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned char t113;
    unsigned char t114;
    unsigned char t115;
    unsigned char t116;
    unsigned char t117;
    unsigned int t118;
    unsigned int t119;
    unsigned char t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned char t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    unsigned int t136;
    int t137;
    unsigned int t138;
    unsigned char t139;
    unsigned char t140;
    int t141;
    int t142;
    int t143;
    unsigned char t144;
    int t145;
    int t146;
    int t147;
    unsigned char t148;
    int t149;
    int t150;

LAB0:    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 479;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (479 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t11 + 16U);
    t16 = (t13 + 0U);
    *((int *)t16) = 0;
    t16 = (t13 + 4U);
    *((int *)t16) = 639;
    t16 = (t13 + 8U);
    *((int *)t16) = 1;
    t17 = (639 - 0);
    t15 = (t17 * 1);
    t15 = (t15 + 1);
    t16 = (t13 + 12U);
    *((unsigned int *)t16) = t15;
    t16 = (t18 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = 0;
    t19 = (t16 + 4U);
    *((int *)t19) = 479;
    t19 = (t16 + 8U);
    *((int *)t19) = 1;
    t20 = (479 - 0);
    t15 = (t20 * 1);
    t15 = (t15 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t15;
    t19 = (t18 + 16U);
    t21 = (t19 + 0U);
    *((int *)t21) = 0;
    t21 = (t19 + 4U);
    *((int *)t21) = 639;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t22 = (639 - 0);
    t15 = (t22 * 1);
    t15 = (t15 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t15;
    t21 = (t23 + 0U);
    t24 = (t21 + 0U);
    *((int *)t24) = 0;
    t24 = (t21 + 4U);
    *((int *)t24) = 479;
    t24 = (t21 + 8U);
    *((int *)t24) = 1;
    t25 = (479 - 0);
    t15 = (t25 * 1);
    t15 = (t15 + 1);
    t24 = (t21 + 12U);
    *((unsigned int *)t24) = t15;
    t24 = (t23 + 16U);
    t26 = (t24 + 0U);
    *((int *)t26) = 0;
    t26 = (t24 + 4U);
    *((int *)t26) = 639;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t27 = (639 - 0);
    t15 = (t27 * 1);
    t15 = (t15 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t15;
    t26 = (t28 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = 0;
    t29 = (t26 + 4U);
    *((int *)t29) = 39999;
    t29 = (t26 + 8U);
    *((int *)t29) = 1;
    t30 = (39999 - 0);
    t15 = (t30 * 1);
    t15 = (t15 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t15;
    t29 = (t9 + 4U);
    t31 = (t0 + 10024);
    t32 = (t29 + 88U);
    *((char **)t32) = t31;
    t34 = (t29 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t29 + 64U);
    t36 = (t31 + 80U);
    t37 = *((char **)t36);
    *((char **)t35) = t37;
    t38 = (t29 + 80U);
    *((unsigned int *)t38) = 160000U;
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 0;
    t41 = (t40 + 4U);
    *((int *)t41) = 39999;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (39999 - 0);
    t15 = (t42 * 1);
    t15 = (t15 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t15;
    t41 = (t9 + 124U);
    t43 = (t0 + 10024);
    t44 = (t41 + 88U);
    *((char **)t44) = t43;
    t46 = (t41 + 56U);
    *((char **)t46) = t45;
    xsi_type_set_default_value(t43, t45, 0);
    t47 = (t41 + 64U);
    t48 = (t43 + 80U);
    t49 = *((char **)t48);
    *((char **)t47) = t49;
    t50 = (t41 + 80U);
    *((unsigned int *)t50) = 160000U;
    t51 = (-(1));
    t52 = (t9 + 244U);
    t53 = ((STD_STANDARD) + 384);
    t54 = (t52 + 88U);
    *((char **)t54) = t53;
    t56 = (t52 + 56U);
    *((char **)t56) = t55;
    *((int *)t55) = t51;
    t57 = (t52 + 80U);
    *((unsigned int *)t57) = 4U;
    t58 = (t9 + 364U);
    t59 = ((STD_STANDARD) + 384);
    t60 = (t58 + 88U);
    *((char **)t60) = t59;
    t62 = (t58 + 56U);
    *((char **)t62) = t61;
    xsi_type_set_default_value(t59, t61, 0);
    t63 = (t58 + 80U);
    *((unsigned int *)t63) = 4U;
    t64 = (t9 + 484U);
    t65 = ((STD_STANDARD) + 384);
    t66 = (t64 + 88U);
    *((char **)t66) = t65;
    t68 = (t64 + 56U);
    *((char **)t68) = t67;
    xsi_type_set_default_value(t65, t67, 0);
    t69 = (t64 + 80U);
    *((unsigned int *)t69) = 4U;
    t70 = (t9 + 604U);
    t71 = ((STD_STANDARD) + 384);
    t72 = (t70 + 88U);
    *((char **)t72) = t71;
    t74 = (t70 + 56U);
    *((char **)t74) = t73;
    xsi_type_set_default_value(t71, t73, 0);
    t75 = (t70 + 80U);
    *((unsigned int *)t75) = 4U;
    t76 = (t9 + 724U);
    t77 = ((STD_STANDARD) + 384);
    t78 = (t76 + 88U);
    *((char **)t78) = t77;
    t80 = (t76 + 56U);
    *((char **)t80) = t79;
    xsi_type_set_default_value(t77, t79, 0);
    t81 = (t76 + 80U);
    *((unsigned int *)t81) = 4U;
    t82 = (t9 + 844U);
    t83 = ((STD_STANDARD) + 384);
    t84 = (t82 + 88U);
    *((char **)t84) = t83;
    t86 = (t82 + 56U);
    *((char **)t86) = t85;
    xsi_type_set_default_value(t83, t85, 0);
    t87 = (t82 + 80U);
    *((unsigned int *)t87) = 4U;
    t88 = (t9 + 964U);
    t89 = ((STD_STANDARD) + 384);
    t90 = (t88 + 88U);
    *((char **)t90) = t89;
    t92 = (t88 + 56U);
    *((char **)t92) = t91;
    *((int *)t91) = 0;
    t93 = (t88 + 80U);
    *((unsigned int *)t93) = 4U;
    t94 = (t9 + 1084U);
    t95 = ((STD_STANDARD) + 384);
    t96 = (t94 + 88U);
    *((char **)t96) = t95;
    t98 = (t94 + 56U);
    *((char **)t98) = t97;
    *((int *)t97) = 0;
    t99 = (t94 + 80U);
    *((unsigned int *)t99) = 4U;
    t100 = (t10 + 4U);
    t101 = (t2 != 0);
    if (t101 == 1)
        goto LAB3;

LAB2:    t102 = (t10 + 12U);
    *((char **)t102) = t11;
    t103 = (t10 + 20U);
    t104 = (t3 != 0);
    if (t104 == 1)
        goto LAB5;

LAB4:    t105 = (t10 + 28U);
    *((char **)t105) = t18;
    t106 = (t10 + 36U);
    *((char **)t106) = t4;
    t107 = (t10 + 44U);
    *((char **)t107) = t23;
    t108 = (t10 + 52U);
    *((int *)t108) = t5;
    t109 = (t10 + 56U);
    *((int *)t109) = t6;
    t110 = (t10 + 60U);
    *((int *)t110) = t7;
    t111 = (t10 + 64U);
    *((char **)t111) = t8;
    t15 = (0 + 0U);
    t112 = (t8 + t15);
    *((int *)t112) = 640;
    t15 = (0 + 4U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 8U);
    t12 = (t8 + t15);
    *((int *)t12) = 480;
    t15 = (0 + 12U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 24U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 28U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 32U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 36U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 68U);
    t12 = (t8 + t15);
    *((unsigned char *)t12) = (unsigned char)0;
    t114 = (t5 >= 0);
    if (t114 == 1)
        goto LAB15;

LAB16:    t113 = (unsigned char)0;

LAB17:    if (t113 == 1)
        goto LAB12;

LAB13:    t104 = (unsigned char)0;

LAB14:    if (t104 == 1)
        goto LAB9;

LAB10:    t101 = (unsigned char)0;

LAB11:    if (t101 != 0)
        goto LAB6;

LAB8:
LAB1:    return;
LAB3:    *((char **)t100) = t2;
    goto LAB2;

LAB5:    *((char **)t103) = t3;
    goto LAB4;

LAB6:    t12 = (t52 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 0;
    t12 = (t29 + 56U);
    t13 = *((char **)t12);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t118 = (4U * t15);
    t119 = (0 + t118);
    t12 = (t13 + t119);
    *((int *)t12) = t5;
    t12 = (t41 + 56U);
    t13 = *((char **)t12);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t118 = (4U * t15);
    t119 = (0 + t118);
    t12 = (t13 + t119);
    *((int *)t12) = t6;

LAB7:
LAB19:    t12 = (t52 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t104 = (t14 >= 0);
    if (t104 == 1)
        goto LAB23;

LAB24:    t101 = (unsigned char)0;

LAB25:    if (t101 != 0)
        goto LAB20;

LAB22:    t15 = (0 + 24U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t101 = (t14 > 0);
    if (t101 != 0)
        goto LAB100;

LAB102:
LAB101:    goto LAB1;

LAB9:    t117 = (t6 < 480);
    t101 = t117;
    goto LAB11;

LAB12:    t116 = (t6 >= 0);
    t104 = t116;
    goto LAB14;

LAB15:    t115 = (t5 < 640);
    t113 = t115;
    goto LAB17;

LAB18:    goto LAB7;

LAB20:    t12 = (t29 + 56U);
    t21 = *((char **)t12);
    t12 = (t52 + 56U);
    t24 = *((char **)t12);
    t22 = *((int *)t24);
    t25 = (t22 - 0);
    t15 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 39999, 1, t22);
    t118 = (4U * t15);
    t119 = (0 + t118);
    t12 = (t21 + t119);
    t27 = *((int *)t12);
    t26 = (t58 + 56U);
    t31 = *((char **)t26);
    t26 = (t31 + 0);
    *((int *)t26) = t27;
    t12 = (t41 + 56U);
    t13 = *((char **)t12);
    t12 = (t52 + 56U);
    t16 = *((char **)t12);
    t14 = *((int *)t16);
    t17 = (t14 - 0);
    t15 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 39999, 1, t14);
    t118 = (4U * t15);
    t119 = (0 + t118);
    t12 = (t13 + t119);
    t20 = *((int *)t12);
    t19 = (t64 + 56U);
    t21 = *((char **)t19);
    t19 = (t21 + 0);
    *((int *)t19) = t20;
    t12 = (t52 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t17 = (t14 - 1);
    t12 = (t52 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((int *)t12) = t17;
    t12 = (t58 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t115 = (t14 >= 0);
    if (t115 == 1)
        goto LAB38;

LAB39:    t114 = (unsigned char)0;

LAB40:    if (t114 == 1)
        goto LAB35;

LAB36:    t113 = (unsigned char)0;

LAB37:    if (t113 == 1)
        goto LAB32;

LAB33:    t104 = (unsigned char)0;

LAB34:    if (t104 == 1)
        goto LAB29;

LAB30:    t101 = (unsigned char)0;

LAB31:    if (t101 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB19;

LAB21:;
LAB23:    t12 = (t52 + 56U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t12 = (t0 + 4048U);
    t19 = *((char **)t12);
    t20 = *((int *)t19);
    t113 = (t17 < t20);
    t101 = t113;
    goto LAB25;

LAB26:    t31 = (t64 + 56U);
    t32 = *((char **)t31);
    t125 = *((int *)t32);
    t126 = (t125 - 0);
    t127 = (t126 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t125);
    t128 = (t127 * 640U);
    t31 = (t58 + 56U);
    t34 = *((char **)t31);
    t129 = *((int *)t34);
    t130 = (t129 - 0);
    t131 = (t130 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t129);
    t132 = (t128 + t131);
    t133 = (4U * t132);
    t134 = (0 + t133);
    t31 = (t2 + t134);
    t135 = *((int *)t31);
    t35 = (t82 + 56U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((int *)t35) = t135;
    t12 = (t82 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t101 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t0, t14);
    if (t101 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB27;

LAB29:    t12 = (t64 + 56U);
    t24 = *((char **)t12);
    t25 = *((int *)t24);
    t27 = (t25 - 0);
    t15 = (t27 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t25);
    t118 = (t15 * 640U);
    t12 = (t58 + 56U);
    t26 = *((char **)t12);
    t30 = *((int *)t26);
    t42 = (t30 - 0);
    t119 = (t42 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t30);
    t121 = (t118 + t119);
    t122 = (4U * t121);
    t123 = (0 + t122);
    t12 = (t4 + t123);
    t51 = *((int *)t12);
    t124 = (t51 == 0);
    t101 = t124;
    goto LAB31;

LAB32:    t12 = (t64 + 56U);
    t21 = *((char **)t12);
    t22 = *((int *)t21);
    t120 = (t22 < 480);
    t104 = t120;
    goto LAB34;

LAB35:    t12 = (t64 + 56U);
    t19 = *((char **)t12);
    t20 = *((int *)t19);
    t117 = (t20 >= 0);
    t113 = t117;
    goto LAB37;

LAB38:    t12 = (t58 + 56U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t116 = (t17 < 640);
    t114 = t116;
    goto LAB40;

LAB41:    t12 = (t64 + 56U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t20 = (t17 - 0);
    t15 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t17);
    t118 = (t15 * 640U);
    t12 = (t58 + 56U);
    t19 = *((char **)t12);
    t22 = *((int *)t19);
    t25 = (t22 - 0);
    t119 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t22);
    t121 = (t118 + t119);
    t122 = (4U * t121);
    t123 = (0 + t122);
    t12 = (t4 + t123);
    *((int *)t12) = t7;
    t15 = (0 + 24U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t17 = (t14 + 1);
    t118 = (0 + 24U);
    t13 = (t8 + t118);
    *((int *)t13) = t17;
    t12 = (t88 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t12 = (t82 + 56U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t20 = (t14 + t17);
    t12 = (t88 + 56U);
    t19 = *((char **)t12);
    t12 = (t19 + 0);
    *((int *)t12) = t20;
    t12 = (t94 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t12 = (t82 + 56U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t12 = (t82 + 56U);
    t19 = *((char **)t12);
    t20 = *((int *)t19);
    t22 = (t17 * t20);
    t25 = (t14 + t22);
    t12 = (t94 + 56U);
    t21 = *((char **)t12);
    t12 = (t21 + 0);
    *((int *)t12) = t25;
    t12 = (t82 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t101 = work_a_1469834779_3212880686_sub_2780842967_3057020925(t0, t14);
    if (t101 != 0)
        goto LAB44;

LAB46:
LAB45:    t12 = (t64 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t17 = (t14 - 0);
    t15 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t14);
    t118 = (t15 * 640U);
    t12 = (t58 + 56U);
    t16 = *((char **)t12);
    t20 = *((int *)t16);
    t22 = (t20 - 0);
    t119 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t20);
    t121 = (t118 + t119);
    t122 = (1U * t121);
    t123 = (0 + t122);
    t12 = (t3 + t123);
    t101 = *((unsigned char *)t12);
    if (t101 != 0)
        goto LAB47;

LAB49:
LAB48:    t15 = (0 + 0U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t13 = (t58 + 56U);
    t16 = *((char **)t13);
    t17 = *((int *)t16);
    t20 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t0, t14, t17);
    t118 = (0 + 0U);
    t13 = (t8 + t118);
    *((int *)t13) = t20;
    t15 = (0 + 4U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t13 = (t58 + 56U);
    t16 = *((char **)t13);
    t17 = *((int *)t16);
    t20 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t0, t14, t17);
    t118 = (0 + 4U);
    t13 = (t8 + t118);
    *((int *)t13) = t20;
    t15 = (0 + 8U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t13 = (t64 + 56U);
    t16 = *((char **)t13);
    t17 = *((int *)t16);
    t20 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t0, t14, t17);
    t118 = (0 + 8U);
    t13 = (t8 + t118);
    *((int *)t13) = t20;
    t15 = (0 + 12U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t13 = (t64 + 56U);
    t16 = *((char **)t13);
    t17 = *((int *)t16);
    t20 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t0, t14, t17);
    t118 = (0 + 12U);
    t13 = (t8 + t118);
    *((int *)t13) = t20;
    t14 = (-(1));
    t17 = t14;
    t20 = 1;

LAB62:    if (t17 <= t20)
        goto LAB63;

LAB65:    goto LAB42;

LAB44:    t15 = (0 + 28U);
    t12 = (t8 + t15);
    t17 = *((int *)t12);
    t20 = (t17 + 1);
    t118 = (0 + 28U);
    t16 = (t8 + t118);
    *((int *)t16) = t20;
    goto LAB45;

LAB47:    t127 = (0 + 32U);
    t19 = (t8 + t127);
    t25 = *((int *)t19);
    t27 = (t25 + 1);
    t128 = (0 + 32U);
    t21 = (t8 + t128);
    *((int *)t21) = t27;
    t12 = (t58 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t114 = (t14 > 0);
    if (t114 == 1)
        goto LAB59;

LAB60:    t113 = (unsigned char)0;

LAB61:    if (t113 == 1)
        goto LAB56;

LAB57:    t104 = (unsigned char)0;

LAB58:    if (t104 == 1)
        goto LAB53;

LAB54:    t101 = (unsigned char)0;

LAB55:    if (t101 != 0)
        goto LAB50;

LAB52:
LAB51:    goto LAB48;

LAB50:    t136 = (0 + 36U);
    t32 = (t8 + t136);
    t135 = *((int *)t32);
    t137 = (t135 + 1);
    t138 = (0 + 36U);
    t34 = (t8 + t138);
    *((int *)t34) = t137;
    goto LAB51;

LAB53:    t24 = (t64 + 56U);
    t26 = *((char **)t24);
    t51 = *((int *)t26);
    t125 = (t51 - 0);
    t127 = (t125 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t51);
    t128 = (t127 * 640U);
    t24 = (t58 + 56U);
    t31 = *((char **)t24);
    t126 = *((int *)t31);
    t129 = (t126 + 1);
    t130 = (t129 - 0);
    t131 = (t130 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t129);
    t132 = (t128 + t131);
    t133 = (1U * t132);
    t134 = (0 + t133);
    t24 = (t3 + t134);
    t117 = *((unsigned char *)t24);
    t101 = t117;
    goto LAB55;

LAB56:    t12 = (t64 + 56U);
    t19 = *((char **)t12);
    t22 = *((int *)t19);
    t25 = (t22 - 0);
    t15 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t22);
    t118 = (t15 * 640U);
    t12 = (t58 + 56U);
    t21 = *((char **)t12);
    t27 = *((int *)t21);
    t30 = (t27 - 1);
    t42 = (t30 - 0);
    t119 = (t42 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t30);
    t121 = (t118 + t119);
    t122 = (1U * t121);
    t123 = (0 + t122);
    t12 = (t3 + t123);
    t116 = *((unsigned char *)t12);
    t104 = t116;
    goto LAB58;

LAB59:    t12 = (t58 + 56U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t20 = (640 - 1);
    t115 = (t17 < t20);
    t113 = t115;
    goto LAB61;

LAB63:    t22 = (-(1));
    t25 = t22;
    t27 = 1;

LAB66:    if (t25 <= t27)
        goto LAB67;

LAB69:
LAB64:    if (t17 == t20)
        goto LAB65;

LAB99:    t14 = (t17 + 1);
    t17 = t14;
    goto LAB62;

LAB67:    t104 = (t25 == 0);
    if (t104 == 1)
        goto LAB73;

LAB74:    t101 = (unsigned char)0;

LAB75:    if (t101 != 0)
        goto LAB70;

LAB72:
LAB71:    t12 = (t58 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t22 = (t14 + t25);
    t12 = (t70 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((int *)t12) = t22;
    t12 = (t64 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t22 = (t14 + t17);
    t12 = (t76 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((int *)t12) = t22;
    t12 = (t70 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t117 = (t14 >= 0);
    if (t117 == 1)
        goto LAB95;

LAB96:    t116 = (unsigned char)0;

LAB97:    if (t116 == 1)
        goto LAB92;

LAB93:    t115 = (unsigned char)0;

LAB94:    if (t115 == 1)
        goto LAB89;

LAB90:    t114 = (unsigned char)0;

LAB91:    if (t114 == 1)
        goto LAB86;

LAB87:    t113 = (unsigned char)0;

LAB88:    if (t113 == 1)
        goto LAB83;

LAB84:    t104 = (unsigned char)0;

LAB85:    if (t104 == 1)
        goto LAB80;

LAB81:    t101 = (unsigned char)0;

LAB82:    if (t101 != 0)
        goto LAB77;

LAB79:
LAB78:
LAB68:    if (t25 == t27)
        goto LAB69;

LAB98:    t14 = (t25 + 1);
    t25 = t14;
    goto LAB66;

LAB70:    goto LAB68;

LAB73:    t113 = (t17 == 0);
    t101 = t113;
    goto LAB75;

LAB76:    goto LAB71;

LAB77:    t35 = (t52 + 56U);
    t38 = *((char **)t35);
    t149 = *((int *)t38);
    t150 = (t149 + 1);
    t35 = (t52 + 56U);
    t40 = *((char **)t35);
    t35 = (t40 + 0);
    *((int *)t35) = t150;
    t12 = (t70 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t12 = (t29 + 56U);
    t16 = *((char **)t12);
    t12 = (t52 + 56U);
    t19 = *((char **)t12);
    t22 = *((int *)t19);
    t30 = (t22 - 0);
    t15 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 39999, 1, t22);
    t118 = (4U * t15);
    t119 = (0 + t118);
    t12 = (t16 + t119);
    *((int *)t12) = t14;
    t12 = (t76 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t12 = (t41 + 56U);
    t16 = *((char **)t12);
    t12 = (t52 + 56U);
    t19 = *((char **)t12);
    t22 = *((int *)t19);
    t30 = (t22 - 0);
    t15 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 39999, 1, t22);
    t118 = (4U * t15);
    t119 = (0 + t118);
    t12 = (t16 + t119);
    *((int *)t12) = t14;
    goto LAB78;

LAB80:    t35 = (t52 + 56U);
    t36 = *((char **)t35);
    t145 = *((int *)t36);
    t35 = (t0 + 4048U);
    t37 = *((char **)t35);
    t146 = *((int *)t37);
    t147 = (t146 - 1);
    t148 = (t145 < t147);
    t101 = t148;
    goto LAB82;

LAB83:    t31 = (t76 + 56U);
    t32 = *((char **)t31);
    t135 = *((int *)t32);
    t137 = (t135 - 0);
    t127 = (t137 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t135);
    t128 = (t127 * 640U);
    t31 = (t70 + 56U);
    t34 = *((char **)t31);
    t141 = *((int *)t34);
    t142 = (t141 - 0);
    t131 = (t142 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t141);
    t132 = (t128 + t131);
    t133 = (4U * t132);
    t134 = (0 + t133);
    t31 = (t2 + t134);
    t143 = *((int *)t31);
    t144 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t0, t143);
    t104 = t144;
    goto LAB85;

LAB86:    t12 = (t76 + 56U);
    t24 = *((char **)t12);
    t51 = *((int *)t24);
    t125 = (t51 - 0);
    t15 = (t125 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t51);
    t118 = (t15 * 640U);
    t12 = (t70 + 56U);
    t26 = *((char **)t12);
    t126 = *((int *)t26);
    t129 = (t126 - 0);
    t119 = (t129 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t126);
    t121 = (t118 + t119);
    t122 = (4U * t121);
    t123 = (0 + t122);
    t12 = (t4 + t123);
    t130 = *((int *)t12);
    t140 = (t130 == 0);
    t113 = t140;
    goto LAB88;

LAB89:    t12 = (t76 + 56U);
    t21 = *((char **)t12);
    t42 = *((int *)t21);
    t139 = (t42 < 480);
    t114 = t139;
    goto LAB91;

LAB92:    t12 = (t76 + 56U);
    t19 = *((char **)t12);
    t30 = *((int *)t19);
    t124 = (t30 >= 0);
    t115 = t124;
    goto LAB94;

LAB95:    t12 = (t70 + 56U);
    t16 = *((char **)t12);
    t22 = *((int *)t16);
    t120 = (t22 < 640);
    t116 = t120;
    goto LAB97;

LAB100:    t118 = (0 + 4U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t119 = (0 + 0U);
    t16 = (t8 + t119);
    t20 = *((int *)t16);
    t22 = (t17 - t20);
    t25 = (t22 + 1);
    t121 = (0 + 16U);
    t19 = (t8 + t121);
    *((int *)t19) = t25;
    t15 = (0 + 12U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 8U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t20 = (t14 - t17);
    t22 = (t20 + 1);
    t119 = (0 + 20U);
    t16 = (t8 + t119);
    *((int *)t16) = t22;
    t15 = (0 + 0U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 4U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t20 = (t14 + t17);
    t22 = (t20 / 2);
    t119 = (0 + 72U);
    t16 = (t8 + t119);
    *((int *)t16) = t22;
    t15 = (0 + 8U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 12U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t20 = (t14 + t17);
    t22 = (t20 / 2);
    t119 = (0 + 76U);
    t16 = (t8 + t119);
    *((int *)t16) = t22;
    t15 = (0 + 68U);
    t12 = (t8 + t15);
    *((unsigned char *)t12) = (unsigned char)1;
    t15 = (0 + 16U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 20U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t20 = work_a_1469834779_3212880686_sub_650732511_3057020925(t0, t14, t17);
    t119 = (0 + 40U);
    t16 = (t8 + t119);
    *((int *)t16) = t20;
    t15 = (0 + 16U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t104 = (t14 > 0);
    if (t104 == 1)
        goto LAB106;

LAB107:    t101 = (unsigned char)0;

LAB108:    if (t101 != 0)
        goto LAB103;

LAB105:    t15 = (0 + 44U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 48U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 52U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;
    t15 = (0 + 56U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;

LAB104:    t15 = (0 + 24U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t101 = (t14 > 1);
    if (t101 != 0)
        goto LAB109;

LAB111:    t15 = (0 + 60U);
    t12 = (t8 + t15);
    *((int *)t12) = 0;

LAB110:    goto LAB101;

LAB103:    t119 = (0 + 24U);
    t16 = (t8 + t119);
    t20 = *((int *)t16);
    t121 = (0 + 16U);
    t19 = (t8 + t121);
    t22 = *((int *)t19);
    t122 = (0 + 20U);
    t21 = (t8 + t122);
    t25 = *((int *)t21);
    t27 = (t22 * t25);
    t30 = work_a_1469834779_3212880686_sub_3016499035_3057020925(t0, t20, t27);
    t123 = (0 + 44U);
    t24 = (t8 + t123);
    *((int *)t24) = t30;
    t15 = (0 + 28U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 16U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t119 = (0 + 20U);
    t16 = (t8 + t119);
    t20 = *((int *)t16);
    t22 = (t17 * t20);
    t25 = work_a_1469834779_3212880686_sub_3016499035_3057020925(t0, t14, t22);
    t121 = (0 + 48U);
    t19 = (t8 + t121);
    *((int *)t19) = t25;
    t15 = (0 + 32U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 16U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t119 = (0 + 20U);
    t16 = (t8 + t119);
    t20 = *((int *)t16);
    t22 = (t17 * t20);
    t25 = work_a_1469834779_3212880686_sub_3016499035_3057020925(t0, t14, t22);
    t121 = (0 + 52U);
    t19 = (t8 + t121);
    *((int *)t19) = t25;
    t15 = (0 + 36U);
    t12 = (t8 + t15);
    t14 = *((int *)t12);
    t118 = (0 + 16U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t119 = (0 + 20U);
    t16 = (t8 + t119);
    t20 = *((int *)t16);
    t22 = (t17 * t20);
    t25 = work_a_1469834779_3212880686_sub_3016499035_3057020925(t0, t14, t22);
    t121 = (0 + 56U);
    t19 = (t8 + t121);
    *((int *)t19) = t25;
    goto LAB104;

LAB106:    t118 = (0 + 20U);
    t13 = (t8 + t118);
    t17 = *((int *)t13);
    t113 = (t17 > 0);
    t101 = t113;
    goto LAB108;

LAB109:    t13 = (t94 + 56U);
    t16 = *((char **)t13);
    t17 = *((int *)t16);
    t13 = (t88 + 56U);
    t19 = *((char **)t13);
    t20 = *((int *)t19);
    t13 = (t88 + 56U);
    t21 = *((char **)t13);
    t22 = *((int *)t21);
    t25 = (t20 * t22);
    t118 = (0 + 24U);
    t13 = (t8 + t118);
    t27 = *((int *)t13);
    t30 = (t25 / t27);
    t42 = (t17 - t30);
    t119 = (0 + 24U);
    t24 = (t8 + t119);
    t51 = *((int *)t24);
    t125 = (t51 - 1);
    t126 = (t42 / t125);
    t121 = (0 + 60U);
    t26 = (t8 + t121);
    *((int *)t26) = t126;
    goto LAB110;

}

int work_a_1469834779_3212880686_sub_3257001932_3579431146(char *t1, char *t2)
{
    char t3[1808];
    char t4[16];
    char t8[8];
    char t14[8];
    char t20[8];
    char t26[8];
    char t32[8];
    char t38[8];
    char t44[8];
    char t50[8];
    char t56[8];
    char t62[8];
    char t68[8];
    char t74[8];
    char t80[8];
    char t86[8];
    char t92[8];
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t95;
    unsigned char t96;
    unsigned int t97;
    char *t98;
    unsigned char t99;
    unsigned char t100;
    int t101;
    unsigned char t102;
    unsigned int t103;
    int t104;
    unsigned char t105;
    unsigned int t106;
    int t107;
    unsigned char t108;
    unsigned int t109;
    int t110;
    unsigned char t111;
    int t112;
    int t113;
    unsigned int t114;
    int t115;
    unsigned int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;

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
    *((int *)t14) = 0;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t3 + 244U);
    t18 = ((STD_STANDARD) + 384);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    *((int *)t20) = 0;
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 4U;
    t23 = (t3 + 364U);
    t24 = ((STD_STANDARD) + 384);
    t25 = (t23 + 88U);
    *((char **)t25) = t24;
    t27 = (t23 + 56U);
    *((char **)t27) = t26;
    *((int *)t26) = 0;
    t28 = (t23 + 80U);
    *((unsigned int *)t28) = 4U;
    t29 = (t3 + 484U);
    t30 = ((STD_STANDARD) + 384);
    t31 = (t29 + 88U);
    *((char **)t31) = t30;
    t33 = (t29 + 56U);
    *((char **)t33) = t32;
    *((int *)t32) = 0;
    t34 = (t29 + 80U);
    *((unsigned int *)t34) = 4U;
    t35 = (t3 + 604U);
    t36 = ((STD_STANDARD) + 384);
    t37 = (t35 + 88U);
    *((char **)t37) = t36;
    t39 = (t35 + 56U);
    *((char **)t39) = t38;
    *((int *)t38) = 0;
    t40 = (t35 + 80U);
    *((unsigned int *)t40) = 4U;
    t41 = (t3 + 724U);
    t42 = ((STD_STANDARD) + 384);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = 0;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t3 + 844U);
    t48 = ((STD_STANDARD) + 384);
    t49 = (t47 + 88U);
    *((char **)t49) = t48;
    t51 = (t47 + 56U);
    *((char **)t51) = t50;
    *((int *)t50) = 0;
    t52 = (t47 + 80U);
    *((unsigned int *)t52) = 4U;
    t53 = (t3 + 964U);
    t54 = ((STD_STANDARD) + 384);
    t55 = (t53 + 88U);
    *((char **)t55) = t54;
    t57 = (t53 + 56U);
    *((char **)t57) = t56;
    *((int *)t56) = 0;
    t58 = (t53 + 80U);
    *((unsigned int *)t58) = 4U;
    t59 = (t3 + 1084U);
    t60 = ((STD_STANDARD) + 384);
    t61 = (t59 + 88U);
    *((char **)t61) = t60;
    t63 = (t59 + 56U);
    *((char **)t63) = t62;
    *((int *)t62) = 0;
    t64 = (t59 + 80U);
    *((unsigned int *)t64) = 4U;
    t65 = (t3 + 1204U);
    t66 = ((STD_STANDARD) + 384);
    t67 = (t65 + 88U);
    *((char **)t67) = t66;
    t69 = (t65 + 56U);
    *((char **)t69) = t68;
    *((int *)t68) = 0;
    t70 = (t65 + 80U);
    *((unsigned int *)t70) = 4U;
    t71 = (t3 + 1324U);
    t72 = ((STD_STANDARD) + 384);
    t73 = (t71 + 88U);
    *((char **)t73) = t72;
    t75 = (t71 + 56U);
    *((char **)t75) = t74;
    xsi_type_set_default_value(t72, t74, 0);
    t76 = (t71 + 80U);
    *((unsigned int *)t76) = 4U;
    t77 = (t3 + 1444U);
    t78 = ((STD_STANDARD) + 384);
    t79 = (t77 + 88U);
    *((char **)t79) = t78;
    t81 = (t77 + 56U);
    *((char **)t81) = t80;
    xsi_type_set_default_value(t78, t80, 0);
    t82 = (t77 + 80U);
    *((unsigned int *)t82) = 4U;
    t83 = (t3 + 1564U);
    t84 = ((STD_STANDARD) + 384);
    t85 = (t83 + 88U);
    *((char **)t85) = t84;
    t87 = (t83 + 56U);
    *((char **)t87) = t86;
    xsi_type_set_default_value(t84, t86, 0);
    t88 = (t83 + 80U);
    *((unsigned int *)t88) = 4U;
    t89 = (t3 + 1684U);
    t90 = ((STD_STANDARD) + 384);
    t91 = (t89 + 88U);
    *((char **)t91) = t90;
    t93 = (t89 + 56U);
    *((char **)t93) = t92;
    xsi_type_set_default_value(t90, t92, 0);
    t94 = (t89 + 80U);
    *((unsigned int *)t94) = 4U;
    t95 = (t4 + 4U);
    t96 = (t2 != 0);
    if (t96 == 1)
        goto LAB3;

LAB2:    t97 = (0 + 68U);
    t98 = (t2 + t97);
    t99 = *((unsigned char *)t98);
    t100 = (!(t99));
    if (t100 != 0)
        goto LAB4;

LAB6:
LAB5:    t97 = (0 + 16U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t102 = (t101 >= 80);
    if (t102 == 1)
        goto LAB17;

LAB18:    t100 = (unsigned char)0;

LAB19:    if (t100 == 1)
        goto LAB14;

LAB15:    t99 = (unsigned char)0;

LAB16:    if (t99 == 1)
        goto LAB11;

LAB12:    t96 = (unsigned char)0;

LAB13:    if (t96 != 0)
        goto LAB8;

LAB10:
LAB9:    t97 = (0 + 24U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 >= 1000);
    if (t99 == 1)
        goto LAB35;

LAB36:    t96 = (unsigned char)0;

LAB37:    if (t96 != 0)
        goto LAB32;

LAB34:
LAB33:    t97 = (0 + 40U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 >= 3000);
    if (t99 == 1)
        goto LAB47;

LAB48:    t96 = (unsigned char)0;

LAB49:    if (t96 != 0)
        goto LAB44;

LAB46:
LAB45:    t97 = (0 + 44U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 >= 15000);
    if (t99 == 1)
        goto LAB60;

LAB61:    t96 = (unsigned char)0;

LAB62:    if (t96 != 0)
        goto LAB57;

LAB59:
LAB58:    t97 = (0 + 28U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t96 = (t101 > 0);
    if (t96 != 0)
        goto LAB70;

LAB72:
LAB71:    t97 = (0 + 76U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t104 = (480 * 3);
    t107 = (t104 / 4);
    t96 = (t101 > t107);
    if (t96 != 0)
        goto LAB80;

LAB82:    t97 = (0 + 76U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t104 = (480 * 2);
    t107 = (t104 / 3);
    t96 = (t101 > t107);
    if (t96 != 0)
        goto LAB83;

LAB84:    t97 = (0 + 76U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t104 = (480 / 2);
    t96 = (t101 > t104);
    if (t96 != 0)
        goto LAB85;

LAB86:    t6 = (t29 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 5;

LAB81:    t97 = (0 + 52U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 > 10000);
    if (t99 == 1)
        goto LAB90;

LAB91:    t96 = (unsigned char)0;

LAB92:    if (t96 != 0)
        goto LAB87;

LAB89:
LAB88:    t97 = (0 + 56U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t96 = (t101 > 5000);
    if (t96 != 0)
        goto LAB98;

LAB100:
LAB99:    t97 = (0 + 60U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t96 = (t101 > 500);
    if (t96 != 0)
        goto LAB101;

LAB103:
LAB102:    t97 = (0 + 16U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t103 = (0 + 20U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t107 = (t104 * 2);
    t100 = (t101 > t107);
    if (t100 == 1)
        goto LAB110;

LAB111:    t99 = (unsigned char)0;

LAB112:    if (t99 == 1)
        goto LAB107;

LAB108:    t96 = (unsigned char)0;

LAB109:    if (t96 != 0)
        goto LAB104;

LAB106:
LAB105:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t104 = *((int *)t9);
    t107 = (t101 + t104);
    t6 = (t23 + 56U);
    t10 = *((char **)t6);
    t110 = *((int *)t10);
    t112 = (t107 + t110);
    t6 = (t29 + 56U);
    t12 = *((char **)t6);
    t113 = *((int *)t12);
    t115 = (t112 + t113);
    t6 = (t35 + 56U);
    t13 = *((char **)t6);
    t117 = *((int *)t13);
    t118 = (t115 + t117);
    t6 = (t41 + 56U);
    t15 = *((char **)t6);
    t119 = *((int *)t15);
    t120 = (t118 + t119);
    t6 = (t47 + 56U);
    t16 = *((char **)t6);
    t121 = *((int *)t16);
    t122 = (t120 + t121);
    t6 = (t53 + 56U);
    t18 = *((char **)t6);
    t123 = *((int *)t18);
    t124 = (t122 + t123);
    t6 = (t59 + 56U);
    t19 = *((char **)t6);
    t125 = *((int *)t19);
    t126 = (t124 + t125);
    t6 = (t65 + 56U);
    t21 = *((char **)t6);
    t127 = *((int *)t21);
    t128 = (t126 + t127);
    t6 = (t5 + 56U);
    t22 = *((char **)t6);
    t6 = (t22 + 0);
    *((int *)t6) = t128;
    t97 = (0 + 40U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 < 3000);
    if (t99 == 1)
        goto LAB116;

LAB117:    t103 = (0 + 40U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 > 6000);
    t96 = t100;

LAB118:    if (t96 != 0)
        goto LAB113;

LAB115:
LAB114:    t97 = (0 + 44U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 < 15000);
    if (t99 == 1)
        goto LAB122;

LAB123:    t103 = (0 + 44U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 > 80000);
    t96 = t100;

LAB124:    if (t96 != 0)
        goto LAB119;

LAB121:
LAB120:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t0 = t101;

LAB1:    return t0;
LAB3:    *((char **)t95) = t2;
    goto LAB2;

LAB4:    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 25;
    t97 = (0 + 16U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t102 = (t101 >= 120);
    if (t102 == 1)
        goto LAB29;

LAB30:    t100 = (unsigned char)0;

LAB31:    if (t100 == 1)
        goto LAB26;

LAB27:    t99 = (unsigned char)0;

LAB28:    if (t99 == 1)
        goto LAB23;

LAB24:    t96 = (unsigned char)0;

LAB25:    if (t96 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB9;

LAB11:    t109 = (0 + 20U);
    t10 = (t2 + t109);
    t110 = *((int *)t10);
    t111 = (t110 <= 100);
    t96 = t111;
    goto LAB13;

LAB14:    t106 = (0 + 20U);
    t9 = (t2 + t106);
    t107 = *((int *)t9);
    t108 = (t107 >= 20);
    t99 = t108;
    goto LAB16;

LAB17:    t103 = (0 + 16U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t105 = (t104 <= 400);
    t100 = t105;
    goto LAB19;

LAB20:    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t112 = *((int *)t13);
    t113 = (t112 + 20);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = t113;
    goto LAB21;

LAB23:    t109 = (0 + 20U);
    t10 = (t2 + t109);
    t110 = *((int *)t10);
    t111 = (t110 <= 70);
    t96 = t111;
    goto LAB25;

LAB26:    t106 = (0 + 20U);
    t9 = (t2 + t106);
    t107 = *((int *)t9);
    t108 = (t107 >= 25);
    t99 = t108;
    goto LAB28;

LAB29:    t103 = (0 + 16U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t105 = (t104 <= 280);
    t100 = t105;
    goto LAB31;

LAB32:    t9 = (t35 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = 25;
    t97 = (0 + 24U);
    t6 = (t2 + t97);
    t101 = *((int *)t6);
    t99 = (t101 >= 2000);
    if (t99 == 1)
        goto LAB41;

LAB42:    t96 = (unsigned char)0;

LAB43:    if (t96 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB33;

LAB35:    t103 = (0 + 24U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 <= 20000);
    t96 = t100;
    goto LAB37;

LAB38:    t9 = (t35 + 56U);
    t10 = *((char **)t9);
    t107 = *((int *)t10);
    t110 = (t107 + 15);
    t9 = (t35 + 56U);
    t12 = *((char **)t9);
    t9 = (t12 + 0);
    *((int *)t9) = t110;
    goto LAB39;

LAB41:    t103 = (0 + 24U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 <= 10000);
    t96 = t100;
    goto LAB43;

LAB44:    t106 = (0 + 40U);
    t9 = (t2 + t106);
    t107 = *((int *)t9);
    t110 = work_a_1469834779_3212880686_sub_2812277502_3057020925(t1, t107, 4200);
    t10 = (t71 + 56U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    *((int *)t10) = t110;
    t6 = (t71 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 200);
    if (t96 != 0)
        goto LAB50;

LAB52:    t6 = (t71 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 400);
    if (t96 != 0)
        goto LAB53;

LAB54:    t6 = (t71 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 600);
    if (t96 != 0)
        goto LAB55;

LAB56:    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 10;

LAB51:    goto LAB45;

LAB47:    t103 = (0 + 40U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 <= 6000);
    t96 = t100;
    goto LAB49;

LAB50:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 40;
    goto LAB51;

LAB53:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 30;
    goto LAB51;

LAB55:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 20;
    goto LAB51;

LAB57:    t106 = (0 + 44U);
    t9 = (t2 + t106);
    t107 = *((int *)t9);
    t110 = work_a_1469834779_3212880686_sub_2812277502_3057020925(t1, t107, 40000);
    t10 = (t77 + 56U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    *((int *)t10) = t110;
    t6 = (t77 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 5000);
    if (t96 != 0)
        goto LAB63;

LAB65:    t6 = (t77 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 10000);
    if (t96 != 0)
        goto LAB66;

LAB67:    t6 = (t77 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 20000);
    if (t96 != 0)
        goto LAB68;

LAB69:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 10;

LAB64:    goto LAB58;

LAB60:    t103 = (0 + 44U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 <= 80000);
    t96 = t100;
    goto LAB62;

LAB63:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 25;
    goto LAB64;

LAB66:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 20;
    goto LAB64;

LAB68:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 15;
    goto LAB64;

LAB70:    t103 = (0 + 48U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t107 = work_a_1469834779_3212880686_sub_2812277502_3057020925(t1, t104, 30000);
    t9 = (t83 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = t107;
    t6 = (t83 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 5000);
    if (t96 != 0)
        goto LAB73;

LAB75:    t6 = (t83 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 10000);
    if (t96 != 0)
        goto LAB76;

LAB77:    t6 = (t83 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 20000);
    if (t96 != 0)
        goto LAB78;

LAB79:    t6 = (t41 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 5;

LAB74:    goto LAB71;

LAB73:    t6 = (t41 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 20;
    goto LAB74;

LAB76:    t6 = (t41 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 15;
    goto LAB74;

LAB78:    t6 = (t41 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 10;
    goto LAB74;

LAB80:    t7 = (t29 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = 25;
    goto LAB81;

LAB83:    t7 = (t29 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = 20;
    goto LAB81;

LAB85:    t7 = (t29 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = 15;
    goto LAB81;

LAB87:    t106 = (0 + 52U);
    t9 = (t2 + t106);
    t107 = *((int *)t9);
    t110 = work_a_1469834779_3212880686_sub_2812277502_3057020925(t1, t107, 30000);
    t10 = (t89 + 56U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    *((int *)t10) = t110;
    t6 = (t89 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 10000);
    if (t96 != 0)
        goto LAB93;

LAB95:    t6 = (t89 + 56U);
    t7 = *((char **)t6);
    t101 = *((int *)t7);
    t96 = (t101 <= 20000);
    if (t96 != 0)
        goto LAB96;

LAB97:    t6 = (t47 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 10;

LAB94:    goto LAB88;

LAB90:    t103 = (0 + 52U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t100 = (t104 < 70000);
    t96 = t100;
    goto LAB92;

LAB93:    t6 = (t47 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 20;
    goto LAB94;

LAB96:    t6 = (t47 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 15;
    goto LAB94;

LAB98:    t103 = (0 + 56U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t107 = (t104 / 1000);
    t110 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, 20, t107);
    t9 = (t53 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = t110;
    goto LAB99;

LAB101:    t103 = (0 + 60U);
    t7 = (t2 + t103);
    t104 = *((int *)t7);
    t107 = (t104 / 100);
    t110 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t1, 15, t107);
    t9 = (t59 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = t110;
    goto LAB102;

LAB104:    t15 = (t65 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((int *)t15) = 15;
    goto LAB105;

LAB107:    t114 = (0 + 36U);
    t12 = (t2 + t114);
    t115 = *((int *)t12);
    t116 = (0 + 16U);
    t13 = (t2 + t116);
    t117 = *((int *)t13);
    t118 = (t117 / 3);
    t105 = (t115 > t118);
    t96 = t105;
    goto LAB109;

LAB110:    t106 = (0 + 28U);
    t9 = (t2 + t106);
    t110 = *((int *)t9);
    t109 = (0 + 24U);
    t10 = (t2 + t109);
    t112 = *((int *)t10);
    t113 = (t112 / 5);
    t102 = (t110 > t113);
    t99 = t102;
    goto LAB112;

LAB113:    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t107 = *((int *)t10);
    t110 = (t107 * 3);
    t112 = (t110 / 4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t9 = (t12 + 0);
    *((int *)t9) = t112;
    goto LAB114;

LAB116:    t96 = (unsigned char)1;
    goto LAB118;

LAB119:    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t107 = *((int *)t10);
    t110 = (t107 * 4);
    t112 = (t110 / 5);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t9 = (t12 + 0);
    *((int *)t9) = t112;
    goto LAB120;

LAB122:    t96 = (unsigned char)1;
    goto LAB124;

LAB125:;
}

unsigned char work_a_1469834779_3212880686_sub_1665737120_3579431146(char *t1, char *t2)
{
    char t4[16];
    unsigned char t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    int t24;
    unsigned char t25;
    unsigned int t26;
    char *t27;
    int t28;
    unsigned char t29;
    unsigned int t30;
    char *t31;
    int t32;
    unsigned char t33;
    unsigned int t34;
    char *t35;
    int t36;
    unsigned char t37;
    unsigned int t38;
    char *t39;
    int t40;
    unsigned char t41;
    unsigned int t42;
    char *t43;
    int t44;
    unsigned char t45;
    unsigned int t46;
    char *t47;
    int t48;
    unsigned char t49;
    unsigned int t50;
    char *t51;
    int t52;
    unsigned char t53;
    unsigned int t54;
    char *t55;
    int t56;
    unsigned char t57;
    unsigned int t58;
    char *t59;
    int t60;
    unsigned char t61;
    unsigned int t62;
    char *t63;
    int t64;
    unsigned int t65;
    char *t66;
    int t67;
    int t68;
    unsigned char t69;
    unsigned int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    int t75;
    int t76;
    unsigned char t77;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t19 = (0 + 68U);
    t20 = (t2 + t19);
    t21 = *((unsigned char *)t20);
    if (t21 == 1)
        goto LAB37;

LAB38:    t18 = (unsigned char)0;

LAB39:    if (t18 == 1)
        goto LAB34;

LAB35:    t17 = (unsigned char)0;

LAB36:    if (t17 == 1)
        goto LAB31;

LAB32:    t16 = (unsigned char)0;

LAB33:    if (t16 == 1)
        goto LAB28;

LAB29:    t15 = (unsigned char)0;

LAB30:    if (t15 == 1)
        goto LAB25;

LAB26:    t14 = (unsigned char)0;

LAB27:    if (t14 == 1)
        goto LAB22;

LAB23:    t13 = (unsigned char)0;

LAB24:    if (t13 == 1)
        goto LAB19;

LAB20:    t12 = (unsigned char)0;

LAB21:    if (t12 == 1)
        goto LAB16;

LAB17:    t11 = (unsigned char)0;

LAB18:    if (t11 == 1)
        goto LAB13;

LAB14:    t10 = (unsigned char)0;

LAB15:    if (t10 == 1)
        goto LAB10;

LAB11:    t9 = (unsigned char)0;

LAB12:    if (t9 == 1)
        goto LAB7;

LAB8:    t8 = (unsigned char)0;

LAB9:    if (t8 == 1)
        goto LAB4;

LAB5:    t7 = (unsigned char)0;

LAB6:    t0 = t7;

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    t70 = (0 + 36U);
    t71 = (t2 + t70);
    t72 = *((int *)t71);
    t73 = (0 + 16U);
    t74 = (t2 + t73);
    t75 = *((int *)t74);
    t76 = (t75 / 4);
    t77 = (t72 > t76);
    t7 = t77;
    goto LAB6;

LAB7:    t62 = (0 + 28U);
    t63 = (t2 + t62);
    t64 = *((int *)t63);
    t65 = (0 + 24U);
    t66 = (t2 + t65);
    t67 = *((int *)t66);
    t68 = (t67 / 5);
    t69 = (t64 > t68);
    t8 = t69;
    goto LAB9;

LAB10:    t58 = (0 + 44U);
    t59 = (t2 + t58);
    t60 = *((int *)t59);
    t61 = (t60 <= 80000);
    t9 = t61;
    goto LAB12;

LAB13:    t54 = (0 + 44U);
    t55 = (t2 + t54);
    t56 = *((int *)t55);
    t57 = (t56 >= 15000);
    t10 = t57;
    goto LAB15;

LAB16:    t50 = (0 + 40U);
    t51 = (t2 + t50);
    t52 = *((int *)t51);
    t53 = (t52 <= 6000);
    t11 = t53;
    goto LAB18;

LAB19:    t46 = (0 + 40U);
    t47 = (t2 + t46);
    t48 = *((int *)t47);
    t49 = (t48 >= 3000);
    t12 = t49;
    goto LAB21;

LAB22:    t42 = (0 + 24U);
    t43 = (t2 + t42);
    t44 = *((int *)t43);
    t45 = (t44 <= 20000);
    t13 = t45;
    goto LAB24;

LAB25:    t38 = (0 + 24U);
    t39 = (t2 + t38);
    t40 = *((int *)t39);
    t41 = (t40 >= 1000);
    t14 = t41;
    goto LAB27;

LAB28:    t34 = (0 + 20U);
    t35 = (t2 + t34);
    t36 = *((int *)t35);
    t37 = (t36 <= 100);
    t15 = t37;
    goto LAB30;

LAB31:    t30 = (0 + 20U);
    t31 = (t2 + t30);
    t32 = *((int *)t31);
    t33 = (t32 >= 20);
    t16 = t33;
    goto LAB33;

LAB34:    t26 = (0 + 16U);
    t27 = (t2 + t26);
    t28 = *((int *)t27);
    t29 = (t28 <= 400);
    t17 = t29;
    goto LAB36;

LAB37:    t22 = (0 + 16U);
    t23 = (t2 + t22);
    t24 = *((int *)t23);
    t25 = (t24 >= 80);
    t18 = t25;
    goto LAB39;

LAB40:;
}

static void work_a_1469834779_3212880686_p_0(char *t0)
{
    char t57[1228800];
    char t59[307200];
    char t103[16];
    char t104[16];
    char t105[16];
    char t106[16];
    char t107[16];
    char t108[16];
    char t109[16];
    char t110[16];
    char t111[16];
    char t112[16];
    char t118[16];
    char t123[16];
    char t125[16];
    char t128[16];
    char t134[16];
    char t139[16];
    char t141[16];
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
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    unsigned char t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    int t46;
    unsigned char t47;
    char *t48;
    char *t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    unsigned char t54;
    char *t55;
    char *t56;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int t64;
    char *t65;
    char *t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned char t101;
    unsigned char t102;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t124;
    char *t126;
    char *t127;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t140;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;

LAB0:    t1 = (t0 + 8424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(743, ng6);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t4 = (t0 + 5321236);
    t6 = (t0 + 17812U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(744, ng6);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(749, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 5321315);
    *((int *)t2) = 0;
    t3 = (t0 + 5321319);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB11:    if (t10 <= t11)
        goto LAB12;

LAB14:    xsi_set_current_line(760, ng6);
    t2 = (t0 + 6416U);
    std_textio_file_close(t2);
    xsi_set_current_line(763, ng6);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6520U);
    t4 = (t0 + 5321331);
    t6 = (t0 + 17828U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(764, ng6);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB24;

LAB26:
LAB25:    xsi_set_current_line(769, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 5321389);
    *((int *)t2) = 0;
    t3 = (t0 + 5321393);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB31:    if (t10 <= t11)
        goto LAB32;

LAB34:    xsi_set_current_line(780, ng6);
    t2 = (t0 + 6520U);
    std_textio_file_close(t2);
    xsi_set_current_line(783, ng6);
    t9 = (480 - 2);
    t2 = (t0 + 5321405);
    *((int *)t2) = 1;
    t3 = (t0 + 5321409);
    *((int *)t3) = t9;
    t10 = 1;
    t11 = t9;

LAB44:    if (t10 <= t11)
        goto LAB45;

LAB47:    xsi_set_current_line(790, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 5321421);
    *((int *)t2) = 0;
    t3 = (t0 + 5321425);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB54:    if (t10 <= t11)
        goto LAB55;

LAB57:    xsi_set_current_line(797, ng6);
    t2 = (t0 + 3808U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t2 = (t0 + 5321437);
    *((int *)t2) = 0;
    t4 = (t0 + 5321441);
    *((int *)t4) = t10;
    t11 = 0;
    t12 = t10;

LAB64:    if (t11 <= t12)
        goto LAB65;

LAB67:    xsi_set_current_line(821, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = (t0 + 5321445);
    *((int *)t2) = t10;
    t4 = (t0 + 5321449);
    *((int *)t4) = t9;
    t11 = t10;
    t12 = t9;

LAB69:    if (t11 <= t12)
        goto LAB70;

LAB72:    xsi_set_current_line(845, ng6);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t2 = (t0 + 5321477);
    *((int *)t2) = 0;
    t4 = (t0 + 5321481);
    *((int *)t4) = t10;
    t11 = 0;
    t12 = t10;

LAB104:    if (t11 <= t12)
        goto LAB105;

LAB107:    xsi_set_current_line(863, ng6);
    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(864, ng6);
    t9 = (-(1));
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(866, ng6);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t2 = (t0 + 5321493);
    *((int *)t2) = 0;
    t4 = (t0 + 5321497);
    *((int *)t4) = t10;
    t11 = 0;
    t12 = t10;

LAB127:    if (t11 <= t12)
        goto LAB128;

LAB130:    xsi_set_current_line(874, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 5321501);
    *((int *)t2) = 0;
    t3 = (t0 + 5321505);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB141:    if (t10 <= t11)
        goto LAB142;

LAB144:    xsi_set_current_line(881, ng6);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 >= 0);
    if (t7 != 0)
        goto LAB151;

LAB153:    xsi_set_current_line(982, ng6);
    t113 = (t0 + 5848U);
    t114 = *((char **)t113);
    t113 = (t114 + 0);
    *((int *)t113) = 0;
    xsi_set_current_line(983, ng6);
    t9 = (-(1));
    t113 = (t0 + 5968U);
    t114 = *((char **)t113);
    t113 = (t114 + 0);
    *((int *)t113) = t9;
    xsi_set_current_line(985, ng6);
    t113 = (t0 + 5128U);
    t114 = *((char **)t113);
    t9 = *((int *)t114);
    t10 = (t9 - 1);
    t113 = (t0 + 5321615);
    *((int *)t113) = 0;
    t115 = (t0 + 5321619);
    *((int *)t115) = t10;
    t11 = 0;
    t12 = t10;

LAB298:    if (t11 <= t12)
        goto LAB299;

LAB301:    xsi_set_current_line(992, ng6);
    t113 = (t0 + 5968U);
    t114 = *((char **)t113);
    t9 = *((int *)t114);
    t7 = (t9 >= 0);
    if (t7 != 0)
        goto LAB309;

LAB311:    xsi_set_current_line(996, ng6);
    t113 = (t0 + 5321677);
    xsi_report(t113, 46U, (unsigned char)1);

LAB310:
LAB152:    xsi_set_current_line(1001, ng6);
    t113 = (t0 + 4288U);
    t114 = *((char **)t113);
    t113 = (t0 + 6624U);
    t115 = (t0 + 5321723);
    t117 = (t0 + 17844U);
    t7 = std_textio_file_open2(t113, t115, t117, (unsigned char)1);
    *((unsigned char *)t114) = t7;
    xsi_set_current_line(1002, ng6);
    t113 = (t0 + 4288U);
    t114 = *((char **)t113);
    t7 = *((unsigned char *)t114);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB312;

LAB314:
LAB313:    xsi_set_current_line(1007, ng6);
    t9 = (480 - 1);
    t113 = (t0 + 5321790);
    *((int *)t113) = 0;
    t114 = (t0 + 5321794);
    *((int *)t114) = t9;
    t10 = 0;
    t11 = t9;

LAB319:    if (t10 <= t11)
        goto LAB320;

LAB322:    xsi_set_current_line(1013, ng6);
    t113 = (t0 + 6624U);
    std_textio_file_close(t113);
    xsi_set_current_line(1016, ng6);
    t113 = (t0 + 4288U);
    t114 = *((char **)t113);
    t113 = (t0 + 6728U);
    t115 = (t0 + 5321806);
    t117 = (t0 + 17860U);
    t7 = std_textio_file_open2(t113, t115, t117, (unsigned char)1);
    *((unsigned char *)t114) = t7;
    xsi_set_current_line(1017, ng6);
    t113 = (t0 + 4288U);
    t114 = *((char **)t113);
    t7 = *((unsigned char *)t114);
    t8 = (t7 == (unsigned char)0);
    if (t8 != 0)
        goto LAB329;

LAB331:
LAB330:    xsi_set_current_line(1032, ng6);
    t113 = (t0 + 5321902);
    xsi_report(t113, 42U, (unsigned char)0);
    xsi_set_current_line(1033, ng6);

LAB337:    *((char **)t1) = &&LAB338;

LAB1:    return;
LAB4:    xsi_set_current_line(745, ng6);
    t2 = (t0 + 5321277);
    xsi_report(t2, 38U, (unsigned char)3);
    xsi_set_current_line(746, ng6);

LAB9:    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

LAB12:    xsi_set_current_line(750, ng6);
    t12 = (640 - 1);
    t4 = (t0 + 5321323);
    *((int *)t4) = 0;
    t5 = (t0 + 5321327);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB15:    if (t13 <= t14)
        goto LAB16;

LAB18:
LAB13:    t2 = (t0 + 5321315);
    t10 = *((int *)t2);
    t3 = (t0 + 5321319);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB14;

LAB23:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 5321315);
    *((int *)t4) = t10;
    goto LAB11;

LAB16:    xsi_set_current_line(751, ng6);
    t6 = (t0 + 6416U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(756, ng6);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321315);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t4 = (t0 + 5321323);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t5 = (t3 + t27);
    *((int *)t5) = 0;

LAB20:
LAB17:    t2 = (t0 + 5321323);
    t13 = *((int *)t2);
    t3 = (t0 + 5321327);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB18;

LAB22:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 5321323);
    *((int *)t4) = t13;
    goto LAB15;

LAB19:    xsi_set_current_line(752, ng6);
    t15 = (t0 + 8232);
    t16 = (t0 + 6416U);
    t17 = (t0 + 6904U);
    std_textio_readline(STD_TEXTIO, t15, t16, t17);
    xsi_set_current_line(753, ng6);
    t2 = (t0 + 8232);
    t3 = (t0 + 6904U);
    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(754, ng6);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = work_a_1469834779_3212880686_sub_2489298628_3057020925(t0, t9, 0, 255);
    t2 = (t0 + 4408U);
    t4 = *((char **)t2);
    t2 = (t0 + 5321315);
    t18 = *((int *)t2);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t5 = (t0 + 5321323);
    t22 = *((int *)t5);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t6 = (t4 + t27);
    *((int *)t6) = t12;
    goto LAB20;

LAB24:    xsi_set_current_line(765, ng6);
    t2 = (t0 + 5321356);
    xsi_report(t2, 33U, (unsigned char)3);
    xsi_set_current_line(766, ng6);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB27:    goto LAB25;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB32:    xsi_set_current_line(770, ng6);
    t12 = (640 - 1);
    t4 = (t0 + 5321397);
    *((int *)t4) = 0;
    t5 = (t0 + 5321401);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB35:    if (t13 <= t14)
        goto LAB36;

LAB38:
LAB33:    t2 = (t0 + 5321389);
    t10 = *((int *)t2);
    t3 = (t0 + 5321393);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB34;

LAB43:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 5321389);
    *((int *)t4) = t10;
    goto LAB31;

LAB36:    xsi_set_current_line(771, ng6);
    t6 = (t0 + 6520U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(776, ng6);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321389);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t4 = (t0 + 5321397);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t5 = (t3 + t27);
    *((int *)t5) = 0;

LAB40:
LAB37:    t2 = (t0 + 5321397);
    t13 = *((int *)t2);
    t3 = (t0 + 5321401);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB38;

LAB42:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 5321397);
    *((int *)t4) = t13;
    goto LAB35;

LAB39:    xsi_set_current_line(772, ng6);
    t15 = (t0 + 8232);
    t16 = (t0 + 6520U);
    t17 = (t0 + 6904U);
    std_textio_readline(STD_TEXTIO, t15, t16, t17);
    xsi_set_current_line(773, ng6);
    t2 = (t0 + 8232);
    t3 = (t0 + 6904U);
    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(774, ng6);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = work_a_1469834779_3212880686_sub_2489298628_3057020925(t0, t9, 0, 255);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t2 = (t0 + 5321389);
    t18 = *((int *)t2);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t5 = (t0 + 5321397);
    t22 = *((int *)t5);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t6 = (t4 + t27);
    *((int *)t6) = t12;
    goto LAB40;

LAB45:    xsi_set_current_line(784, ng6);
    t12 = (640 - 2);
    t4 = (t0 + 5321413);
    *((int *)t4) = 1;
    t5 = (t0 + 5321417);
    *((int *)t5) = t12;
    t13 = 1;
    t14 = t12;

LAB48:    if (t13 <= t14)
        goto LAB49;

LAB51:
LAB46:    t2 = (t0 + 5321405);
    t10 = *((int *)t2);
    t3 = (t0 + 5321409);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB47;

LAB53:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 5321405);
    *((int *)t4) = t10;
    goto LAB44;

LAB49:    xsi_set_current_line(785, ng6);
    t6 = (t0 + 4528U);
    t15 = *((char **)t6);
    t6 = (t0 + 5321413);
    t16 = (t0 + 5321405);
    t7 = work_a_1469834779_3212880686_sub_1416977871_3057020925(t0, t15, *((int *)t6), *((int *)t16));
    t17 = (t0 + 4888U);
    t28 = *((char **)t17);
    t17 = (t0 + 5321405);
    t18 = *((int *)t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t17));
    t21 = (t20 * 640U);
    t29 = (t0 + 5321413);
    t22 = *((int *)t29);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t29));
    t25 = (t21 + t24);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t30 = (t28 + t27);
    *((unsigned char *)t30) = t7;

LAB50:    t2 = (t0 + 5321413);
    t13 = *((int *)t2);
    t3 = (t0 + 5321417);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB51;

LAB52:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 5321413);
    *((int *)t4) = t13;
    goto LAB48;

LAB55:    xsi_set_current_line(791, ng6);
    t12 = (640 - 1);
    t4 = (t0 + 5321429);
    *((int *)t4) = 0;
    t5 = (t0 + 5321433);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB58:    if (t13 <= t14)
        goto LAB59;

LAB61:
LAB56:    t2 = (t0 + 5321421);
    t10 = *((int *)t2);
    t3 = (t0 + 5321425);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB57;

LAB63:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 5321421);
    *((int *)t4) = t10;
    goto LAB54;

LAB59:    xsi_set_current_line(792, ng6);
    t6 = (t0 + 4768U);
    t15 = *((char **)t6);
    t6 = (t0 + 5321421);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t6));
    t21 = (t20 * 640U);
    t16 = (t0 + 5321429);
    t22 = *((int *)t16);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t17 = (t15 + t27);
    *((int *)t17) = 0;

LAB60:    t2 = (t0 + 5321429);
    t13 = *((int *)t2);
    t3 = (t0 + 5321433);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB61;

LAB62:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 5321429);
    *((int *)t4) = t13;
    goto LAB58;

LAB65:    xsi_set_current_line(798, ng6);
    t5 = (t0 + 5008U);
    t6 = *((char **)t5);
    t5 = (t0 + 5321437);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t5));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 68U);
    t15 = (t6 + t25);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_set_current_line(799, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 64U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(800, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 24U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(801, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 28U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(802, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 32U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(803, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 36U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(804, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 0U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(805, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 4U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(806, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 8U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(807, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 12U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(808, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 16U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(809, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 20U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(810, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 40U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(811, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 44U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(812, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 48U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(813, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 52U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(814, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 56U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(815, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 60U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(816, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 72U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(817, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321437);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 76U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;

LAB66:    t2 = (t0 + 5321437);
    t11 = *((int *)t2);
    t3 = (t0 + 5321441);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB67;

LAB68:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 5321437);
    *((int *)t4) = t11;
    goto LAB64;

LAB70:    xsi_set_current_line(822, ng6);
    t13 = (640 - 1);
    t5 = (t0 + 5321453);
    *((int *)t5) = 0;
    t6 = (t0 + 5321457);
    *((int *)t6) = t13;
    t14 = 0;
    t18 = t13;

LAB73:    if (t14 <= t18)
        goto LAB74;

LAB76:
LAB71:    t2 = (t0 + 5321445);
    t11 = *((int *)t2);
    t3 = (t0 + 5321449);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB72;

LAB103:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 5321445);
    *((int *)t4) = t11;
    goto LAB69;

LAB74:    xsi_set_current_line(823, ng6);
    t15 = (t0 + 4768U);
    t16 = *((char **)t15);
    t15 = (t0 + 5321445);
    t19 = *((int *)t15);
    t22 = (t19 - 0);
    t20 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t15));
    t21 = (t20 * 640U);
    t17 = (t0 + 5321453);
    t23 = *((int *)t17);
    t31 = (t23 - 0);
    t24 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t17));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t28 = (t16 + t27);
    t32 = *((int *)t28);
    t33 = (t32 == 0);
    if (t33 == 1)
        goto LAB83;

LAB84:    t8 = (unsigned char)0;

LAB85:    if (t8 == 1)
        goto LAB80;

LAB81:    t7 = (unsigned char)0;

LAB82:    if (t7 != 0)
        goto LAB77;

LAB79:
LAB78:
LAB75:    t2 = (t0 + 5321453);
    t14 = *((int *)t2);
    t3 = (t0 + 5321457);
    t18 = *((int *)t3);
    if (t14 == t18)
        goto LAB76;

LAB102:    t9 = (t14 + 1);
    t14 = t9;
    t4 = (t0 + 5321453);
    *((int *)t4) = t14;
    goto LAB73;

LAB77:    xsi_set_current_line(824, ng6);
    t48 = (t0 + 8232);
    t55 = (t0 + 4408U);
    t56 = *((char **)t55);
    memcpy(t57, t56, 1228800U);
    t55 = (t0 + 4888U);
    t58 = *((char **)t55);
    memcpy(t59, t58, 307200U);
    t55 = (t0 + 4768U);
    t60 = *((char **)t55);
    t55 = (t0 + 5321453);
    t61 = (t0 + 5321445);
    t62 = (t0 + 5248U);
    t63 = *((char **)t62);
    t64 = *((int *)t63);
    t62 = (t0 + 5008U);
    t65 = *((char **)t62);
    t62 = (t0 + 5128U);
    t66 = *((char **)t62);
    t67 = *((int *)t66);
    t68 = (t67 - 0);
    t69 = (t68 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t67);
    t70 = (80U * t69);
    t71 = (0 + t70);
    t62 = (t65 + t71);
    work_a_1469834779_3212880686_sub_2407428414_3579431146(t0, t48, t57, t59, t60, *((int *)t55), *((int *)t61), t64, t62);
    xsi_set_current_line(826, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t9);
    t21 = (80U * t20);
    t24 = (0 + t21);
    t2 = (t3 + t24);
    t7 = work_a_1469834779_3212880686_sub_1665737120_3579431146(t0, t2);
    if (t7 != 0)
        goto LAB86;

LAB88:    xsi_set_current_line(832, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t13 = (t10 - 0);
    t20 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t10);
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 12U);
    t2 = (t3 + t25);
    t19 = *((int *)t2);
    t22 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t0, t9, t19);
    t5 = (t0 + 5008U);
    t6 = *((char **)t5);
    t5 = (t0 + 5128U);
    t15 = *((char **)t5);
    t23 = *((int *)t15);
    t31 = (t23 - 0);
    t26 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t23);
    t27 = (80U * t26);
    t36 = (0 + t27);
    t37 = (t36 + 8U);
    t5 = (t6 + t37);
    t32 = *((int *)t5);
    t34 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t0, 0, t32);
    t16 = (t0 + 5321461);
    *((int *)t16) = t34;
    t17 = (t0 + 5321465);
    *((int *)t17) = t22;
    t35 = t34;
    t39 = t22;

LAB89:    if (t35 <= t39)
        goto LAB90;

LAB92:
LAB87:    goto LAB78;

LAB80:    t48 = (t0 + 5128U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t48 = (t0 + 3808U);
    t51 = *((char **)t48);
    t52 = *((int *)t51);
    t53 = (t52 - 1);
    t54 = (t50 < t53);
    t7 = t54;
    goto LAB82;

LAB83:    t29 = (t0 + 4408U);
    t30 = *((char **)t29);
    t29 = (t0 + 5321445);
    t34 = *((int *)t29);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t29));
    t37 = (t36 * 640U);
    t38 = (t0 + 5321453);
    t39 = *((int *)t38);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t38));
    t42 = (t37 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t45 = (t30 + t44);
    t46 = *((int *)t45);
    t47 = work_a_1469834779_3212880686_sub_1403480711_3057020925(t0, t46);
    t8 = t47;
    goto LAB85;

LAB86:    xsi_set_current_line(827, ng6);
    t5 = (t0 + 5008U);
    t6 = *((char **)t5);
    t5 = (t0 + 5128U);
    t15 = *((char **)t5);
    t13 = *((int *)t15);
    t19 = (t13 - 0);
    t25 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t13);
    t26 = (80U * t25);
    t27 = (0 + t26);
    t5 = (t6 + t27);
    t22 = work_a_1469834779_3212880686_sub_3257001932_3579431146(t0, t5);
    t16 = (t0 + 5008U);
    t17 = *((char **)t16);
    t16 = (t0 + 5128U);
    t28 = *((char **)t16);
    t23 = *((int *)t28);
    t31 = (t23 - 0);
    t36 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t23);
    t37 = (80U * t36);
    t41 = (0 + t37);
    t42 = (t41 + 64U);
    t16 = (t17 + t42);
    *((int *)t16) = t22;
    xsi_set_current_line(828, ng6);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 + 1);
    t2 = (t0 + 5128U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t10;
    xsi_set_current_line(829, ng6);
    t2 = (t0 + 5248U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 + 1);
    t2 = (t0 + 5248U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t10;
    goto LAB87;

LAB90:    xsi_set_current_line(833, ng6);
    t40 = (640 - 1);
    t28 = (t0 + 5008U);
    t29 = *((char **)t28);
    t28 = (t0 + 5128U);
    t30 = *((char **)t28);
    t46 = *((int *)t30);
    t50 = (t46 - 0);
    t41 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t46);
    t42 = (80U * t41);
    t43 = (0 + t42);
    t44 = (t43 + 4U);
    t28 = (t29 + t44);
    t52 = *((int *)t28);
    t53 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t0, t40, t52);
    t38 = (t0 + 5008U);
    t45 = *((char **)t38);
    t38 = (t0 + 5128U);
    t48 = *((char **)t38);
    t64 = *((int *)t48);
    t67 = (t64 - 0);
    t69 = (t67 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t64);
    t70 = (80U * t69);
    t71 = (0 + t70);
    t72 = (t71 + 0U);
    t38 = (t45 + t72);
    t68 = *((int *)t38);
    t73 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t0, 0, t68);
    t49 = (t0 + 5321469);
    *((int *)t49) = t73;
    t51 = (t0 + 5321473);
    *((int *)t51) = t53;
    t74 = t73;
    t75 = t53;

LAB93:    if (t74 <= t75)
        goto LAB94;

LAB96:
LAB91:    t2 = (t0 + 5321461);
    t35 = *((int *)t2);
    t3 = (t0 + 5321465);
    t39 = *((int *)t3);
    if (t35 == t39)
        goto LAB92;

LAB101:    t9 = (t35 + 1);
    t35 = t9;
    t4 = (t0 + 5321461);
    *((int *)t4) = t35;
    goto LAB89;

LAB94:    xsi_set_current_line(834, ng6);
    t55 = (t0 + 4768U);
    t56 = *((char **)t55);
    t55 = (t0 + 5321461);
    t76 = *((int *)t55);
    t77 = (t76 - 0);
    t78 = (t77 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t55));
    t79 = (t78 * 640U);
    t58 = (t0 + 5321469);
    t80 = *((int *)t58);
    t81 = (t80 - 0);
    t82 = (t81 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t58));
    t83 = (t79 + t82);
    t84 = (4U * t83);
    t85 = (0 + t84);
    t60 = (t56 + t85);
    t86 = *((int *)t60);
    t61 = (t0 + 5248U);
    t62 = *((char **)t61);
    t87 = *((int *)t62);
    t7 = (t86 == t87);
    if (t7 != 0)
        goto LAB97;

LAB99:
LAB98:
LAB95:    t2 = (t0 + 5321469);
    t74 = *((int *)t2);
    t3 = (t0 + 5321473);
    t75 = *((int *)t3);
    if (t74 == t75)
        goto LAB96;

LAB100:    t9 = (t74 + 1);
    t74 = t9;
    t4 = (t0 + 5321469);
    *((int *)t4) = t74;
    goto LAB93;

LAB97:    xsi_set_current_line(835, ng6);
    t61 = (t0 + 4768U);
    t63 = *((char **)t61);
    t61 = (t0 + 5321461);
    t88 = *((int *)t61);
    t89 = (t88 - 0);
    t90 = (t89 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t61));
    t91 = (t90 * 640U);
    t65 = (t0 + 5321469);
    t92 = *((int *)t65);
    t93 = (t92 - 0);
    t94 = (t93 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t65));
    t95 = (t91 + t94);
    t96 = (4U * t95);
    t97 = (0 + t96);
    t66 = (t63 + t97);
    *((int *)t66) = 0;
    goto LAB98;

LAB105:    xsi_set_current_line(846, ng6);
    t5 = (t0 + 5008U);
    t6 = *((char **)t5);
    t5 = (t0 + 5321477);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t5));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 68U);
    t15 = (t6 + t25);
    t7 = *((unsigned char *)t15);
    if (t7 != 0)
        goto LAB108;

LAB110:
LAB109:
LAB106:    t2 = (t0 + 5321477);
    t11 = *((int *)t2);
    t3 = (t0 + 5321481);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB107;

LAB126:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 5321477);
    *((int *)t4) = t11;
    goto LAB104;

LAB108:    xsi_set_current_line(847, ng6);
    t16 = (t0 + 5128U);
    t17 = *((char **)t16);
    t18 = *((int *)t17);
    t19 = (t18 - 1);
    t16 = (t0 + 5321477);
    t22 = *((int *)t16);
    t23 = (t22 + 1);
    t28 = (t0 + 5321485);
    *((int *)t28) = t23;
    t29 = (t0 + 5321489);
    *((int *)t29) = t19;
    t31 = t23;
    t32 = t19;

LAB111:    if (t31 <= t32)
        goto LAB112;

LAB114:    goto LAB109;

LAB112:    xsi_set_current_line(848, ng6);
    t30 = (t0 + 5008U);
    t38 = *((char **)t30);
    t30 = (t0 + 5321485);
    t34 = *((int *)t30);
    t35 = (t34 - 0);
    t26 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t30));
    t27 = (80U * t26);
    t36 = (0 + t27);
    t37 = (t36 + 68U);
    t45 = (t38 + t37);
    t8 = *((unsigned char *)t45);
    if (t8 != 0)
        goto LAB115;

LAB117:
LAB116:
LAB113:    t2 = (t0 + 5321485);
    t31 = *((int *)t2);
    t3 = (t0 + 5321489);
    t32 = *((int *)t3);
    if (t31 == t32)
        goto LAB114;

LAB125:    t9 = (t31 + 1);
    t31 = t9;
    t4 = (t0 + 5321485);
    *((int *)t4) = t31;
    goto LAB111;

LAB115:    xsi_set_current_line(849, ng6);
    t48 = (t0 + 5008U);
    t49 = *((char **)t48);
    t48 = (t0 + 5321477);
    t39 = *((int *)t48);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t48));
    t42 = (80U * t41);
    t43 = (0 + t42);
    t51 = (t49 + t43);
    t55 = (t0 + 5008U);
    t56 = *((char **)t55);
    t55 = (t0 + 5321485);
    t46 = *((int *)t55);
    t50 = (t46 - 0);
    t44 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t55));
    t69 = (80U * t44);
    t70 = (0 + t69);
    t58 = (t56 + t70);
    t33 = work_a_1469834779_3212880686_sub_4049322568_3579431146(t0, t51, t58, 25);
    if (t33 != 0)
        goto LAB118;

LAB120:
LAB119:    goto LAB116;

LAB118:    xsi_set_current_line(850, ng6);
    t60 = (t0 + 5008U);
    t61 = *((char **)t60);
    t60 = (t0 + 5321477);
    t52 = *((int *)t60);
    t53 = (t52 - 0);
    t71 = (t53 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t60));
    t72 = (80U * t71);
    t78 = (0 + t72);
    t79 = (t78 + 64U);
    t62 = (t61 + t79);
    t64 = *((int *)t62);
    t63 = (t0 + 5008U);
    t65 = *((char **)t63);
    t63 = (t0 + 5321485);
    t67 = *((int *)t63);
    t68 = (t67 - 0);
    t82 = (t68 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t63));
    t83 = (80U * t82);
    t84 = (0 + t83);
    t85 = (t84 + 64U);
    t66 = (t65 + t85);
    t73 = *((int *)t66);
    t47 = (t64 >= t73);
    if (t47 != 0)
        goto LAB121;

LAB123:    xsi_set_current_line(853, ng6);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5321477);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t2));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 68U);
    t4 = (t3 + t25);
    *((unsigned char *)t4) = (unsigned char)0;
    xsi_set_current_line(854, ng6);
    goto LAB114;

LAB121:    xsi_set_current_line(851, ng6);
    t98 = (t0 + 5008U);
    t99 = *((char **)t98);
    t98 = (t0 + 5321485);
    t74 = *((int *)t98);
    t75 = (t74 - 0);
    t90 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t98));
    t91 = (80U * t90);
    t94 = (0 + t91);
    t95 = (t94 + 68U);
    t100 = (t99 + t95);
    *((unsigned char *)t100) = (unsigned char)0;

LAB122:    goto LAB119;

LAB124:    goto LAB122;

LAB128:    xsi_set_current_line(867, ng6);
    t5 = (t0 + 5008U);
    t6 = *((char **)t5);
    t5 = (t0 + 5321493);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t5));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 68U);
    t15 = (t6 + t25);
    t33 = *((unsigned char *)t15);
    if (t33 == 1)
        goto LAB137;

LAB138:    t8 = (unsigned char)0;

LAB139:    if (t8 == 1)
        goto LAB134;

LAB135:    t7 = (unsigned char)0;

LAB136:    if (t7 != 0)
        goto LAB131;

LAB133:
LAB132:
LAB129:    t2 = (t0 + 5321493);
    t11 = *((int *)t2);
    t3 = (t0 + 5321497);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB130;

LAB140:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 5321493);
    *((int *)t4) = t11;
    goto LAB127;

LAB131:    xsi_set_current_line(868, ng6);
    t48 = (t0 + 5008U);
    t49 = *((char **)t48);
    t48 = (t0 + 5321493);
    t35 = *((int *)t48);
    t39 = (t35 - 0);
    t69 = (t39 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t48));
    t70 = (80U * t69);
    t71 = (0 + t70);
    t72 = (t71 + 64U);
    t51 = (t49 + t72);
    t40 = *((int *)t51);
    t55 = (t0 + 5488U);
    t56 = *((char **)t55);
    t55 = (t56 + 0);
    *((int *)t55) = t40;
    xsi_set_current_line(869, ng6);
    t2 = (t0 + 5321493);
    t3 = (t0 + 5368U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = *((int *)t2);
    goto LAB132;

LAB134:    t29 = (t0 + 5008U);
    t38 = *((char **)t29);
    t29 = (t0 + 5321493);
    t31 = *((int *)t29);
    t32 = (t31 - 0);
    t41 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t29));
    t42 = (80U * t41);
    t43 = (0 + t42);
    t44 = (t43 + 64U);
    t45 = (t38 + t44);
    t34 = *((int *)t45);
    t54 = (t34 >= 25);
    t7 = t54;
    goto LAB136;

LAB137:    t16 = (t0 + 5008U);
    t17 = *((char **)t16);
    t16 = (t0 + 5321493);
    t18 = *((int *)t16);
    t19 = (t18 - 0);
    t26 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t16));
    t27 = (80U * t26);
    t36 = (0 + t27);
    t37 = (t36 + 64U);
    t28 = (t17 + t37);
    t22 = *((int *)t28);
    t29 = (t0 + 5488U);
    t30 = *((char **)t29);
    t23 = *((int *)t30);
    t47 = (t22 > t23);
    t8 = t47;
    goto LAB139;

LAB142:    xsi_set_current_line(875, ng6);
    t12 = (640 - 1);
    t4 = (t0 + 5321509);
    *((int *)t4) = 0;
    t5 = (t0 + 5321513);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB145:    if (t13 <= t14)
        goto LAB146;

LAB148:
LAB143:    t2 = (t0 + 5321501);
    t10 = *((int *)t2);
    t3 = (t0 + 5321505);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB144;

LAB150:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 5321501);
    *((int *)t4) = t10;
    goto LAB141;

LAB146:    xsi_set_current_line(876, ng6);
    t6 = (t0 + 4528U);
    t15 = *((char **)t6);
    t6 = (t0 + 5321501);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t6));
    t21 = (t20 * 640U);
    t16 = (t0 + 5321509);
    t22 = *((int *)t16);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t17 = (t15 + t27);
    t31 = *((int *)t17);
    t28 = (t0 + 4648U);
    t29 = *((char **)t28);
    t28 = (t0 + 5321501);
    t32 = *((int *)t28);
    t34 = (t32 - 0);
    t36 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t28));
    t37 = (t36 * 640U);
    t30 = (t0 + 5321509);
    t35 = *((int *)t30);
    t39 = (t35 - 0);
    t41 = (t39 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t30));
    t42 = (t37 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t38 = (t29 + t44);
    *((int *)t38) = t31;

LAB147:    t2 = (t0 + 5321509);
    t13 = *((int *)t2);
    t3 = (t0 + 5321513);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB148;

LAB149:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 5321509);
    *((int *)t4) = t13;
    goto LAB145;

LAB151:    xsi_set_current_line(883, ng6);
    t2 = (t0 + 4408U);
    t4 = *((char **)t2);
    t2 = (t0 + 5008U);
    t5 = *((char **)t2);
    t2 = (t0 + 5368U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 - 0);
    t20 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t10);
    t21 = (80U * t20);
    t24 = (0 + t21);
    t2 = (t5 + t24);
    t15 = (t0 + 4888U);
    t16 = *((char **)t15);
    t15 = work_a_1469834779_3212880686_sub_3783596958_3579431146(t0, t4, t2, t16);
    t17 = (t0 + 5008U);
    t28 = *((char **)t17);
    t17 = (t0 + 5368U);
    t29 = *((char **)t17);
    t12 = *((int *)t29);
    t13 = (t12 - 0);
    t25 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t12);
    t26 = (80U * t25);
    t27 = (0 + t26);
    t17 = (t28 + t27);
    memcpy(t17, t15, 80U);
    xsi_set_current_line(890, ng6);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5008U);
    t4 = *((char **)t2);
    t2 = (t0 + 5368U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, t9);
    t21 = (80U * t20);
    t24 = (0 + t21);
    t2 = (t4 + t24);
    t6 = (t0 + 4888U);
    t15 = *((char **)t6);
    t6 = work_a_1469834779_3212880686_sub_1204415402_3579431146(t0, t3, t2, 640, 480, t15);
    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    memcpy(t16, t6, 80U);
    xsi_set_current_line(899, ng6);
    t9 = (640 - 1);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t10 = *((int *)t2);
    t11 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t0, t9, t10);
    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 0U);
    t4 = (t5 + t21);
    t12 = *((int *)t4);
    t13 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t0, 0, t12);
    t6 = (t0 + 5321517);
    *((int *)t6) = t13;
    t15 = (t0 + 5321521);
    *((int *)t15) = t11;
    t14 = t13;
    t18 = t11;

LAB154:    if (t14 <= t18)
        goto LAB155;

LAB157:    xsi_set_current_line(908, ng6);
    t9 = (480 - 1);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 12U);
    t2 = (t3 + t20);
    t10 = *((int *)t2);
    t11 = work_a_1469834779_3212880686_sub_3202609556_3057020925(t0, t9, t10);
    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 8U);
    t4 = (t5 + t21);
    t12 = *((int *)t4);
    t13 = work_a_1469834779_3212880686_sub_3202332950_3057020925(t0, 0, t12);
    t6 = (t0 + 5321525);
    *((int *)t6) = t13;
    t15 = (t0 + 5321529);
    *((int *)t15) = t11;
    t14 = t13;
    t18 = t11;

LAB171:    if (t14 <= t18)
        goto LAB172;

LAB174:    xsi_set_current_line(918, ng6);
    t2 = (t0 + 5321533);
    *((int *)t2) = 0;
    t3 = (t0 + 5321537);
    *((int *)t3) = 4;
    t9 = 0;
    t10 = 4;

LAB188:    if (t9 <= t10)
        goto LAB189;

LAB191:    xsi_set_current_line(961, ng6);
    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 >= 70);
    if (t7 != 0)
        goto LAB289;

LAB291:    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 >= 60);
    if (t7 != 0)
        goto LAB292;

LAB293:    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 >= 45);
    if (t7 != 0)
        goto LAB294;

LAB295:    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 >= 30);
    if (t7 != 0)
        goto LAB296;

LAB297:    xsi_set_current_line(970, ng6);
    t2 = (t0 + 6088U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 45;

LAB290:    xsi_set_current_line(973, ng6);
    t2 = (t0 + 5321541);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 6088U);
    t6 = *((char **)t5);
    t9 = *((int *)t6);
    t5 = xsi_int_to_mem(t9);
    t15 = xsi_string_variable_get_image(t103, t4, t5);
    t17 = ((STD_STANDARD) + 1008);
    t28 = (t105 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 1;
    t29 = (t28 + 4U);
    *((int *)t29) = 40;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t10 = (40 - 1);
    t20 = (t10 * 1);
    t20 = (t20 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t20;
    t16 = xsi_base_array_concat(t16, t104, t17, (char)97, t2, t105, (char)97, t15, t103, (char)101);
    t29 = (t0 + 5321581);
    t45 = ((STD_STANDARD) + 1008);
    t48 = (t107 + 0U);
    t49 = (t48 + 0U);
    *((int *)t49) = 1;
    t49 = (t48 + 4U);
    *((int *)t49) = 1;
    t49 = (t48 + 8U);
    *((int *)t49) = 1;
    t11 = (1 - 1);
    t20 = (t11 * 1);
    t20 = (t20 + 1);
    t49 = (t48 + 12U);
    *((unsigned int *)t49) = t20;
    t38 = xsi_base_array_concat(t38, t106, t45, (char)97, t16, t104, (char)97, t29, t107, (char)101);
    t49 = (t103 + 12U);
    t20 = *((unsigned int *)t49);
    t21 = (40U + t20);
    t24 = (t21 + 1U);
    xsi_report(t38, t24, (unsigned char)0);
    xsi_set_current_line(974, ng6);
    t2 = (t0 + 5321582);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 5608U);
    t6 = *((char **)t5);
    t20 = (0 + 0U);
    t5 = (t6 + t20);
    t9 = *((int *)t5);
    t15 = xsi_int_to_mem(t9);
    t16 = xsi_string_variable_get_image(t103, t4, t15);
    t28 = ((STD_STANDARD) + 1008);
    t29 = (t105 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 1;
    t30 = (t29 + 4U);
    *((int *)t30) = 11;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t10 = (11 - 1);
    t21 = (t10 * 1);
    t21 = (t21 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t21;
    t17 = xsi_base_array_concat(t17, t104, t28, (char)97, t2, t105, (char)97, t16, t103, (char)101);
    t30 = (t0 + 5321593);
    t48 = ((STD_STANDARD) + 1008);
    t49 = (t107 + 0U);
    t51 = (t49 + 0U);
    *((int *)t51) = 1;
    t51 = (t49 + 4U);
    *((int *)t51) = 1;
    t51 = (t49 + 8U);
    *((int *)t51) = 1;
    t11 = (1 - 1);
    t21 = (t11 * 1);
    t21 = (t21 + 1);
    t51 = (t49 + 12U);
    *((unsigned int *)t51) = t21;
    t45 = xsi_base_array_concat(t45, t106, t48, (char)97, t17, t104, (char)97, t30, t107, (char)101);
    t51 = ((STD_STANDARD) + 384);
    t55 = (t0 + 5608U);
    t56 = *((char **)t55);
    t21 = (0 + 8U);
    t55 = (t56 + t21);
    t12 = *((int *)t55);
    t58 = xsi_int_to_mem(t12);
    t60 = xsi_string_variable_get_image(t108, t51, t58);
    t62 = ((STD_STANDARD) + 1008);
    t61 = xsi_base_array_concat(t61, t109, t62, (char)97, t45, t106, (char)97, t60, t108, (char)101);
    t63 = (t0 + 5321594);
    t98 = ((STD_STANDARD) + 1008);
    t99 = (t111 + 0U);
    t100 = (t99 + 0U);
    *((int *)t100) = 1;
    t100 = (t99 + 4U);
    *((int *)t100) = 6;
    t100 = (t99 + 8U);
    *((int *)t100) = 1;
    t13 = (6 - 1);
    t24 = (t13 * 1);
    t24 = (t24 + 1);
    t100 = (t99 + 12U);
    *((unsigned int *)t100) = t24;
    t66 = xsi_base_array_concat(t66, t110, t98, (char)97, t61, t109, (char)97, t63, t111, (char)101);
    t100 = ((STD_STANDARD) + 384);
    t113 = (t0 + 5608U);
    t114 = *((char **)t113);
    t24 = (0 + 4U);
    t113 = (t114 + t24);
    t14 = *((int *)t113);
    t115 = xsi_int_to_mem(t14);
    t116 = xsi_string_variable_get_image(t112, t100, t115);
    t119 = ((STD_STANDARD) + 1008);
    t117 = xsi_base_array_concat(t117, t118, t119, (char)97, t66, t110, (char)97, t116, t112, (char)101);
    t120 = (t0 + 5321600);
    t124 = ((STD_STANDARD) + 1008);
    t126 = (t125 + 0U);
    t127 = (t126 + 0U);
    *((int *)t127) = 1;
    t127 = (t126 + 4U);
    *((int *)t127) = 1;
    t127 = (t126 + 8U);
    *((int *)t127) = 1;
    t18 = (1 - 1);
    t25 = (t18 * 1);
    t25 = (t25 + 1);
    t127 = (t126 + 12U);
    *((unsigned int *)t127) = t25;
    t122 = xsi_base_array_concat(t122, t123, t124, (char)97, t117, t118, (char)97, t120, t125, (char)101);
    t127 = ((STD_STANDARD) + 384);
    t129 = (t0 + 5608U);
    t130 = *((char **)t129);
    t25 = (0 + 12U);
    t129 = (t130 + t25);
    t19 = *((int *)t129);
    t131 = xsi_int_to_mem(t19);
    t132 = xsi_string_variable_get_image(t128, t127, t131);
    t135 = ((STD_STANDARD) + 1008);
    t133 = xsi_base_array_concat(t133, t134, t135, (char)97, t122, t123, (char)97, t132, t128, (char)101);
    t136 = (t0 + 5321601);
    t140 = ((STD_STANDARD) + 1008);
    t142 = (t141 + 0U);
    t143 = (t142 + 0U);
    *((int *)t143) = 1;
    t143 = (t142 + 4U);
    *((int *)t143) = 1;
    t143 = (t142 + 8U);
    *((int *)t143) = 1;
    t22 = (1 - 1);
    t26 = (t22 * 1);
    t26 = (t26 + 1);
    t143 = (t142 + 12U);
    *((unsigned int *)t143) = t26;
    t138 = xsi_base_array_concat(t138, t139, t140, (char)97, t133, t134, (char)97, t136, t141, (char)101);
    t143 = (t103 + 12U);
    t26 = *((unsigned int *)t143);
    t27 = (11U + t26);
    t36 = (t27 + 1U);
    t144 = (t108 + 12U);
    t37 = *((unsigned int *)t144);
    t41 = (t36 + t37);
    t42 = (t41 + 6U);
    t145 = (t112 + 12U);
    t43 = *((unsigned int *)t145);
    t44 = (t42 + t43);
    t69 = (t44 + 1U);
    t146 = (t128 + 12U);
    t70 = *((unsigned int *)t146);
    t71 = (t69 + t70);
    t72 = (t71 + 1U);
    xsi_report(t138, t72, (unsigned char)0);
    xsi_set_current_line(978, ng6);
    t113 = (t0 + 5321602);
    t115 = ((STD_STANDARD) + 384);
    t116 = (t0 + 5608U);
    t117 = *((char **)t116);
    t20 = (0 + 16U);
    t116 = (t117 + t20);
    t9 = *((int *)t116);
    t119 = xsi_int_to_mem(t9);
    t120 = xsi_string_variable_get_image(t103, t115, t119);
    t122 = ((STD_STANDARD) + 1008);
    t124 = (t105 + 0U);
    t126 = (t124 + 0U);
    *((int *)t126) = 1;
    t126 = (t124 + 4U);
    *((int *)t126) = 12;
    t126 = (t124 + 8U);
    *((int *)t126) = 1;
    t10 = (12 - 1);
    t21 = (t10 * 1);
    t21 = (t21 + 1);
    t126 = (t124 + 12U);
    *((unsigned int *)t126) = t21;
    t121 = xsi_base_array_concat(t121, t104, t122, (char)97, t113, t105, (char)97, t120, t103, (char)101);
    t126 = (t0 + 5321614);
    t130 = ((STD_STANDARD) + 1008);
    t131 = (t107 + 0U);
    t132 = (t131 + 0U);
    *((int *)t132) = 1;
    t132 = (t131 + 4U);
    *((int *)t132) = 1;
    t132 = (t131 + 8U);
    *((int *)t132) = 1;
    t11 = (1 - 1);
    t21 = (t11 * 1);
    t21 = (t21 + 1);
    t132 = (t131 + 12U);
    *((unsigned int *)t132) = t21;
    t129 = xsi_base_array_concat(t129, t106, t130, (char)97, t121, t104, (char)97, t126, t107, (char)101);
    t132 = ((STD_STANDARD) + 384);
    t133 = (t0 + 5608U);
    t135 = *((char **)t133);
    t21 = (0 + 20U);
    t133 = (t135 + t21);
    t12 = *((int *)t133);
    t136 = xsi_int_to_mem(t12);
    t137 = xsi_string_variable_get_image(t108, t132, t136);
    t140 = ((STD_STANDARD) + 1008);
    t138 = xsi_base_array_concat(t138, t109, t140, (char)97, t129, t106, (char)97, t137, t108, (char)101);
    t142 = (t103 + 12U);
    t24 = *((unsigned int *)t142);
    t25 = (12U + t24);
    t26 = (t25 + 1U);
    t143 = (t108 + 12U);
    t27 = *((unsigned int *)t143);
    t36 = (t26 + t27);
    xsi_report(t138, t36, (unsigned char)0);
    goto LAB152;

LAB155:    xsi_set_current_line(900, ng6);
    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t24 = (0 + 8U);
    t16 = (t17 + t24);
    t19 = *((int *)t16);
    t8 = (t19 >= 0);
    if (t8 == 1)
        goto LAB161;

LAB162:    t7 = (unsigned char)0;

LAB163:    if (t7 != 0)
        goto LAB158;

LAB160:
LAB159:    xsi_set_current_line(903, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 12U);
    t2 = (t3 + t20);
    t9 = *((int *)t2);
    t8 = (t9 >= 0);
    if (t8 == 1)
        goto LAB167;

LAB168:    t7 = (unsigned char)0;

LAB169:    if (t7 != 0)
        goto LAB164;

LAB166:
LAB165:
LAB156:    t2 = (t0 + 5321517);
    t14 = *((int *)t2);
    t3 = (t0 + 5321521);
    t18 = *((int *)t3);
    if (t14 == t18)
        goto LAB157;

LAB170:    t9 = (t14 + 1);
    t14 = t9;
    t4 = (t0 + 5321517);
    *((int *)t4) = t14;
    goto LAB154;

LAB158:    xsi_set_current_line(901, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 8U);
    t30 = (t45 + t26);
    t23 = *((int *)t30);
    t31 = (t23 - 0);
    t27 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t23);
    t36 = (t27 * 640U);
    t48 = (t0 + 5321517);
    t32 = *((int *)t48);
    t34 = (t32 - 0);
    t37 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t48));
    t41 = (t36 + t37);
    t42 = (4U * t41);
    t43 = (0 + t42);
    t49 = (t38 + t43);
    *((int *)t49) = 255;
    goto LAB159;

LAB161:    t28 = (t0 + 5608U);
    t29 = *((char **)t28);
    t25 = (0 + 8U);
    t28 = (t29 + t25);
    t22 = *((int *)t28);
    t33 = (t22 < 480);
    t7 = t33;
    goto LAB163;

LAB164:    xsi_set_current_line(904, ng6);
    t6 = (t0 + 4648U);
    t15 = *((char **)t6);
    t6 = (t0 + 5608U);
    t16 = *((char **)t6);
    t24 = (0 + 12U);
    t6 = (t16 + t24);
    t11 = *((int *)t6);
    t12 = (t11 - 0);
    t25 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t11);
    t26 = (t25 * 640U);
    t17 = (t0 + 5321517);
    t13 = *((int *)t17);
    t19 = (t13 - 0);
    t27 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t17));
    t36 = (t26 + t27);
    t37 = (4U * t36);
    t41 = (0 + t37);
    t28 = (t15 + t41);
    *((int *)t28) = 255;
    goto LAB165;

LAB167:    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 12U);
    t4 = (t5 + t21);
    t10 = *((int *)t4);
    t33 = (t10 < 480);
    t7 = t33;
    goto LAB169;

LAB172:    xsi_set_current_line(909, ng6);
    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t24 = (0 + 0U);
    t16 = (t17 + t24);
    t19 = *((int *)t16);
    t8 = (t19 >= 0);
    if (t8 == 1)
        goto LAB178;

LAB179:    t7 = (unsigned char)0;

LAB180:    if (t7 != 0)
        goto LAB175;

LAB177:
LAB176:    xsi_set_current_line(912, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t9 = *((int *)t2);
    t8 = (t9 >= 0);
    if (t8 == 1)
        goto LAB184;

LAB185:    t7 = (unsigned char)0;

LAB186:    if (t7 != 0)
        goto LAB181;

LAB183:
LAB182:
LAB173:    t2 = (t0 + 5321525);
    t14 = *((int *)t2);
    t3 = (t0 + 5321529);
    t18 = *((int *)t3);
    if (t14 == t18)
        goto LAB174;

LAB187:    t9 = (t14 + 1);
    t14 = t9;
    t4 = (t0 + 5321525);
    *((int *)t4) = t14;
    goto LAB171;

LAB175:    xsi_set_current_line(910, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5321525);
    t23 = *((int *)t30);
    t31 = (t23 - 0);
    t26 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t30));
    t27 = (t26 * 640U);
    t45 = (t0 + 5608U);
    t48 = *((char **)t45);
    t36 = (0 + 0U);
    t45 = (t48 + t36);
    t32 = *((int *)t45);
    t34 = (t32 - 0);
    t37 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t32);
    t41 = (t27 + t37);
    t42 = (4U * t41);
    t43 = (0 + t42);
    t49 = (t38 + t43);
    *((int *)t49) = 255;
    goto LAB176;

LAB178:    t28 = (t0 + 5608U);
    t29 = *((char **)t28);
    t25 = (0 + 0U);
    t28 = (t29 + t25);
    t22 = *((int *)t28);
    t33 = (t22 < 640);
    t7 = t33;
    goto LAB180;

LAB181:    xsi_set_current_line(913, ng6);
    t6 = (t0 + 4648U);
    t15 = *((char **)t6);
    t6 = (t0 + 5321525);
    t11 = *((int *)t6);
    t12 = (t11 - 0);
    t24 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t6));
    t25 = (t24 * 640U);
    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t26 = (0 + 4U);
    t16 = (t17 + t26);
    t13 = *((int *)t16);
    t19 = (t13 - 0);
    t27 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t13);
    t36 = (t25 + t27);
    t37 = (4U * t36);
    t41 = (0 + t37);
    t28 = (t15 + t41);
    *((int *)t28) = 255;
    goto LAB182;

LAB184:    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 4U);
    t4 = (t5 + t21);
    t10 = *((int *)t4);
    t33 = (t10 < 640);
    t7 = t33;
    goto LAB186;

LAB189:    xsi_set_current_line(920, ng6);
    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t20 = (0 + 0U);
    t4 = (t5 + t20);
    t11 = *((int *)t4);
    t6 = (t0 + 5321533);
    t12 = *((int *)t6);
    t13 = (t11 + t12);
    t47 = (t13 >= 0);
    if (t47 == 1)
        goto LAB201;

LAB202:    t33 = (unsigned char)0;

LAB203:    if (t33 == 1)
        goto LAB198;

LAB199:    t8 = (unsigned char)0;

LAB200:    if (t8 == 1)
        goto LAB195;

LAB196:    t7 = (unsigned char)0;

LAB197:    if (t7 != 0)
        goto LAB192;

LAB194:
LAB193:    xsi_set_current_line(924, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 0U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t47 = (t11 >= 0);
    if (t47 == 1)
        goto LAB213;

LAB214:    t33 = (unsigned char)0;

LAB215:    if (t33 == 1)
        goto LAB210;

LAB211:    t8 = (unsigned char)0;

LAB212:    if (t8 == 1)
        goto LAB207;

LAB208:    t7 = (unsigned char)0;

LAB209:    if (t7 != 0)
        goto LAB204;

LAB206:
LAB205:    xsi_set_current_line(930, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t4 = (t0 + 5321533);
    t12 = *((int *)t4);
    t13 = (t11 - t12);
    t47 = (t13 >= 0);
    if (t47 == 1)
        goto LAB225;

LAB226:    t33 = (unsigned char)0;

LAB227:    if (t33 == 1)
        goto LAB222;

LAB223:    t8 = (unsigned char)0;

LAB224:    if (t8 == 1)
        goto LAB219;

LAB220:    t7 = (unsigned char)0;

LAB221:    if (t7 != 0)
        goto LAB216;

LAB218:
LAB217:    xsi_set_current_line(934, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t47 = (t11 >= 0);
    if (t47 == 1)
        goto LAB237;

LAB238:    t33 = (unsigned char)0;

LAB239:    if (t33 == 1)
        goto LAB234;

LAB235:    t8 = (unsigned char)0;

LAB236:    if (t8 == 1)
        goto LAB231;

LAB232:    t7 = (unsigned char)0;

LAB233:    if (t7 != 0)
        goto LAB228;

LAB230:
LAB229:    xsi_set_current_line(940, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 0U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t4 = (t0 + 5321533);
    t12 = *((int *)t4);
    t13 = (t11 + t12);
    t47 = (t13 >= 0);
    if (t47 == 1)
        goto LAB249;

LAB250:    t33 = (unsigned char)0;

LAB251:    if (t33 == 1)
        goto LAB246;

LAB247:    t8 = (unsigned char)0;

LAB248:    if (t8 == 1)
        goto LAB243;

LAB244:    t7 = (unsigned char)0;

LAB245:    if (t7 != 0)
        goto LAB240;

LAB242:
LAB241:    xsi_set_current_line(944, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 0U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t47 = (t11 >= 0);
    if (t47 == 1)
        goto LAB261;

LAB262:    t33 = (unsigned char)0;

LAB263:    if (t33 == 1)
        goto LAB258;

LAB259:    t8 = (unsigned char)0;

LAB260:    if (t8 == 1)
        goto LAB255;

LAB256:    t7 = (unsigned char)0;

LAB257:    if (t7 != 0)
        goto LAB252;

LAB254:
LAB253:    xsi_set_current_line(950, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t4 = (t0 + 5321533);
    t12 = *((int *)t4);
    t13 = (t11 - t12);
    t47 = (t13 >= 0);
    if (t47 == 1)
        goto LAB273;

LAB274:    t33 = (unsigned char)0;

LAB275:    if (t33 == 1)
        goto LAB270;

LAB271:    t8 = (unsigned char)0;

LAB272:    if (t8 == 1)
        goto LAB267;

LAB268:    t7 = (unsigned char)0;

LAB269:    if (t7 != 0)
        goto LAB264;

LAB266:
LAB265:    xsi_set_current_line(954, ng6);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t11 = *((int *)t2);
    t47 = (t11 >= 0);
    if (t47 == 1)
        goto LAB285;

LAB286:    t33 = (unsigned char)0;

LAB287:    if (t33 == 1)
        goto LAB282;

LAB283:    t8 = (unsigned char)0;

LAB284:    if (t8 == 1)
        goto LAB279;

LAB280:    t7 = (unsigned char)0;

LAB281:    if (t7 != 0)
        goto LAB276;

LAB278:
LAB277:
LAB190:    t2 = (t0 + 5321533);
    t9 = *((int *)t2);
    t3 = (t0 + 5321537);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB191;

LAB288:    t11 = (t9 + 1);
    t9 = t11;
    t4 = (t0 + 5321533);
    *((int *)t4) = t9;
    goto LAB188;

LAB192:    xsi_set_current_line(922, ng6);
    t45 = (t0 + 4648U);
    t48 = *((char **)t45);
    t45 = (t0 + 5608U);
    t49 = *((char **)t45);
    t26 = (0 + 8U);
    t45 = (t49 + t26);
    t31 = *((int *)t45);
    t32 = (t31 - 0);
    t27 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t31);
    t36 = (t27 * 640U);
    t51 = (t0 + 5608U);
    t55 = *((char **)t51);
    t37 = (0 + 0U);
    t51 = (t55 + t37);
    t34 = *((int *)t51);
    t56 = (t0 + 5321533);
    t35 = *((int *)t56);
    t39 = (t34 + t35);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t58 = (t48 + t44);
    *((int *)t58) = 255;
    goto LAB193;

LAB195:    t30 = (t0 + 5608U);
    t38 = *((char **)t30);
    t25 = (0 + 8U);
    t30 = (t38 + t25);
    t23 = *((int *)t30);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB197;

LAB198:    t28 = (t0 + 5608U);
    t29 = *((char **)t28);
    t24 = (0 + 8U);
    t28 = (t29 + t24);
    t22 = *((int *)t28);
    t101 = (t22 >= 0);
    t8 = t101;
    goto LAB200;

LAB201:    t15 = (t0 + 5608U);
    t16 = *((char **)t15);
    t21 = (0 + 0U);
    t15 = (t16 + t21);
    t14 = *((int *)t15);
    t17 = (t0 + 5321533);
    t18 = *((int *)t17);
    t19 = (t14 + t18);
    t54 = (t19 < 640);
    t33 = t54;
    goto LAB203;

LAB204:    xsi_set_current_line(926, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 8U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t48 = (t0 + 5321533);
    t32 = *((int *)t48);
    t34 = (t31 + t32);
    t35 = (t34 - 0);
    t27 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t34);
    t36 = (t27 * 640U);
    t49 = (t0 + 5608U);
    t51 = *((char **)t49);
    t37 = (0 + 0U);
    t49 = (t51 + t37);
    t39 = *((int *)t49);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB205;

LAB207:    t17 = (t0 + 5608U);
    t28 = *((char **)t17);
    t25 = (0 + 8U);
    t17 = (t28 + t25);
    t19 = *((int *)t17);
    t29 = (t0 + 5321533);
    t22 = *((int *)t29);
    t23 = (t19 + t22);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB209;

LAB210:    t6 = (t0 + 5608U);
    t15 = *((char **)t6);
    t24 = (0 + 8U);
    t6 = (t15 + t24);
    t13 = *((int *)t6);
    t16 = (t0 + 5321533);
    t14 = *((int *)t16);
    t18 = (t13 + t14);
    t101 = (t18 >= 0);
    t8 = t101;
    goto LAB212;

LAB213:    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 0U);
    t4 = (t5 + t21);
    t12 = *((int *)t4);
    t54 = (t12 < 640);
    t33 = t54;
    goto LAB215;

LAB216:    xsi_set_current_line(932, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 8U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t32 = (t31 - 0);
    t27 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t31);
    t36 = (t27 * 640U);
    t48 = (t0 + 5608U);
    t49 = *((char **)t48);
    t37 = (0 + 4U);
    t48 = (t49 + t37);
    t34 = *((int *)t48);
    t51 = (t0 + 5321533);
    t35 = *((int *)t51);
    t39 = (t34 - t35);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB217;

LAB219:    t28 = (t0 + 5608U);
    t29 = *((char **)t28);
    t25 = (0 + 8U);
    t28 = (t29 + t25);
    t23 = *((int *)t28);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB221;

LAB222:    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t24 = (0 + 8U);
    t16 = (t17 + t24);
    t22 = *((int *)t16);
    t101 = (t22 >= 0);
    t8 = t101;
    goto LAB224;

LAB225:    t5 = (t0 + 5608U);
    t6 = *((char **)t5);
    t21 = (0 + 4U);
    t5 = (t6 + t21);
    t14 = *((int *)t5);
    t15 = (t0 + 5321533);
    t18 = *((int *)t15);
    t19 = (t14 - t18);
    t54 = (t19 < 640);
    t33 = t54;
    goto LAB227;

LAB228:    xsi_set_current_line(936, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 8U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t48 = (t0 + 5321533);
    t32 = *((int *)t48);
    t34 = (t31 + t32);
    t35 = (t34 - 0);
    t27 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t34);
    t36 = (t27 * 640U);
    t49 = (t0 + 5608U);
    t51 = *((char **)t49);
    t37 = (0 + 4U);
    t49 = (t51 + t37);
    t39 = *((int *)t49);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB229;

LAB231:    t17 = (t0 + 5608U);
    t28 = *((char **)t17);
    t25 = (0 + 8U);
    t17 = (t28 + t25);
    t19 = *((int *)t17);
    t29 = (t0 + 5321533);
    t22 = *((int *)t29);
    t23 = (t19 + t22);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB233;

LAB234:    t6 = (t0 + 5608U);
    t15 = *((char **)t6);
    t24 = (0 + 8U);
    t6 = (t15 + t24);
    t13 = *((int *)t6);
    t16 = (t0 + 5321533);
    t14 = *((int *)t16);
    t18 = (t13 + t14);
    t101 = (t18 >= 0);
    t8 = t101;
    goto LAB236;

LAB237:    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 4U);
    t4 = (t5 + t21);
    t12 = *((int *)t4);
    t54 = (t12 < 640);
    t33 = t54;
    goto LAB239;

LAB240:    xsi_set_current_line(942, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 12U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t32 = (t31 - 0);
    t27 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t31);
    t36 = (t27 * 640U);
    t48 = (t0 + 5608U);
    t49 = *((char **)t48);
    t37 = (0 + 0U);
    t48 = (t49 + t37);
    t34 = *((int *)t48);
    t51 = (t0 + 5321533);
    t35 = *((int *)t51);
    t39 = (t34 + t35);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB241;

LAB243:    t28 = (t0 + 5608U);
    t29 = *((char **)t28);
    t25 = (0 + 12U);
    t28 = (t29 + t25);
    t23 = *((int *)t28);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB245;

LAB246:    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t24 = (0 + 12U);
    t16 = (t17 + t24);
    t22 = *((int *)t16);
    t101 = (t22 >= 0);
    t8 = t101;
    goto LAB248;

LAB249:    t5 = (t0 + 5608U);
    t6 = *((char **)t5);
    t21 = (0 + 0U);
    t5 = (t6 + t21);
    t14 = *((int *)t5);
    t15 = (t0 + 5321533);
    t18 = *((int *)t15);
    t19 = (t14 + t18);
    t54 = (t19 < 640);
    t33 = t54;
    goto LAB251;

LAB252:    xsi_set_current_line(946, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 12U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t48 = (t0 + 5321533);
    t32 = *((int *)t48);
    t34 = (t31 - t32);
    t35 = (t34 - 0);
    t27 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t34);
    t36 = (t27 * 640U);
    t49 = (t0 + 5608U);
    t51 = *((char **)t49);
    t37 = (0 + 0U);
    t49 = (t51 + t37);
    t39 = *((int *)t49);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB253;

LAB255:    t17 = (t0 + 5608U);
    t28 = *((char **)t17);
    t25 = (0 + 12U);
    t17 = (t28 + t25);
    t19 = *((int *)t17);
    t29 = (t0 + 5321533);
    t22 = *((int *)t29);
    t23 = (t19 - t22);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB257;

LAB258:    t6 = (t0 + 5608U);
    t15 = *((char **)t6);
    t24 = (0 + 12U);
    t6 = (t15 + t24);
    t13 = *((int *)t6);
    t16 = (t0 + 5321533);
    t14 = *((int *)t16);
    t18 = (t13 - t14);
    t101 = (t18 >= 0);
    t8 = t101;
    goto LAB260;

LAB261:    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 0U);
    t4 = (t5 + t21);
    t12 = *((int *)t4);
    t54 = (t12 < 640);
    t33 = t54;
    goto LAB263;

LAB264:    xsi_set_current_line(952, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 12U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t32 = (t31 - 0);
    t27 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t31);
    t36 = (t27 * 640U);
    t48 = (t0 + 5608U);
    t49 = *((char **)t48);
    t37 = (0 + 4U);
    t48 = (t49 + t37);
    t34 = *((int *)t48);
    t51 = (t0 + 5321533);
    t35 = *((int *)t51);
    t39 = (t34 - t35);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB265;

LAB267:    t28 = (t0 + 5608U);
    t29 = *((char **)t28);
    t25 = (0 + 12U);
    t28 = (t29 + t25);
    t23 = *((int *)t28);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB269;

LAB270:    t16 = (t0 + 5608U);
    t17 = *((char **)t16);
    t24 = (0 + 12U);
    t16 = (t17 + t24);
    t22 = *((int *)t16);
    t101 = (t22 >= 0);
    t8 = t101;
    goto LAB272;

LAB273:    t5 = (t0 + 5608U);
    t6 = *((char **)t5);
    t21 = (0 + 4U);
    t5 = (t6 + t21);
    t14 = *((int *)t5);
    t15 = (t0 + 5321533);
    t18 = *((int *)t15);
    t19 = (t14 - t18);
    t54 = (t19 < 640);
    t33 = t54;
    goto LAB275;

LAB276:    xsi_set_current_line(956, ng6);
    t30 = (t0 + 4648U);
    t38 = *((char **)t30);
    t30 = (t0 + 5608U);
    t45 = *((char **)t30);
    t26 = (0 + 12U);
    t30 = (t45 + t26);
    t31 = *((int *)t30);
    t48 = (t0 + 5321533);
    t32 = *((int *)t48);
    t34 = (t31 - t32);
    t35 = (t34 - 0);
    t27 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, t34);
    t36 = (t27 * 640U);
    t49 = (t0 + 5608U);
    t51 = *((char **)t49);
    t37 = (0 + 4U);
    t49 = (t51 + t37);
    t39 = *((int *)t49);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t39);
    t42 = (t36 + t41);
    t43 = (4U * t42);
    t44 = (0 + t43);
    t55 = (t38 + t44);
    *((int *)t55) = 255;
    goto LAB277;

LAB279:    t17 = (t0 + 5608U);
    t28 = *((char **)t17);
    t25 = (0 + 12U);
    t17 = (t28 + t25);
    t19 = *((int *)t17);
    t29 = (t0 + 5321533);
    t22 = *((int *)t29);
    t23 = (t19 - t22);
    t102 = (t23 < 480);
    t7 = t102;
    goto LAB281;

LAB282:    t6 = (t0 + 5608U);
    t15 = *((char **)t6);
    t24 = (0 + 12U);
    t6 = (t15 + t24);
    t13 = *((int *)t6);
    t16 = (t0 + 5321533);
    t14 = *((int *)t16);
    t18 = (t13 - t14);
    t101 = (t18 >= 0);
    t8 = t101;
    goto LAB284;

LAB285:    t4 = (t0 + 5608U);
    t5 = *((char **)t4);
    t21 = (0 + 4U);
    t4 = (t5 + t21);
    t12 = *((int *)t4);
    t54 = (t12 < 640);
    t33 = t54;
    goto LAB287;

LAB289:    xsi_set_current_line(962, ng6);
    t2 = (t0 + 6088U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 95;
    goto LAB290;

LAB292:    xsi_set_current_line(964, ng6);
    t2 = (t0 + 6088U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 85;
    goto LAB290;

LAB294:    xsi_set_current_line(966, ng6);
    t2 = (t0 + 6088U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 75;
    goto LAB290;

LAB296:    xsi_set_current_line(968, ng6);
    t2 = (t0 + 6088U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 60;
    goto LAB290;

LAB299:    xsi_set_current_line(986, ng6);
    t116 = (t0 + 5008U);
    t117 = *((char **)t116);
    t116 = (t0 + 5321615);
    t13 = *((int *)t116);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t116));
    t21 = (80U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 68U);
    t119 = (t117 + t25);
    t8 = *((unsigned char *)t119);
    if (t8 == 1)
        goto LAB305;

LAB306:    t7 = (unsigned char)0;

LAB307:    if (t7 != 0)
        goto LAB302;

LAB304:
LAB303:
LAB300:    t113 = (t0 + 5321615);
    t11 = *((int *)t113);
    t114 = (t0 + 5321619);
    t12 = *((int *)t114);
    if (t11 == t12)
        goto LAB301;

LAB308:    t9 = (t11 + 1);
    t11 = t9;
    t115 = (t0 + 5321615);
    *((int *)t115) = t11;
    goto LAB298;

LAB302:    xsi_set_current_line(987, ng6);
    t124 = (t0 + 5008U);
    t127 = *((char **)t124);
    t124 = (t0 + 5321615);
    t31 = *((int *)t124);
    t32 = (t31 - 0);
    t41 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t124));
    t42 = (80U * t41);
    t43 = (0 + t42);
    t44 = (t43 + 64U);
    t129 = (t127 + t44);
    t34 = *((int *)t129);
    t130 = (t0 + 5848U);
    t131 = *((char **)t130);
    t130 = (t131 + 0);
    *((int *)t130) = t34;
    xsi_set_current_line(988, ng6);
    t113 = (t0 + 5321615);
    t114 = (t0 + 5968U);
    t115 = *((char **)t114);
    t114 = (t115 + 0);
    *((int *)t114) = *((int *)t113);
    goto LAB303;

LAB305:    t120 = (t0 + 5008U);
    t121 = *((char **)t120);
    t120 = (t0 + 5321615);
    t18 = *((int *)t120);
    t19 = (t18 - 0);
    t26 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 999, 1, *((int *)t120));
    t27 = (80U * t26);
    t36 = (0 + t27);
    t37 = (t36 + 64U);
    t122 = (t121 + t37);
    t22 = *((int *)t122);
    t124 = (t0 + 5848U);
    t126 = *((char **)t124);
    t23 = *((int *)t126);
    t33 = (t22 > t23);
    t7 = t33;
    goto LAB307;

LAB309:    xsi_set_current_line(993, ng6);
    t113 = (t0 + 5321623);
    t116 = ((STD_STANDARD) + 384);
    t117 = (t0 + 5848U);
    t119 = *((char **)t117);
    t10 = *((int *)t119);
    t117 = xsi_int_to_mem(t10);
    t120 = xsi_string_variable_get_image(t103, t116, t117);
    t122 = ((STD_STANDARD) + 1008);
    t124 = (t105 + 0U);
    t126 = (t124 + 0U);
    *((int *)t126) = 1;
    t126 = (t124 + 4U);
    *((int *)t126) = 54;
    t126 = (t124 + 8U);
    *((int *)t126) = 1;
    t11 = (54 - 1);
    t20 = (t11 * 1);
    t20 = (t20 + 1);
    t126 = (t124 + 12U);
    *((unsigned int *)t126) = t20;
    t121 = xsi_base_array_concat(t121, t104, t122, (char)97, t113, t105, (char)97, t120, t103, (char)101);
    t126 = (t103 + 12U);
    t20 = *((unsigned int *)t126);
    t21 = (54U + t20);
    xsi_report(t121, t21, (unsigned char)1);
    goto LAB310;

LAB312:    xsi_set_current_line(1003, ng6);
    t113 = (t0 + 5321765);
    xsi_report(t113, 25U, (unsigned char)3);
    xsi_set_current_line(1004, ng6);

LAB317:    *((char **)t1) = &&LAB318;
    goto LAB1;

LAB315:    goto LAB313;

LAB316:    goto LAB315;

LAB318:    goto LAB316;

LAB320:    xsi_set_current_line(1008, ng6);
    t12 = (640 - 1);
    t115 = (t0 + 5321798);
    *((int *)t115) = 0;
    t116 = (t0 + 5321802);
    *((int *)t116) = t12;
    t13 = 0;
    t14 = t12;

LAB323:    if (t13 <= t14)
        goto LAB324;

LAB326:
LAB321:    t113 = (t0 + 5321790);
    t10 = *((int *)t113);
    t114 = (t0 + 5321794);
    t11 = *((int *)t114);
    if (t10 == t11)
        goto LAB322;

LAB328:    t9 = (t10 + 1);
    t10 = t9;
    t115 = (t0 + 5321790);
    *((int *)t115) = t10;
    goto LAB319;

LAB324:    xsi_set_current_line(1009, ng6);
    t117 = (t0 + 8232);
    t119 = (t0 + 6976U);
    t120 = (t0 + 4648U);
    t121 = *((char **)t120);
    t120 = (t0 + 5321790);
    t18 = *((int *)t120);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 479, 1, *((int *)t120));
    t21 = (t20 * 640U);
    t122 = (t0 + 5321798);
    t22 = *((int *)t122);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t122));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t124 = (t121 + t27);
    t31 = *((int *)t124);
    std_textio_write5(STD_TEXTIO, t117, t119, t31, (unsigned char)0, 0);
    xsi_set_current_line(1010, ng6);
    t113 = (t0 + 8232);
    t114 = (t0 + 6624U);
    t115 = (t0 + 6976U);
    std_textio_writeline(STD_TEXTIO, t113, t114, t115);

LAB325:    t113 = (t0 + 5321798);
    t13 = *((int *)t113);
    t114 = (t0 + 5321802);
    t14 = *((int *)t114);
    if (t13 == t14)
        goto LAB326;

LAB327:    t9 = (t13 + 1);
    t13 = t9;
    t115 = (t0 + 5321798);
    *((int *)t115) = t13;
    goto LAB323;

LAB329:    xsi_set_current_line(1018, ng6);
    t113 = (t0 + 8232);
    t115 = (t0 + 7048U);
    t116 = (t0 + 5321839);
    t119 = (t103 + 0U);
    t120 = (t119 + 0U);
    *((int *)t120) = 1;
    t120 = (t119 + 4U);
    *((int *)t120) = 23;
    t120 = (t119 + 8U);
    *((int *)t120) = 1;
    t9 = (23 - 1);
    t20 = (t9 * 1);
    t20 = (t20 + 1);
    t120 = (t119 + 12U);
    *((unsigned int *)t120) = t20;
    std_textio_write7(STD_TEXTIO, t113, t115, t116, t103, (unsigned char)0, 0);
    xsi_set_current_line(1019, ng6);
    t113 = (t0 + 8232);
    t114 = (t0 + 6728U);
    t115 = (t0 + 7048U);
    std_textio_writeline(STD_TEXTIO, t113, t114, t115);
    xsi_set_current_line(1021, ng6);
    t113 = (t0 + 8232);
    t114 = (t0 + 7048U);
    t115 = (t0 + 5321862);
    t117 = ((STD_STANDARD) + 384);
    t119 = (t0 + 5128U);
    t120 = *((char **)t119);
    t9 = *((int *)t120);
    t119 = xsi_int_to_mem(t9);
    t121 = xsi_string_variable_get_image(t103, t117, t119);
    t124 = ((STD_STANDARD) + 1008);
    t126 = (t105 + 0U);
    t127 = (t126 + 0U);
    *((int *)t127) = 1;
    t127 = (t126 + 4U);
    *((int *)t127) = 21;
    t127 = (t126 + 8U);
    *((int *)t127) = 1;
    t10 = (21 - 1);
    t20 = (t10 * 1);
    t20 = (t20 + 1);
    t127 = (t126 + 12U);
    *((unsigned int *)t127) = t20;
    t122 = xsi_base_array_concat(t122, t104, t124, (char)97, t115, t105, (char)97, t121, t103, (char)101);
    t127 = (t103 + 12U);
    t20 = *((unsigned int *)t127);
    t21 = (21U + t20);
    t129 = (char *)alloca(t21);
    memcpy(t129, t122, t21);
    std_textio_write7(STD_TEXTIO, t113, t114, t129, t104, (unsigned char)0, 0);
    xsi_set_current_line(1022, ng6);
    t113 = (t0 + 8232);
    t114 = (t0 + 6728U);
    t115 = (t0 + 7048U);
    std_textio_writeline(STD_TEXTIO, t113, t114, t115);
    xsi_set_current_line(1024, ng6);
    t113 = (t0 + 5368U);
    t114 = *((char **)t113);
    t9 = *((int *)t114);
    t7 = (t9 >= 0);
    if (t7 != 0)
        goto LAB332;

LAB334:
LAB333:    xsi_set_current_line(1029, ng6);
    t113 = (t0 + 6728U);
    std_textio_file_close(t113);
    goto LAB330;

LAB332:    xsi_set_current_line(1025, ng6);
    t113 = (t0 + 8232);
    t115 = (t0 + 7048U);
    t116 = (t0 + 5321883);
    t119 = ((STD_STANDARD) + 384);
    t120 = (t0 + 5488U);
    t121 = *((char **)t120);
    t10 = *((int *)t121);
    t120 = xsi_int_to_mem(t10);
    t122 = xsi_string_variable_get_image(t103, t119, t120);
    t126 = ((STD_STANDARD) + 1008);
    t127 = (t105 + 0U);
    t130 = (t127 + 0U);
    *((int *)t130) = 1;
    t130 = (t127 + 4U);
    *((int *)t130) = 19;
    t130 = (t127 + 8U);
    *((int *)t130) = 1;
    t11 = (19 - 1);
    t20 = (t11 * 1);
    t20 = (t20 + 1);
    t130 = (t127 + 12U);
    *((unsigned int *)t130) = t20;
    t124 = xsi_base_array_concat(t124, t104, t126, (char)97, t116, t105, (char)97, t122, t103, (char)101);
    t130 = (t103 + 12U);
    t20 = *((unsigned int *)t130);
    t21 = (19U + t20);
    t131 = (char *)alloca(t21);
    memcpy(t131, t124, t21);
    std_textio_write7(STD_TEXTIO, t113, t115, t131, t104, (unsigned char)0, 0);
    xsi_set_current_line(1026, ng6);
    t113 = (t0 + 8232);
    t114 = (t0 + 6728U);
    t115 = (t0 + 7048U);
    std_textio_writeline(STD_TEXTIO, t113, t114, t115);
    goto LAB333;

LAB335:    goto LAB2;

LAB336:    goto LAB335;

LAB338:    goto LAB336;

}


extern void work_a_1469834779_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1469834779_3212880686_p_0};
	static char *se[] = {(void *)work_a_1469834779_3212880686_sub_2489298628_3057020925,(void *)work_a_1469834779_3212880686_sub_3202332950_3057020925,(void *)work_a_1469834779_3212880686_sub_3202609556_3057020925,(void *)work_a_1469834779_3212880686_sub_2812277502_3057020925,(void *)work_a_1469834779_3212880686_sub_2780842967_3057020925,(void *)work_a_1469834779_3212880686_sub_1403480711_3057020925,(void *)work_a_1469834779_3212880686_sub_1416977871_3057020925,(void *)work_a_1469834779_3212880686_sub_650732511_3057020925,(void *)work_a_1469834779_3212880686_sub_3016499035_3057020925,(void *)work_a_1469834779_3212880686_sub_2307700616_3579431146,(void *)work_a_1469834779_3212880686_sub_3783596958_3579431146,(void *)work_a_1469834779_3212880686_sub_1204415402_3579431146,(void *)work_a_1469834779_3212880686_sub_4049322568_3579431146,(void *)work_a_1469834779_3212880686_sub_2407428414_3579431146,(void *)work_a_1469834779_3212880686_sub_3257001932_3579431146,(void *)work_a_1469834779_3212880686_sub_1665737120_3579431146};
	xsi_register_didat("work_a_1469834779_3212880686", "isim/enhanced_license_plate_detector_isim_beh.exe.sim/work/a_1469834779_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
