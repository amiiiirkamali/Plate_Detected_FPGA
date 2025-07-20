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
extern char *STD_STANDARD;
static const char *ng1 = "";
extern char *IEEE_P_1242562249;
static const char *ng3 = "E:/project/Ise/Licens_Plate_Recognition/gaussian-blur-2/gaussian_blur.vhd";
extern char *STD_TEXTIO;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


char *work_a_0600504565_3212880686_sub_1085491094_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[1080];
    char t6[16];
    char t9[16];
    char t15[8];
    char t20[16];
    char t25[8];
    char t31[8];
    char t37[8];
    char t42[16];
    char t47[8];
    char t52[16];
    char t57[8];
    char t86[16];
    char *t0;
    char *t7;
    char *t8;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    int t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int t64;
    char *t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    char *t71;
    unsigned char t72;
    unsigned char t73;
    unsigned char t74;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned char t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t87;
    unsigned int t88;
    int t89;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 65535;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (65535 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t5 + 124U);
    xsi_create_subtype(t10, ng1, t8, t9, 16);
    t13 = (t5 + 124U);
    t14 = (t7 + 88U);
    *((char **)t14) = t13;
    t16 = (t7 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = 0;
    t17 = (t7 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t5 + 212U);
    t19 = ((STD_STANDARD) + 384);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 255;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (255 - 0);
    t12 = (t22 * 1);
    t12 = (t12 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t12;
    t21 = (t5 + 332U);
    xsi_create_subtype(t21, ng1, t19, t20, 16);
    t23 = (t5 + 332U);
    t24 = (t18 + 88U);
    *((char **)t24) = t23;
    t26 = (t18 + 56U);
    *((char **)t26) = t25;
    xsi_type_set_default_value(t23, t25, 0);
    t27 = (t18 + 80U);
    *((unsigned int *)t27) = 4U;
    t28 = (t5 + 420U);
    t29 = ((STD_STANDARD) + 384);
    t30 = (t28 + 88U);
    *((char **)t30) = t29;
    t32 = (t28 + 56U);
    *((char **)t32) = t31;
    xsi_type_set_default_value(t29, t31, 0);
    t33 = (t28 + 80U);
    *((unsigned int *)t33) = 4U;
    t34 = (t5 + 540U);
    t35 = ((STD_STANDARD) + 384);
    t36 = (t34 + 88U);
    *((char **)t36) = t35;
    t38 = (t34 + 56U);
    *((char **)t38) = t37;
    xsi_type_set_default_value(t35, t37, 0);
    t39 = (t34 + 80U);
    *((unsigned int *)t39) = 4U;
    t40 = (t5 + 660U);
    t41 = ((STD_STANDARD) + 384);
    t43 = (t42 + 0U);
    *((int *)t43) = 0;
    t43 = (t42 + 4U);
    *((int *)t43) = 4;
    t43 = (t42 + 8U);
    *((int *)t43) = 1;
    t44 = (4 - 0);
    t12 = (t44 * 1);
    t12 = (t12 + 1);
    t43 = (t42 + 12U);
    *((unsigned int *)t43) = t12;
    t43 = (t5 + 780U);
    xsi_create_subtype(t43, ng1, t41, t42, 16);
    t45 = (t5 + 780U);
    t46 = (t40 + 88U);
    *((char **)t46) = t45;
    t48 = (t40 + 56U);
    *((char **)t48) = t47;
    xsi_type_set_default_value(t45, t47, 0);
    t49 = (t40 + 80U);
    *((unsigned int *)t49) = 4U;
    t50 = (t5 + 868U);
    t51 = ((STD_STANDARD) + 384);
    t53 = (t52 + 0U);
    *((int *)t53) = 0;
    t53 = (t52 + 4U);
    *((int *)t53) = 4;
    t53 = (t52 + 8U);
    *((int *)t53) = 1;
    t54 = (4 - 0);
    t12 = (t54 * 1);
    t12 = (t12 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t12;
    t53 = (t5 + 988U);
    xsi_create_subtype(t53, ng1, t51, t52, 16);
    t55 = (t5 + 988U);
    t56 = (t50 + 88U);
    *((char **)t56) = t55;
    t58 = (t50 + 56U);
    *((char **)t58) = t57;
    xsi_type_set_default_value(t55, t57, 0);
    t59 = (t50 + 80U);
    *((unsigned int *)t59) = 4U;
    t60 = (t6 + 4U);
    *((int *)t60) = t3;
    t61 = (t6 + 8U);
    *((int *)t61) = t4;
    t62 = (t1 + 1648U);
    t63 = *((char **)t62);
    t64 = *((int *)t63);
    t62 = (t1 + 1648U);
    t65 = *((char **)t62);
    t66 = *((int *)t65);
    t67 = (-(t66));
    t68 = t67;
    t69 = t64;

LAB2:    if (t68 <= t69)
        goto LAB3;

LAB5:    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t8 = (t1 + 1528U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t44 = (t11 / t22);
    t8 = (t1 + 2728U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t44;
    t8 = (t1 + 2728U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t72 = (t11 > 255);
    if (t72 != 0)
        goto LAB34;

LAB36:    t8 = (t1 + 2728U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t72 = (t11 < 0);
    if (t72 != 0)
        goto LAB37;

LAB38:
LAB35:    t8 = (t1 + 2728U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t86, t11, 8);
    t13 = (t86 + 12U);
    t12 = *((unsigned int *)t13);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t8, t12);
    t14 = (t86 + 0U);
    t22 = *((int *)t14);
    t16 = (t86 + 4U);
    t44 = *((int *)t16);
    t17 = (t86 + 8U);
    t54 = *((int *)t17);
    t19 = (t2 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = t22;
    t21 = (t19 + 4U);
    *((int *)t21) = t44;
    t21 = (t19 + 8U);
    *((int *)t21) = t54;
    t64 = (t44 - t22);
    t79 = (t64 * t54);
    t79 = (t79 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t79;

LAB1:    return t0;
LAB3:    t70 = (t4 + t68);
    t62 = (t34 + 56U);
    t71 = *((char **)t62);
    t62 = (t71 + 0);
    *((int *)t62) = t70;
    t8 = (t1 + 1648U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t22 = (t68 + t11);
    t8 = (t50 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t22;
    t8 = (t1 + 1648U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t8 = (t1 + 1648U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t44 = (-(t22));
    t54 = t44;
    t64 = t11;

LAB6:    if (t54 <= t64)
        goto LAB7;

LAB9:
LAB4:    if (t68 == t69)
        goto LAB5;

LAB33:    t11 = (t68 + 1);
    t68 = t11;
    goto LAB2;

LAB7:    t66 = (t3 + t54);
    t8 = (t28 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t66;
    t8 = (t1 + 1648U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t22 = (t54 + t11);
    t8 = (t40 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t22;
    t8 = (t34 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t75 = (t11 >= 0);
    if (t75 == 1)
        goto LAB19;

LAB20:    t74 = (unsigned char)0;

LAB21:    if (t74 == 1)
        goto LAB16;

LAB17:    t73 = (unsigned char)0;

LAB18:    if (t73 == 1)
        goto LAB13;

LAB14:    t72 = (unsigned char)0;

LAB15:    if (t72 != 0)
        goto LAB10;

LAB12:    t8 = (t34 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t72 = (t11 < 0);
    if (t72 != 0)
        goto LAB22;

LAB24:    t8 = (t34 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t72 = (t11 >= 640);
    if (t72 != 0)
        goto LAB25;

LAB26:
LAB23:    t8 = (t28 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t72 = (t11 < 0);
    if (t72 != 0)
        goto LAB27;

LAB29:    t8 = (t28 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t72 = (t11 >= 640);
    if (t72 != 0)
        goto LAB30;

LAB31:
LAB28:    t8 = (t1 + 2128U);
    t10 = *((char **)t8);
    t8 = (t34 + 56U);
    t13 = *((char **)t8);
    t11 = *((int *)t13);
    t22 = (t11 - 0);
    t12 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t11);
    t79 = (t12 * 640U);
    t8 = (t28 + 56U);
    t14 = *((char **)t8);
    t44 = *((int *)t14);
    t66 = (t44 - 0);
    t82 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t44);
    t83 = (t79 + t82);
    t84 = (8U * t83);
    t85 = (0 + t84);
    t8 = (t10 + t85);
    t16 = (t86 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 7;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t67 = (0 - 7);
    t88 = (t67 * -1);
    t88 = (t88 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t88;
    t70 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t86);
    t17 = (t18 + 56U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    *((int *)t17) = t70;

LAB11:    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t8 = (t18 + 56U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t8 = (t1 + 1408U);
    t14 = *((char **)t8);
    t8 = (t50 + 56U);
    t16 = *((char **)t8);
    t44 = *((int *)t16);
    t66 = (t44 - 0);
    t12 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 4, 1, t44);
    t79 = (t12 * 5U);
    t8 = (t40 + 56U);
    t17 = *((char **)t8);
    t67 = *((int *)t17);
    t70 = (t67 - 0);
    t82 = (t70 * 1);
    xsi_vhdl_check_range_of_index(0, 4, 1, t67);
    t83 = (t79 + t82);
    t84 = (4U * t83);
    t85 = (0 + t84);
    t8 = (t14 + t85);
    t80 = *((int *)t8);
    t81 = (t22 * t80);
    t87 = (t11 + t81);
    t19 = (t7 + 56U);
    t21 = *((char **)t19);
    t19 = (t21 + 0);
    *((int *)t19) = t87;

LAB8:    if (t54 == t64)
        goto LAB9;

LAB32:    t11 = (t54 + 1);
    t54 = t11;
    goto LAB6;

LAB10:    t8 = (t1 + 2128U);
    t17 = *((char **)t8);
    t8 = (t34 + 56U);
    t19 = *((char **)t8);
    t67 = *((int *)t19);
    t70 = (t67 - 0);
    t12 = (t70 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t67);
    t79 = (t12 * 640U);
    t8 = (t28 + 56U);
    t21 = *((char **)t8);
    t80 = *((int *)t21);
    t81 = (t80 - 0);
    t82 = (t81 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t80);
    t83 = (t79 + t82);
    t84 = (8U * t83);
    t85 = (0 + t84);
    t8 = (t17 + t85);
    t23 = (t86 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 7;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t87 = (0 - 7);
    t88 = (t87 * -1);
    t88 = (t88 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t88;
    t89 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t86);
    t24 = (t18 + 56U);
    t26 = *((char **)t24);
    t24 = (t26 + 0);
    *((int *)t24) = t89;
    goto LAB11;

LAB13:    t8 = (t28 + 56U);
    t16 = *((char **)t8);
    t66 = *((int *)t16);
    t78 = (t66 < 640);
    t72 = t78;
    goto LAB15;

LAB16:    t8 = (t28 + 56U);
    t14 = *((char **)t8);
    t44 = *((int *)t14);
    t77 = (t44 >= 0);
    t73 = t77;
    goto LAB18;

LAB19:    t8 = (t34 + 56U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t76 = (t22 < 640);
    t74 = t76;
    goto LAB21;

LAB22:    t8 = (t34 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = 0;
    goto LAB23;

LAB25:    t22 = (640 - 1);
    t8 = (t34 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t22;
    goto LAB23;

LAB27:    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = 0;
    goto LAB28;

LAB30:    t22 = (640 - 1);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t22;
    goto LAB28;

LAB34:    t8 = (t1 + 2728U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = 255;
    goto LAB35;

LAB37:    t8 = (t1 + 2728U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = 0;
    goto LAB35;

LAB39:;
}

static void work_a_0600504565_3212880686_p_0(char *t0)
{
    char t7[16];
    char t9[16];
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
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    unsigned char t20;
    int t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
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
    static char *nl0[] = {&&LAB5, &&LAB8, &&LAB6, &&LAB7};
    static char *nl1[] = {&&LAB44, &&LAB46, &&LAB45, &&LAB46};

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng3);
    t2 = (t0 + 6563376);
    t4 = (t0 + 6563398);
    t8 = ((STD_STANDARD) + 1008);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 22;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (22 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 9208U);
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t2, t9, (char)97, t4, t11, (char)101);
    t13 = (22U + 34U);
    xsi_report(t6, t13, 0);
    xsi_set_current_line(106, ng3);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3056U);
    t4 = (t0 + 6563432);
    t6 = (t0 + 9208U);
    t14 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t14;
    xsi_set_current_line(108, ng3);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t14);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(120, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 6563586);
    *((int *)t2) = 0;
    t3 = (t0 + 6563590);
    *((int *)t3) = t12;
    t15 = 0;
    t16 = t12;

LAB9:    if (t15 <= t16)
        goto LAB10;

LAB12:    xsi_set_current_line(146, ng3);
    t2 = (t0 + 3056U);
    std_textio_file_close(t2);
    xsi_set_current_line(147, ng3);
    t2 = (t0 + 6563651);
    xsi_report(t2, 21U, 0);
    xsi_set_current_line(150, ng3);
    t2 = (t0 + 6563672);
    xsi_report(t2, 24U, 0);
    xsi_set_current_line(152, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 6563696);
    *((int *)t2) = 0;
    t3 = (t0 + 6563700);
    *((int *)t3) = t12;
    t15 = 0;
    t16 = t12;

LAB30:    if (t15 <= t16)
        goto LAB31;

LAB33:    xsi_set_current_line(163, ng3);
    t2 = (t0 + 6563726);
    xsi_report(t2, 19U, 0);
    xsi_set_current_line(166, ng3);
    t2 = (t0 + 6563745);
    t4 = (t0 + 6563766);
    t8 = ((STD_STANDARD) + 1008);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 21;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (21 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 9224U);
    t6 = xsi_base_array_concat(t6, t7, t8, (char)97, t2, t9, (char)97, t4, t11, (char)101);
    t13 = (21U + 42U);
    xsi_report(t6, t13, 0);
    xsi_set_current_line(167, ng3);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3160U);
    t4 = (t0 + 6563808);
    t6 = (t0 + 9224U);
    t14 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t14;
    xsi_set_current_line(169, ng3);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t2 = (char *)((nl1) + t14);
    goto **((char **)t2);

LAB5:    xsi_set_current_line(110, ng3);
    t4 = (t0 + 6563466);
    xsi_report(t4, 27U, 0);
    goto LAB4;

LAB6:    xsi_set_current_line(112, ng3);
    t2 = (t0 + 6563493);
    xsi_report(t2, 25U, (unsigned char)3);
    goto LAB4;

LAB7:    xsi_set_current_line(114, ng3);
    t2 = (t0 + 6563518);
    xsi_report(t2, 32U, (unsigned char)3);
    goto LAB4;

LAB8:    xsi_set_current_line(116, ng3);
    t2 = (t0 + 6563550);
    xsi_report(t2, 36U, (unsigned char)3);
    goto LAB4;

LAB10:    xsi_set_current_line(121, ng3);
    t17 = (640 - 1);
    t4 = (t0 + 6563594);
    *((int *)t4) = 0;
    t5 = (t0 + 6563598);
    *((int *)t5) = t17;
    t18 = 0;
    t19 = t17;

LAB13:    if (t18 <= t19)
        goto LAB14;

LAB16:    xsi_set_current_line(141, ng3);
    t2 = (t0 + 6563586);
    t12 = xsi_vhdl_mod(*((int *)t2), 64);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB26;

LAB28:
LAB27:
LAB11:    t2 = (t0 + 6563586);
    t15 = *((int *)t2);
    t3 = (t0 + 6563590);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB12;

LAB29:    t12 = (t15 + 1);
    t15 = t12;
    t4 = (t0 + 6563586);
    *((int *)t4) = t15;
    goto LAB9;

LAB14:    xsi_set_current_line(122, ng3);
    t6 = (t0 + 3056U);
    t14 = std_textio_endfile(t6);
    t20 = (!(t14));
    if (t20 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(135, ng3);
    t2 = (t0 + 6563602);
    xsi_report(t2, 35U, (unsigned char)1);
    xsi_set_current_line(136, ng3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, 0, 8);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t0 + 6563586);
    t12 = *((int *)t3);
    t17 = (t12 - 0);
    t13 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t3));
    t22 = (t13 * 640U);
    t5 = (t0 + 6563594);
    t21 = *((int *)t5);
    t23 = (t21 - 0);
    t25 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t26 = (t22 + t25);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t6 = (t4 + t28);
    memcpy(t6, t2, 8U);

LAB18:
LAB15:    t2 = (t0 + 6563594);
    t18 = *((int *)t2);
    t3 = (t0 + 6563598);
    t19 = *((int *)t3);
    if (t18 == t19)
        goto LAB16;

LAB25:    t12 = (t18 + 1);
    t18 = t12;
    t4 = (t0 + 6563594);
    *((int *)t4) = t18;
    goto LAB13;

LAB17:    xsi_set_current_line(123, ng3);
    t8 = (t0 + 4160);
    t10 = (t0 + 3056U);
    t11 = (t0 + 3336U);
    std_textio_readline(STD_TEXTIO, t8, t10, t11);
    xsi_set_current_line(124, ng3);
    t2 = (t0 + 4160);
    t3 = (t0 + 3336U);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(127, ng3);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t14 = (t12 > 255);
    if (t14 != 0)
        goto LAB20;

LAB22:    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t14 = (t12 < 0);
    if (t14 != 0)
        goto LAB23;

LAB24:
LAB21:    xsi_set_current_line(133, ng3);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, t12, 8);
    t4 = (t0 + 2128U);
    t5 = *((char **)t4);
    t4 = (t0 + 6563586);
    t17 = *((int *)t4);
    t21 = (t17 - 0);
    t13 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t22 = (t13 * 640U);
    t6 = (t0 + 6563594);
    t23 = *((int *)t6);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t6));
    t26 = (t22 + t25);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t8 = (t5 + t28);
    t10 = (t7 + 12U);
    t29 = *((unsigned int *)t10);
    t29 = (t29 * 1U);
    memcpy(t8, t2, t29);
    goto LAB18;

LAB20:    xsi_set_current_line(128, ng3);
    t2 = (t0 + 1888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 255;
    goto LAB21;

LAB23:    xsi_set_current_line(130, ng3);
    t2 = (t0 + 1888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB21;

LAB26:    xsi_set_current_line(142, ng3);
    t3 = (t0 + 6563637);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6563586);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t30 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 10;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t17 = (10 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t13;
    t11 = xsi_base_array_concat(t11, t9, t30, (char)97, t3, t31, (char)97, t10, t7, (char)101);
    t33 = (t0 + 6563647);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 4;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t18 = (4 - 1);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t13;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t11, t9, (char)97, t33, t38, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t42 = xsi_int_to_mem(640);
    t43 = xsi_string_variable_get_image(t41, t40, t42);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t35, t36, (char)97, t43, t41, (char)101);
    t47 = (t7 + 12U);
    t13 = *((unsigned int *)t47);
    t22 = (10U + t13);
    t25 = (t22 + 4U);
    t26 = (t25 + 3U);
    xsi_report(t44, t26, 0);
    goto LAB27;

LAB31:    xsi_set_current_line(153, ng3);
    t17 = (640 - 1);
    t4 = (t0 + 6563704);
    *((int *)t4) = 0;
    t5 = (t0 + 6563708);
    *((int *)t5) = t17;
    t18 = 0;
    t19 = t17;

LAB34:    if (t18 <= t19)
        goto LAB35;

LAB37:    xsi_set_current_line(158, ng3);
    t2 = (t0 + 6563696);
    t12 = xsi_vhdl_mod(*((int *)t2), 64);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB32:    t2 = (t0 + 6563696);
    t15 = *((int *)t2);
    t3 = (t0 + 6563700);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB33;

LAB42:    t12 = (t15 + 1);
    t15 = t12;
    t4 = (t0 + 6563696);
    *((int *)t4) = t15;
    goto LAB30;

LAB35:    xsi_set_current_line(154, ng3);
    t6 = (t0 + 6563704);
    t8 = (t0 + 6563696);
    t10 = work_a_0600504565_3212880686_sub_1085491094_3579431146(t0, t7, *((int *)t6), *((int *)t8));
    t11 = (t0 + 2248U);
    t30 = *((char **)t11);
    t11 = (t0 + 6563696);
    t21 = *((int *)t11);
    t23 = (t21 - 0);
    t13 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t22 = (t13 * 640U);
    t32 = (t0 + 6563704);
    t24 = *((int *)t32);
    t48 = (t24 - 0);
    t25 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t26 = (t22 + t25);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t33 = (t30 + t28);
    t34 = (t7 + 12U);
    t29 = *((unsigned int *)t34);
    t29 = (t29 * 1U);
    memcpy(t33, t10, t29);

LAB36:    t2 = (t0 + 6563704);
    t18 = *((int *)t2);
    t3 = (t0 + 6563708);
    t19 = *((int *)t3);
    if (t18 == t19)
        goto LAB37;

LAB38:    t12 = (t18 + 1);
    t18 = t12;
    t4 = (t0 + 6563704);
    *((int *)t4) = t18;
    goto LAB34;

LAB39:    xsi_set_current_line(159, ng3);
    t3 = (t0 + 6563712);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6563696);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t30 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 10;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t17 = (10 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t13;
    t11 = xsi_base_array_concat(t11, t9, t30, (char)97, t3, t31, (char)97, t10, t7, (char)101);
    t33 = (t0 + 6563722);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 4;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t18 = (4 - 1);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t13;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t11, t9, (char)97, t33, t38, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t42 = xsi_int_to_mem(640);
    t43 = xsi_string_variable_get_image(t41, t40, t42);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t35, t36, (char)97, t43, t41, (char)101);
    t47 = (t7 + 12U);
    t13 = *((unsigned int *)t47);
    t22 = (10U + t13);
    t25 = (t22 + 4U);
    t26 = (t25 + 3U);
    xsi_report(t44, t26, 0);
    goto LAB40;

LAB43:    xsi_set_current_line(178, ng3);
    t12 = (640 - 1);
    t2 = (t0 + 6563944);
    *((int *)t2) = 0;
    t3 = (t0 + 6563948);
    *((int *)t3) = t12;
    t15 = 0;
    t16 = t12;

LAB47:    if (t15 <= t16)
        goto LAB48;

LAB50:    xsi_set_current_line(190, ng3);
    t2 = (t0 + 3160U);
    std_textio_file_close(t2);
    xsi_set_current_line(191, ng3);
    t2 = (t0 + 6563973);
    xsi_report(t2, 30U, 0);
    xsi_set_current_line(192, ng3);
    t2 = (t0 + 6564003);
    xsi_report(t2, 15U, 0);
    xsi_set_current_line(194, ng3);

LAB62:    *((char **)t1) = &&LAB63;

LAB1:    return;
LAB44:    xsi_set_current_line(171, ng3);
    t4 = (t0 + 6563850);
    xsi_report(t4, 29U, 0);
    goto LAB43;

LAB45:    xsi_set_current_line(173, ng3);
    t2 = (t0 + 6563879);
    xsi_report(t2, 35U, (unsigned char)3);
    goto LAB43;

LAB46:    xsi_set_current_line(175, ng3);
    t2 = (t0 + 6563914);
    xsi_report(t2, 30U, (unsigned char)3);
    goto LAB43;

LAB48:    xsi_set_current_line(179, ng3);
    t17 = (640 - 1);
    t4 = (t0 + 6563952);
    *((int *)t4) = 0;
    t5 = (t0 + 6563956);
    *((int *)t5) = t17;
    t18 = 0;
    t19 = t17;

LAB51:    if (t18 <= t19)
        goto LAB52;

LAB54:    xsi_set_current_line(185, ng3);
    t2 = (t0 + 6563944);
    t12 = xsi_vhdl_mod(*((int *)t2), 64);
    t14 = (t12 == 0);
    if (t14 != 0)
        goto LAB56;

LAB58:
LAB57:
LAB49:    t2 = (t0 + 6563944);
    t15 = *((int *)t2);
    t3 = (t0 + 6563948);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB50;

LAB59:    t12 = (t15 + 1);
    t15 = t12;
    t4 = (t0 + 6563944);
    *((int *)t4) = t15;
    goto LAB47;

LAB52:    xsi_set_current_line(180, ng3);
    t6 = (t0 + 4160);
    t8 = (t0 + 3408U);
    t10 = (t0 + 2248U);
    t11 = *((char **)t10);
    t10 = (t0 + 6563944);
    t21 = *((int *)t10);
    t23 = (t21 - 0);
    t13 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t10));
    t22 = (t13 * 640U);
    t30 = (t0 + 6563952);
    t24 = *((int *)t30);
    t48 = (t24 - 0);
    t25 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t30));
    t26 = (t22 + t25);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t32 = (t11 + t28);
    t33 = (t7 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 7;
    t34 = (t33 + 4U);
    *((int *)t34) = 0;
    t34 = (t33 + 8U);
    *((int *)t34) = -1;
    t49 = (0 - 7);
    t29 = (t49 * -1);
    t29 = (t29 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t29;
    t50 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t32, t7);
    std_textio_write5(STD_TEXTIO, t6, t8, t50, (unsigned char)0, 0);
    xsi_set_current_line(181, ng3);
    t2 = (t0 + 4160);
    t3 = (t0 + 3160U);
    t4 = (t0 + 3408U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB53:    t2 = (t0 + 6563952);
    t18 = *((int *)t2);
    t3 = (t0 + 6563956);
    t19 = *((int *)t3);
    if (t18 == t19)
        goto LAB54;

LAB55:    t12 = (t18 + 1);
    t18 = t12;
    t4 = (t0 + 6563952);
    *((int *)t4) = t18;
    goto LAB51;

LAB56:    xsi_set_current_line(186, ng3);
    t3 = (t0 + 6563960);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6563944);
    t8 = xsi_int_to_mem(*((int *)t6));
    t10 = xsi_string_variable_get_image(t7, t5, t8);
    t30 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 9;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t17 = (9 - 1);
    t13 = (t17 * 1);
    t13 = (t13 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t13;
    t11 = xsi_base_array_concat(t11, t9, t30, (char)97, t3, t31, (char)97, t10, t7, (char)101);
    t33 = (t0 + 6563969);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 4;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t18 = (4 - 1);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t13;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t11, t9, (char)97, t33, t38, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t42 = xsi_int_to_mem(640);
    t43 = xsi_string_variable_get_image(t41, t40, t42);
    t46 = ((STD_STANDARD) + 1008);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t35, t36, (char)97, t43, t41, (char)101);
    t47 = (t7 + 12U);
    t13 = *((unsigned int *)t47);
    t22 = (9U + t13);
    t25 = (t22 + 4U);
    t26 = (t25 + 3U);
    xsi_report(t44, t26, 0);
    goto LAB57;

LAB60:    goto LAB2;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

}


extern void work_a_0600504565_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0600504565_3212880686_p_0};
	static char *se[] = {(void *)work_a_0600504565_3212880686_sub_1085491094_3579431146};
	xsi_register_didat("work_a_0600504565_3212880686", "isim/gaussian_blur_filter_isim_beh.exe.sim/work/a_0600504565_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
