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
extern char *STD_STANDARD;
static const char *ng3 = "E:/project/Ise/Licens_Plate_Recognition/clahe-1/clahe.vhd";
extern char *STD_TEXTIO;



int work_a_2655995831_3212880686_sub_3202332950_3057020925(char *t1, int t2, int t3)
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

int work_a_2655995831_3212880686_sub_3202609556_3057020925(char *t1, int t2, int t3)
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

int work_a_2655995831_3212880686_sub_3986963645_3579431146(char *t1, int t2, int t3)
{
    char t4[1448];
    char t5[16];
    char t9[16];
    char t16[1024];
    char t23[8];
    char t29[8];
    char t35[8];
    char t41[8];
    char t47[8];
    char t53[8];
    char t59[8];
    char t64[16];
    char t71[1024];
    char t78[8];
    char t84[8];
    char t90[8];
    int t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
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
    char *t65;
    char *t66;
    int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    int t97;
    int t98;
    char *t99;
    int t100;
    int t101;
    char *t102;
    int t103;
    int t104;
    int t105;
    int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned char t137;

LAB0:    t6 = xsi_get_transient_memory(1024U);
    memset(t6, 0, 1024U);
    t7 = t6;
    t8 = (1024U / 4U);
    xsi_mem_set_int(t7, 0, t8);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 255;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (255 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t4 + 4U);
    t14 = (t1 + 4464);
    t15 = (t11 + 88U);
    *((char **)t15) = t14;
    t17 = (t11 + 56U);
    *((char **)t17) = t16;
    memcpy(t16, t6, 1024U);
    t18 = (t11 + 64U);
    *((char **)t18) = t9;
    t19 = (t11 + 80U);
    *((unsigned int *)t19) = 1024U;
    t20 = (t4 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, 0);
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t26 = (t4 + 244U);
    t27 = ((STD_STANDARD) + 384);
    t28 = (t26 + 88U);
    *((char **)t28) = t27;
    t30 = (t26 + 56U);
    *((char **)t30) = t29;
    xsi_type_set_default_value(t27, t29, 0);
    t31 = (t26 + 80U);
    *((unsigned int *)t31) = 4U;
    t32 = (t4 + 364U);
    t33 = ((STD_STANDARD) + 384);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, 0);
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t4 + 484U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t4 + 604U);
    t45 = ((STD_STANDARD) + 384);
    t46 = (t44 + 88U);
    *((char **)t46) = t45;
    t48 = (t44 + 56U);
    *((char **)t48) = t47;
    xsi_type_set_default_value(t45, t47, 0);
    t49 = (t44 + 80U);
    *((unsigned int *)t49) = 4U;
    t50 = (t4 + 724U);
    t51 = ((STD_STANDARD) + 384);
    t52 = (t50 + 88U);
    *((char **)t52) = t51;
    t54 = (t50 + 56U);
    *((char **)t54) = t53;
    *((int *)t53) = 0;
    t55 = (t50 + 80U);
    *((unsigned int *)t55) = 4U;
    t56 = (t4 + 844U);
    t57 = ((STD_STANDARD) + 384);
    t58 = (t56 + 88U);
    *((char **)t58) = t57;
    t60 = (t56 + 56U);
    *((char **)t60) = t59;
    xsi_type_set_default_value(t57, t59, 0);
    t61 = (t56 + 80U);
    *((unsigned int *)t61) = 4U;
    t62 = xsi_get_transient_memory(1024U);
    memset(t62, 0, 1024U);
    t63 = t62;
    t13 = (1024U / 4U);
    xsi_mem_set_int(t63, 0, t13);
    t65 = (t64 + 0U);
    t66 = (t65 + 0U);
    *((int *)t66) = 0;
    t66 = (t65 + 4U);
    *((int *)t66) = 255;
    t66 = (t65 + 8U);
    *((int *)t66) = 1;
    t67 = (255 - 0);
    t68 = (t67 * 1);
    t68 = (t68 + 1);
    t66 = (t65 + 12U);
    *((unsigned int *)t66) = t68;
    t66 = (t4 + 964U);
    t69 = (t1 + 4464);
    t70 = (t66 + 88U);
    *((char **)t70) = t69;
    t72 = (t66 + 56U);
    *((char **)t72) = t71;
    memcpy(t71, t62, 1024U);
    t73 = (t66 + 64U);
    *((char **)t73) = t64;
    t74 = (t66 + 80U);
    *((unsigned int *)t74) = 1024U;
    t75 = (t4 + 1084U);
    t76 = ((STD_STANDARD) + 384);
    t77 = (t75 + 88U);
    *((char **)t77) = t76;
    t79 = (t75 + 56U);
    *((char **)t79) = t78;
    *((int *)t78) = 0;
    t80 = (t75 + 80U);
    *((unsigned int *)t80) = 4U;
    t81 = (t4 + 1204U);
    t82 = ((STD_STANDARD) + 384);
    t83 = (t81 + 88U);
    *((char **)t83) = t82;
    t85 = (t81 + 56U);
    *((char **)t85) = t84;
    *((int *)t84) = 0;
    t86 = (t81 + 80U);
    *((unsigned int *)t86) = 4U;
    t87 = (t4 + 1324U);
    t88 = ((STD_STANDARD) + 384);
    t89 = (t87 + 88U);
    *((char **)t89) = t88;
    t91 = (t87 + 56U);
    *((char **)t91) = t90;
    *((int *)t90) = 0;
    t92 = (t87 + 80U);
    *((unsigned int *)t92) = 4U;
    t93 = (t5 + 4U);
    *((int *)t93) = t2;
    t94 = (t5 + 8U);
    *((int *)t94) = t3;
    t95 = (t1 + 1528U);
    t96 = *((char **)t95);
    t97 = *((int *)t96);
    t98 = (t2 / t97);
    t95 = (t1 + 1528U);
    t99 = *((char **)t95);
    t100 = *((int *)t99);
    t101 = (t98 * t100);
    t95 = (t1 + 1528U);
    t102 = *((char **)t95);
    t103 = *((int *)t102);
    t104 = (t103 / 4);
    t105 = (t101 - t104);
    t106 = work_a_2655995831_3212880686_sub_3202332950_3057020925(t1, 0, t105);
    t95 = (t20 + 56U);
    t107 = *((char **)t95);
    t95 = (t107 + 0);
    *((int *)t95) = t106;
    t6 = (t1 + 1528U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t67 = (t3 / t12);
    t6 = (t1 + 1528U);
    t10 = *((char **)t6);
    t97 = *((int *)t10);
    t98 = (t67 * t97);
    t6 = (t1 + 1528U);
    t14 = *((char **)t6);
    t100 = *((int *)t14);
    t101 = (t100 / 4);
    t103 = (t98 - t101);
    t104 = work_a_2655995831_3212880686_sub_3202332950_3057020925(t1, 0, t103);
    t6 = (t26 + 56U);
    t15 = *((char **)t6);
    t6 = (t15 + 0);
    *((int *)t6) = t104;
    t6 = (t20 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t6 = (t1 + 1528U);
    t10 = *((char **)t6);
    t67 = *((int *)t10);
    t97 = (t12 + t67);
    t6 = (t1 + 1528U);
    t14 = *((char **)t6);
    t98 = *((int *)t14);
    t100 = (t98 / 2);
    t101 = (t97 + t100);
    t103 = (t101 - 1);
    t104 = (640 - 1);
    t105 = work_a_2655995831_3212880686_sub_3202609556_3057020925(t1, t103, t104);
    t6 = (t32 + 56U);
    t15 = *((char **)t6);
    t6 = (t15 + 0);
    *((int *)t6) = t105;
    t6 = (t26 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t6 = (t1 + 1528U);
    t10 = *((char **)t6);
    t67 = *((int *)t10);
    t97 = (t12 + t67);
    t6 = (t1 + 1528U);
    t14 = *((char **)t6);
    t98 = *((int *)t14);
    t100 = (t98 / 2);
    t101 = (t97 + t100);
    t103 = (t101 - 1);
    t104 = (640 - 1);
    t105 = work_a_2655995831_3212880686_sub_3202609556_3057020925(t1, t103, t104);
    t6 = (t38 + 56U);
    t15 = *((char **)t6);
    t6 = (t15 + 0);
    *((int *)t6) = t105;
    t6 = (t38 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t6 = (t26 + 56U);
    t10 = *((char **)t6);
    t67 = *((int *)t10);
    t97 = t67;
    t98 = t12;

LAB2:    if (t97 <= t98)
        goto LAB3;

LAB5:    t6 = (t32 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t6 = (t20 + 56U);
    t10 = *((char **)t6);
    t67 = *((int *)t10);
    t97 = (t12 - t67);
    t98 = (t97 + 1);
    t6 = (t38 + 56U);
    t14 = *((char **)t6);
    t100 = *((int *)t14);
    t6 = (t26 + 56U);
    t15 = *((char **)t6);
    t101 = *((int *)t15);
    t103 = (t100 - t101);
    t104 = (t103 + 1);
    t105 = (t98 * t104);
    t6 = (t56 + 56U);
    t17 = *((char **)t6);
    t6 = (t17 + 0);
    *((int *)t6) = t105;
    t6 = (t75 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 0;
    t12 = 0;
    t67 = 255;

LAB12:    if (t12 <= t67)
        goto LAB13;

LAB15:    t6 = (t75 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t137 = (t12 > 0);
    if (t137 != 0)
        goto LAB20;

LAB22:
LAB21:    t6 = (t50 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 0;
    t6 = (t1 + 2008U);
    t7 = *((char **)t6);
    t12 = (t3 - 0);
    t8 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t13 = (t8 * 640U);
    t67 = (t2 - 0);
    t68 = (t67 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t108 = (t13 + t68);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t6 = (t7 + t110);
    t97 = *((int *)t6);
    t98 = 0;
    t100 = t97;

LAB31:    if (t98 <= t100)
        goto LAB32;

LAB34:    t6 = (t56 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t137 = (t12 > 0);
    if (t137 != 0)
        goto LAB36;

LAB38:    t6 = (t1 + 2008U);
    t7 = *((char **)t6);
    t12 = (t3 - 0);
    t8 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t13 = (t8 * 640U);
    t67 = (t2 - 0);
    t68 = (t67 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t108 = (t13 + t68);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t6 = (t7 + t110);
    t97 = *((int *)t6);
    t10 = (t44 + 56U);
    t14 = *((char **)t10);
    t10 = (t14 + 0);
    *((int *)t10) = t97;

LAB37:    t6 = (t44 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t137 = (t12 > 255);
    if (t137 != 0)
        goto LAB39;

LAB41:
LAB40:    t6 = (t44 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t137 = (t12 < 0);
    if (t137 != 0)
        goto LAB42;

LAB44:
LAB43:    t6 = (t44 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t0 = t12;

LAB1:    return t0;
LAB3:    t6 = (t32 + 56U);
    t14 = *((char **)t6);
    t100 = *((int *)t14);
    t6 = (t20 + 56U);
    t15 = *((char **)t6);
    t101 = *((int *)t15);
    t103 = t101;
    t104 = t100;

LAB6:    if (t103 <= t104)
        goto LAB7;

LAB9:
LAB4:    if (t97 == t98)
        goto LAB5;

LAB11:    t12 = (t97 + 1);
    t97 = t12;
    goto LAB2;

LAB7:    t6 = (t11 + 56U);
    t17 = *((char **)t6);
    t6 = (t1 + 2008U);
    t18 = *((char **)t6);
    t105 = (t97 - 0);
    t8 = (t105 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t97);
    t13 = (t8 * 640U);
    t106 = (t103 - 0);
    t68 = (t106 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t103);
    t108 = (t13 + t68);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t6 = (t18 + t110);
    t111 = *((int *)t6);
    t19 = (t9 + 0U);
    t112 = *((int *)t19);
    t21 = (t9 + 8U);
    t113 = *((int *)t21);
    t114 = (t111 - t112);
    t115 = (t114 * t113);
    t22 = (t9 + 4U);
    t116 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t112, t116, t113, t111);
    t117 = (4U * t115);
    t118 = (0 + t117);
    t24 = (t17 + t118);
    t119 = *((int *)t24);
    t120 = (t119 + 1);
    t25 = (t11 + 56U);
    t27 = *((char **)t25);
    t25 = (t1 + 2008U);
    t28 = *((char **)t25);
    t121 = (t97 - 0);
    t122 = (t121 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t97);
    t123 = (t122 * 640U);
    t124 = (t103 - 0);
    t125 = (t124 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t103);
    t126 = (t123 + t125);
    t127 = (4U * t126);
    t128 = (0 + t127);
    t25 = (t28 + t128);
    t129 = *((int *)t25);
    t30 = (t9 + 0U);
    t130 = *((int *)t30);
    t31 = (t9 + 8U);
    t131 = *((int *)t31);
    t132 = (t129 - t130);
    t133 = (t132 * t131);
    t33 = (t9 + 4U);
    t134 = *((int *)t33);
    xsi_vhdl_check_range_of_index(t130, t134, t131, t129);
    t135 = (4U * t133);
    t136 = (0 + t135);
    t34 = (t27 + t136);
    *((int *)t34) = t120;

LAB8:    if (t103 == t104)
        goto LAB9;

LAB10:    t12 = (t103 + 1);
    t103 = t12;
    goto LAB6;

LAB13:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = (t9 + 0U);
    t97 = *((int *)t6);
    t10 = (t9 + 8U);
    t98 = *((int *)t10);
    t100 = (t12 - t97);
    t8 = (t100 * t98);
    t14 = (t9 + 4U);
    t101 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t97, t101, t98, t12);
    t13 = (4U * t8);
    t68 = (0 + t13);
    t15 = (t7 + t68);
    t103 = *((int *)t15);
    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t104 = *((int *)t18);
    t137 = (t103 > t104);
    if (t137 != 0)
        goto LAB16;

LAB18:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = (t9 + 0U);
    t97 = *((int *)t6);
    t10 = (t9 + 8U);
    t98 = *((int *)t10);
    t100 = (t12 - t97);
    t8 = (t100 * t98);
    t14 = (t9 + 4U);
    t101 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t97, t101, t98, t12);
    t13 = (4U * t8);
    t68 = (0 + t13);
    t15 = (t7 + t68);
    t103 = *((int *)t15);
    t17 = (t66 + 56U);
    t18 = *((char **)t17);
    t17 = (t64 + 0U);
    t104 = *((int *)t17);
    t19 = (t64 + 8U);
    t105 = *((int *)t19);
    t106 = (t12 - t104);
    t108 = (t106 * t105);
    t21 = (t64 + 4U);
    t111 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t104, t111, t105, t12);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t22 = (t18 + t110);
    *((int *)t22) = t103;

LAB17:
LAB14:    if (t12 == t67)
        goto LAB15;

LAB19:    t97 = (t12 + 1);
    t12 = t97;
    goto LAB12;

LAB16:    t17 = (t75 + 56U);
    t19 = *((char **)t17);
    t105 = *((int *)t19);
    t17 = (t11 + 56U);
    t21 = *((char **)t17);
    t17 = (t9 + 0U);
    t106 = *((int *)t17);
    t22 = (t9 + 8U);
    t111 = *((int *)t22);
    t112 = (t12 - t106);
    t108 = (t112 * t111);
    t24 = (t9 + 4U);
    t113 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t106, t113, t111, t12);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t25 = (t21 + t110);
    t114 = *((int *)t25);
    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t116 = *((int *)t28);
    t119 = (t114 - t116);
    t120 = (t105 + t119);
    t27 = (t75 + 56U);
    t30 = *((char **)t27);
    t27 = (t30 + 0);
    *((int *)t27) = t120;
    t6 = (t1 + 1408U);
    t7 = *((char **)t6);
    t97 = *((int *)t7);
    t6 = (t66 + 56U);
    t10 = *((char **)t6);
    t6 = (t64 + 0U);
    t98 = *((int *)t6);
    t14 = (t64 + 8U);
    t100 = *((int *)t14);
    t101 = (t12 - t98);
    t8 = (t101 * t100);
    t15 = (t64 + 4U);
    t103 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t98, t103, t100, t12);
    t13 = (4U * t8);
    t68 = (0 + t13);
    t17 = (t10 + t68);
    *((int *)t17) = t97;
    goto LAB17;

LAB20:    t6 = (t75 + 56U);
    t10 = *((char **)t6);
    t67 = *((int *)t10);
    t97 = (t67 / 256);
    t6 = (t81 + 56U);
    t14 = *((char **)t6);
    t6 = (t14 + 0);
    *((int *)t6) = t97;
    t6 = (t75 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t67 = xsi_vhdl_mod(t12, 256);
    t6 = (t87 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t67;
    t12 = 0;
    t67 = 255;

LAB23:    if (t12 <= t67)
        goto LAB24;

LAB26:    goto LAB21;

LAB24:    t6 = (t66 + 56U);
    t7 = *((char **)t6);
    t6 = (t64 + 0U);
    t97 = *((int *)t6);
    t10 = (t64 + 8U);
    t98 = *((int *)t10);
    t100 = (t12 - t97);
    t8 = (t100 * t98);
    t14 = (t64 + 4U);
    t101 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t97, t101, t98, t12);
    t13 = (4U * t8);
    t68 = (0 + t13);
    t15 = (t7 + t68);
    t103 = *((int *)t15);
    t17 = (t81 + 56U);
    t18 = *((char **)t17);
    t104 = *((int *)t18);
    t105 = (t103 + t104);
    t17 = (t66 + 56U);
    t19 = *((char **)t17);
    t17 = (t64 + 0U);
    t106 = *((int *)t17);
    t21 = (t64 + 8U);
    t111 = *((int *)t21);
    t112 = (t12 - t106);
    t108 = (t112 * t111);
    t22 = (t64 + 4U);
    t113 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t106, t113, t111, t12);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t24 = (t19 + t110);
    *((int *)t24) = t105;
    t6 = (t87 + 56U);
    t7 = *((char **)t6);
    t97 = *((int *)t7);
    t137 = (t12 < t97);
    if (t137 != 0)
        goto LAB27;

LAB29:
LAB28:
LAB25:    if (t12 == t67)
        goto LAB26;

LAB30:    t97 = (t12 + 1);
    t12 = t97;
    goto LAB23;

LAB27:    t6 = (t66 + 56U);
    t10 = *((char **)t6);
    t6 = (t64 + 0U);
    t98 = *((int *)t6);
    t14 = (t64 + 8U);
    t100 = *((int *)t14);
    t101 = (t12 - t98);
    t8 = (t101 * t100);
    t15 = (t64 + 4U);
    t103 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t98, t103, t100, t12);
    t13 = (4U * t8);
    t68 = (0 + t13);
    t17 = (t10 + t68);
    t104 = *((int *)t17);
    t105 = (t104 + 1);
    t18 = (t66 + 56U);
    t19 = *((char **)t18);
    t18 = (t64 + 0U);
    t106 = *((int *)t18);
    t21 = (t64 + 8U);
    t111 = *((int *)t21);
    t112 = (t12 - t106);
    t108 = (t112 * t111);
    t22 = (t64 + 4U);
    t113 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t106, t113, t111, t12);
    t109 = (4U * t108);
    t110 = (0 + t109);
    t24 = (t19 + t110);
    *((int *)t24) = t105;
    goto LAB28;

LAB32:    t10 = (t50 + 56U);
    t14 = *((char **)t10);
    t101 = *((int *)t14);
    t10 = (t66 + 56U);
    t15 = *((char **)t10);
    t10 = (t64 + 0U);
    t103 = *((int *)t10);
    t17 = (t64 + 8U);
    t104 = *((int *)t17);
    t105 = (t98 - t103);
    t115 = (t105 * t104);
    t18 = (t64 + 4U);
    t106 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t103, t106, t104, t98);
    t117 = (4U * t115);
    t118 = (0 + t117);
    t19 = (t15 + t118);
    t111 = *((int *)t19);
    t112 = (t101 + t111);
    t21 = (t50 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((int *)t21) = t112;

LAB33:    if (t98 == t100)
        goto LAB34;

LAB35:    t12 = (t98 + 1);
    t98 = t12;
    goto LAB31;

LAB36:    t6 = (t50 + 56U);
    t10 = *((char **)t6);
    t67 = *((int *)t10);
    t97 = (t67 * 255);
    t6 = (t56 + 56U);
    t14 = *((char **)t6);
    t98 = *((int *)t14);
    t100 = (t97 / t98);
    t6 = (t44 + 56U);
    t15 = *((char **)t6);
    t6 = (t15 + 0);
    *((int *)t6) = t100;
    goto LAB37;

LAB39:    t6 = (t44 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = 255;
    goto LAB40;

LAB42:    t6 = (t44 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = 0;
    goto LAB43;

LAB45:;
}

int work_a_2655995831_3212880686_sub_1089914681_3579431146(char *t1, int t2, int t3, int t4)
{
    char t5[368];
    char t6[16];
    char t10[8];
    char t16[8];
    char t22[8];
    int t0;
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
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    char *t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
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
    int t59;
    int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    char *t128;
    char *t129;

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
    t25 = (t6 + 4U);
    *((int *)t25) = t2;
    t26 = (t6 + 8U);
    *((int *)t26) = t3;
    t27 = (t6 + 12U);
    *((int *)t27) = t4;
    t28 = (t1 + 2008U);
    t29 = *((char **)t28);
    t30 = (t3 - 0);
    t31 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t32 = (t31 * 640U);
    t33 = (t2 - 0);
    t34 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t35 = (t32 + t34);
    t36 = (4U * t35);
    t37 = (0 + t36);
    t28 = (t29 + t37);
    t38 = *((int *)t28);
    t39 = (t7 + 56U);
    t40 = *((char **)t39);
    t39 = (t40 + 0);
    *((int *)t39) = t38;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = 0;
    t44 = (t2 > 0);
    if (t44 == 1)
        goto LAB11;

LAB12:    t43 = (unsigned char)0;

LAB13:    if (t43 == 1)
        goto LAB8;

LAB9:    t42 = (unsigned char)0;

LAB10:    if (t42 == 1)
        goto LAB5;

LAB6:    t41 = (unsigned char)0;

LAB7:    if (t41 != 0)
        goto LAB2;

LAB4:
LAB3:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t41 = (t30 < 10);
    if (t41 != 0)
        goto LAB14;

LAB16:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t41 = (t30 > 50);
    if (t41 != 0)
        goto LAB17;

LAB18:    t8 = (t1 + 1648U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t33 = (t4 * t30);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t38 = *((int *)t11);
    t8 = (t1 + 1648U);
    t12 = *((char **)t8);
    t48 = *((int *)t12);
    t49 = (100 - t48);
    t50 = (t38 * t49);
    t53 = (t33 + t50);
    t54 = (t53 / 100);
    t8 = (t13 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t54;

LAB15:    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t41 = (t30 > 255);
    if (t41 != 0)
        goto LAB19;

LAB21:
LAB20:    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t41 = (t30 < 0);
    if (t41 != 0)
        goto LAB22;

LAB24:
LAB23:    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t0 = t30;

LAB1:    return t0;
LAB2:    t8 = (t1 + 2008U);
    t9 = *((char **)t8);
    t38 = (t3 - 0);
    t31 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t32 = (t31 * 640U);
    t48 = (t2 - 0);
    t34 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t35 = (t32 + t34);
    t36 = (4U * t35);
    t37 = (0 + t36);
    t8 = (t9 + t37);
    t49 = *((int *)t8);
    t11 = (t1 + 2008U);
    t12 = *((char **)t11);
    t50 = (t3 - 0);
    t51 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t52 = (t51 * 640U);
    t53 = (t2 - 1);
    t54 = (t53 - 0);
    t55 = (t54 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t53);
    t56 = (t52 + t55);
    t57 = (4U * t56);
    t58 = (0 + t57);
    t11 = (t12 + t58);
    t59 = *((int *)t11);
    t60 = (t49 - t59);
    t61 = (t60>=0?t60: -t60);
    t14 = (t1 + 2008U);
    t15 = *((char **)t14);
    t62 = (t3 - 0);
    t63 = (t62 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t64 = (t63 * 640U);
    t65 = (t2 - 0);
    t66 = (t65 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t67 = (t64 + t66);
    t68 = (4U * t67);
    t69 = (0 + t68);
    t14 = (t15 + t69);
    t70 = *((int *)t14);
    t17 = (t1 + 2008U);
    t18 = *((char **)t17);
    t71 = (t3 - 0);
    t72 = (t71 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t73 = (t72 * 640U);
    t74 = (t2 + 1);
    t75 = (t74 - 0);
    t76 = (t75 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t74);
    t77 = (t73 + t76);
    t78 = (4U * t77);
    t79 = (0 + t78);
    t17 = (t18 + t79);
    t80 = *((int *)t17);
    t81 = (t70 - t80);
    t82 = (t81>=0?t81: -t81);
    t83 = (t61 + t82);
    t20 = (t1 + 2008U);
    t21 = *((char **)t20);
    t84 = (t3 - 0);
    t85 = (t84 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t86 = (t85 * 640U);
    t87 = (t2 - 0);
    t88 = (t87 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t89 = (t86 + t88);
    t90 = (4U * t89);
    t91 = (0 + t90);
    t20 = (t21 + t91);
    t92 = *((int *)t20);
    t23 = (t1 + 2008U);
    t24 = *((char **)t23);
    t93 = (t3 - 1);
    t94 = (t93 - 0);
    t95 = (t94 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t93);
    t96 = (t95 * 640U);
    t97 = (t2 - 0);
    t98 = (t97 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t99 = (t96 + t98);
    t100 = (4U * t99);
    t101 = (0 + t100);
    t23 = (t24 + t101);
    t102 = *((int *)t23);
    t103 = (t92 - t102);
    t104 = (t103>=0?t103: -t103);
    t105 = (t83 + t104);
    t28 = (t1 + 2008U);
    t29 = *((char **)t28);
    t106 = (t3 - 0);
    t107 = (t106 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t108 = (t107 * 640U);
    t109 = (t2 - 0);
    t110 = (t109 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t111 = (t108 + t110);
    t112 = (4U * t111);
    t113 = (0 + t112);
    t28 = (t29 + t113);
    t114 = *((int *)t28);
    t39 = (t1 + 2008U);
    t40 = *((char **)t39);
    t115 = (t3 + 1);
    t116 = (t115 - 0);
    t117 = (t116 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t115);
    t118 = (t117 * 640U);
    t119 = (t2 - 0);
    t120 = (t119 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t2);
    t121 = (t118 + t120);
    t122 = (4U * t121);
    t123 = (0 + t122);
    t39 = (t40 + t123);
    t124 = *((int *)t39);
    t125 = (t114 - t124);
    t126 = (t125>=0?t125: -t125);
    t127 = (t105 + t126);
    t128 = (t19 + 56U);
    t129 = *((char **)t128);
    t128 = (t129 + 0);
    *((int *)t128) = t127;
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t30 = *((int *)t9);
    t33 = (t30 / 4);
    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t33;
    goto LAB3;

LAB5:    t33 = (640 - 1);
    t47 = (t3 < t33);
    t41 = t47;
    goto LAB7;

LAB8:    t46 = (t3 > 0);
    t42 = t46;
    goto LAB10;

LAB11:    t30 = (640 - 1);
    t45 = (t2 < t30);
    t43 = t45;
    goto LAB13;

LAB14:    t33 = (t4 * 80);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t38 = *((int *)t11);
    t48 = (t38 * 20);
    t49 = (t33 + t48);
    t50 = (t49 / 100);
    t8 = (t13 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t50;
    goto LAB15;

LAB17:    t33 = (t4 * 50);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t38 = *((int *)t11);
    t48 = (t38 * 50);
    t49 = (t33 + t48);
    t50 = (t49 / 100);
    t8 = (t13 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t50;
    goto LAB15;

LAB19:    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = 255;
    goto LAB20;

LAB22:    t8 = (t13 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = 0;
    goto LAB23;

LAB25:;
}

static void work_a_2655995831_3212880686_p_0(char *t0)
{
    char t7[16];
    char t9[16];
    char t30[16];
    char t35[16];
    char t37[16];
    char t40[16];
    char t44[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng3);
    t2 = (t0 + 4923020);
    t4 = (t0 + 4923054);
    t8 = ((STD_STANDARD) + 1008);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 34;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (34 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 7500U);
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t2, t9, (char)97, t4, t11, (char)101);
    t13 = (34U + 26U);
    xsi_report(t6, t13, 0);
    xsi_set_current_line(164, ng3);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 2576U);
    t4 = (t0 + 4923080);
    t6 = (t0 + 7500U);
    t14 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t14;
    xsi_set_current_line(165, ng3);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 != (unsigned char)0);
    if (t15 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(169, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 4923158);
    *((int *)t2) = 0;
    t3 = (t0 + 4923162);
    *((int *)t3) = t12;
    t17 = 0;
    t18 = t12;

LAB7:    if (t17 <= t18)
        goto LAB8;

LAB10:    xsi_set_current_line(185, ng3);
    t2 = (t0 + 2576U);
    std_textio_file_close(t2);
    xsi_set_current_line(186, ng3);
    t2 = (t0 + 4923193);
    xsi_report(t2, 37U, 0);
    xsi_set_current_line(189, ng3);
    t2 = (t0 + 4923230);
    xsi_report(t2, 33U, 0);
    xsi_set_current_line(190, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 4923263);
    *((int *)t2) = 0;
    t3 = (t0 + 4923267);
    *((int *)t3) = t12;
    t17 = 0;
    t18 = t12;

LAB23:    if (t17 <= t18)
        goto LAB24;

LAB26:    xsi_set_current_line(199, ng3);
    t2 = (t0 + 4923296);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(202, ng3);
    t2 = (t0 + 4923330);
    xsi_report(t2, 29U, 0);
    xsi_set_current_line(203, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 4923359);
    *((int *)t2) = 0;
    t3 = (t0 + 4923363);
    *((int *)t3) = t12;
    t17 = 0;
    t18 = t12;

LAB36:    if (t17 <= t18)
        goto LAB37;

LAB39:    xsi_set_current_line(212, ng3);
    t2 = (t0 + 4923395);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(215, ng3);
    t2 = (t0 + 4923423);
    t4 = (t0 + 4923455);
    t8 = ((STD_STANDARD) + 1008);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 32;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (32 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 7516U);
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t2, t9, (char)97, t4, t11, (char)101);
    t13 = (32U + 34U);
    xsi_report(t6, t13, 0);
    xsi_set_current_line(216, ng3);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 2680U);
    t4 = (t0 + 4923489);
    t6 = (t0 + 7516U);
    t14 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t14;
    xsi_set_current_line(217, ng3);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 != (unsigned char)0);
    if (t15 != 0)
        goto LAB49;

LAB51:
LAB50:    xsi_set_current_line(221, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 4923584);
    *((int *)t2) = 0;
    t3 = (t0 + 4923588);
    *((int *)t3) = t12;
    t17 = 0;
    t18 = t12;

LAB52:    if (t17 <= t18)
        goto LAB53;

LAB55:    xsi_set_current_line(232, ng3);
    t2 = (t0 + 2680U);
    std_textio_file_close(t2);
    xsi_set_current_line(233, ng3);
    t2 = (t0 + 4923619);
    xsi_report(t2, 51U, 0);
    xsi_set_current_line(236, ng3);
    t2 = (t0 + 4923670);
    xsi_report(t2, 48U, 0);
    xsi_set_current_line(237, ng3);
    t2 = (t0 + 4923718);
    t4 = (t0 + 4923730);
    t8 = ((STD_STANDARD) + 1008);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 12;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (12 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 7500U);
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t2, t9, (char)97, t4, t11, (char)101);
    t13 = (12U + 26U);
    xsi_report(t6, t13, 0);
    xsi_set_current_line(238, ng3);
    t2 = (t0 + 4923756);
    t4 = (t0 + 4923769);
    t8 = ((STD_STANDARD) + 1008);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 13;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (13 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 7516U);
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t2, t9, (char)97, t4, t11, (char)101);
    t13 = (13U + 34U);
    xsi_report(t6, t13, 0);
    xsi_set_current_line(239, ng3);
    t2 = (t0 + 4923803);
    t4 = ((STD_STANDARD) + 384);
    t5 = xsi_int_to_mem(640);
    t6 = xsi_string_variable_get_image(t7, t4, t5);
    t10 = ((STD_STANDARD) + 1008);
    t11 = (t30 + 0U);
    t16 = (t11 + 0U);
    *((int *)t16) = 1;
    t16 = (t11 + 4U);
    *((int *)t16) = 18;
    t16 = (t11 + 8U);
    *((int *)t16) = 1;
    t12 = (18 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t16 = (t11 + 12U);
    *((unsigned int *)t16) = t13;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t2, t30, (char)97, t6, t7, (char)101);
    t16 = (t0 + 4923821);
    t33 = ((STD_STANDARD) + 1008);
    t34 = (t37 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = 1;
    t36 = (t34 + 4U);
    *((int *)t36) = 1;
    t36 = (t34 + 8U);
    *((int *)t36) = 1;
    t17 = (1 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t13;
    t32 = xsi_base_array_concat(t32, t35, t33, (char)97, t8, t9, (char)97, t16, t37, (char)101);
    t36 = ((STD_STANDARD) + 384);
    t38 = xsi_int_to_mem(640);
    t39 = xsi_string_variable_get_image(t40, t36, t38);
    t42 = ((STD_STANDARD) + 1008);
    t41 = xsi_base_array_concat(t41, t44, t42, (char)97, t32, t35, (char)97, t39, t40, (char)101);
    t13 = (18U + 3U);
    t23 = (t13 + 1U);
    t26 = (t23 + 3U);
    xsi_report(t41, t26, 0);
    xsi_set_current_line(240, ng3);
    t2 = (t0 + 4923822);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t12 = *((int *)t6);
    t5 = xsi_int_to_mem(t12);
    t8 = xsi_string_variable_get_image(t7, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t16 = (t30 + 0U);
    t31 = (t16 + 0U);
    *((int *)t31) = 1;
    t31 = (t16 + 4U);
    *((int *)t31) = 17;
    t31 = (t16 + 8U);
    *((int *)t31) = 1;
    t17 = (17 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t31 = (t16 + 12U);
    *((unsigned int *)t31) = t13;
    t10 = xsi_base_array_concat(t10, t9, t11, (char)97, t2, t30, (char)97, t8, t7, (char)101);
    t31 = (t0 + 4923839);
    t34 = ((STD_STANDARD) + 1008);
    t36 = (t37 + 0U);
    t38 = (t36 + 0U);
    *((int *)t38) = 1;
    t38 = (t36 + 4U);
    *((int *)t38) = 1;
    t38 = (t36 + 8U);
    *((int *)t38) = 1;
    t18 = (1 - 1);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t38 = (t36 + 12U);
    *((unsigned int *)t38) = t13;
    t33 = xsi_base_array_concat(t33, t35, t34, (char)97, t10, t9, (char)97, t31, t37, (char)101);
    t38 = ((STD_STANDARD) + 384);
    t39 = (t0 + 1528U);
    t41 = *((char **)t39);
    t19 = *((int *)t41);
    t39 = xsi_int_to_mem(t19);
    t42 = xsi_string_variable_get_image(t40, t38, t39);
    t45 = ((STD_STANDARD) + 1008);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t33, t35, (char)97, t42, t40, (char)101);
    t13 = (17U + 2U);
    t23 = (t13 + 1U);
    t26 = (t23 + 2U);
    xsi_report(t43, t26, 0);
    xsi_set_current_line(241, ng3);
    t2 = (t0 + 4923840);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1408U);
    t6 = *((char **)t5);
    t12 = *((int *)t6);
    t5 = xsi_int_to_mem(t12);
    t8 = xsi_string_variable_get_image(t7, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t16 = (t30 + 0U);
    t31 = (t16 + 0U);
    *((int *)t31) = 1;
    t31 = (t16 + 4U);
    *((int *)t31) = 18;
    t31 = (t16 + 8U);
    *((int *)t31) = 1;
    t17 = (18 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t31 = (t16 + 12U);
    *((unsigned int *)t31) = t13;
    t10 = xsi_base_array_concat(t10, t9, t11, (char)97, t2, t30, (char)97, t8, t7, (char)101);
    t13 = (18U + 2U);
    xsi_report(t10, t13, 0);
    xsi_set_current_line(242, ng3);
    t2 = (t0 + 4923858);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 1648U);
    t6 = *((char **)t5);
    t12 = *((int *)t6);
    t5 = xsi_int_to_mem(t12);
    t8 = xsi_string_variable_get_image(t7, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t16 = (t30 + 0U);
    t31 = (t16 + 0U);
    *((int *)t31) = 1;
    t31 = (t16 + 4U);
    *((int *)t31) = 14;
    t31 = (t16 + 8U);
    *((int *)t31) = 1;
    t17 = (14 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t31 = (t16 + 12U);
    *((unsigned int *)t31) = t13;
    t10 = xsi_base_array_concat(t10, t9, t11, (char)97, t2, t30, (char)97, t8, t7, (char)101);
    t31 = (t0 + 4923872);
    t34 = ((STD_STANDARD) + 1008);
    t36 = (t37 + 0U);
    t38 = (t36 + 0U);
    *((int *)t38) = 1;
    t38 = (t36 + 4U);
    *((int *)t38) = 7;
    t38 = (t36 + 8U);
    *((int *)t38) = 1;
    t18 = (7 - 1);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t38 = (t36 + 12U);
    *((unsigned int *)t38) = t13;
    t33 = xsi_base_array_concat(t33, t35, t34, (char)97, t10, t9, (char)97, t31, t37, (char)101);
    t13 = (14U + 2U);
    t23 = (t13 + 7U);
    xsi_report(t33, t23, 0);
    xsi_set_current_line(243, ng3);
    t2 = (t0 + 4923879);
    xsi_report(t2, 56U, 0);
    xsi_set_current_line(245, ng3);

LAB67:    *((char **)t1) = &&LAB68;

LAB1:    return;
LAB4:    xsi_set_current_line(166, ng3);
    t2 = (t0 + 4923106);
    t5 = (t0 + 4923132);
    t10 = ((STD_STANDARD) + 1008);
    t11 = (t9 + 0U);
    t16 = (t11 + 0U);
    *((int *)t16) = 1;
    t16 = (t11 + 4U);
    *((int *)t16) = 26;
    t16 = (t11 + 8U);
    *((int *)t16) = 1;
    t12 = (26 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t16 = (t11 + 12U);
    *((unsigned int *)t16) = t13;
    t16 = (t0 + 7500U);
    t8 = xsi_base_array_concat(t8, t7, t10, (char)97, t2, t9, (char)97, t5, t16, (char)101);
    t13 = (26U + 26U);
    xsi_report(t8, t13, (unsigned char)3);
    goto LAB5;

LAB8:    xsi_set_current_line(170, ng3);
    t19 = (640 - 1);
    t4 = (t0 + 4923166);
    *((int *)t4) = 0;
    t5 = (t0 + 4923170);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB11:    if (t20 <= t21)
        goto LAB12;

LAB14:    xsi_set_current_line(180, ng3);
    t2 = (t0 + 4923158);
    t12 = xsi_vhdl_mod(*((int *)t2), 50);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB9:    t2 = (t0 + 4923158);
    t17 = *((int *)t2);
    t3 = (t0 + 4923162);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB10;

LAB22:    t12 = (t17 + 1);
    t17 = t12;
    t4 = (t0 + 4923158);
    *((int *)t4) = t17;
    goto LAB7;

LAB12:    xsi_set_current_line(171, ng3);
    t6 = (t0 + 2576U);
    t14 = std_textio_endfile(t6);
    t15 = (!(t14));
    if (t15 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(176, ng3);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4923158);
    t12 = *((int *)t2);
    t19 = (t12 - 0);
    t13 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t23 = (t13 * 640U);
    t4 = (t0 + 4923166);
    t22 = *((int *)t4);
    t24 = (t22 - 0);
    t26 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t27 = (t23 + t26);
    t28 = (4U * t27);
    t29 = (0 + t28);
    t5 = (t3 + t29);
    *((int *)t5) = 0;

LAB16:
LAB13:    t2 = (t0 + 4923166);
    t20 = *((int *)t2);
    t3 = (t0 + 4923170);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB14;

LAB18:    t12 = (t20 + 1);
    t20 = t12;
    t4 = (t0 + 4923166);
    *((int *)t4) = t20;
    goto LAB11;

LAB15:    xsi_set_current_line(172, ng3);
    t8 = (t0 + 3680);
    t10 = (t0 + 2576U);
    t11 = (t0 + 2856U);
    std_textio_readline(STD_TEXTIO, t8, t10, t11);
    xsi_set_current_line(173, ng3);
    t2 = (t0 + 3680);
    t3 = (t0 + 2856U);
    t4 = (t0 + 1768U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(174, ng3);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 4923158);
    t19 = *((int *)t2);
    t22 = (t19 - 0);
    t13 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t23 = (t13 * 640U);
    t5 = (t0 + 4923166);
    t24 = *((int *)t5);
    t25 = (t24 - 0);
    t26 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t27 = (t23 + t26);
    t28 = (4U * t27);
    t29 = (0 + t28);
    t6 = (t4 + t29);
    *((int *)t6) = t12;
    goto LAB16;

LAB19:    xsi_set_current_line(181, ng3);
    t3 = (t0 + 4923174);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4923158);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t16 = ((STD_STANDARD) + 1008);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 18;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t19 = (18 - 1);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t13;
    t11 = xsi_base_array_concat(t11, t9, t16, (char)97, t3, t30, (char)97, t10, t7, (char)101);
    t32 = (t0 + 4923192);
    t36 = ((STD_STANDARD) + 1008);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 1;
    t39 = (t38 + 4U);
    *((int *)t39) = 1;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t20 = (1 - 1);
    t13 = (t20 * 1);
    t13 = (t13 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t13;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t11, t9, (char)97, t32, t37, (char)101);
    t39 = ((STD_STANDARD) + 384);
    t41 = xsi_int_to_mem(640);
    t42 = xsi_string_variable_get_image(t40, t39, t41);
    t45 = ((STD_STANDARD) + 1008);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t34, t35, (char)97, t42, t40, (char)101);
    t46 = (t7 + 12U);
    t13 = *((unsigned int *)t46);
    t23 = (18U + t13);
    t26 = (t23 + 1U);
    t27 = (t26 + 3U);
    xsi_report(t43, t27, 0);
    goto LAB20;

LAB24:    xsi_set_current_line(191, ng3);
    t19 = (640 - 1);
    t4 = (t0 + 4923271);
    *((int *)t4) = 0;
    t5 = (t0 + 4923275);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB27:    if (t20 <= t21)
        goto LAB28;

LAB30:    xsi_set_current_line(195, ng3);
    t2 = (t0 + 4923263);
    t12 = xsi_vhdl_mod(*((int *)t2), 50);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB25:    t2 = (t0 + 4923263);
    t17 = *((int *)t2);
    t3 = (t0 + 4923267);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB26;

LAB35:    t12 = (t17 + 1);
    t17 = t12;
    t4 = (t0 + 4923263);
    *((int *)t4) = t17;
    goto LAB23;

LAB28:    xsi_set_current_line(192, ng3);
    t6 = (t0 + 4923271);
    t8 = (t0 + 4923263);
    t22 = work_a_2655995831_3212880686_sub_3986963645_3579431146(t0, *((int *)t6), *((int *)t8));
    t10 = (t0 + 2128U);
    t11 = *((char **)t10);
    t10 = (t0 + 4923263);
    t24 = *((int *)t10);
    t25 = (t24 - 0);
    t13 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t10));
    t23 = (t13 * 640U);
    t16 = (t0 + 4923271);
    t47 = *((int *)t16);
    t48 = (t47 - 0);
    t26 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t27 = (t23 + t26);
    t28 = (4U * t27);
    t29 = (0 + t28);
    t31 = (t11 + t29);
    *((int *)t31) = t22;

LAB29:    t2 = (t0 + 4923271);
    t20 = *((int *)t2);
    t3 = (t0 + 4923275);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB30;

LAB31:    t12 = (t20 + 1);
    t20 = t12;
    t4 = (t0 + 4923271);
    *((int *)t4) = t20;
    goto LAB27;

LAB32:    xsi_set_current_line(196, ng3);
    t3 = (t0 + 4923279);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4923263);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t16 = ((STD_STANDARD) + 1008);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 16;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t19 = (16 - 1);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t13;
    t11 = xsi_base_array_concat(t11, t9, t16, (char)97, t3, t30, (char)97, t10, t7, (char)101);
    t32 = (t0 + 4923295);
    t36 = ((STD_STANDARD) + 1008);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 1;
    t39 = (t38 + 4U);
    *((int *)t39) = 1;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t20 = (1 - 1);
    t13 = (t20 * 1);
    t13 = (t13 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t13;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t11, t9, (char)97, t32, t37, (char)101);
    t39 = ((STD_STANDARD) + 384);
    t41 = xsi_int_to_mem(640);
    t42 = xsi_string_variable_get_image(t40, t39, t41);
    t45 = ((STD_STANDARD) + 1008);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t34, t35, (char)97, t42, t40, (char)101);
    t46 = (t7 + 12U);
    t13 = *((unsigned int *)t46);
    t23 = (16U + t13);
    t26 = (t23 + 1U);
    t27 = (t26 + 3U);
    xsi_report(t43, t27, 0);
    goto LAB33;

LAB37:    xsi_set_current_line(204, ng3);
    t19 = (640 - 1);
    t4 = (t0 + 4923367);
    *((int *)t4) = 0;
    t5 = (t0 + 4923371);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB40:    if (t20 <= t21)
        goto LAB41;

LAB43:    xsi_set_current_line(208, ng3);
    t2 = (t0 + 4923359);
    t12 = xsi_vhdl_mod(*((int *)t2), 50);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB45;

LAB47:
LAB46:
LAB38:    t2 = (t0 + 4923359);
    t17 = *((int *)t2);
    t3 = (t0 + 4923363);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB39;

LAB48:    t12 = (t17 + 1);
    t17 = t12;
    t4 = (t0 + 4923359);
    *((int *)t4) = t17;
    goto LAB36;

LAB41:    xsi_set_current_line(205, ng3);
    t6 = (t0 + 4923367);
    t8 = (t0 + 4923359);
    t10 = (t0 + 2128U);
    t11 = *((char **)t10);
    t10 = (t0 + 4923359);
    t22 = *((int *)t10);
    t24 = (t22 - 0);
    t13 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t10));
    t23 = (t13 * 640U);
    t16 = (t0 + 4923367);
    t25 = *((int *)t16);
    t47 = (t25 - 0);
    t26 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t27 = (t23 + t26);
    t28 = (4U * t27);
    t29 = (0 + t28);
    t31 = (t11 + t29);
    t48 = *((int *)t31);
    t49 = work_a_2655995831_3212880686_sub_1089914681_3579431146(t0, *((int *)t6), *((int *)t8), t48);
    t32 = (t0 + 2248U);
    t33 = *((char **)t32);
    t32 = (t0 + 4923359);
    t50 = *((int *)t32);
    t51 = (t50 - 0);
    t52 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t53 = (t52 * 640U);
    t34 = (t0 + 4923367);
    t54 = *((int *)t34);
    t55 = (t54 - 0);
    t56 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t34));
    t57 = (t53 + t56);
    t58 = (4U * t57);
    t59 = (0 + t58);
    t36 = (t33 + t59);
    *((int *)t36) = t49;

LAB42:    t2 = (t0 + 4923367);
    t20 = *((int *)t2);
    t3 = (t0 + 4923371);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB43;

LAB44:    t12 = (t20 + 1);
    t20 = t12;
    t4 = (t0 + 4923367);
    *((int *)t4) = t20;
    goto LAB40;

LAB45:    xsi_set_current_line(209, ng3);
    t3 = (t0 + 4923375);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4923359);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t16 = ((STD_STANDARD) + 1008);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 19;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t19 = (19 - 1);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t13;
    t11 = xsi_base_array_concat(t11, t9, t16, (char)97, t3, t30, (char)97, t10, t7, (char)101);
    t32 = (t0 + 4923394);
    t36 = ((STD_STANDARD) + 1008);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 1;
    t39 = (t38 + 4U);
    *((int *)t39) = 1;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t20 = (1 - 1);
    t13 = (t20 * 1);
    t13 = (t13 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t13;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t11, t9, (char)97, t32, t37, (char)101);
    t39 = ((STD_STANDARD) + 384);
    t41 = xsi_int_to_mem(640);
    t42 = xsi_string_variable_get_image(t40, t39, t41);
    t45 = ((STD_STANDARD) + 1008);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t34, t35, (char)97, t42, t40, (char)101);
    t46 = (t7 + 12U);
    t13 = *((unsigned int *)t46);
    t23 = (19U + t13);
    t26 = (t23 + 1U);
    t27 = (t26 + 3U);
    xsi_report(t43, t27, 0);
    goto LAB46;

LAB49:    xsi_set_current_line(218, ng3);
    t2 = (t0 + 4923523);
    t5 = (t0 + 4923550);
    t10 = ((STD_STANDARD) + 1008);
    t11 = (t9 + 0U);
    t16 = (t11 + 0U);
    *((int *)t16) = 1;
    t16 = (t11 + 4U);
    *((int *)t16) = 27;
    t16 = (t11 + 8U);
    *((int *)t16) = 1;
    t12 = (27 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t16 = (t11 + 12U);
    *((unsigned int *)t16) = t13;
    t16 = (t0 + 7516U);
    t8 = xsi_base_array_concat(t8, t7, t10, (char)97, t2, t9, (char)97, t5, t16, (char)101);
    t13 = (27U + 34U);
    xsi_report(t8, t13, (unsigned char)3);
    goto LAB50;

LAB53:    xsi_set_current_line(222, ng3);
    t19 = (640 - 1);
    t4 = (t0 + 4923592);
    *((int *)t4) = 0;
    t5 = (t0 + 4923596);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB56:    if (t20 <= t21)
        goto LAB57;

LAB59:    xsi_set_current_line(227, ng3);
    t2 = (t0 + 4923584);
    t12 = xsi_vhdl_mod(*((int *)t2), 50);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB61;

LAB63:
LAB62:
LAB54:    t2 = (t0 + 4923584);
    t17 = *((int *)t2);
    t3 = (t0 + 4923588);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB55;

LAB64:    t12 = (t17 + 1);
    t17 = t12;
    t4 = (t0 + 4923584);
    *((int *)t4) = t17;
    goto LAB52;

LAB57:    xsi_set_current_line(223, ng3);
    t6 = (t0 + 3680);
    t8 = (t0 + 2928U);
    t10 = (t0 + 2248U);
    t11 = *((char **)t10);
    t10 = (t0 + 4923584);
    t22 = *((int *)t10);
    t24 = (t22 - 0);
    t13 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t10));
    t23 = (t13 * 640U);
    t16 = (t0 + 4923592);
    t25 = *((int *)t16);
    t47 = (t25 - 0);
    t26 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t16));
    t27 = (t23 + t26);
    t28 = (4U * t27);
    t29 = (0 + t28);
    t31 = (t11 + t29);
    t48 = *((int *)t31);
    std_textio_write5(STD_TEXTIO, t6, t8, t48, (unsigned char)0, 0);
    xsi_set_current_line(224, ng3);
    t2 = (t0 + 3680);
    t3 = (t0 + 2680U);
    t4 = (t0 + 2928U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB58:    t2 = (t0 + 4923592);
    t20 = *((int *)t2);
    t3 = (t0 + 4923596);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB59;

LAB60:    t12 = (t20 + 1);
    t20 = t12;
    t4 = (t0 + 4923592);
    *((int *)t4) = t20;
    goto LAB56;

LAB61:    xsi_set_current_line(228, ng3);
    t3 = (t0 + 4923600);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4923584);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t16 = ((STD_STANDARD) + 1008);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 18;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t19 = (18 - 1);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t13;
    t11 = xsi_base_array_concat(t11, t9, t16, (char)97, t3, t30, (char)97, t10, t7, (char)101);
    t32 = (t0 + 4923618);
    t36 = ((STD_STANDARD) + 1008);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 1;
    t39 = (t38 + 4U);
    *((int *)t39) = 1;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t20 = (1 - 1);
    t13 = (t20 * 1);
    t13 = (t13 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t13;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t11, t9, (char)97, t32, t37, (char)101);
    t39 = ((STD_STANDARD) + 384);
    t41 = xsi_int_to_mem(640);
    t42 = xsi_string_variable_get_image(t40, t39, t41);
    t45 = ((STD_STANDARD) + 1008);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t34, t35, (char)97, t42, t40, (char)101);
    t46 = (t7 + 12U);
    t13 = *((unsigned int *)t46);
    t23 = (18U + t13);
    t26 = (t23 + 1U);
    t27 = (t26 + 3U);
    xsi_report(t43, t27, 0);
    goto LAB62;

LAB65:    goto LAB2;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

}


extern void work_a_2655995831_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2655995831_3212880686_p_0};
	static char *se[] = {(void *)work_a_2655995831_3212880686_sub_3202332950_3057020925,(void *)work_a_2655995831_3212880686_sub_3202609556_3057020925,(void *)work_a_2655995831_3212880686_sub_3986963645_3579431146,(void *)work_a_2655995831_3212880686_sub_1089914681_3579431146};
	xsi_register_didat("work_a_2655995831_3212880686", "isim/improved_clahe_filter_isim_beh.exe.sim/work/a_2655995831_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
