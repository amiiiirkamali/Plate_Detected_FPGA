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
static const char *ng6 = "_stack_array_x1Base";
static const char *ng7 = "_stack_array_x1";
static const char *ng8 = "_stack_array_y1Base";
static const char *ng9 = "_stack_array_y1";
static const char *ng10 = "E:/project/Ise/Licens_Plate_Recognition/plate-detection-6/plate_detection.vhd";
extern char *STD_TEXTIO;



int work_a_1394242000_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
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

int work_a_1394242000_3212880686_sub_3202332950_3057020925(char *t1, int t2, int t3)
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

int work_a_1394242000_3212880686_sub_3202609556_3057020925(char *t1, int t2, int t3)
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

int work_a_1394242000_3212880686_sub_2812277502_3057020925(char *t1, int t2, int t3)
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

unsigned char work_a_1394242000_3212880686_sub_2780842967_3057020925(char *t1, int t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned char t9;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t1 + 2968U);
    t7 = *((char **)t6);
    t8 = *((int *)t7);
    t9 = (t2 >= t8);
    t0 = t9;

LAB1:    return t0;
LAB2:;
}

unsigned char work_a_1394242000_3212880686_sub_1403480711_3057020925(char *t1, int t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned char t9;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t1 + 3088U);
    t7 = *((char **)t6);
    t8 = *((int *)t7);
    t9 = (t2 >= t8);
    t0 = t9;

LAB1:    return t0;
LAB2:;
}

unsigned char work_a_1394242000_3212880686_sub_3897511466_3057020925(char *t1, int t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned char t9;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t1 + 4048U);
    t7 = *((char **)t6);
    t8 = *((int *)t7);
    t9 = (t2 >= t8);
    t0 = t9;

LAB1:    return t0;
LAB2:;
}

int work_a_1394242000_3212880686_sub_2553881071_3579431146(char *t1, char *t2, char *t3, char *t4, int t5, int t6)
{
    char t7[1088];
    char t8[56];
    char t9[32];
    char t16[32];
    char t23[8];
    char t29[8];
    char t35[8];
    char t41[8];
    char t47[8];
    char t53[8];
    char t59[8];
    char t65[8];
    char t71[8];
    int t0;
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
    unsigned char t75;
    char *t76;
    char *t77;
    unsigned char t78;
    char *t79;
    char *t80;
    unsigned char t81;
    char *t82;
    char *t83;
    char *t84;
    int t85;
    int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    int t106;
    unsigned char t107;
    unsigned char t108;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 639;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (639 - 0);
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
    *((int *)t17) = 639;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t18 = (639 - 0);
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
    t21 = ((STD_STANDARD) + 384);
    t22 = (t19 + 88U);
    *((char **)t22) = t21;
    t24 = (t19 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = 0;
    t25 = (t19 + 80U);
    *((unsigned int *)t25) = 4U;
    t26 = (t7 + 124U);
    t27 = ((STD_STANDARD) + 384);
    t28 = (t26 + 88U);
    *((char **)t28) = t27;
    t30 = (t26 + 56U);
    *((char **)t30) = t29;
    *((int *)t29) = 0;
    t31 = (t26 + 80U);
    *((unsigned int *)t31) = 4U;
    t32 = (t7 + 244U);
    t33 = ((STD_STANDARD) + 384);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    *((int *)t35) = 0;
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
    *((int *)t59) = 0;
    t61 = (t56 + 80U);
    *((unsigned int *)t61) = 4U;
    t62 = (t7 + 844U);
    t63 = ((STD_STANDARD) + 384);
    t64 = (t62 + 88U);
    *((char **)t64) = t63;
    t66 = (t62 + 56U);
    *((char **)t66) = t65;
    *((int *)t65) = 3;
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
    t74 = (t8 + 4U);
    t75 = (t2 != 0);
    if (t75 == 1)
        goto LAB3;

LAB2:    t76 = (t8 + 12U);
    *((char **)t76) = t9;
    t77 = (t8 + 20U);
    t78 = (t3 != 0);
    if (t78 == 1)
        goto LAB5;

LAB4:    t79 = (t8 + 28U);
    *((char **)t79) = t16;
    t80 = (t8 + 36U);
    t81 = (t4 != 0);
    if (t81 == 1)
        goto LAB7;

LAB6:    t82 = (t8 + 44U);
    *((int *)t82) = t5;
    t83 = (t8 + 48U);
    *((int *)t83) = t6;
    t13 = (0 + 20U);
    t84 = (t4 + t13);
    t85 = *((int *)t84);
    t86 = (t85 + 4);
    t87 = (t68 + 56U);
    t88 = *((char **)t87);
    t87 = (t88 + 0);
    *((int *)t87) = t86;
    t12 = 1;
    t15 = t6;

LAB8:    if (t12 <= t15)
        goto LAB9;

LAB11:    t0 = t6;

LAB1:    return t0;
LAB3:    *((char **)t74) = t2;
    goto LAB2;

LAB5:    *((char **)t77) = t3;
    goto LAB4;

LAB7:    *((char **)t80) = t4;
    goto LAB6;

LAB9:    t75 = (t5 < 0);
    if (t75 != 0)
        goto LAB12;

LAB14:    t13 = (0 + 4U);
    t10 = (t4 + t13);
    t18 = *((int *)t10);
    t20 = (t18 + t12);
    t11 = (t38 + 56U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((int *)t11) = t20;

LAB13:    t10 = (t38 + 56U);
    t11 = *((char **)t10);
    t18 = *((int *)t11);
    t78 = (t18 < 0);
    if (t78 == 1)
        goto LAB15;

LAB16:    t10 = (t38 + 56U);
    t14 = *((char **)t10);
    t20 = *((int *)t14);
    t81 = (t20 >= 640);
    t75 = t81;

LAB17:    if (t75 != 0)
        goto LAB11;

LAB18:    t10 = (t44 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;
    t10 = (t50 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;
    t18 = (640 - 1);
    t13 = (0 + 12U);
    t10 = (t4 + t13);
    t20 = *((int *)t10);
    t85 = (t20 + 2);
    t86 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t18, t85);
    t89 = (0 + 8U);
    t11 = (t4 + t89);
    t90 = *((int *)t11);
    t91 = (t90 - 2);
    t92 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 0, t91);
    t93 = t92;
    t94 = t86;

LAB19:    if (t93 <= t94)
        goto LAB20;

LAB22:    t10 = (t44 + 56U);
    t11 = *((char **)t10);
    t18 = *((int *)t11);
    t75 = (t18 == 0);
    if (t75 != 0)
        goto LAB33;

LAB35:    t10 = (t56 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;

LAB34:    t10 = (t56 + 56U);
    t11 = *((char **)t10);
    t18 = *((int *)t11);
    t10 = (t62 + 56U);
    t14 = *((char **)t10);
    t20 = *((int *)t14);
    t75 = (t18 >= t20);
    if (t75 != 0)
        goto LAB36;

LAB38:
LAB37:    t81 = (t12 > 3);
    if (t81 == 1)
        goto LAB46;

LAB47:    t78 = (unsigned char)0;

LAB48:    if (t78 == 1)
        goto LAB43;

LAB44:    t75 = (unsigned char)0;

LAB45:    if (t75 != 0)
        goto LAB40;

LAB42:
LAB41:
LAB10:    if (t12 == t15)
        goto LAB11;

LAB50:    t18 = (t12 + 1);
    t12 = t18;
    goto LAB8;

LAB12:    t13 = (0 + 0U);
    t10 = (t4 + t13);
    t18 = *((int *)t10);
    t20 = (t18 - t12);
    t11 = (t38 + 56U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((int *)t11) = t20;
    goto LAB13;

LAB15:    t75 = (unsigned char)1;
    goto LAB17;

LAB20:    t95 = (t93 - 0);
    t96 = (t95 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t93);
    t97 = (t96 * 640U);
    t14 = (t38 + 56U);
    t17 = *((char **)t14);
    t98 = *((int *)t17);
    t99 = (t98 - 0);
    t100 = (t99 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t98);
    t101 = (t97 + t100);
    t102 = (4U * t101);
    t103 = (0 + t102);
    t14 = (t3 + t103);
    t104 = *((int *)t14);
    t75 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t104);
    if (t75 != 0)
        goto LAB23;

LAB25:
LAB24:
LAB21:    if (t93 == t94)
        goto LAB22;

LAB32:    t18 = (t93 + 1);
    t93 = t18;
    goto LAB19;

LAB23:    t21 = (t32 + 56U);
    t22 = *((char **)t21);
    t105 = *((int *)t22);
    t106 = (t105 + 1);
    t21 = (t32 + 56U);
    t24 = *((char **)t21);
    t21 = (t24 + 0);
    *((int *)t21) = t106;
    t18 = (t93 - 0);
    t13 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t93);
    t89 = (t13 * 640U);
    t10 = (t38 + 56U);
    t11 = *((char **)t10);
    t20 = *((int *)t11);
    t85 = (t20 - 0);
    t96 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t20);
    t97 = (t89 + t96);
    t100 = (4U * t97);
    t101 = (0 + t100);
    t10 = (t2 + t101);
    t86 = *((int *)t10);
    t75 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t86);
    if (t75 != 0)
        goto LAB26;

LAB28:
LAB27:    t18 = (t93 - 0);
    t13 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t93);
    t89 = (t13 * 640U);
    t10 = (t38 + 56U);
    t11 = *((char **)t10);
    t20 = *((int *)t11);
    t85 = (t20 - 0);
    t96 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t20);
    t97 = (t89 + t96);
    t100 = (4U * t97);
    t101 = (0 + t100);
    t10 = (t2 + t101);
    t86 = *((int *)t10);
    t75 = work_a_1394242000_3212880686_sub_2780842967_3057020925(t1, t86);
    if (t75 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB24;

LAB26:    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t90 = *((int *)t17);
    t91 = (t90 + 1);
    t14 = (t19 + 56U);
    t21 = *((char **)t14);
    t14 = (t21 + 0);
    *((int *)t14) = t91;
    t10 = (t44 + 56U);
    t11 = *((char **)t10);
    t18 = *((int *)t11);
    t20 = (t18 + 1);
    t10 = (t44 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t20;
    goto LAB27;

LAB29:    t14 = (t26 + 56U);
    t17 = *((char **)t14);
    t90 = *((int *)t17);
    t91 = (t90 + 1);
    t14 = (t26 + 56U);
    t21 = *((char **)t14);
    t14 = (t21 + 0);
    *((int *)t14) = t91;
    t10 = (t50 + 56U);
    t11 = *((char **)t10);
    t18 = *((int *)t11);
    t20 = (t18 + 1);
    t10 = (t50 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t20;
    goto LAB30;

LAB33:    t10 = (t56 + 56U);
    t14 = *((char **)t10);
    t20 = *((int *)t14);
    t85 = (t20 + 1);
    t10 = (t56 + 56U);
    t17 = *((char **)t10);
    t10 = (t17 + 0);
    *((int *)t10) = t85;
    goto LAB34;

LAB36:    t10 = (t62 + 56U);
    t17 = *((char **)t10);
    t85 = *((int *)t17);
    t86 = (t12 - t85);
    t0 = t86;
    goto LAB1;

LAB39:    goto LAB37;

LAB40:    t85 = (t12 - 1);
    t0 = t85;
    goto LAB1;

LAB43:    t10 = (t44 + 56U);
    t14 = *((char **)t10);
    t20 = *((int *)t14);
    t108 = (t20 < 1);
    t75 = t108;
    goto LAB45;

LAB46:    t10 = (t50 + 56U);
    t11 = *((char **)t10);
    t18 = *((int *)t11);
    t107 = (t18 == 0);
    t78 = t107;
    goto LAB48;

LAB49:    goto LAB41;

LAB51:;
}

char *work_a_1394242000_3212880686_sub_3042404294_3579431146(char *t1, char *t2, char *t3, char *t4)
{
    char t5[848];
    char t6[48];
    char t7[32];
    char t14[32];
    char t21[64];
    char t27[8];
    char t33[8];
    char t39[8];
    char t45[8];
    char t51[8];
    char t57[8];
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
    unsigned char t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    unsigned int t70;
    int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    int t92;

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
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 639;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t16 = (639 - 0);
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
    t19 = (t1 + 9344);
    t20 = (t17 + 88U);
    *((char **)t20) = t19;
    t22 = (t17 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t17 + 80U);
    *((unsigned int *)t23) = 64U;
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
    xsi_type_set_default_value(t55, t57, 0);
    t59 = (t54 + 80U);
    *((unsigned int *)t59) = 4U;
    t60 = (t6 + 4U);
    t61 = (t2 != 0);
    if (t61 == 1)
        goto LAB3;

LAB2:    t62 = (t6 + 12U);
    *((char **)t62) = t7;
    t63 = (t6 + 20U);
    t64 = (t3 != 0);
    if (t64 == 1)
        goto LAB5;

LAB4:    t65 = (t6 + 28U);
    *((char **)t65) = t14;
    t66 = (t6 + 36U);
    t67 = (t4 != 0);
    if (t67 == 1)
        goto LAB7;

LAB6:    t68 = (t17 + 56U);
    t69 = *((char **)t68);
    t68 = (t69 + 0);
    memcpy(t68, t4, 64U);
    t11 = (0 + 4U);
    t8 = (t4 + t11);
    t10 = *((int *)t8);
    t70 = (0 + 0U);
    t9 = (t4 + t70);
    t13 = *((int *)t9);
    t16 = t13;
    t18 = t10;

LAB8:    if (t16 <= t18)
        goto LAB9;

LAB11:    t11 = (0 + 0U);
    t8 = (t4 + t11);
    t10 = *((int *)t8);
    t70 = (0 + 4U);
    t9 = (t4 + t70);
    t13 = *((int *)t9);
    t16 = t13;
    t18 = t10;

LAB28:    if (t16 >= t18)
        goto LAB29;

LAB31:    t11 = (0 + 12U);
    t8 = (t4 + t11);
    t10 = *((int *)t8);
    t70 = (0 + 8U);
    t9 = (t4 + t70);
    t13 = *((int *)t9);
    t16 = t13;
    t18 = t10;

LAB48:    if (t16 <= t18)
        goto LAB49;

LAB51:    t11 = (0 + 8U);
    t8 = (t4 + t11);
    t10 = *((int *)t8);
    t70 = (0 + 12U);
    t9 = (t4 + t70);
    t13 = *((int *)t9);
    t16 = t13;
    t18 = t10;

LAB68:    if (t16 >= t18)
        goto LAB69;

LAB71:    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t70 = (0 + 0U);
    t12 = (t15 + t70);
    t13 = *((int *)t12);
    t16 = (t10 - t13);
    t18 = (t16 + 1);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t74 = (0 + 16U);
    t19 = (t20 + t74);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 12U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t70 = (0 + 8U);
    t12 = (t15 + t70);
    t13 = *((int *)t12);
    t16 = (t10 - t13);
    t18 = (t16 + 1);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t74 = (0 + 20U);
    t19 = (t20 + t74);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 0U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t70 = (0 + 4U);
    t12 = (t15 + t70);
    t13 = *((int *)t12);
    t16 = (t10 + t13);
    t18 = (t16 / 2);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t74 = (0 + 52U);
    t19 = (t20 + t74);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 8U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t70 = (0 + 12U);
    t12 = (t15 + t70);
    t13 = *((int *)t12);
    t16 = (t10 + t13);
    t18 = (t16 / 2);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t74 = (0 + 56U);
    t19 = (t20 + t74);
    *((int *)t19) = t18;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t0 = xsi_get_transient_memory(64U);
    memcpy(t0, t9, 64U);

LAB1:    return t0;
LAB3:    *((char **)t60) = t2;
    goto LAB2;

LAB5:    *((char **)t63) = t3;
    goto LAB4;

LAB7:    *((char **)t66) = t4;
    goto LAB6;

LAB9:    t12 = (t54 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = 0;
    t11 = (0 + 12U);
    t8 = (t4 + t11);
    t10 = *((int *)t8);
    t70 = (0 + 8U);
    t9 = (t4 + t70);
    t13 = *((int *)t9);
    t71 = t13;
    t72 = t10;

LAB12:    if (t71 <= t72)
        goto LAB13;

LAB15:    t8 = (t54 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t61 = (t10 >= t13);
    if (t61 != 0)
        goto LAB23;

LAB25:
LAB24:
LAB10:    if (t16 == t18)
        goto LAB11;

LAB27:    t10 = (t16 + 1);
    t16 = t10;
    goto LAB8;

LAB13:    t73 = (t71 - 0);
    t74 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t75 = (t74 * 640U);
    t76 = (t16 - 0);
    t77 = (t76 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t78 = (t75 + t77);
    t79 = (4U * t78);
    t80 = (0 + t79);
    t12 = (t3 + t80);
    t81 = *((int *)t12);
    t64 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t81);
    if (t64 == 1)
        goto LAB19;

LAB20:    t61 = (unsigned char)0;

LAB21:    if (t61 != 0)
        goto LAB16;

LAB18:
LAB17:
LAB14:    if (t71 == t72)
        goto LAB15;

LAB22:    t10 = (t71 + 1);
    t71 = t10;
    goto LAB12;

LAB16:    t19 = (t54 + 56U);
    t20 = *((char **)t19);
    t91 = *((int *)t20);
    t92 = (t91 + 1);
    t19 = (t54 + 56U);
    t22 = *((char **)t19);
    t19 = (t22 + 0);
    *((int *)t19) = t92;
    goto LAB17;

LAB19:    t82 = (t71 - 0);
    t83 = (t82 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t84 = (t83 * 640U);
    t85 = (t16 - 0);
    t86 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t87 = (t84 + t86);
    t88 = (4U * t87);
    t89 = (0 + t88);
    t15 = (t2 + t89);
    t90 = *((int *)t15);
    t67 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t90);
    t61 = t67;
    goto LAB21;

LAB23:    t8 = (t17 + 56U);
    t15 = *((char **)t8);
    t11 = (0 + 0U);
    t8 = (t15 + t11);
    *((int *)t8) = t16;
    t8 = (t24 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB11;

LAB26:    goto LAB24;

LAB29:    t12 = (t54 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = 0;
    t11 = (0 + 12U);
    t8 = (t4 + t11);
    t10 = *((int *)t8);
    t70 = (0 + 8U);
    t9 = (t4 + t70);
    t13 = *((int *)t9);
    t71 = t13;
    t72 = t10;

LAB32:    if (t71 <= t72)
        goto LAB33;

LAB35:    t8 = (t54 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t61 = (t10 >= t13);
    if (t61 != 0)
        goto LAB43;

LAB45:
LAB44:
LAB30:    if (t16 == t18)
        goto LAB31;

LAB47:    t10 = (t16 + -1);
    t16 = t10;
    goto LAB28;

LAB33:    t73 = (t71 - 0);
    t74 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t75 = (t74 * 640U);
    t76 = (t16 - 0);
    t77 = (t76 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t78 = (t75 + t77);
    t79 = (4U * t78);
    t80 = (0 + t79);
    t12 = (t3 + t80);
    t81 = *((int *)t12);
    t64 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t81);
    if (t64 == 1)
        goto LAB39;

LAB40:    t61 = (unsigned char)0;

LAB41:    if (t61 != 0)
        goto LAB36;

LAB38:
LAB37:
LAB34:    if (t71 == t72)
        goto LAB35;

LAB42:    t10 = (t71 + 1);
    t71 = t10;
    goto LAB32;

LAB36:    t19 = (t54 + 56U);
    t20 = *((char **)t19);
    t91 = *((int *)t20);
    t92 = (t91 + 1);
    t19 = (t54 + 56U);
    t22 = *((char **)t19);
    t19 = (t22 + 0);
    *((int *)t19) = t92;
    goto LAB37;

LAB39:    t82 = (t71 - 0);
    t83 = (t82 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t84 = (t83 * 640U);
    t85 = (t16 - 0);
    t86 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t87 = (t84 + t86);
    t88 = (4U * t87);
    t89 = (0 + t88);
    t15 = (t2 + t89);
    t90 = *((int *)t15);
    t67 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t90);
    t61 = t67;
    goto LAB41;

LAB43:    t8 = (t17 + 56U);
    t15 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t15 + t11);
    *((int *)t8) = t16;
    t8 = (t30 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB31;

LAB46:    goto LAB44;

LAB49:    t12 = (t54 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = 0;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t70 = (0 + 0U);
    t12 = (t15 + t70);
    t13 = *((int *)t12);
    t71 = t13;
    t72 = t10;

LAB52:    if (t71 <= t72)
        goto LAB53;

LAB55:    t8 = (t54 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t61 = (t10 >= t13);
    if (t61 != 0)
        goto LAB63;

LAB65:
LAB64:
LAB50:    if (t16 == t18)
        goto LAB51;

LAB67:    t10 = (t16 + 1);
    t16 = t10;
    goto LAB48;

LAB53:    t73 = (t16 - 0);
    t74 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t75 = (t74 * 640U);
    t76 = (t71 - 0);
    t77 = (t76 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t78 = (t75 + t77);
    t79 = (4U * t78);
    t80 = (0 + t79);
    t19 = (t3 + t80);
    t81 = *((int *)t19);
    t64 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t81);
    if (t64 == 1)
        goto LAB59;

LAB60:    t61 = (unsigned char)0;

LAB61:    if (t61 != 0)
        goto LAB56;

LAB58:
LAB57:
LAB54:    if (t71 == t72)
        goto LAB55;

LAB62:    t10 = (t71 + 1);
    t71 = t10;
    goto LAB52;

LAB56:    t22 = (t54 + 56U);
    t23 = *((char **)t22);
    t91 = *((int *)t23);
    t92 = (t91 + 1);
    t22 = (t54 + 56U);
    t25 = *((char **)t22);
    t22 = (t25 + 0);
    *((int *)t22) = t92;
    goto LAB57;

LAB59:    t82 = (t16 - 0);
    t83 = (t82 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t84 = (t83 * 640U);
    t85 = (t71 - 0);
    t86 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t87 = (t84 + t86);
    t88 = (4U * t87);
    t89 = (0 + t88);
    t20 = (t2 + t89);
    t90 = *((int *)t20);
    t67 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t90);
    t61 = t67;
    goto LAB61;

LAB63:    t8 = (t17 + 56U);
    t15 = *((char **)t8);
    t11 = (0 + 8U);
    t8 = (t15 + t11);
    *((int *)t8) = t16;
    t8 = (t36 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB51;

LAB66:    goto LAB64;

LAB69:    t12 = (t54 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = 0;
    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t11 = (0 + 4U);
    t8 = (t9 + t11);
    t10 = *((int *)t8);
    t12 = (t17 + 56U);
    t15 = *((char **)t12);
    t70 = (0 + 0U);
    t12 = (t15 + t70);
    t13 = *((int *)t12);
    t71 = t13;
    t72 = t10;

LAB72:    if (t71 <= t72)
        goto LAB73;

LAB75:    t8 = (t54 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t48 + 56U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t61 = (t10 >= t13);
    if (t61 != 0)
        goto LAB83;

LAB85:
LAB84:
LAB70:    if (t16 == t18)
        goto LAB71;

LAB87:    t10 = (t16 + -1);
    t16 = t10;
    goto LAB68;

LAB73:    t73 = (t16 - 0);
    t74 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t75 = (t74 * 640U);
    t76 = (t71 - 0);
    t77 = (t76 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t78 = (t75 + t77);
    t79 = (4U * t78);
    t80 = (0 + t79);
    t19 = (t3 + t80);
    t81 = *((int *)t19);
    t64 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t81);
    if (t64 == 1)
        goto LAB79;

LAB80:    t61 = (unsigned char)0;

LAB81:    if (t61 != 0)
        goto LAB76;

LAB78:
LAB77:
LAB74:    if (t71 == t72)
        goto LAB75;

LAB82:    t10 = (t71 + 1);
    t71 = t10;
    goto LAB72;

LAB76:    t22 = (t54 + 56U);
    t23 = *((char **)t22);
    t91 = *((int *)t23);
    t92 = (t91 + 1);
    t22 = (t54 + 56U);
    t25 = *((char **)t22);
    t22 = (t25 + 0);
    *((int *)t22) = t92;
    goto LAB77;

LAB79:    t82 = (t16 - 0);
    t83 = (t82 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t16);
    t84 = (t83 * 640U);
    t85 = (t71 - 0);
    t86 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t71);
    t87 = (t84 + t86);
    t88 = (4U * t87);
    t89 = (0 + t88);
    t20 = (t2 + t89);
    t90 = *((int *)t20);
    t67 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t90);
    t61 = t67;
    goto LAB81;

LAB83:    t8 = (t17 + 56U);
    t15 = *((char **)t8);
    t11 = (0 + 12U);
    t8 = (t15 + t11);
    *((int *)t8) = t16;
    t8 = (t42 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB71;

LAB86:    goto LAB84;

LAB88:;
}

char *work_a_1394242000_3212880686_sub_1534730547_3579431146(char *t1, char *t2, char *t3, char *t4, int t5, int t6)
{
    char t7[1088];
    char t8[56];
    char t9[32];
    char t16[32];
    char t23[64];
    char t29[8];
    char t35[8];
    char t41[8];
    char t47[8];
    char t53[8];
    char t59[8];
    char t65[8];
    char t71[8];
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
    unsigned char t75;
    char *t76;
    char *t77;
    unsigned char t78;
    char *t79;
    char *t80;
    unsigned char t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    int t86;
    unsigned int t87;
    unsigned int t88;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 639;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (639 - 0);
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
    *((int *)t17) = 639;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t18 = (639 - 0);
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
    t21 = (t1 + 9344);
    t22 = (t19 + 88U);
    *((char **)t22) = t21;
    t24 = (t19 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, 0);
    t25 = (t19 + 80U);
    *((unsigned int *)t25) = 64U;
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
    t74 = (t8 + 4U);
    t75 = (t2 != 0);
    if (t75 == 1)
        goto LAB3;

LAB2:    t76 = (t8 + 12U);
    *((char **)t76) = t9;
    t77 = (t8 + 20U);
    t78 = (t3 != 0);
    if (t78 == 1)
        goto LAB5;

LAB4:    t79 = (t8 + 28U);
    *((char **)t79) = t16;
    t80 = (t8 + 36U);
    t81 = (t4 != 0);
    if (t81 == 1)
        goto LAB7;

LAB6:    t82 = (t8 + 44U);
    *((int *)t82) = t5;
    t83 = (t8 + 48U);
    *((int *)t83) = t6;
    t84 = (t19 + 56U);
    t85 = *((char **)t84);
    t84 = (t85 + 0);
    memcpy(t84, t4, 64U);
    t13 = (0 + 16U);
    t10 = (t4 + t13);
    t12 = *((int *)t10);
    t11 = (t1 + 3328U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 * t15);
    t20 = (t18 / 100);
    t86 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 2, t20);
    t11 = (t26 + 56U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    *((int *)t11) = t86;
    t13 = (0 + 20U);
    t10 = (t4 + t13);
    t12 = *((int *)t10);
    t11 = (t1 + 3448U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 * t15);
    t20 = (t18 / 100);
    t86 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 1, t20);
    t11 = (t32 + 56U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    *((int *)t11) = t86;
    t12 = (-(1));
    t10 = (t1 + 3808U);
    t11 = *((char **)t10);
    t15 = *((int *)t11);
    t18 = work_a_1394242000_3212880686_sub_2553881071_3579431146(t1, t2, t3, t4, t12, t15);
    t10 = (t38 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t18;
    t10 = (t1 + 3808U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = work_a_1394242000_3212880686_sub_2553881071_3579431146(t1, t2, t3, t4, 1, t12);
    t10 = (t44 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t15;
    t10 = (t26 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t10 = (t1 + 3568U);
    t14 = *((char **)t10);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t10 = (t38 + 56U);
    t17 = *((char **)t10);
    t20 = *((int *)t17);
    t86 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t18, t20);
    t10 = (t50 + 56U);
    t21 = *((char **)t10);
    t10 = (t21 + 0);
    *((int *)t10) = t86;
    t10 = (t26 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t10 = (t1 + 3688U);
    t14 = *((char **)t10);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t10 = (t44 + 56U);
    t17 = *((char **)t10);
    t20 = *((int *)t17);
    t86 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t18, t20);
    t10 = (t56 + 56U);
    t21 = *((char **)t10);
    t10 = (t21 + 0);
    *((int *)t10) = t86;
    t10 = (t32 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 1, t12);
    t10 = (t62 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t15;
    t10 = (t32 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 1, t12);
    t10 = (t68 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t15;
    t13 = (0 + 0U);
    t10 = (t4 + t13);
    t12 = *((int *)t10);
    t11 = (t50 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t5 - 1);
    t86 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t87 = (0 + 0U);
    t11 = (t17 + t87);
    *((int *)t11) = t86;
    t13 = (0 + 4U);
    t10 = (t4 + t13);
    t12 = *((int *)t10);
    t11 = (t56 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t5 - 1);
    t86 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t87 = (0 + 4U);
    t11 = (t17 + t87);
    *((int *)t11) = t86;
    t13 = (0 + 8U);
    t10 = (t4 + t13);
    t12 = *((int *)t10);
    t11 = (t62 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t6 - 1);
    t86 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t87 = (0 + 8U);
    t11 = (t17 + t87);
    *((int *)t11) = t86;
    t13 = (0 + 12U);
    t10 = (t4 + t13);
    t12 = *((int *)t10);
    t11 = (t68 + 56U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t6 - 1);
    t86 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t1, t18, 0, t20);
    t11 = (t19 + 56U);
    t17 = *((char **)t11);
    t87 = (0 + 12U);
    t11 = (t17 + t87);
    *((int *)t11) = t86;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 4U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t87 = (0 + 0U);
    t14 = (t17 + t87);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t18 + 1);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t88 = (0 + 16U);
    t21 = (t22 + t88);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 12U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t87 = (0 + 8U);
    t14 = (t17 + t87);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t18 + 1);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t88 = (0 + 20U);
    t21 = (t22 + t88);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 0U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t87 = (0 + 4U);
    t14 = (t17 + t87);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t18 / 2);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t88 = (0 + 52U);
    t21 = (t22 + t88);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 8U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t87 = (0 + 12U);
    t14 = (t17 + t87);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t18 / 2);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t88 = (0 + 56U);
    t21 = (t22 + t88);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t0 = xsi_get_transient_memory(64U);
    memcpy(t0, t11, 64U);

LAB1:    return t0;
LAB3:    *((char **)t74) = t2;
    goto LAB2;

LAB5:    *((char **)t77) = t3;
    goto LAB4;

LAB7:    *((char **)t80) = t4;
    goto LAB6;

LAB8:;
}

unsigned char work_a_1394242000_3212880686_sub_3318353349_3579431146(char *t1, char *t2, char *t3, int t4)
{
    char t5[488];
    char t6[24];
    char t10[8];
    char t16[8];
    char t22[8];
    char t28[8];
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
    unsigned char t32;
    char *t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    int t41;
    int t42;
    unsigned int t43;
    char *t44;
    int t45;
    unsigned int t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    char *t53;
    char *t54;

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
    t31 = (t6 + 4U);
    t32 = (t2 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t6 + 12U);
    t34 = (t3 != 0);
    if (t34 == 1)
        goto LAB5;

LAB4:    t35 = (t6 + 20U);
    *((int *)t35) = t4;
    t36 = (0 + 4U);
    t37 = (t2 + t36);
    t38 = *((int *)t37);
    t39 = (0 + 4U);
    t40 = (t3 + t39);
    t41 = *((int *)t40);
    t42 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t38, t41);
    t43 = (0 + 0U);
    t44 = (t2 + t43);
    t45 = *((int *)t44);
    t46 = (0 + 0U);
    t47 = (t3 + t46);
    t48 = *((int *)t47);
    t49 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, t45, t48);
    t50 = (t42 - t49);
    t51 = (t50 + 1);
    t52 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 0, t51);
    t53 = (t7 + 56U);
    t54 = *((char **)t53);
    t53 = (t54 + 0);
    *((int *)t53) = t52;
    t36 = (0 + 12U);
    t8 = (t2 + t36);
    t38 = *((int *)t8);
    t39 = (0 + 12U);
    t9 = (t3 + t39);
    t41 = *((int *)t9);
    t42 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t38, t41);
    t43 = (0 + 8U);
    t11 = (t2 + t43);
    t45 = *((int *)t11);
    t46 = (0 + 8U);
    t12 = (t3 + t46);
    t48 = *((int *)t12);
    t49 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, t45, t48);
    t50 = (t42 - t49);
    t51 = (t50 + 1);
    t52 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, 0, t51);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t52;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t38 = *((int *)t9);
    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t41 = *((int *)t11);
    t42 = (t38 * t41);
    t8 = (t25 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t42;
    t36 = (0 + 16U);
    t8 = (t2 + t36);
    t38 = *((int *)t8);
    t39 = (0 + 20U);
    t9 = (t2 + t39);
    t41 = *((int *)t9);
    t42 = (t38 * t41);
    t43 = (0 + 16U);
    t11 = (t3 + t43);
    t45 = *((int *)t11);
    t46 = (0 + 20U);
    t12 = (t3 + t46);
    t48 = *((int *)t12);
    t49 = (t45 * t48);
    t50 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t42, t49);
    t14 = (t19 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t50;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t38 = *((int *)t9);
    t32 = (t38 > 0);
    if (t32 != 0)
        goto LAB6;

LAB8:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB3:    *((char **)t31) = t2;
    goto LAB2;

LAB5:    *((char **)t33) = t3;
    goto LAB4;

LAB6:    t8 = (t25 + 56U);
    t11 = *((char **)t8);
    t41 = *((int *)t11);
    t42 = (t41 * 100);
    t8 = (t19 + 56U);
    t12 = *((char **)t8);
    t45 = *((int *)t12);
    t48 = (t42 / t45);
    t34 = (t48 >= t4);
    t0 = t34;
    goto LAB1;

LAB7:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:    goto LAB7;

}

char *work_a_1394242000_3212880686_sub_3360517996_3579431146(char *t1, char *t2, char *t3, int t4, int t5, int t6)
{
    char t7[1536];
    char t8[48];
    char t9[32];
    char t16[32];
    char t23[64];
    char t30[16];
    char t38[16];
    char t42[16];
    char t48[80000];
    char t54[16];
    char t60[80000];
    char t69[8];
    char t75[8];
    char t81[8];
    char t87[8];
    char t93[8];
    char t99[8];
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
    char *t29;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    int t41;
    char *t43;
    char *t44;
    int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    int t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    unsigned char t103;
    char *t104;
    char *t105;
    unsigned char t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned char t115;
    unsigned char t116;
    unsigned char t117;
    unsigned char t118;
    unsigned char t119;
    unsigned char t120;
    unsigned char t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned char t126;
    int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    unsigned char t138;
    int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned char t150;
    unsigned char t151;
    int t152;
    int t153;
    int t154;
    int t155;
    unsigned char t156;
    int t157;
    unsigned char t158;
    int t159;
    int t160;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 639;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (639 - 0);
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
    *((int *)t17) = 639;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t18 = (639 - 0);
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
    t21 = (t1 + 9344);
    t22 = (t19 + 88U);
    *((char **)t22) = t21;
    t24 = (t19 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, 0);
    t25 = (t19 + 80U);
    *((unsigned int *)t25) = 64U;
    t26 = ((STD_STANDARD) + 384);
    t27 = ((STD_STANDARD) + 384);
    t28 = (t7 + 124U);
    xsi_create_unconstr_array_type(t28, ng6, t26, 1, t27);
    t29 = (t7 + 124U);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 19999;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (19999 - 0);
    t13 = (t33 * 1);
    t13 = (t13 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t13;
    t32 = (t7 + 236U);
    xsi_create_subtype(t32, ng7, t29, t30, 2);
    t34 = ((STD_STANDARD) + 384);
    t35 = ((STD_STANDARD) + 384);
    t36 = (t7 + 348U);
    xsi_create_unconstr_array_type(t36, ng8, t34, 1, t35);
    t37 = (t7 + 348U);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 0;
    t40 = (t39 + 4U);
    *((int *)t40) = 19999;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t41 = (19999 - 0);
    t13 = (t41 * 1);
    t13 = (t13 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t13;
    t40 = (t7 + 460U);
    xsi_create_subtype(t40, ng9, t37, t38, 2);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 0;
    t44 = (t43 + 4U);
    *((int *)t44) = 19999;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t45 = (19999 - 0);
    t13 = (t45 * 1);
    t13 = (t13 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t13;
    t44 = (t7 + 572U);
    t46 = (t7 + 236U);
    t47 = (t44 + 88U);
    *((char **)t47) = t46;
    t49 = (t44 + 56U);
    *((char **)t49) = t48;
    xsi_type_set_default_value(t46, t48, 0);
    t50 = (t44 + 64U);
    t51 = (t46 + 80U);
    t52 = *((char **)t51);
    *((char **)t50) = t52;
    t53 = (t44 + 80U);
    *((unsigned int *)t53) = 80000U;
    t55 = (t54 + 0U);
    t56 = (t55 + 0U);
    *((int *)t56) = 0;
    t56 = (t55 + 4U);
    *((int *)t56) = 19999;
    t56 = (t55 + 8U);
    *((int *)t56) = 1;
    t57 = (19999 - 0);
    t13 = (t57 * 1);
    t13 = (t13 + 1);
    t56 = (t55 + 12U);
    *((unsigned int *)t56) = t13;
    t56 = (t7 + 692U);
    t58 = (t7 + 460U);
    t59 = (t56 + 88U);
    *((char **)t59) = t58;
    t61 = (t56 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, 0);
    t62 = (t56 + 64U);
    t63 = (t58 + 80U);
    t64 = *((char **)t63);
    *((char **)t62) = t64;
    t65 = (t56 + 80U);
    *((unsigned int *)t65) = 80000U;
    t66 = (t7 + 812U);
    t67 = ((STD_STANDARD) + 384);
    t68 = (t66 + 88U);
    *((char **)t68) = t67;
    t70 = (t66 + 56U);
    *((char **)t70) = t69;
    *((int *)t69) = 0;
    t71 = (t66 + 80U);
    *((unsigned int *)t71) = 4U;
    t72 = (t7 + 932U);
    t73 = ((STD_STANDARD) + 384);
    t74 = (t72 + 88U);
    *((char **)t74) = t73;
    t76 = (t72 + 56U);
    *((char **)t76) = t75;
    xsi_type_set_default_value(t73, t75, 0);
    t77 = (t72 + 80U);
    *((unsigned int *)t77) = 4U;
    t78 = (t7 + 1052U);
    t79 = ((STD_STANDARD) + 384);
    t80 = (t78 + 88U);
    *((char **)t80) = t79;
    t82 = (t78 + 56U);
    *((char **)t82) = t81;
    xsi_type_set_default_value(t79, t81, 0);
    t83 = (t78 + 80U);
    *((unsigned int *)t83) = 4U;
    t84 = (t7 + 1172U);
    t85 = ((STD_STANDARD) + 384);
    t86 = (t84 + 88U);
    *((char **)t86) = t85;
    t88 = (t84 + 56U);
    *((char **)t88) = t87;
    xsi_type_set_default_value(t85, t87, 0);
    t89 = (t84 + 80U);
    *((unsigned int *)t89) = 4U;
    t90 = (t7 + 1292U);
    t91 = ((STD_STANDARD) + 384);
    t92 = (t90 + 88U);
    *((char **)t92) = t91;
    t94 = (t90 + 56U);
    *((char **)t94) = t93;
    xsi_type_set_default_value(t91, t93, 0);
    t95 = (t90 + 80U);
    *((unsigned int *)t95) = 4U;
    t96 = (t7 + 1412U);
    t97 = ((STD_STANDARD) + 384);
    t98 = (t96 + 88U);
    *((char **)t98) = t97;
    t100 = (t96 + 56U);
    *((char **)t100) = t99;
    xsi_type_set_default_value(t97, t99, 0);
    t101 = (t96 + 80U);
    *((unsigned int *)t101) = 4U;
    t102 = (t8 + 4U);
    t103 = (t2 != 0);
    if (t103 == 1)
        goto LAB3;

LAB2:    t104 = (t8 + 12U);
    *((char **)t104) = t9;
    t105 = (t8 + 20U);
    t106 = (t3 != 0);
    if (t106 == 1)
        goto LAB5;

LAB4:    t107 = (t8 + 28U);
    *((char **)t107) = t16;
    t108 = (t8 + 36U);
    *((int *)t108) = t4;
    t109 = (t8 + 40U);
    *((int *)t109) = t5;
    t110 = (t8 + 44U);
    *((int *)t110) = t6;
    t111 = (t19 + 56U);
    t112 = *((char **)t111);
    t13 = (0 + 0U);
    t111 = (t112 + t13);
    *((int *)t111) = 640;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 4U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 8U);
    t10 = (t11 + t13);
    *((int *)t10) = 640;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 12U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 24U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 28U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 48U);
    t10 = (t11 + t13);
    *((unsigned char *)t10) = (unsigned char)0;
    t10 = (t44 + 56U);
    t11 = *((char **)t10);
    t10 = (t42 + 0U);
    t12 = *((int *)t10);
    t14 = (t42 + 8U);
    t15 = *((int *)t14);
    t18 = (0 - t12);
    t13 = (t18 * t15);
    t113 = (4U * t13);
    t114 = (0 + t113);
    t17 = (t11 + t114);
    *((int *)t17) = t4;
    t10 = (t56 + 56U);
    t11 = *((char **)t10);
    t10 = (t54 + 0U);
    t12 = *((int *)t10);
    t14 = (t54 + 8U);
    t15 = *((int *)t14);
    t18 = (0 - t12);
    t13 = (t18 * t15);
    t113 = (4U * t13);
    t114 = (0 + t113);
    t17 = (t11 + t114);
    *((int *)t17) = t5;
    t10 = (t66 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;

LAB6:    t10 = (t66 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t106 = (t12 >= 0);
    if (t106 == 1)
        goto LAB10;

LAB11:    t103 = (unsigned char)0;

LAB12:    if (t103 != 0)
        goto LAB7;

LAB9:    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 24U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t103 = (t12 > 0);
    if (t103 != 0)
        goto LAB78;

LAB80:
LAB79:    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t0 = xsi_get_transient_memory(64U);
    memcpy(t0, t11, 64U);

LAB1:    t10 = (t7 + 460U);
    xsi_delete_type(t10, 2);
    t11 = (t7 + 236U);
    xsi_delete_type(t11, 2);
    return t0;
LAB3:    *((char **)t102) = t2;
    goto LAB2;

LAB5:    *((char **)t105) = t3;
    goto LAB4;

LAB7:    t10 = (t44 + 56U);
    t17 = *((char **)t10);
    t10 = (t66 + 56U);
    t21 = *((char **)t10);
    t18 = *((int *)t21);
    t10 = (t42 + 0U);
    t20 = *((int *)t10);
    t22 = (t42 + 8U);
    t33 = *((int *)t22);
    t41 = (t18 - t20);
    t13 = (t41 * t33);
    t24 = (t42 + 4U);
    t45 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t20, t45, t33, t18);
    t113 = (4U * t13);
    t114 = (0 + t113);
    t25 = (t17 + t114);
    t57 = *((int *)t25);
    t26 = (t72 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    *((int *)t26) = t57;
    t10 = (t56 + 56U);
    t11 = *((char **)t10);
    t10 = (t66 + 56U);
    t14 = *((char **)t10);
    t12 = *((int *)t14);
    t10 = (t54 + 0U);
    t15 = *((int *)t10);
    t17 = (t54 + 8U);
    t18 = *((int *)t17);
    t20 = (t12 - t15);
    t13 = (t20 * t18);
    t21 = (t54 + 4U);
    t33 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t15, t33, t18, t12);
    t113 = (4U * t13);
    t114 = (0 + t113);
    t22 = (t11 + t114);
    t41 = *((int *)t22);
    t24 = (t78 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    *((int *)t24) = t41;
    t10 = (t66 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t15 = (t12 - 1);
    t10 = (t66 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t15;
    t10 = (t72 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t118 = (t12 >= 0);
    if (t118 == 1)
        goto LAB28;

LAB29:    t117 = (unsigned char)0;

LAB30:    if (t117 == 1)
        goto LAB25;

LAB26:    t116 = (unsigned char)0;

LAB27:    if (t116 == 1)
        goto LAB22;

LAB23:    t115 = (unsigned char)0;

LAB24:    if (t115 == 1)
        goto LAB19;

LAB20:    t106 = (unsigned char)0;

LAB21:    if (t106 == 1)
        goto LAB16;

LAB17:    t103 = (unsigned char)0;

LAB18:    if (t103 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB6;

LAB8:;
LAB10:    t10 = (t66 + 56U);
    t14 = *((char **)t10);
    t15 = *((int *)t14);
    t115 = (t15 < 19999);
    t103 = t115;
    goto LAB12;

LAB13:    t29 = (t78 + 56U);
    t31 = *((char **)t29);
    t139 = *((int *)t31);
    t140 = (t139 - 0);
    t141 = (t140 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t139);
    t142 = (t141 * 640U);
    t29 = (t72 + 56U);
    t32 = *((char **)t29);
    t143 = *((int *)t32);
    t144 = (t143 - 0);
    t145 = (t144 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t143);
    t146 = (t142 + t145);
    t147 = (4U * t146);
    t148 = (0 + t147);
    t29 = (t2 + t148);
    t149 = *((int *)t29);
    t34 = (t96 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    *((int *)t34) = t149;
    t10 = (t96 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t103 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t12);
    if (t103 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB14;

LAB16:    t26 = (t78 + 56U);
    t27 = *((char **)t26);
    t127 = *((int *)t27);
    t128 = (t127 - 0);
    t129 = (t128 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t127);
    t130 = (t129 * 640U);
    t26 = (t72 + 56U);
    t28 = *((char **)t26);
    t131 = *((int *)t28);
    t132 = (t131 - 0);
    t133 = (t132 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t131);
    t134 = (t130 + t133);
    t135 = (4U * t134);
    t136 = (0 + t135);
    t26 = (t3 + t136);
    t137 = *((int *)t26);
    t138 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t137);
    t103 = t138;
    goto LAB18;

LAB19:    t10 = (t1 + 5008U);
    t22 = *((char **)t10);
    t10 = (t78 + 56U);
    t24 = *((char **)t10);
    t33 = *((int *)t24);
    t41 = (t33 - 0);
    t13 = (t41 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t33);
    t113 = (t13 * 640U);
    t10 = (t72 + 56U);
    t25 = *((char **)t10);
    t45 = *((int *)t25);
    t57 = (t45 - 0);
    t114 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t45);
    t122 = (t113 + t114);
    t123 = (4U * t122);
    t124 = (0 + t123);
    t10 = (t22 + t124);
    t125 = *((int *)t10);
    t126 = (t125 == 0);
    t106 = t126;
    goto LAB21;

LAB22:    t10 = (t78 + 56U);
    t21 = *((char **)t10);
    t20 = *((int *)t21);
    t121 = (t20 < 640);
    t115 = t121;
    goto LAB24;

LAB25:    t10 = (t78 + 56U);
    t17 = *((char **)t10);
    t18 = *((int *)t17);
    t120 = (t18 >= 0);
    t116 = t120;
    goto LAB27;

LAB28:    t10 = (t72 + 56U);
    t14 = *((char **)t10);
    t15 = *((int *)t14);
    t119 = (t15 < 640);
    t117 = t119;
    goto LAB30;

LAB31:    t10 = (t1 + 5008U);
    t14 = *((char **)t10);
    t10 = (t78 + 56U);
    t17 = *((char **)t10);
    t15 = *((int *)t17);
    t18 = (t15 - 0);
    t13 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t15);
    t113 = (t13 * 640U);
    t10 = (t72 + 56U);
    t21 = *((char **)t10);
    t20 = *((int *)t21);
    t33 = (t20 - 0);
    t114 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t20);
    t122 = (t113 + t114);
    t123 = (4U * t122);
    t124 = (0 + t123);
    t10 = (t14 + t124);
    *((int *)t10) = t6;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 24U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t15 = (t12 + 1);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 24U);
    t14 = (t17 + t113);
    *((int *)t14) = t15;
    t10 = (t96 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t103 = work_a_1394242000_3212880686_sub_2780842967_3057020925(t1, t12);
    if (t103 != 0)
        goto LAB34;

LAB36:
LAB35:    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 0U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t72 + 56U);
    t17 = *((char **)t14);
    t15 = *((int *)t17);
    t18 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t12, t15);
    t14 = (t19 + 56U);
    t21 = *((char **)t14);
    t113 = (0 + 0U);
    t14 = (t21 + t113);
    *((int *)t14) = t18;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 4U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t72 + 56U);
    t17 = *((char **)t14);
    t15 = *((int *)t17);
    t18 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, t12, t15);
    t14 = (t19 + 56U);
    t21 = *((char **)t14);
    t113 = (0 + 4U);
    t14 = (t21 + t113);
    *((int *)t14) = t18;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 8U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t78 + 56U);
    t17 = *((char **)t14);
    t15 = *((int *)t17);
    t18 = work_a_1394242000_3212880686_sub_3202609556_3057020925(t1, t12, t15);
    t14 = (t19 + 56U);
    t21 = *((char **)t14);
    t113 = (0 + 8U);
    t14 = (t21 + t113);
    *((int *)t14) = t18;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 12U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t78 + 56U);
    t17 = *((char **)t14);
    t15 = *((int *)t17);
    t18 = work_a_1394242000_3212880686_sub_3202332950_3057020925(t1, t12, t15);
    t14 = (t19 + 56U);
    t21 = *((char **)t14);
    t113 = (0 + 12U);
    t14 = (t21 + t113);
    *((int *)t14) = t18;
    t12 = (-(1));
    t15 = t12;
    t18 = 1;

LAB37:    if (t15 <= t18)
        goto LAB38;

LAB40:    goto LAB32;

LAB34:    t10 = (t19 + 56U);
    t14 = *((char **)t10);
    t13 = (0 + 28U);
    t10 = (t14 + t13);
    t15 = *((int *)t10);
    t18 = (t15 + 1);
    t17 = (t19 + 56U);
    t21 = *((char **)t17);
    t113 = (0 + 28U);
    t17 = (t21 + t113);
    *((int *)t17) = t18;
    goto LAB35;

LAB38:    t20 = (-(1));
    t33 = t20;
    t41 = 1;

LAB41:    if (t33 <= t41)
        goto LAB42;

LAB44:
LAB39:    if (t15 == t18)
        goto LAB40;

LAB77:    t12 = (t15 + 1);
    t15 = t12;
    goto LAB37;

LAB42:    t106 = (t33 == 0);
    if (t106 == 1)
        goto LAB48;

LAB49:    t103 = (unsigned char)0;

LAB50:    if (t103 != 0)
        goto LAB45;

LAB47:
LAB46:    t10 = (t72 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t20 = (t12 + t33);
    t10 = (t84 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t20;
    t10 = (t78 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t20 = (t12 + t15);
    t10 = (t90 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t20;
    t10 = (t84 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t120 = (t12 >= 0);
    if (t120 == 1)
        goto LAB73;

LAB74:    t119 = (unsigned char)0;

LAB75:    if (t119 == 1)
        goto LAB70;

LAB71:    t118 = (unsigned char)0;

LAB72:    if (t118 == 1)
        goto LAB67;

LAB68:    t117 = (unsigned char)0;

LAB69:    if (t117 == 1)
        goto LAB64;

LAB65:    t116 = (unsigned char)0;

LAB66:    if (t116 == 1)
        goto LAB61;

LAB62:    t115 = (unsigned char)0;

LAB63:    if (t115 == 1)
        goto LAB58;

LAB59:    t106 = (unsigned char)0;

LAB60:    if (t106 == 1)
        goto LAB55;

LAB56:    t103 = (unsigned char)0;

LAB57:    if (t103 != 0)
        goto LAB52;

LAB54:
LAB53:
LAB43:    if (t33 == t41)
        goto LAB44;

LAB76:    t12 = (t33 + 1);
    t33 = t12;
    goto LAB41;

LAB45:    goto LAB43;

LAB48:    t115 = (t15 == 0);
    t103 = t115;
    goto LAB50;

LAB51:    goto LAB46;

LAB52:    t34 = (t66 + 56U);
    t36 = *((char **)t34);
    t159 = *((int *)t36);
    t160 = (t159 + 1);
    t34 = (t66 + 56U);
    t37 = *((char **)t34);
    t34 = (t37 + 0);
    *((int *)t34) = t160;
    t10 = (t84 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t10 = (t44 + 56U);
    t14 = *((char **)t10);
    t10 = (t66 + 56U);
    t17 = *((char **)t10);
    t20 = *((int *)t17);
    t10 = (t42 + 0U);
    t45 = *((int *)t10);
    t21 = (t42 + 8U);
    t57 = *((int *)t21);
    t125 = (t20 - t45);
    t13 = (t125 * t57);
    t22 = (t42 + 4U);
    t127 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t45, t127, t57, t20);
    t113 = (4U * t13);
    t114 = (0 + t113);
    t24 = (t14 + t114);
    *((int *)t24) = t12;
    t10 = (t90 + 56U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t10 = (t56 + 56U);
    t14 = *((char **)t10);
    t10 = (t66 + 56U);
    t17 = *((char **)t10);
    t20 = *((int *)t17);
    t10 = (t54 + 0U);
    t45 = *((int *)t10);
    t21 = (t54 + 8U);
    t57 = *((int *)t21);
    t125 = (t20 - t45);
    t13 = (t125 * t57);
    t22 = (t54 + 4U);
    t127 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t45, t127, t57, t20);
    t113 = (4U * t13);
    t114 = (0 + t113);
    t24 = (t14 + t114);
    *((int *)t24) = t12;
    goto LAB53;

LAB55:    t34 = (t66 + 56U);
    t35 = *((char **)t34);
    t157 = *((int *)t35);
    t158 = (t157 < 19998);
    t103 = t158;
    goto LAB57;

LAB58:    t29 = (t90 + 56U);
    t31 = *((char **)t29);
    t149 = *((int *)t31);
    t152 = (t149 - 0);
    t141 = (t152 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t149);
    t142 = (t141 * 640U);
    t29 = (t84 + 56U);
    t32 = *((char **)t29);
    t153 = *((int *)t32);
    t154 = (t153 - 0);
    t145 = (t154 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t153);
    t146 = (t142 + t145);
    t147 = (4U * t146);
    t148 = (0 + t147);
    t29 = (t2 + t148);
    t155 = *((int *)t29);
    t156 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t1, t155);
    t106 = t156;
    goto LAB60;

LAB61:    t26 = (t90 + 56U);
    t27 = *((char **)t26);
    t137 = *((int *)t27);
    t139 = (t137 - 0);
    t129 = (t139 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t137);
    t130 = (t129 * 640U);
    t26 = (t84 + 56U);
    t28 = *((char **)t26);
    t140 = *((int *)t28);
    t143 = (t140 - 0);
    t133 = (t143 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t140);
    t134 = (t130 + t133);
    t135 = (4U * t134);
    t136 = (0 + t135);
    t26 = (t3 + t136);
    t144 = *((int *)t26);
    t151 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t1, t144);
    t115 = t151;
    goto LAB63;

LAB64:    t10 = (t1 + 5008U);
    t22 = *((char **)t10);
    t10 = (t90 + 56U);
    t24 = *((char **)t10);
    t125 = *((int *)t24);
    t127 = (t125 - 0);
    t13 = (t127 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t125);
    t113 = (t13 * 640U);
    t10 = (t84 + 56U);
    t25 = *((char **)t10);
    t128 = *((int *)t25);
    t131 = (t128 - 0);
    t114 = (t131 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t128);
    t122 = (t113 + t114);
    t123 = (4U * t122);
    t124 = (0 + t123);
    t10 = (t22 + t124);
    t132 = *((int *)t10);
    t150 = (t132 == 0);
    t116 = t150;
    goto LAB66;

LAB67:    t10 = (t90 + 56U);
    t21 = *((char **)t10);
    t57 = *((int *)t21);
    t138 = (t57 < 640);
    t117 = t138;
    goto LAB69;

LAB70:    t10 = (t90 + 56U);
    t17 = *((char **)t10);
    t45 = *((int *)t17);
    t126 = (t45 >= 0);
    t118 = t126;
    goto LAB72;

LAB73:    t10 = (t84 + 56U);
    t14 = *((char **)t10);
    t20 = *((int *)t14);
    t121 = (t20 < 640);
    t119 = t121;
    goto LAB75;

LAB78:    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 4U);
    t14 = (t17 + t113);
    t15 = *((int *)t14);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 0U);
    t21 = (t22 + t114);
    t18 = *((int *)t21);
    t20 = (t15 - t18);
    t33 = (t20 + 1);
    t24 = (t19 + 56U);
    t25 = *((char **)t24);
    t122 = (0 + 16U);
    t24 = (t25 + t122);
    *((int *)t24) = t33;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 12U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 8U);
    t14 = (t17 + t113);
    t15 = *((int *)t14);
    t18 = (t12 - t15);
    t20 = (t18 + 1);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 20U);
    t21 = (t22 + t114);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 0U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 4U);
    t14 = (t17 + t113);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t18 / 2);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 52U);
    t21 = (t22 + t114);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 8U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 12U);
    t14 = (t17 + t113);
    t15 = *((int *)t14);
    t18 = (t12 + t15);
    t20 = (t18 / 2);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 56U);
    t21 = (t22 + t114);
    *((int *)t21) = t20;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 48U);
    t10 = (t11 + t13);
    *((unsigned char *)t10) = (unsigned char)1;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 20U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t103 = (t12 > 0);
    if (t103 != 0)
        goto LAB81;

LAB83:    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 32U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;

LAB82:    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 16U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t106 = (t12 > 0);
    if (t106 == 1)
        goto LAB87;

LAB88:    t103 = (unsigned char)0;

LAB89:    if (t103 != 0)
        goto LAB84;

LAB86:    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 36U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 40U);
    t10 = (t11 + t13);
    *((int *)t10) = 0;

LAB85:    goto LAB79;

LAB81:    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 16U);
    t14 = (t17 + t113);
    t15 = *((int *)t14);
    t18 = (t15 * 10);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 20U);
    t21 = (t22 + t114);
    t20 = *((int *)t21);
    t33 = (t18 / t20);
    t24 = (t19 + 56U);
    t25 = *((char **)t24);
    t122 = (0 + 32U);
    t24 = (t25 + t122);
    *((int *)t24) = t33;
    goto LAB82;

LAB84:    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 24U);
    t21 = (t22 + t114);
    t18 = *((int *)t21);
    t20 = (t18 * 100);
    t24 = (t19 + 56U);
    t25 = *((char **)t24);
    t122 = (0 + 16U);
    t24 = (t25 + t122);
    t33 = *((int *)t24);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    t123 = (0 + 20U);
    t26 = (t27 + t123);
    t41 = *((int *)t26);
    t45 = (t33 * t41);
    t57 = (t20 / t45);
    t28 = (t19 + 56U);
    t29 = *((char **)t28);
    t124 = (0 + 36U);
    t28 = (t29 + t124);
    *((int *)t28) = t57;
    t10 = (t19 + 56U);
    t11 = *((char **)t10);
    t13 = (0 + 28U);
    t10 = (t11 + t13);
    t12 = *((int *)t10);
    t15 = (t12 * 100);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 16U);
    t14 = (t17 + t113);
    t18 = *((int *)t14);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t114 = (0 + 20U);
    t21 = (t22 + t114);
    t20 = *((int *)t21);
    t33 = (t18 * t20);
    t41 = (t15 / t33);
    t24 = (t19 + 56U);
    t25 = *((char **)t24);
    t122 = (0 + 40U);
    t24 = (t25 + t122);
    *((int *)t24) = t41;
    goto LAB85;

LAB87:    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t113 = (0 + 20U);
    t14 = (t17 + t113);
    t15 = *((int *)t14);
    t115 = (t15 > 0);
    t103 = t115;
    goto LAB89;

LAB90:;
}

int work_a_1394242000_3212880686_sub_2852017544_3579431146(char *t1, char *t2)
{
    char t3[1328];
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
    unsigned char t72;
    unsigned int t73;
    char *t74;
    unsigned char t75;
    unsigned char t76;
    int t77;
    int t78;
    unsigned char t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned char t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned char t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned char t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;

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
    xsi_type_set_default_value(t54, t56, 0);
    t58 = (t53 + 80U);
    *((unsigned int *)t58) = 4U;
    t59 = (t3 + 1084U);
    t60 = ((STD_STANDARD) + 384);
    t61 = (t59 + 88U);
    *((char **)t61) = t60;
    t63 = (t59 + 56U);
    *((char **)t63) = t62;
    xsi_type_set_default_value(t60, t62, 0);
    t64 = (t59 + 80U);
    *((unsigned int *)t64) = 4U;
    t65 = (t3 + 1204U);
    t66 = ((STD_STANDARD) + 384);
    t67 = (t65 + 88U);
    *((char **)t67) = t66;
    t69 = (t65 + 56U);
    *((char **)t69) = t68;
    xsi_type_set_default_value(t66, t68, 0);
    t70 = (t65 + 80U);
    *((unsigned int *)t70) = 4U;
    t71 = (t4 + 4U);
    t72 = (t2 != 0);
    if (t72 == 1)
        goto LAB3;

LAB2:    t73 = (0 + 48U);
    t74 = (t2 + t73);
    t75 = *((unsigned char *)t74);
    t76 = (!(t75));
    if (t76 != 0)
        goto LAB4;

LAB6:
LAB5:    t73 = (0 + 16U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t7 = (t1 + 1528U);
    t9 = *((char **)t7);
    t78 = *((int *)t9);
    t79 = (t77 >= t78);
    if (t79 == 1)
        goto LAB17;

LAB18:    t76 = (unsigned char)0;

LAB19:    if (t76 == 1)
        goto LAB14;

LAB15:    t75 = (unsigned char)0;

LAB16:    if (t75 == 1)
        goto LAB11;

LAB12:    t72 = (unsigned char)0;

LAB13:    if (t72 != 0)
        goto LAB8;

LAB10:
LAB9:    t73 = (0 + 24U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t7 = (t1 + 2728U);
    t9 = *((char **)t7);
    t78 = *((int *)t9);
    t75 = (t77 >= t78);
    if (t75 == 1)
        goto LAB35;

LAB36:    t72 = (unsigned char)0;

LAB37:    if (t72 != 0)
        goto LAB32;

LAB34:
LAB33:    t73 = (0 + 32U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t7 = (t1 + 2008U);
    t9 = *((char **)t7);
    t78 = *((int *)t9);
    t75 = (t77 >= t78);
    if (t75 == 1)
        goto LAB47;

LAB48:    t72 = (unsigned char)0;

LAB49:    if (t72 != 0)
        goto LAB44;

LAB46:
LAB45:    t73 = (0 + 36U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t7 = (t1 + 2368U);
    t9 = *((char **)t7);
    t78 = *((int *)t9);
    t75 = (t77 >= t78);
    if (t75 == 1)
        goto LAB60;

LAB61:    t72 = (unsigned char)0;

LAB62:    if (t72 != 0)
        goto LAB57;

LAB59:
LAB58:    t73 = (0 + 28U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t72 = (t77 > 0);
    if (t72 != 0)
        goto LAB70;

LAB72:
LAB71:    t73 = (0 + 56U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t78 = (640 * 3);
    t81 = (t78 / 4);
    t72 = (t77 > t81);
    if (t72 != 0)
        goto LAB78;

LAB80:    t73 = (0 + 56U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t78 = (640 * 2);
    t81 = (t78 / 3);
    t72 = (t77 > t81);
    if (t72 != 0)
        goto LAB81;

LAB82:    t73 = (0 + 56U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t78 = (640 / 2);
    t72 = (t77 > t78);
    if (t72 != 0)
        goto LAB83;

LAB84:    t6 = (t29 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 5;

LAB79:    t73 = (0 + 16U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t80 = (0 + 20U);
    t7 = (t2 + t80);
    t78 = *((int *)t7);
    t81 = (t78 * 2);
    t75 = (t77 > t81);
    if (t75 == 1)
        goto LAB88;

LAB89:    t72 = (unsigned char)0;

LAB90:    if (t72 != 0)
        goto LAB85;

LAB87:
LAB86:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t78 = *((int *)t9);
    t81 = (t77 + t78);
    t6 = (t23 + 56U);
    t10 = *((char **)t6);
    t82 = *((int *)t10);
    t85 = (t81 + t82);
    t6 = (t29 + 56U);
    t12 = *((char **)t6);
    t86 = *((int *)t12);
    t89 = (t85 + t86);
    t6 = (t35 + 56U);
    t13 = *((char **)t6);
    t90 = *((int *)t13);
    t92 = (t89 + t90);
    t6 = (t41 + 56U);
    t15 = *((char **)t6);
    t93 = *((int *)t15);
    t94 = (t92 + t93);
    t6 = (t47 + 56U);
    t16 = *((char **)t6);
    t95 = *((int *)t16);
    t96 = (t94 + t95);
    t6 = (t5 + 56U);
    t18 = *((char **)t6);
    t6 = (t18 + 0);
    *((int *)t6) = t96;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t0 = t77;

LAB1:    return t0;
LAB3:    *((char **)t71) = t2;
    goto LAB2;

LAB4:    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t16 = (t11 + 56U);
    t19 = *((char **)t16);
    t16 = (t19 + 0);
    *((int *)t16) = 20;
    t73 = (0 + 16U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t79 = (t77 >= 120);
    if (t79 == 1)
        goto LAB29;

LAB30:    t76 = (unsigned char)0;

LAB31:    if (t76 == 1)
        goto LAB26;

LAB27:    t75 = (unsigned char)0;

LAB28:    if (t75 == 1)
        goto LAB23;

LAB24:    t72 = (unsigned char)0;

LAB25:    if (t72 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB9;

LAB11:    t88 = (0 + 20U);
    t13 = (t2 + t88);
    t89 = *((int *)t13);
    t16 = (t1 + 1888U);
    t18 = *((char **)t16);
    t90 = *((int *)t18);
    t91 = (t89 <= t90);
    t72 = t91;
    goto LAB13;

LAB14:    t84 = (0 + 20U);
    t10 = (t2 + t84);
    t85 = *((int *)t10);
    t13 = (t1 + 1768U);
    t15 = *((char **)t13);
    t86 = *((int *)t15);
    t87 = (t85 >= t86);
    t75 = t87;
    goto LAB16;

LAB17:    t80 = (0 + 16U);
    t7 = (t2 + t80);
    t81 = *((int *)t7);
    t10 = (t1 + 1648U);
    t12 = *((char **)t10);
    t82 = *((int *)t12);
    t83 = (t81 <= t82);
    t76 = t83;
    goto LAB19;

LAB20:    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t85 = *((int *)t13);
    t86 = (t85 + 15);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    *((int *)t12) = t86;
    goto LAB21;

LAB23:    t88 = (0 + 20U);
    t10 = (t2 + t88);
    t82 = *((int *)t10);
    t91 = (t82 <= 70);
    t72 = t91;
    goto LAB25;

LAB26:    t84 = (0 + 20U);
    t9 = (t2 + t84);
    t81 = *((int *)t9);
    t87 = (t81 >= 25);
    t75 = t87;
    goto LAB28;

LAB29:    t80 = (0 + 16U);
    t7 = (t2 + t80);
    t78 = *((int *)t7);
    t83 = (t78 <= 280);
    t76 = t83;
    goto LAB31;

LAB32:    t10 = (t35 + 56U);
    t13 = *((char **)t10);
    t10 = (t13 + 0);
    *((int *)t10) = 20;
    t73 = (0 + 24U);
    t6 = (t2 + t73);
    t77 = *((int *)t6);
    t75 = (t77 >= 1500);
    if (t75 == 1)
        goto LAB41;

LAB42:    t72 = (unsigned char)0;

LAB43:    if (t72 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB33;

LAB35:    t80 = (0 + 24U);
    t7 = (t2 + t80);
    t81 = *((int *)t7);
    t10 = (t1 + 2848U);
    t12 = *((char **)t10);
    t82 = *((int *)t12);
    t76 = (t81 <= t82);
    t72 = t76;
    goto LAB37;

LAB38:    t9 = (t35 + 56U);
    t10 = *((char **)t9);
    t81 = *((int *)t10);
    t82 = (t81 + 10);
    t9 = (t35 + 56U);
    t12 = *((char **)t9);
    t9 = (t12 + 0);
    *((int *)t9) = t82;
    goto LAB39;

LAB41:    t80 = (0 + 24U);
    t7 = (t2 + t80);
    t78 = *((int *)t7);
    t76 = (t78 <= 12000);
    t72 = t76;
    goto LAB43;

LAB44:    t84 = (0 + 32U);
    t10 = (t2 + t84);
    t85 = *((int *)t10);
    t13 = (t1 + 2248U);
    t15 = *((char **)t13);
    t86 = *((int *)t15);
    t89 = work_a_1394242000_3212880686_sub_2812277502_3057020925(t1, t85, t86);
    t13 = (t53 + 56U);
    t16 = *((char **)t13);
    t13 = (t16 + 0);
    *((int *)t13) = t89;
    t6 = (t53 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 10);
    if (t72 != 0)
        goto LAB50;

LAB52:    t6 = (t53 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 20);
    if (t72 != 0)
        goto LAB53;

LAB54:    t6 = (t53 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 30);
    if (t72 != 0)
        goto LAB55;

LAB56:    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 10;

LAB51:    goto LAB45;

LAB47:    t80 = (0 + 32U);
    t7 = (t2 + t80);
    t81 = *((int *)t7);
    t10 = (t1 + 2128U);
    t12 = *((char **)t10);
    t82 = *((int *)t12);
    t76 = (t81 <= t82);
    t72 = t76;
    goto LAB49;

LAB50:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 35;
    goto LAB51;

LAB53:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 25;
    goto LAB51;

LAB55:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 15;
    goto LAB51;

LAB57:    t84 = (0 + 36U);
    t10 = (t2 + t84);
    t85 = *((int *)t10);
    t13 = (t1 + 2608U);
    t15 = *((char **)t13);
    t86 = *((int *)t15);
    t89 = work_a_1394242000_3212880686_sub_2812277502_3057020925(t1, t85, t86);
    t13 = (t59 + 56U);
    t16 = *((char **)t13);
    t13 = (t16 + 0);
    *((int *)t13) = t89;
    t6 = (t59 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 8);
    if (t72 != 0)
        goto LAB63;

LAB65:    t6 = (t59 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 15);
    if (t72 != 0)
        goto LAB66;

LAB67:    t6 = (t59 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 25);
    if (t72 != 0)
        goto LAB68;

LAB69:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 5;

LAB64:    goto LAB58;

LAB60:    t80 = (0 + 36U);
    t7 = (t2 + t80);
    t81 = *((int *)t7);
    t10 = (t1 + 2488U);
    t12 = *((char **)t10);
    t82 = *((int *)t12);
    t76 = (t81 <= t82);
    t72 = t76;
    goto LAB62;

LAB63:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 20;
    goto LAB64;

LAB66:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 15;
    goto LAB64;

LAB68:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 10;
    goto LAB64;

LAB70:    t80 = (0 + 40U);
    t7 = (t2 + t80);
    t78 = *((int *)t7);
    t81 = work_a_1394242000_3212880686_sub_2812277502_3057020925(t1, t78, 25);
    t9 = (t65 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = t81;
    t6 = (t65 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 10);
    if (t72 != 0)
        goto LAB73;

LAB75:    t6 = (t65 + 56U);
    t7 = *((char **)t6);
    t77 = *((int *)t7);
    t72 = (t77 <= 20);
    if (t72 != 0)
        goto LAB76;

LAB77:    t6 = (t41 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 8;

LAB74:    goto LAB71;

LAB73:    t6 = (t41 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 15;
    goto LAB74;

LAB76:    t6 = (t41 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = 12;
    goto LAB74;

LAB78:    t7 = (t29 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = 20;
    goto LAB79;

LAB81:    t7 = (t29 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = 15;
    goto LAB79;

LAB83:    t7 = (t29 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = 10;
    goto LAB79;

LAB85:    t12 = (t47 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 10;
    goto LAB86;

LAB88:    t84 = (0 + 28U);
    t9 = (t2 + t84);
    t82 = *((int *)t9);
    t88 = (0 + 24U);
    t10 = (t2 + t88);
    t85 = *((int *)t10);
    t86 = (t85 / 4);
    t76 = (t82 > t86);
    t72 = t76;
    goto LAB90;

LAB91:;
}

unsigned char work_a_1394242000_3212880686_sub_1665737120_3579431146(char *t1, char *t2)
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
    unsigned int t18;
    char *t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned char t27;
    unsigned int t28;
    int t29;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned char t39;
    unsigned int t40;
    int t41;
    char *t42;
    char *t43;
    int t44;
    unsigned char t45;
    unsigned int t46;
    int t47;
    char *t48;
    char *t49;
    int t50;
    unsigned char t51;
    unsigned int t52;
    int t53;
    char *t54;
    char *t55;
    int t56;
    unsigned char t57;
    unsigned int t58;
    int t59;
    char *t60;
    char *t61;
    int t62;
    unsigned char t63;
    unsigned int t64;
    int t65;
    char *t66;
    char *t67;
    int t68;
    unsigned char t69;
    unsigned int t70;
    int t71;
    char *t72;
    char *t73;
    int t74;
    unsigned char t75;
    unsigned int t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned char t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    char *t85;
    int t86;
    int t87;
    unsigned char t88;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t18 = (0 + 48U);
    t19 = (t2 + t18);
    t20 = *((unsigned char *)t19);
    if (t20 == 1)
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

LAB4:    t82 = (0 + 28U);
    t78 = (t2 + t82);
    t83 = *((int *)t78);
    t84 = (0 + 24U);
    t85 = (t2 + t84);
    t86 = *((int *)t85);
    t87 = (t86 / 6);
    t88 = (t83 > t87);
    t7 = t88;
    goto LAB6;

LAB7:    t76 = (0 + 36U);
    t72 = (t2 + t76);
    t77 = *((int *)t72);
    t78 = (t1 + 2488U);
    t79 = *((char **)t78);
    t80 = *((int *)t79);
    t81 = (t77 <= t80);
    t8 = t81;
    goto LAB9;

LAB10:    t70 = (0 + 36U);
    t66 = (t2 + t70);
    t71 = *((int *)t66);
    t72 = (t1 + 2368U);
    t73 = *((char **)t72);
    t74 = *((int *)t73);
    t75 = (t71 >= t74);
    t9 = t75;
    goto LAB12;

LAB13:    t64 = (0 + 32U);
    t60 = (t2 + t64);
    t65 = *((int *)t60);
    t66 = (t1 + 2128U);
    t67 = *((char **)t66);
    t68 = *((int *)t67);
    t69 = (t65 <= t68);
    t10 = t69;
    goto LAB15;

LAB16:    t58 = (0 + 32U);
    t54 = (t2 + t58);
    t59 = *((int *)t54);
    t60 = (t1 + 2008U);
    t61 = *((char **)t60);
    t62 = *((int *)t61);
    t63 = (t59 >= t62);
    t11 = t63;
    goto LAB18;

LAB19:    t52 = (0 + 24U);
    t48 = (t2 + t52);
    t53 = *((int *)t48);
    t54 = (t1 + 2848U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (t53 <= t56);
    t12 = t57;
    goto LAB21;

LAB22:    t46 = (0 + 24U);
    t42 = (t2 + t46);
    t47 = *((int *)t42);
    t48 = (t1 + 2728U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t47 >= t50);
    t13 = t51;
    goto LAB24;

LAB25:    t40 = (0 + 20U);
    t36 = (t2 + t40);
    t41 = *((int *)t36);
    t42 = (t1 + 1888U);
    t43 = *((char **)t42);
    t44 = *((int *)t43);
    t45 = (t41 <= t44);
    t14 = t45;
    goto LAB27;

LAB28:    t34 = (0 + 20U);
    t30 = (t2 + t34);
    t35 = *((int *)t30);
    t36 = (t1 + 1768U);
    t37 = *((char **)t36);
    t38 = *((int *)t37);
    t39 = (t35 >= t38);
    t15 = t39;
    goto LAB30;

LAB31:    t28 = (0 + 16U);
    t24 = (t2 + t28);
    t29 = *((int *)t24);
    t30 = (t1 + 1648U);
    t31 = *((char **)t30);
    t32 = *((int *)t31);
    t33 = (t29 <= t32);
    t16 = t33;
    goto LAB33;

LAB34:    t21 = (0 + 16U);
    t22 = (t2 + t21);
    t23 = *((int *)t22);
    t24 = (t1 + 1528U);
    t25 = *((char **)t24);
    t26 = *((int *)t25);
    t27 = (t23 >= t26);
    t17 = t27;
    goto LAB36;

LAB37:;
}

static void work_a_1394242000_3212880686_p_0(char *t0)
{
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
    unsigned char t28;
    int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    int t45;
    unsigned char t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    int t61;
    unsigned char t62;
    char *t63;
    char *t64;
    int t65;
    char *t66;
    int t67;
    int t68;
    unsigned char t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    int t75;
    char *t76;
    char *t77;
    char *t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned char t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 7968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(519, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6176U);
    t4 = (t0 + 9879237);
    t6 = (t0 + 16188U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(520, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(524, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879317);
    *((int *)t2) = 0;
    t3 = (t0 + 9879321);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB9:    if (t10 <= t11)
        goto LAB10;

LAB12:    xsi_set_current_line(537, ng10);
    t2 = (t0 + 6176U);
    std_textio_file_close(t2);
    xsi_set_current_line(539, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6280U);
    t4 = (t0 + 9879333);
    t6 = (t0 + 16204U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(540, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB22;

LAB24:
LAB23:    xsi_set_current_line(544, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879392);
    *((int *)t2) = 0;
    t3 = (t0 + 9879396);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB27:    if (t10 <= t11)
        goto LAB28;

LAB30:    xsi_set_current_line(555, ng10);
    t2 = (t0 + 6280U);
    std_textio_file_close(t2);
    xsi_set_current_line(557, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6384U);
    t4 = (t0 + 9879408);
    t6 = (t0 + 16220U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(558, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB40;

LAB42:
LAB41:    xsi_set_current_line(562, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879450);
    *((int *)t2) = 0;
    t3 = (t0 + 9879454);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB45:    if (t10 <= t11)
        goto LAB46;

LAB48:    xsi_set_current_line(573, ng10);
    t2 = (t0 + 6384U);
    std_textio_file_close(t2);
    xsi_set_current_line(575, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879466);
    *((int *)t2) = 0;
    t3 = (t0 + 9879470);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB58:    if (t10 <= t11)
        goto LAB59;

LAB61:    xsi_set_current_line(581, ng10);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t2 = (t0 + 9879482);
    *((int *)t2) = 0;
    t4 = (t0 + 9879486);
    *((int *)t4) = t10;
    t11 = 0;
    t12 = t10;

LAB68:    if (t11 <= t12)
        goto LAB69;

LAB71:    xsi_set_current_line(599, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879490);
    *((int *)t2) = 0;
    t3 = (t0 + 9879494);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB73:    if (t10 <= t11)
        goto LAB74;

LAB76:    xsi_set_current_line(623, ng10);
    t2 = (t0 + 5248U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t2 = (t0 + 9879522);
    *((int *)t2) = 0;
    t4 = (t0 + 9879526);
    *((int *)t4) = t10;
    t11 = 0;
    t12 = t10;

LAB123:    if (t11 <= t12)
        goto LAB124;

LAB126:    xsi_set_current_line(640, ng10);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(641, ng10);
    t9 = (-(1));
    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(643, ng10);
    t2 = (t0 + 5248U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t2 = (t0 + 9879538);
    *((int *)t2) = 0;
    t4 = (t0 + 9879542);
    *((int *)t4) = t10;
    t11 = 0;
    t12 = t10;

LAB146:    if (t11 <= t12)
        goto LAB147;

LAB149:    xsi_set_current_line(650, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879546);
    *((int *)t2) = 0;
    t3 = (t0 + 9879550);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB160:    if (t10 <= t11)
        goto LAB161;

LAB163:    xsi_set_current_line(656, ng10);
    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t7 = (t9 >= 0);
    if (t7 != 0)
        goto LAB170;

LAB172:
LAB171:    xsi_set_current_line(683, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6488U);
    t4 = (t0 + 9879578);
    t6 = (t0 + 16236U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(684, ng10);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB219;

LAB221:
LAB220:    xsi_set_current_line(688, ng10);
    t9 = (640 - 1);
    t2 = (t0 + 9879646);
    *((int *)t2) = 0;
    t3 = (t0 + 9879650);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB224:    if (t10 <= t11)
        goto LAB225;

LAB227:    xsi_set_current_line(694, ng10);
    t2 = (t0 + 6488U);
    std_textio_file_close(t2);
    xsi_set_current_line(696, ng10);
    if ((unsigned char)0 == 0)
        goto LAB234;

LAB235:    xsi_set_current_line(697, ng10);

LAB238:    *((char **)t1) = &&LAB239;

LAB1:    return;
LAB4:    xsi_set_current_line(521, ng10);
    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    goto LAB5;

LAB7:    t2 = (t0 + 9879279);
    xsi_report(t2, 38U, (unsigned char)3);
    goto LAB8;

LAB10:    xsi_set_current_line(525, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879325);
    *((int *)t4) = 0;
    t5 = (t0 + 9879329);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB13:    if (t13 <= t14)
        goto LAB14;

LAB16:
LAB11:    t2 = (t0 + 9879317);
    t10 = *((int *)t2);
    t3 = (t0 + 9879321);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB12;

LAB21:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879317);
    *((int *)t4) = t10;
    goto LAB9;

LAB14:    xsi_set_current_line(526, ng10);
    t6 = (t0 + 6176U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(532, ng10);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879317);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t4 = (t0 + 9879325);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t5 = (t3 + t27);
    *((int *)t5) = 0;
    xsi_set_current_line(533, ng10);
    t2 = (t0 + 4768U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879317);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t4 = (t0 + 9879325);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t5 = (t3 + t27);
    *((int *)t5) = 0;

LAB18:
LAB15:    t2 = (t0 + 9879325);
    t13 = *((int *)t2);
    t3 = (t0 + 9879329);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB16;

LAB20:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879325);
    *((int *)t4) = t13;
    goto LAB13;

LAB17:    xsi_set_current_line(527, ng10);
    t15 = (t0 + 7776);
    t16 = (t0 + 6176U);
    t17 = (t0 + 6664U);
    std_textio_readline(STD_TEXTIO, t15, t16, t17);
    xsi_set_current_line(528, ng10);
    t2 = (t0 + 7776);
    t3 = (t0 + 6664U);
    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(529, ng10);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t0, t9, 0, 255);
    t2 = (t0 + 4408U);
    t4 = *((char **)t2);
    t2 = (t0 + 9879317);
    t18 = *((int *)t2);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t5 = (t0 + 9879325);
    t22 = *((int *)t5);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t6 = (t4 + t27);
    *((int *)t6) = t12;
    xsi_set_current_line(530, ng10);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t0, t9, 0, 255);
    t2 = (t0 + 4768U);
    t4 = *((char **)t2);
    t2 = (t0 + 9879317);
    t18 = *((int *)t2);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t5 = (t0 + 9879325);
    t22 = *((int *)t5);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t6 = (t4 + t27);
    *((int *)t6) = t12;
    goto LAB18;

LAB22:    xsi_set_current_line(541, ng10);
    if ((unsigned char)0 == 0)
        goto LAB25;

LAB26:    goto LAB23;

LAB25:    t2 = (t0 + 9879359);
    xsi_report(t2, 33U, (unsigned char)3);
    goto LAB26;

LAB28:    xsi_set_current_line(545, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879400);
    *((int *)t4) = 0;
    t5 = (t0 + 9879404);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB31:    if (t13 <= t14)
        goto LAB32;

LAB34:
LAB29:    t2 = (t0 + 9879392);
    t10 = *((int *)t2);
    t3 = (t0 + 9879396);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB30;

LAB39:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879392);
    *((int *)t4) = t10;
    goto LAB27;

LAB32:    xsi_set_current_line(546, ng10);
    t6 = (t0 + 6280U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(551, ng10);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879392);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t4 = (t0 + 9879400);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t5 = (t3 + t27);
    *((int *)t5) = 0;

LAB36:
LAB33:    t2 = (t0 + 9879400);
    t13 = *((int *)t2);
    t3 = (t0 + 9879404);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB34;

LAB38:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879400);
    *((int *)t4) = t13;
    goto LAB31;

LAB35:    xsi_set_current_line(547, ng10);
    t15 = (t0 + 7776);
    t16 = (t0 + 6280U);
    t17 = (t0 + 6664U);
    std_textio_readline(STD_TEXTIO, t15, t16, t17);
    xsi_set_current_line(548, ng10);
    t2 = (t0 + 7776);
    t3 = (t0 + 6664U);
    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(549, ng10);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t0, t9, 0, 255);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t2 = (t0 + 9879392);
    t18 = *((int *)t2);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t5 = (t0 + 9879400);
    t22 = *((int *)t5);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t6 = (t4 + t27);
    *((int *)t6) = t12;
    goto LAB36;

LAB40:    xsi_set_current_line(559, ng10);
    if ((unsigned char)0 == 0)
        goto LAB43;

LAB44:    goto LAB41;

LAB43:    t2 = (t0 + 9879428);
    xsi_report(t2, 22U, (unsigned char)3);
    goto LAB44;

LAB46:    xsi_set_current_line(563, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879458);
    *((int *)t4) = 0;
    t5 = (t0 + 9879462);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB49:    if (t13 <= t14)
        goto LAB50;

LAB52:
LAB47:    t2 = (t0 + 9879450);
    t10 = *((int *)t2);
    t3 = (t0 + 9879454);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB48;

LAB57:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879450);
    *((int *)t4) = t10;
    goto LAB45;

LAB50:    xsi_set_current_line(564, ng10);
    t6 = (t0 + 6384U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB53;

LAB55:    xsi_set_current_line(569, ng10);
    t2 = (t0 + 4648U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879450);
    t9 = *((int *)t2);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t4 = (t0 + 9879458);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t5 = (t3 + t27);
    *((int *)t5) = 0;

LAB54:
LAB51:    t2 = (t0 + 9879458);
    t13 = *((int *)t2);
    t3 = (t0 + 9879462);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB52;

LAB56:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879458);
    *((int *)t4) = t13;
    goto LAB49;

LAB53:    xsi_set_current_line(565, ng10);
    t15 = (t0 + 7776);
    t16 = (t0 + 6384U);
    t17 = (t0 + 6664U);
    std_textio_readline(STD_TEXTIO, t15, t16, t17);
    xsi_set_current_line(566, ng10);
    t2 = (t0 + 7776);
    t3 = (t0 + 6664U);
    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(567, ng10);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = work_a_1394242000_3212880686_sub_2489298628_3057020925(t0, t9, 0, 255);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t0 + 9879450);
    t18 = *((int *)t2);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t21 = (t20 * 640U);
    t5 = (t0 + 9879458);
    t22 = *((int *)t5);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t6 = (t4 + t27);
    *((int *)t6) = t12;
    goto LAB54;

LAB59:    xsi_set_current_line(576, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879474);
    *((int *)t4) = 0;
    t5 = (t0 + 9879478);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB62:    if (t13 <= t14)
        goto LAB63;

LAB65:
LAB60:    t2 = (t0 + 9879466);
    t10 = *((int *)t2);
    t3 = (t0 + 9879470);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB61;

LAB67:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879466);
    *((int *)t4) = t10;
    goto LAB58;

LAB63:    xsi_set_current_line(577, ng10);
    t6 = (t0 + 5008U);
    t15 = *((char **)t6);
    t6 = (t0 + 9879466);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t21 = (t20 * 640U);
    t16 = (t0 + 9879474);
    t22 = *((int *)t16);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t17 = (t15 + t27);
    *((int *)t17) = 0;

LAB64:    t2 = (t0 + 9879474);
    t13 = *((int *)t2);
    t3 = (t0 + 9879478);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB65;

LAB66:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879474);
    *((int *)t4) = t13;
    goto LAB62;

LAB69:    xsi_set_current_line(582, ng10);
    t5 = (t0 + 5128U);
    t6 = *((char **)t5);
    t5 = (t0 + 9879482);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t5));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 48U);
    t15 = (t6 + t25);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_set_current_line(583, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 44U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(584, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 24U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(585, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 28U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(586, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 0U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(587, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 4U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(588, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 8U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(589, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 12U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(590, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 16U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(591, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 20U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(592, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 32U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(593, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 36U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(594, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 40U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(595, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 52U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;
    xsi_set_current_line(596, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879482);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 56U);
    t4 = (t3 + t25);
    *((int *)t4) = 0;

LAB70:    t2 = (t0 + 9879482);
    t11 = *((int *)t2);
    t3 = (t0 + 9879486);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB71;

LAB72:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 9879482);
    *((int *)t4) = t11;
    goto LAB68;

LAB74:    xsi_set_current_line(600, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879498);
    *((int *)t4) = 0;
    t5 = (t0 + 9879502);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB77:    if (t13 <= t14)
        goto LAB78;

LAB80:
LAB75:    t2 = (t0 + 9879490);
    t10 = *((int *)t2);
    t3 = (t0 + 9879494);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB76;

LAB122:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879490);
    *((int *)t4) = t10;
    goto LAB73;

LAB78:    xsi_set_current_line(601, ng10);
    t6 = (t0 + 5008U);
    t15 = *((char **)t6);
    t6 = (t0 + 9879490);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t21 = (t20 * 640U);
    t16 = (t0 + 9879498);
    t22 = *((int *)t16);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t17 = (t15 + t27);
    t29 = *((int *)t17);
    t30 = (t29 == 0);
    if (t30 == 1)
        goto LAB90;

LAB91:    t28 = (unsigned char)0;

LAB92:    if (t28 == 1)
        goto LAB87;

LAB88:    t8 = (unsigned char)0;

LAB89:    if (t8 == 1)
        goto LAB84;

LAB85:    t7 = (unsigned char)0;

LAB86:    if (t7 != 0)
        goto LAB81;

LAB83:
LAB82:
LAB79:    t2 = (t0 + 9879498);
    t13 = *((int *)t2);
    t3 = (t0 + 9879502);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB80;

LAB121:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879498);
    *((int *)t4) = t13;
    goto LAB77;

LAB81:    xsi_set_current_line(602, ng10);
    t63 = (t0 + 4408U);
    t70 = *((char **)t63);
    t63 = (t0 + 4648U);
    t71 = *((char **)t63);
    t63 = (t0 + 9879498);
    t72 = (t0 + 9879490);
    t73 = (t0 + 5368U);
    t74 = *((char **)t73);
    t75 = *((int *)t74);
    t73 = work_a_1394242000_3212880686_sub_3360517996_3579431146(t0, t70, t71, *((int *)t63), *((int *)t72), t75);
    t76 = (t0 + 5128U);
    t77 = *((char **)t76);
    t76 = (t0 + 5248U);
    t78 = *((char **)t76);
    t79 = *((int *)t78);
    t80 = (t79 - 0);
    t81 = (t80 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t79);
    t82 = (64U * t81);
    t83 = (0 + t82);
    t76 = (t77 + t83);
    memcpy(t76, t73, 64U);
    xsi_set_current_line(604, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 5248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t9);
    t21 = (64U * t20);
    t24 = (0 + t21);
    t2 = (t3 + t24);
    t7 = work_a_1394242000_3212880686_sub_1665737120_3579431146(t0, t2);
    if (t7 != 0)
        goto LAB93;

LAB95:    xsi_set_current_line(609, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 5248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (t9 - 0);
    t20 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t9);
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 12U);
    t2 = (t3 + t25);
    t18 = *((int *)t2);
    t5 = (t0 + 5128U);
    t6 = *((char **)t5);
    t5 = (t0 + 5248U);
    t15 = *((char **)t5);
    t19 = *((int *)t15);
    t22 = (t19 - 0);
    t26 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t19);
    t27 = (64U * t26);
    t35 = (0 + t27);
    t36 = (t35 + 8U);
    t5 = (t6 + t36);
    t23 = *((int *)t5);
    t16 = (t0 + 9879506);
    *((int *)t16) = t23;
    t17 = (t0 + 9879510);
    *((int *)t17) = t18;
    t29 = t23;
    t33 = t18;

LAB96:    if (t29 <= t33)
        goto LAB97;

LAB99:
LAB94:    goto LAB82;

LAB84:    t63 = (t0 + 5248U);
    t64 = *((char **)t63);
    t65 = *((int *)t64);
    t63 = (t0 + 1408U);
    t66 = *((char **)t63);
    t67 = *((int *)t66);
    t68 = (t67 - 1);
    t69 = (t65 < t68);
    t7 = t69;
    goto LAB86;

LAB87:    t47 = (t0 + 4408U);
    t48 = *((char **)t47);
    t47 = (t0 + 9879490);
    t49 = *((int *)t47);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t47));
    t52 = (t51 * 640U);
    t53 = (t0 + 9879498);
    t54 = *((int *)t53);
    t55 = (t54 - 0);
    t56 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t53));
    t57 = (t52 + t56);
    t58 = (4U * t57);
    t59 = (0 + t58);
    t60 = (t48 + t59);
    t61 = *((int *)t60);
    t62 = work_a_1394242000_3212880686_sub_1403480711_3057020925(t0, t61);
    t8 = t62;
    goto LAB89;

LAB90:    t31 = (t0 + 4648U);
    t32 = *((char **)t31);
    t31 = (t0 + 9879490);
    t33 = *((int *)t31);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t31));
    t36 = (t35 * 640U);
    t37 = (t0 + 9879498);
    t38 = *((int *)t37);
    t39 = (t38 - 0);
    t40 = (t39 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t37));
    t41 = (t36 + t40);
    t42 = (4U * t41);
    t43 = (0 + t42);
    t44 = (t32 + t43);
    t45 = *((int *)t44);
    t46 = work_a_1394242000_3212880686_sub_3897511466_3057020925(t0, t45);
    t28 = t46;
    goto LAB92;

LAB93:    xsi_set_current_line(605, ng10);
    t5 = (t0 + 5128U);
    t6 = *((char **)t5);
    t5 = (t0 + 5248U);
    t15 = *((char **)t5);
    t18 = *((int *)t15);
    t19 = (t18 - 0);
    t25 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t18);
    t26 = (64U * t25);
    t27 = (0 + t26);
    t5 = (t6 + t27);
    t22 = work_a_1394242000_3212880686_sub_2852017544_3579431146(t0, t5);
    t16 = (t0 + 5128U);
    t17 = *((char **)t16);
    t16 = (t0 + 5248U);
    t31 = *((char **)t16);
    t23 = *((int *)t31);
    t29 = (t23 - 0);
    t35 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t23);
    t36 = (64U * t35);
    t40 = (0 + t36);
    t41 = (t40 + 44U);
    t16 = (t17 + t41);
    *((int *)t16) = t22;
    xsi_set_current_line(606, ng10);
    t2 = (t0 + 5248U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = (t9 + 1);
    t2 = (t0 + 5248U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t12;
    xsi_set_current_line(607, ng10);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t12 = (t9 + 1);
    t2 = (t0 + 5368U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t12;
    goto LAB94;

LAB97:    xsi_set_current_line(610, ng10);
    t31 = (t0 + 5128U);
    t32 = *((char **)t31);
    t31 = (t0 + 5248U);
    t37 = *((char **)t31);
    t34 = *((int *)t37);
    t38 = (t34 - 0);
    t40 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t34);
    t41 = (64U * t40);
    t42 = (0 + t41);
    t43 = (t42 + 4U);
    t31 = (t32 + t43);
    t39 = *((int *)t31);
    t44 = (t0 + 5128U);
    t47 = *((char **)t44);
    t44 = (t0 + 5248U);
    t48 = *((char **)t44);
    t45 = *((int *)t48);
    t49 = (t45 - 0);
    t51 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t45);
    t52 = (64U * t51);
    t56 = (0 + t52);
    t57 = (t56 + 0U);
    t44 = (t47 + t57);
    t50 = *((int *)t44);
    t53 = (t0 + 9879514);
    *((int *)t53) = t50;
    t60 = (t0 + 9879518);
    *((int *)t60) = t39;
    t54 = t50;
    t55 = t39;

LAB100:    if (t54 <= t55)
        goto LAB101;

LAB103:
LAB98:    t2 = (t0 + 9879506);
    t29 = *((int *)t2);
    t3 = (t0 + 9879510);
    t33 = *((int *)t3);
    if (t29 == t33)
        goto LAB99;

LAB120:    t9 = (t29 + 1);
    t29 = t9;
    t4 = (t0 + 9879506);
    *((int *)t4) = t29;
    goto LAB96;

LAB101:    xsi_set_current_line(611, ng10);
    t63 = (t0 + 9879514);
    t61 = *((int *)t63);
    t30 = (t61 >= 0);
    if (t30 == 1)
        goto LAB113;

LAB114:    t28 = (unsigned char)0;

LAB115:    if (t28 == 1)
        goto LAB110;

LAB111:    t8 = (unsigned char)0;

LAB112:    if (t8 == 1)
        goto LAB107;

LAB108:    t7 = (unsigned char)0;

LAB109:    if (t7 != 0)
        goto LAB104;

LAB106:
LAB105:
LAB102:    t2 = (t0 + 9879514);
    t54 = *((int *)t2);
    t3 = (t0 + 9879518);
    t55 = *((int *)t3);
    if (t54 == t55)
        goto LAB103;

LAB119:    t9 = (t54 + 1);
    t54 = t9;
    t4 = (t0 + 9879514);
    *((int *)t4) = t54;
    goto LAB100;

LAB104:    xsi_set_current_line(612, ng10);
    t71 = (t0 + 5008U);
    t72 = *((char **)t71);
    t71 = (t0 + 9879506);
    t75 = *((int *)t71);
    t79 = (t75 - 0);
    t58 = (t79 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t71));
    t59 = (t58 * 640U);
    t73 = (t0 + 9879514);
    t80 = *((int *)t73);
    t84 = (t80 - 0);
    t81 = (t84 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t73));
    t82 = (t59 + t81);
    t83 = (4U * t82);
    t85 = (0 + t83);
    t74 = (t72 + t85);
    t86 = *((int *)t74);
    t76 = (t0 + 5368U);
    t77 = *((char **)t76);
    t87 = *((int *)t77);
    t88 = (t86 == t87);
    if (t88 != 0)
        goto LAB116;

LAB118:
LAB117:    goto LAB105;

LAB107:    t70 = (t0 + 9879506);
    t68 = *((int *)t70);
    t69 = (t68 < 640);
    t7 = t69;
    goto LAB109;

LAB110:    t66 = (t0 + 9879506);
    t67 = *((int *)t66);
    t62 = (t67 >= 0);
    t8 = t62;
    goto LAB112;

LAB113:    t64 = (t0 + 9879514);
    t65 = *((int *)t64);
    t46 = (t65 < 640);
    t28 = t46;
    goto LAB115;

LAB116:    xsi_set_current_line(613, ng10);
    t76 = (t0 + 5008U);
    t78 = *((char **)t76);
    t76 = (t0 + 9879506);
    t89 = *((int *)t76);
    t90 = (t89 - 0);
    t91 = (t90 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t76));
    t92 = (t91 * 640U);
    t93 = (t0 + 9879514);
    t94 = *((int *)t93);
    t95 = (t94 - 0);
    t96 = (t95 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t93));
    t97 = (t92 + t96);
    t98 = (4U * t97);
    t99 = (0 + t98);
    t100 = (t78 + t99);
    *((int *)t100) = 0;
    goto LAB117;

LAB124:    xsi_set_current_line(624, ng10);
    t5 = (t0 + 5128U);
    t6 = *((char **)t5);
    t5 = (t0 + 9879522);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t5));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 48U);
    t15 = (t6 + t25);
    t7 = *((unsigned char *)t15);
    if (t7 != 0)
        goto LAB127;

LAB129:
LAB128:
LAB125:    t2 = (t0 + 9879522);
    t11 = *((int *)t2);
    t3 = (t0 + 9879526);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB126;

LAB145:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 9879522);
    *((int *)t4) = t11;
    goto LAB123;

LAB127:    xsi_set_current_line(625, ng10);
    t16 = (t0 + 5248U);
    t17 = *((char **)t16);
    t18 = *((int *)t17);
    t19 = (t18 - 1);
    t16 = (t0 + 9879522);
    t22 = *((int *)t16);
    t23 = (t22 + 1);
    t31 = (t0 + 9879530);
    *((int *)t31) = t23;
    t32 = (t0 + 9879534);
    *((int *)t32) = t19;
    t29 = t23;
    t33 = t19;

LAB130:    if (t29 <= t33)
        goto LAB131;

LAB133:    goto LAB128;

LAB131:    xsi_set_current_line(626, ng10);
    t37 = (t0 + 5128U);
    t44 = *((char **)t37);
    t37 = (t0 + 9879530);
    t34 = *((int *)t37);
    t38 = (t34 - 0);
    t26 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t37));
    t27 = (64U * t26);
    t35 = (0 + t27);
    t36 = (t35 + 48U);
    t47 = (t44 + t36);
    t8 = *((unsigned char *)t47);
    if (t8 != 0)
        goto LAB134;

LAB136:
LAB135:
LAB132:    t2 = (t0 + 9879530);
    t29 = *((int *)t2);
    t3 = (t0 + 9879534);
    t33 = *((int *)t3);
    if (t29 == t33)
        goto LAB133;

LAB144:    t9 = (t29 + 1);
    t29 = t9;
    t4 = (t0 + 9879530);
    *((int *)t4) = t29;
    goto LAB130;

LAB134:    xsi_set_current_line(627, ng10);
    t48 = (t0 + 5128U);
    t53 = *((char **)t48);
    t48 = (t0 + 9879522);
    t39 = *((int *)t48);
    t45 = (t39 - 0);
    t40 = (t45 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t48));
    t41 = (64U * t40);
    t42 = (0 + t41);
    t60 = (t53 + t42);
    t63 = (t0 + 5128U);
    t64 = *((char **)t63);
    t63 = (t0 + 9879530);
    t49 = *((int *)t63);
    t50 = (t49 - 0);
    t43 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t63));
    t51 = (64U * t43);
    t52 = (0 + t51);
    t66 = (t64 + t52);
    t28 = work_a_1394242000_3212880686_sub_3318353349_3579431146(t0, t60, t66, 30);
    if (t28 != 0)
        goto LAB137;

LAB139:
LAB138:    goto LAB135;

LAB137:    xsi_set_current_line(628, ng10);
    t70 = (t0 + 5128U);
    t71 = *((char **)t70);
    t70 = (t0 + 9879522);
    t54 = *((int *)t70);
    t55 = (t54 - 0);
    t56 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t70));
    t57 = (64U * t56);
    t58 = (0 + t57);
    t59 = (t58 + 44U);
    t72 = (t71 + t59);
    t61 = *((int *)t72);
    t73 = (t0 + 5128U);
    t74 = *((char **)t73);
    t73 = (t0 + 9879530);
    t65 = *((int *)t73);
    t67 = (t65 - 0);
    t81 = (t67 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t73));
    t82 = (64U * t81);
    t83 = (0 + t82);
    t85 = (t83 + 44U);
    t76 = (t74 + t85);
    t68 = *((int *)t76);
    t30 = (t61 >= t68);
    if (t30 != 0)
        goto LAB140;

LAB142:    xsi_set_current_line(631, ng10);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 9879522);
    t9 = *((int *)t2);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t2));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 48U);
    t4 = (t3 + t25);
    *((unsigned char *)t4) = (unsigned char)0;
    xsi_set_current_line(632, ng10);
    goto LAB133;

LAB140:    xsi_set_current_line(629, ng10);
    t77 = (t0 + 5128U);
    t78 = *((char **)t77);
    t77 = (t0 + 9879530);
    t75 = *((int *)t77);
    t79 = (t75 - 0);
    t91 = (t79 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t77));
    t92 = (64U * t91);
    t96 = (0 + t92);
    t97 = (t96 + 48U);
    t93 = (t78 + t97);
    *((unsigned char *)t93) = (unsigned char)0;

LAB141:    goto LAB138;

LAB143:    goto LAB141;

LAB147:    xsi_set_current_line(644, ng10);
    t5 = (t0 + 5128U);
    t6 = *((char **)t5);
    t5 = (t0 + 9879538);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t20 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t5));
    t21 = (64U * t20);
    t24 = (0 + t21);
    t25 = (t24 + 48U);
    t15 = (t6 + t25);
    t28 = *((unsigned char *)t15);
    if (t28 == 1)
        goto LAB156;

LAB157:    t8 = (unsigned char)0;

LAB158:    if (t8 == 1)
        goto LAB153;

LAB154:    t7 = (unsigned char)0;

LAB155:    if (t7 != 0)
        goto LAB150;

LAB152:
LAB151:
LAB148:    t2 = (t0 + 9879538);
    t11 = *((int *)t2);
    t3 = (t0 + 9879542);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB149;

LAB159:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 9879538);
    *((int *)t4) = t11;
    goto LAB146;

LAB150:    xsi_set_current_line(645, ng10);
    t48 = (t0 + 5128U);
    t60 = *((char **)t48);
    t48 = (t0 + 9879538);
    t39 = *((int *)t48);
    t45 = (t39 - 0);
    t51 = (t45 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t48));
    t52 = (64U * t51);
    t56 = (0 + t52);
    t57 = (t56 + 44U);
    t63 = (t60 + t57);
    t49 = *((int *)t63);
    t64 = (t0 + 5608U);
    t66 = *((char **)t64);
    t64 = (t66 + 0);
    *((int *)t64) = t49;
    xsi_set_current_line(646, ng10);
    t2 = (t0 + 9879538);
    t3 = (t0 + 5488U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = *((int *)t2);
    goto LAB151;

LAB153:    t32 = (t0 + 5128U);
    t44 = *((char **)t32);
    t32 = (t0 + 9879538);
    t29 = *((int *)t32);
    t33 = (t29 - 0);
    t40 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t32));
    t41 = (64U * t40);
    t42 = (0 + t41);
    t43 = (t42 + 44U);
    t47 = (t44 + t43);
    t34 = *((int *)t47);
    t48 = (t0 + 3928U);
    t53 = *((char **)t48);
    t38 = *((int *)t53);
    t46 = (t34 >= t38);
    t7 = t46;
    goto LAB155;

LAB156:    t16 = (t0 + 5128U);
    t17 = *((char **)t16);
    t16 = (t0 + 9879538);
    t18 = *((int *)t16);
    t19 = (t18 - 0);
    t26 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, *((int *)t16));
    t27 = (64U * t26);
    t35 = (0 + t27);
    t36 = (t35 + 44U);
    t31 = (t17 + t36);
    t22 = *((int *)t31);
    t32 = (t0 + 5608U);
    t37 = *((char **)t32);
    t23 = *((int *)t37);
    t30 = (t22 > t23);
    t8 = t30;
    goto LAB158;

LAB161:    xsi_set_current_line(651, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879554);
    *((int *)t4) = 0;
    t5 = (t0 + 9879558);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB164:    if (t13 <= t14)
        goto LAB165;

LAB167:
LAB162:    t2 = (t0 + 9879546);
    t10 = *((int *)t2);
    t3 = (t0 + 9879550);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB163;

LAB169:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879546);
    *((int *)t4) = t10;
    goto LAB160;

LAB165:    xsi_set_current_line(652, ng10);
    t6 = (t0 + 4528U);
    t15 = *((char **)t6);
    t6 = (t0 + 9879546);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t21 = (t20 * 640U);
    t16 = (t0 + 9879554);
    t22 = *((int *)t16);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t17 = (t15 + t27);
    t29 = *((int *)t17);
    t31 = (t0 + 4888U);
    t32 = *((char **)t31);
    t31 = (t0 + 9879546);
    t33 = *((int *)t31);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t31));
    t36 = (t35 * 640U);
    t37 = (t0 + 9879554);
    t38 = *((int *)t37);
    t39 = (t38 - 0);
    t40 = (t39 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t37));
    t41 = (t36 + t40);
    t42 = (4U * t41);
    t43 = (0 + t42);
    t44 = (t32 + t43);
    *((int *)t44) = t29;

LAB166:    t2 = (t0 + 9879554);
    t13 = *((int *)t2);
    t3 = (t0 + 9879558);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB167;

LAB168:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879554);
    *((int *)t4) = t13;
    goto LAB164;

LAB170:    xsi_set_current_line(657, ng10);
    t2 = (t0 + 4408U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t5 = *((char **)t2);
    t2 = (t0 + 5128U);
    t6 = *((char **)t2);
    t2 = (t0 + 5488U);
    t15 = *((char **)t2);
    t10 = *((int *)t15);
    t11 = (t10 - 0);
    t20 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t10);
    t21 = (64U * t20);
    t24 = (0 + t21);
    t2 = (t6 + t24);
    t16 = work_a_1394242000_3212880686_sub_3042404294_3579431146(t0, t4, t5, t2);
    t17 = (t0 + 5128U);
    t31 = *((char **)t17);
    t17 = (t0 + 5488U);
    t32 = *((char **)t17);
    t12 = *((int *)t32);
    t13 = (t12 - 0);
    t25 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t12);
    t26 = (64U * t25);
    t27 = (0 + t26);
    t17 = (t31 + t27);
    memcpy(t17, t16, 64U);
    xsi_set_current_line(658, ng10);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t0 + 5128U);
    t5 = *((char **)t2);
    t2 = (t0 + 5488U);
    t6 = *((char **)t2);
    t9 = *((int *)t6);
    t10 = (t9 - 0);
    t20 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 499, 1, t9);
    t21 = (64U * t20);
    t24 = (0 + t21);
    t2 = (t5 + t24);
    t15 = work_a_1394242000_3212880686_sub_1534730547_3579431146(t0, t3, t4, t2, 640, 640);
    t16 = (t0 + 5728U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    memcpy(t16, t15, 64U);
    xsi_set_current_line(660, ng10);
    t2 = (t0 + 5728U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t9 = *((int *)t2);
    t4 = (t0 + 5728U);
    t5 = *((char **)t4);
    t21 = (0 + 0U);
    t4 = (t5 + t21);
    t10 = *((int *)t4);
    t6 = (t0 + 9879562);
    *((int *)t6) = t10;
    t15 = (t0 + 9879566);
    *((int *)t15) = t9;
    t11 = t10;
    t12 = t9;

LAB173:    if (t11 <= t12)
        goto LAB174;

LAB176:    xsi_set_current_line(671, ng10);
    t2 = (t0 + 5728U);
    t3 = *((char **)t2);
    t20 = (0 + 12U);
    t2 = (t3 + t20);
    t9 = *((int *)t2);
    t4 = (t0 + 5728U);
    t5 = *((char **)t4);
    t21 = (0 + 8U);
    t4 = (t5 + t21);
    t10 = *((int *)t4);
    t6 = (t0 + 9879570);
    *((int *)t6) = t10;
    t15 = (t0 + 9879574);
    *((int *)t15) = t9;
    t11 = t10;
    t12 = t9;

LAB196:    if (t11 <= t12)
        goto LAB197;

LAB199:    goto LAB171;

LAB174:    xsi_set_current_line(661, ng10);
    t16 = (t0 + 9879562);
    t13 = *((int *)t16);
    t8 = (t13 >= 0);
    if (t8 == 1)
        goto LAB180;

LAB181:    t7 = (unsigned char)0;

LAB182:    if (t7 != 0)
        goto LAB177;

LAB179:
LAB178:
LAB175:    t2 = (t0 + 9879562);
    t11 = *((int *)t2);
    t3 = (t0 + 9879566);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB176;

LAB195:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 9879562);
    *((int *)t4) = t11;
    goto LAB173;

LAB177:    xsi_set_current_line(662, ng10);
    t31 = (t0 + 5728U);
    t32 = *((char **)t31);
    t24 = (0 + 8U);
    t31 = (t32 + t24);
    t18 = *((int *)t31);
    t46 = (t18 >= 0);
    if (t46 == 1)
        goto LAB186;

LAB187:    t30 = (unsigned char)0;

LAB188:    if (t30 != 0)
        goto LAB183;

LAB185:
LAB184:    xsi_set_current_line(665, ng10);
    t2 = (t0 + 5728U);
    t3 = *((char **)t2);
    t20 = (0 + 12U);
    t2 = (t3 + t20);
    t9 = *((int *)t2);
    t8 = (t9 >= 0);
    if (t8 == 1)
        goto LAB192;

LAB193:    t7 = (unsigned char)0;

LAB194:    if (t7 != 0)
        goto LAB189;

LAB191:
LAB190:    goto LAB178;

LAB180:    t17 = (t0 + 9879562);
    t14 = *((int *)t17);
    t28 = (t14 < 640);
    t7 = t28;
    goto LAB182;

LAB183:    xsi_set_current_line(663, ng10);
    t47 = (t0 + 4888U);
    t48 = *((char **)t47);
    t47 = (t0 + 5728U);
    t53 = *((char **)t47);
    t26 = (0 + 8U);
    t47 = (t53 + t26);
    t22 = *((int *)t47);
    t23 = (t22 - 0);
    t27 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t22);
    t35 = (t27 * 640U);
    t60 = (t0 + 9879562);
    t29 = *((int *)t60);
    t33 = (t29 - 0);
    t36 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t60));
    t40 = (t35 + t36);
    t41 = (4U * t40);
    t42 = (0 + t41);
    t63 = (t48 + t42);
    *((int *)t63) = 255;
    goto LAB184;

LAB186:    t37 = (t0 + 5728U);
    t44 = *((char **)t37);
    t25 = (0 + 8U);
    t37 = (t44 + t25);
    t19 = *((int *)t37);
    t62 = (t19 < 640);
    t30 = t62;
    goto LAB188;

LAB189:    xsi_set_current_line(666, ng10);
    t6 = (t0 + 4888U);
    t15 = *((char **)t6);
    t6 = (t0 + 5728U);
    t16 = *((char **)t6);
    t24 = (0 + 12U);
    t6 = (t16 + t24);
    t13 = *((int *)t6);
    t14 = (t13 - 0);
    t25 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t13);
    t26 = (t25 * 640U);
    t17 = (t0 + 9879562);
    t18 = *((int *)t17);
    t19 = (t18 - 0);
    t27 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t17));
    t35 = (t26 + t27);
    t36 = (4U * t35);
    t40 = (0 + t36);
    t31 = (t15 + t40);
    *((int *)t31) = 255;
    goto LAB190;

LAB192:    t4 = (t0 + 5728U);
    t5 = *((char **)t4);
    t21 = (0 + 12U);
    t4 = (t5 + t21);
    t10 = *((int *)t4);
    t28 = (t10 < 640);
    t7 = t28;
    goto LAB194;

LAB197:    xsi_set_current_line(672, ng10);
    t16 = (t0 + 9879570);
    t13 = *((int *)t16);
    t8 = (t13 >= 0);
    if (t8 == 1)
        goto LAB203;

LAB204:    t7 = (unsigned char)0;

LAB205:    if (t7 != 0)
        goto LAB200;

LAB202:
LAB201:
LAB198:    t2 = (t0 + 9879570);
    t11 = *((int *)t2);
    t3 = (t0 + 9879574);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB199;

LAB218:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 9879570);
    *((int *)t4) = t11;
    goto LAB196;

LAB200:    xsi_set_current_line(673, ng10);
    t31 = (t0 + 5728U);
    t32 = *((char **)t31);
    t24 = (0 + 0U);
    t31 = (t32 + t24);
    t18 = *((int *)t31);
    t46 = (t18 >= 0);
    if (t46 == 1)
        goto LAB209;

LAB210:    t30 = (unsigned char)0;

LAB211:    if (t30 != 0)
        goto LAB206;

LAB208:
LAB207:    xsi_set_current_line(676, ng10);
    t2 = (t0 + 5728U);
    t3 = *((char **)t2);
    t20 = (0 + 4U);
    t2 = (t3 + t20);
    t9 = *((int *)t2);
    t8 = (t9 >= 0);
    if (t8 == 1)
        goto LAB215;

LAB216:    t7 = (unsigned char)0;

LAB217:    if (t7 != 0)
        goto LAB212;

LAB214:
LAB213:    goto LAB201;

LAB203:    t17 = (t0 + 9879570);
    t14 = *((int *)t17);
    t28 = (t14 < 640);
    t7 = t28;
    goto LAB205;

LAB206:    xsi_set_current_line(674, ng10);
    t47 = (t0 + 4888U);
    t48 = *((char **)t47);
    t47 = (t0 + 9879570);
    t22 = *((int *)t47);
    t23 = (t22 - 0);
    t26 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t47));
    t27 = (t26 * 640U);
    t53 = (t0 + 5728U);
    t60 = *((char **)t53);
    t35 = (0 + 0U);
    t53 = (t60 + t35);
    t29 = *((int *)t53);
    t33 = (t29 - 0);
    t36 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t29);
    t40 = (t27 + t36);
    t41 = (4U * t40);
    t42 = (0 + t41);
    t63 = (t48 + t42);
    *((int *)t63) = 255;
    goto LAB207;

LAB209:    t37 = (t0 + 5728U);
    t44 = *((char **)t37);
    t25 = (0 + 0U);
    t37 = (t44 + t25);
    t19 = *((int *)t37);
    t62 = (t19 < 640);
    t30 = t62;
    goto LAB211;

LAB212:    xsi_set_current_line(677, ng10);
    t6 = (t0 + 4888U);
    t15 = *((char **)t6);
    t6 = (t0 + 9879570);
    t13 = *((int *)t6);
    t14 = (t13 - 0);
    t24 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t25 = (t24 * 640U);
    t16 = (t0 + 5728U);
    t17 = *((char **)t16);
    t26 = (0 + 4U);
    t16 = (t17 + t26);
    t18 = *((int *)t16);
    t19 = (t18 - 0);
    t27 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t18);
    t35 = (t25 + t27);
    t36 = (4U * t35);
    t40 = (0 + t36);
    t31 = (t15 + t40);
    *((int *)t31) = 255;
    goto LAB213;

LAB215:    t4 = (t0 + 5728U);
    t5 = *((char **)t4);
    t21 = (0 + 4U);
    t4 = (t5 + t21);
    t10 = *((int *)t4);
    t28 = (t10 < 640);
    t7 = t28;
    goto LAB217;

LAB219:    xsi_set_current_line(685, ng10);
    if ((unsigned char)0 == 0)
        goto LAB222;

LAB223:    goto LAB220;

LAB222:    t2 = (t0 + 9879621);
    xsi_report(t2, 25U, (unsigned char)3);
    goto LAB223;

LAB225:    xsi_set_current_line(689, ng10);
    t12 = (640 - 1);
    t4 = (t0 + 9879654);
    *((int *)t4) = 0;
    t5 = (t0 + 9879658);
    *((int *)t5) = t12;
    t13 = 0;
    t14 = t12;

LAB228:    if (t13 <= t14)
        goto LAB229;

LAB231:
LAB226:    t2 = (t0 + 9879646);
    t10 = *((int *)t2);
    t3 = (t0 + 9879650);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB227;

LAB233:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 9879646);
    *((int *)t4) = t10;
    goto LAB224;

LAB229:    xsi_set_current_line(690, ng10);
    t6 = (t0 + 7776);
    t15 = (t0 + 6736U);
    t16 = (t0 + 4888U);
    t17 = *((char **)t16);
    t16 = (t0 + 9879646);
    t18 = *((int *)t16);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t21 = (t20 * 640U);
    t31 = (t0 + 9879654);
    t22 = *((int *)t31);
    t23 = (t22 - 0);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t31));
    t25 = (t21 + t24);
    t26 = (4U * t25);
    t27 = (0 + t26);
    t32 = (t17 + t27);
    t29 = *((int *)t32);
    std_textio_write5(STD_TEXTIO, t6, t15, t29, (unsigned char)0, 0);
    xsi_set_current_line(691, ng10);
    t2 = (t0 + 7776);
    t3 = (t0 + 6488U);
    t4 = (t0 + 6736U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB230:    t2 = (t0 + 9879654);
    t13 = *((int *)t2);
    t3 = (t0 + 9879658);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB231;

LAB232:    t9 = (t13 + 1);
    t13 = t9;
    t4 = (t0 + 9879654);
    *((int *)t4) = t13;
    goto LAB228;

LAB234:    t2 = (t0 + 9879662);
    xsi_report(t2, 46U, (unsigned char)0);
    goto LAB235;

LAB236:    goto LAB2;

LAB237:    goto LAB236;

LAB239:    goto LAB237;

}


extern void work_a_1394242000_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1394242000_3212880686_p_0};
	static char *se[] = {(void *)work_a_1394242000_3212880686_sub_2489298628_3057020925,(void *)work_a_1394242000_3212880686_sub_3202332950_3057020925,(void *)work_a_1394242000_3212880686_sub_3202609556_3057020925,(void *)work_a_1394242000_3212880686_sub_2812277502_3057020925,(void *)work_a_1394242000_3212880686_sub_2780842967_3057020925,(void *)work_a_1394242000_3212880686_sub_1403480711_3057020925,(void *)work_a_1394242000_3212880686_sub_3897511466_3057020925,(void *)work_a_1394242000_3212880686_sub_2553881071_3579431146,(void *)work_a_1394242000_3212880686_sub_3042404294_3579431146,(void *)work_a_1394242000_3212880686_sub_1534730547_3579431146,(void *)work_a_1394242000_3212880686_sub_3318353349_3579431146,(void *)work_a_1394242000_3212880686_sub_3360517996_3579431146,(void *)work_a_1394242000_3212880686_sub_2852017544_3579431146,(void *)work_a_1394242000_3212880686_sub_1665737120_3579431146};
	xsi_register_didat("work_a_1394242000_3212880686", "isim/license_plate_detector_isim_beh.exe.sim/work/a_1394242000_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
