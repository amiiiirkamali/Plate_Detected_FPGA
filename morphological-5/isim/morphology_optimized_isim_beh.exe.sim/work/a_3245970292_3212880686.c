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
static const char *ng2 = "Function smart_noise_removal ended without a return statement";
static const char *ng3 = "Function final_smoothing ended without a return statement";
static const char *ng4 = "E:/project/Ise/Licens_Plate_Recognition/morphological-5/morphological.vhd";
extern char *STD_TEXTIO;



int work_a_3245970292_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
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

int work_a_3245970292_3212880686_sub_3687109365_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[848];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    char t34[8];
    char t40[8];
    char t46[8];
    char t52[8];
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
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    int t68;
    char *t69;
    char *t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    unsigned char t76;
    unsigned char t77;
    unsigned char t78;
    unsigned char t79;
    unsigned char t80;
    unsigned char t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;

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
    t43 = (t5 + 604U);
    t44 = ((STD_STANDARD) + 384);
    t45 = (t43 + 88U);
    *((char **)t45) = t44;
    t47 = (t43 + 56U);
    *((char **)t47) = t46;
    *((int *)t46) = 0;
    t48 = (t43 + 80U);
    *((unsigned int *)t48) = 4U;
    t49 = (t5 + 724U);
    t50 = ((STD_STANDARD) + 384);
    t51 = (t49 + 88U);
    *((char **)t51) = t50;
    t53 = (t49 + 56U);
    *((char **)t53) = t52;
    *((int *)t52) = 0;
    t54 = (t49 + 80U);
    *((unsigned int *)t54) = 4U;
    t55 = (t6 + 4U);
    t56 = (t2 != 0);
    if (t56 == 1)
        goto LAB3;

LAB2:    t57 = (t6 + 12U);
    *((char **)t57) = t7;
    t58 = (t6 + 20U);
    *((int *)t58) = t3;
    t59 = (t6 + 24U);
    *((int *)t59) = t4;
    t60 = (t4 - 0);
    t11 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t61 = (t11 * 640U);
    t62 = (t3 - 0);
    t63 = (t62 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t64 = (t61 + t63);
    t65 = (4U * t64);
    t66 = (0 + t65);
    t67 = (t2 + t66);
    t68 = *((int *)t67);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t69 = (t70 + 0);
    *((int *)t69) = t68;
    t8 = (t1 + 1408U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t1 + 1408U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t60 = (-(t13));
    t62 = t60;
    t68 = t10;

LAB4:    if (t62 <= t68)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t56 = (t10 >= 128);
    if (t56 != 0)
        goto LAB36;

LAB38:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t49 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t8 = (t1 + 1888U);
    t15 = *((char **)t8);
    t60 = *((int *)t15);
    t62 = (t13 - t60);
    t56 = (t10 > t62);
    if (t56 != 0)
        goto LAB44;

LAB46:    t0 = 0;

LAB1:    return t0;
LAB3:    *((char **)t55) = t2;
    goto LAB2;

LAB5:    t8 = (t1 + 1408U);
    t15 = *((char **)t8);
    t71 = *((int *)t15);
    t8 = (t1 + 1408U);
    t17 = *((char **)t8);
    t72 = *((int *)t17);
    t73 = (-(t72));
    t74 = t73;
    t75 = t71;

LAB8:    if (t74 <= t75)
        goto LAB9;

LAB11:
LAB6:    if (t62 == t68)
        goto LAB7;

LAB35:    t10 = (t62 + 1);
    t62 = t10;
    goto LAB4;

LAB9:    t76 = (t74 == 0);
    if (t76 == 1)
        goto LAB15;

LAB16:    t56 = (unsigned char)0;

LAB17:    if (t56 != 0)
        goto LAB12;

LAB14:
LAB13:    t10 = (t3 + t74);
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t10 = (t4 + t62);
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t78 = (t10 >= 0);
    if (t78 == 1)
        goto LAB28;

LAB29:    t77 = (unsigned char)0;

LAB30:    if (t77 == 1)
        goto LAB25;

LAB26:    t76 = (unsigned char)0;

LAB27:    if (t76 == 1)
        goto LAB22;

LAB23:    t56 = (unsigned char)0;

LAB24:    if (t56 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB10:    if (t74 == t75)
        goto LAB11;

LAB34:    t10 = (t74 + 1);
    t74 = t10;
    goto LAB8;

LAB12:    goto LAB10;

LAB15:    t77 = (t62 == 0);
    t56 = t77;
    goto LAB17;

LAB18:    goto LAB13;

LAB19:    t8 = (t43 + 56U);
    t18 = *((char **)t8);
    t72 = *((int *)t18);
    t8 = (t37 + 56U);
    t20 = *((char **)t8);
    t73 = *((int *)t20);
    t82 = (t73 - 0);
    t11 = (t82 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t73);
    t61 = (t11 * 640U);
    t8 = (t31 + 56U);
    t21 = *((char **)t8);
    t83 = *((int *)t21);
    t84 = (t83 - 0);
    t63 = (t84 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t83);
    t64 = (t61 + t63);
    t65 = (4U * t64);
    t66 = (0 + t65);
    t8 = (t2 + t66);
    t85 = *((int *)t8);
    t86 = (t72 + t85);
    t23 = (t43 + 56U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    *((int *)t23) = t86;
    t8 = (t49 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t13 = (t10 + 1);
    t8 = (t49 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t13;
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t13 = (t10 - 0);
    t11 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t10);
    t61 = (t11 * 640U);
    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t60 = *((int *)t14);
    t71 = (t60 - 0);
    t63 = (t71 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t60);
    t64 = (t61 + t63);
    t65 = (4U * t64);
    t66 = (0 + t65);
    t8 = (t2 + t66);
    t72 = *((int *)t8);
    t56 = (t72 >= 128);
    if (t56 != 0)
        goto LAB31;

LAB33:    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t13 = (t10 + 1);
    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t13;

LAB32:    goto LAB20;

LAB22:    t8 = (t37 + 56U);
    t17 = *((char **)t8);
    t71 = *((int *)t17);
    t81 = (t71 < 640);
    t56 = t81;
    goto LAB24;

LAB25:    t8 = (t37 + 56U);
    t15 = *((char **)t8);
    t60 = *((int *)t15);
    t80 = (t60 >= 0);
    t76 = t80;
    goto LAB27;

LAB28:    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t79 = (t13 < 640);
    t77 = t79;
    goto LAB30;

LAB31:    t15 = (t19 + 56U);
    t17 = *((char **)t15);
    t73 = *((int *)t17);
    t82 = (t73 + 1);
    t15 = (t19 + 56U);
    t18 = *((char **)t15);
    t15 = (t18 + 0);
    *((int *)t15) = t82;
    goto LAB32;

LAB36:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t8 = (t1 + 1888U);
    t15 = *((char **)t8);
    t60 = *((int *)t15);
    t76 = (t13 < t60);
    if (t76 != 0)
        goto LAB39;

LAB41:    t0 = 255;
    goto LAB1;

LAB37:    xsi_error(ng2);
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

LAB48:    goto LAB45;

}

int work_a_3245970292_3212880686_sub_551257112_3579431146(char *t1, char *t2, int t3, int t4)
{
    char t5[1088];
    char t6[32];
    char t7[32];
    char t16[8];
    char t22[8];
    char t28[8];
    char t34[8];
    char t40[8];
    char t46[8];
    char t52[8];
    char t58[8];
    char t64[8];
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
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    int t80;
    char *t81;
    char *t82;
    int t83;
    int t84;
    int t85;
    unsigned char t86;
    unsigned char t87;
    unsigned char t88;
    int t89;
    int t90;
    unsigned char t91;
    unsigned char t92;
    unsigned char t93;
    unsigned char t94;

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
    t43 = (t5 + 604U);
    t44 = ((STD_STANDARD) + 0);
    t45 = (t43 + 88U);
    *((char **)t45) = t44;
    t47 = (t43 + 56U);
    *((char **)t47) = t46;
    *((unsigned char *)t46) = (unsigned char)0;
    t48 = (t43 + 80U);
    *((unsigned int *)t48) = 1U;
    t49 = (t5 + 724U);
    t50 = ((STD_STANDARD) + 0);
    t51 = (t49 + 88U);
    *((char **)t51) = t50;
    t53 = (t49 + 56U);
    *((char **)t53) = t52;
    *((unsigned char *)t52) = (unsigned char)0;
    t54 = (t49 + 80U);
    *((unsigned int *)t54) = 1U;
    t55 = (t5 + 844U);
    t56 = ((STD_STANDARD) + 0);
    t57 = (t55 + 88U);
    *((char **)t57) = t56;
    t59 = (t55 + 56U);
    *((char **)t59) = t58;
    *((unsigned char *)t58) = (unsigned char)0;
    t60 = (t55 + 80U);
    *((unsigned int *)t60) = 1U;
    t61 = (t5 + 964U);
    t62 = ((STD_STANDARD) + 0);
    t63 = (t61 + 88U);
    *((char **)t63) = t62;
    t65 = (t61 + 56U);
    *((char **)t65) = t64;
    *((unsigned char *)t64) = (unsigned char)0;
    t66 = (t61 + 80U);
    *((unsigned int *)t66) = 1U;
    t67 = (t6 + 4U);
    t68 = (t2 != 0);
    if (t68 == 1)
        goto LAB3;

LAB2:    t69 = (t6 + 12U);
    *((char **)t69) = t7;
    t70 = (t6 + 20U);
    *((int *)t70) = t3;
    t71 = (t6 + 24U);
    *((int *)t71) = t4;
    t72 = (t4 - 0);
    t11 = (t72 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t73 = (t11 * 640U);
    t74 = (t3 - 0);
    t75 = (t74 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t79 = (t2 + t78);
    t80 = *((int *)t79);
    t81 = (t12 + 56U);
    t82 = *((char **)t81);
    t81 = (t82 + 0);
    *((int *)t81) = t80;
    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t68 = (t10 >= 128);
    if (t68 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t1 + 1528U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t13 = (t10 / 2);
    t8 = (t1 + 1528U);
    t14 = *((char **)t8);
    t72 = *((int *)t14);
    t74 = (t72 / 2);
    t80 = (-(t74));
    t83 = t80;
    t84 = t13;

LAB8:    if (t83 <= t84)
        goto LAB9;

LAB11:    t8 = (t1 + 1648U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t13 = (t10 / 2);
    t8 = (t1 + 1648U);
    t14 = *((char **)t8);
    t72 = *((int *)t14);
    t74 = (t72 / 2);
    t80 = (-(t74));
    t83 = t80;
    t84 = t13;

LAB28:    if (t83 <= t84)
        goto LAB29;

LAB31:    t8 = (t43 + 56U);
    t9 = *((char **)t8);
    t87 = *((unsigned char *)t9);
    if (t87 == 1)
        goto LAB54;

LAB55:    t86 = (unsigned char)0;

LAB56:    if (t86 == 1)
        goto LAB51;

LAB52:    t68 = (unsigned char)0;

LAB53:    if (t68 != 0)
        goto LAB48;

LAB50:
LAB49:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t67) = t2;
    goto LAB2;

LAB4:    t8 = (t12 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t0 = t13;
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t85 = (t3 + t83);
    t8 = (t31 + 56U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t85;
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t86 = (t10 >= 0);
    if (t86 == 1)
        goto LAB15;

LAB16:    t68 = (unsigned char)0;

LAB17:    if (t68 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    if (t83 == t84)
        goto LAB11;

LAB27:    t10 = (t83 + 1);
    t83 = t10;
    goto LAB8;

LAB12:    t72 = (t4 - 0);
    t11 = (t72 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t73 = (t11 * 640U);
    t8 = (t31 + 56U);
    t15 = *((char **)t8);
    t74 = *((int *)t15);
    t80 = (t74 - 0);
    t75 = (t80 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t74);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t8 = (t2 + t78);
    t85 = *((int *)t8);
    t88 = (t85 >= 128);
    if (t88 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB13;

LAB15:    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t87 = (t13 < 640);
    t68 = t87;
    goto LAB17;

LAB18:    t17 = (t19 + 56U);
    t18 = *((char **)t17);
    t89 = *((int *)t18);
    t90 = (t89 + 1);
    t17 = (t19 + 56U);
    t20 = *((char **)t17);
    t17 = (t20 + 0);
    *((int *)t17) = t90;
    t68 = (t83 < 0);
    if (t68 != 0)
        goto LAB21;

LAB23:
LAB22:    t68 = (t83 > 0);
    if (t68 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB19;

LAB21:    t8 = (t43 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB22;

LAB24:    t8 = (t49 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB25;

LAB29:    t85 = (t4 + t83);
    t8 = (t37 + 56U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t85;
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t86 = (t10 >= 0);
    if (t86 == 1)
        goto LAB35;

LAB36:    t68 = (unsigned char)0;

LAB37:    if (t68 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB30:    if (t83 == t84)
        goto LAB31;

LAB47:    t10 = (t83 + 1);
    t83 = t10;
    goto LAB28;

LAB32:    t8 = (t37 + 56U);
    t15 = *((char **)t8);
    t72 = *((int *)t15);
    t74 = (t72 - 0);
    t11 = (t74 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t72);
    t73 = (t11 * 640U);
    t80 = (t3 - 0);
    t75 = (t80 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t8 = (t2 + t78);
    t85 = *((int *)t8);
    t88 = (t85 >= 128);
    if (t88 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB33;

LAB35:    t8 = (t37 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t87 = (t13 < 640);
    t68 = t87;
    goto LAB37;

LAB38:    t17 = (t25 + 56U);
    t18 = *((char **)t17);
    t89 = *((int *)t18);
    t90 = (t89 + 1);
    t17 = (t25 + 56U);
    t20 = *((char **)t17);
    t17 = (t20 + 0);
    *((int *)t17) = t90;
    t68 = (t83 < 0);
    if (t68 != 0)
        goto LAB41;

LAB43:
LAB42:    t68 = (t83 > 0);
    if (t68 != 0)
        goto LAB44;

LAB46:
LAB45:    goto LAB39;

LAB41:    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB42;

LAB44:    t8 = (t61 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB45;

LAB48:    t8 = (t55 + 56U);
    t18 = *((char **)t8);
    t93 = *((unsigned char *)t18);
    if (t93 == 1)
        goto LAB60;

LAB61:    t8 = (t61 + 56U);
    t20 = *((char **)t8);
    t94 = *((unsigned char *)t20);
    t92 = t94;

LAB62:    if (t92 != 0)
        goto LAB57;

LAB59:
LAB58:    goto LAB49;

LAB51:    t8 = (t19 + 56U);
    t15 = *((char **)t8);
    t10 = *((int *)t15);
    t8 = (t1 + 2008U);
    t17 = *((char **)t8);
    t13 = *((int *)t17);
    t91 = (t10 >= t13);
    t68 = t91;
    goto LAB53;

LAB54:    t8 = (t49 + 56U);
    t14 = *((char **)t8);
    t88 = *((unsigned char *)t14);
    t86 = t88;
    goto LAB56;

LAB57:    t0 = 255;
    goto LAB1;

LAB60:    t92 = (unsigned char)1;
    goto LAB62;

LAB63:    goto LAB58;

LAB64:;
}

int work_a_3245970292_3212880686_sub_362460578_3579431146(char *t1, char *t2, int t3, int t4)
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
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    char *t49;
    char *t50;
    unsigned char t51;
    unsigned char t52;
    unsigned char t53;
    unsigned char t54;
    unsigned char t55;
    unsigned char t56;
    int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned char t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;

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
    *((int *)t22) = 255;
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
    t42 = (-(1));
    t43 = t42;
    t44 = 1;

LAB4:    if (t43 <= t44)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t37) = t2;
    goto LAB2;

LAB5:    t45 = (-(1));
    t46 = t45;
    t47 = 1;

LAB8:    if (t46 <= t47)
        goto LAB9;

LAB11:
LAB6:    if (t43 == t44)
        goto LAB7;

LAB28:    t10 = (t43 + 1);
    t43 = t10;
    goto LAB4;

LAB9:    t48 = (t3 + t46);
    t49 = (t25 + 56U);
    t50 = *((char **)t49);
    t49 = (t50 + 0);
    *((int *)t49) = t48;
    t10 = (t4 + t43);
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t53 = (t10 >= 0);
    if (t53 == 1)
        goto LAB21;

LAB22:    t52 = (unsigned char)0;

LAB23:    if (t52 == 1)
        goto LAB18;

LAB19:    t51 = (unsigned char)0;

LAB20:    if (t51 == 1)
        goto LAB15;

LAB16:    t38 = (unsigned char)0;

LAB17:    if (t38 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    if (t46 == t47)
        goto LAB11;

LAB27:    t10 = (t46 + 1);
    t46 = t10;
    goto LAB8;

LAB12:    t8 = (t31 + 56U);
    t18 = *((char **)t8);
    t48 = *((int *)t18);
    t57 = (t48 - 0);
    t11 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t48);
    t58 = (t11 * 640U);
    t8 = (t25 + 56U);
    t20 = *((char **)t8);
    t59 = *((int *)t20);
    t60 = (t59 - 0);
    t61 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t59);
    t62 = (t58 + t61);
    t63 = (4U * t62);
    t64 = (0 + t63);
    t8 = (t2 + t64);
    t65 = *((int *)t8);
    t21 = (t12 + 56U);
    t23 = *((char **)t21);
    t66 = *((int *)t23);
    t67 = (t65 > t66);
    if (t67 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB13;

LAB15:    t8 = (t31 + 56U);
    t17 = *((char **)t8);
    t45 = *((int *)t17);
    t56 = (t45 < 640);
    t38 = t56;
    goto LAB17;

LAB18:    t8 = (t31 + 56U);
    t15 = *((char **)t8);
    t42 = *((int *)t15);
    t55 = (t42 >= 0);
    t51 = t55;
    goto LAB20;

LAB21:    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t54 = (t13 < 640);
    t52 = t54;
    goto LAB23;

LAB24:    t21 = (t31 + 56U);
    t24 = *((char **)t21);
    t68 = *((int *)t24);
    t69 = (t68 - 0);
    t70 = (t69 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t68);
    t71 = (t70 * 640U);
    t21 = (t25 + 56U);
    t26 = *((char **)t21);
    t72 = *((int *)t26);
    t73 = (t72 - 0);
    t74 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t72);
    t75 = (t71 + t74);
    t76 = (4U * t75);
    t77 = (0 + t76);
    t21 = (t2 + t77);
    t78 = *((int *)t21);
    t27 = (t12 + 56U);
    t29 = *((char **)t27);
    t27 = (t29 + 0);
    *((int *)t27) = t78;
    goto LAB25;

LAB29:;
}

int work_a_3245970292_3212880686_sub_264419849_3579431146(char *t1, char *t2, int t3, int t4)
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

int work_a_3245970292_3212880686_sub_1299665442_3579431146(char *t1, char *t2, int t3, int t4)
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
    int t60;
    unsigned char t61;
    unsigned char t62;
    unsigned char t63;
    unsigned char t64;
    unsigned char t65;
    int t66;
    unsigned char t67;
    int t68;
    int t69;
    int t70;

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

LAB7:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t48 = (t13 / 2);
    t44 = (t10 > t48);
    if (t44 != 0)
        goto LAB29;

LAB31:    t0 = 0;

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

LAB28:    t10 = (t13 + 1);
    t13 = t10;
    goto LAB4;

LAB9:    t60 = (t3 + t56);
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t60;
    t10 = (t4 + t13);
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t63 = (t10 >= 0);
    if (t63 == 1)
        goto LAB21;

LAB22:    t62 = (unsigned char)0;

LAB23:    if (t62 == 1)
        goto LAB18;

LAB19:    t61 = (unsigned char)0;

LAB20:    if (t61 == 1)
        goto LAB15;

LAB16:    t44 = (unsigned char)0;

LAB17:    if (t44 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    if (t56 == t59)
        goto LAB11;

LAB27:    t10 = (t56 + 1);
    t56 = t10;
    goto LAB8;

LAB12:    t8 = (t25 + 56U);
    t18 = *((char **)t8);
    t68 = *((int *)t18);
    t69 = (t68 + 1);
    t8 = (t25 + 56U);
    t20 = *((char **)t8);
    t8 = (t20 + 0);
    *((int *)t8) = t69;
    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t50 = (t10 - 0);
    t11 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t10);
    t49 = (t11 * 640U);
    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t60 = *((int *)t14);
    t66 = (t60 - 0);
    t51 = (t66 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t60);
    t52 = (t49 + t51);
    t53 = (4U * t52);
    t54 = (0 + t53);
    t8 = (t2 + t54);
    t68 = *((int *)t8);
    t44 = (t68 >= 128);
    if (t44 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB13;

LAB15:    t8 = (t37 + 56U);
    t17 = *((char **)t8);
    t66 = *((int *)t17);
    t67 = (t66 < 640);
    t44 = t67;
    goto LAB17;

LAB18:    t8 = (t37 + 56U);
    t15 = *((char **)t8);
    t60 = *((int *)t15);
    t65 = (t60 >= 0);
    t61 = t65;
    goto LAB20;

LAB21:    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t50 = *((int *)t14);
    t64 = (t50 < 640);
    t62 = t64;
    goto LAB23;

LAB24:    t15 = (t19 + 56U);
    t17 = *((char **)t15);
    t69 = *((int *)t17);
    t70 = (t69 + 1);
    t15 = (t19 + 56U);
    t18 = *((char **)t15);
    t15 = (t18 + 0);
    *((int *)t15) = t70;
    goto LAB25;

LAB29:    t0 = 255;
    goto LAB1;

LAB30:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB32:    goto LAB30;

LAB33:    goto LAB30;

}

static void work_a_3245970292_3212880686_p_0(char *t0)
{
    char t10[16];
    char t12[16];
    char t17[16];
    char t20[16];
    char t22[16];
    char t26[16];
    char t30[16];
    char t35[16];
    char t37[16];
    char t55[16];
    char t60[16];
    char t65[16];
    char t67[16];
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
    char *t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t38;
    char *t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t64;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    int t73;

LAB0:    t1 = (t0 + 4472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(240, ng4);
    t2 = (t0 + 6562776);
    xsi_report(t2, 43U, 0);
    xsi_set_current_line(241, ng4);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3176U);
    t4 = (t0 + 6562819);
    t6 = (t0 + 8808U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(242, ng4);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(246, ng4);
    t2 = (t0 + 6562939);
    t4 = ((STD_STANDARD) + 384);
    t5 = xsi_int_to_mem(640);
    t6 = xsi_string_variable_get_image(t10, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t13 = (t17 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 13;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (13 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t9 = xsi_base_array_concat(t9, t12, t11, (char)97, t2, t17, (char)97, t6, t10, (char)101);
    t14 = (t0 + 6562952);
    t21 = ((STD_STANDARD) + 1008);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 1;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (1 - 1);
    t16 = (t25 * 1);
    t16 = (t16 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t16;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t9, t12, (char)97, t14, t22, (char)101);
    t24 = ((STD_STANDARD) + 384);
    t27 = xsi_int_to_mem(640);
    t28 = xsi_string_variable_get_image(t26, t24, t27);
    t31 = ((STD_STANDARD) + 1008);
    t29 = xsi_base_array_concat(t29, t30, t31, (char)97, t19, t20, (char)97, t28, t26, (char)101);
    t32 = (t0 + 6562953);
    t36 = ((STD_STANDARD) + 1008);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 1;
    t39 = (t38 + 4U);
    *((int *)t39) = 3;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t40 = (3 - 1);
    t16 = (t40 * 1);
    t16 = (t16 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t16;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t29, t30, (char)97, t32, t37, (char)101);
    t16 = (13U + 3U);
    t41 = (t16 + 1U);
    t42 = (t41 + 3U);
    t43 = (t42 + 3U);
    xsi_report(t34, t43, 0);
    xsi_set_current_line(247, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562956);
    *((int *)t2) = 0;
    t3 = (t0 + 6562960);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB7:    if (t25 <= t40)
        goto LAB8;

LAB10:    xsi_set_current_line(263, ng4);
    t2 = (t0 + 3176U);
    std_textio_file_close(t2);
    xsi_set_current_line(268, ng4);
    t2 = (t0 + 6562988);
    xsi_report(t2, 27U, 0);
    xsi_set_current_line(269, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6563015);
    *((int *)t2) = 0;
    t3 = (t0 + 6563019);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB23:    if (t25 <= t40)
        goto LAB24;

LAB26:    xsi_set_current_line(280, ng4);
    t2 = (t0 + 6563046);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(281, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6563074);
    *((int *)t2) = 0;
    t3 = (t0 + 6563078);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB36:    if (t25 <= t40)
        goto LAB37;

LAB39:    xsi_set_current_line(292, ng4);
    t2 = (t0 + 6563105);
    xsi_report(t2, 40U, 0);
    xsi_set_current_line(293, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6563145);
    *((int *)t2) = 0;
    t3 = (t0 + 6563149);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB49:    if (t25 <= t40)
        goto LAB50;

LAB52:    xsi_set_current_line(300, ng4);
    t2 = (t0 + 6563161);
    xsi_report(t2, 38U, 0);
    xsi_set_current_line(301, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6563199);
    *((int *)t2) = 0;
    t3 = (t0 + 6563203);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB59:    if (t25 <= t40)
        goto LAB60;

LAB62:    xsi_set_current_line(308, ng4);
    t2 = (t0 + 6563215);
    xsi_report(t2, 27U, 0);
    xsi_set_current_line(309, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6563242);
    *((int *)t2) = 0;
    t3 = (t0 + 6563246);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB69:    if (t25 <= t40)
        goto LAB70;

LAB72:    xsi_set_current_line(316, ng4);
    t2 = (t0 + 6563258);
    xsi_report(t2, 20U, 0);
    xsi_set_current_line(317, ng4);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3280U);
    t4 = (t0 + 6563278);
    t6 = (t0 + 8824U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(318, ng4);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB79;

LAB81:
LAB80:    xsi_set_current_line(322, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6563388);
    *((int *)t2) = 0;
    t3 = (t0 + 6563392);
    *((int *)t3) = t15;
    t25 = 0;
    t40 = t15;

LAB82:    if (t25 <= t40)
        goto LAB83;

LAB85:    xsi_set_current_line(333, ng4);
    t2 = (t0 + 3280U);
    std_textio_file_close(t2);
    xsi_set_current_line(336, ng4);
    t2 = (t0 + 6563419);
    xsi_report(t2, 32U, 0);
    xsi_set_current_line(337, ng4);
    t2 = (t0 + 6563451);
    t4 = (t0 + 6563463);
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
    t13 = (t0 + 8808U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (12U + 46U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(338, ng4);
    t2 = (t0 + 6563509);
    t4 = (t0 + 6563521);
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
    t13 = (t0 + 8824U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (12U + 41U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(339, ng4);
    t2 = (t0 + 6563562);
    t4 = ((STD_STANDARD) + 384);
    t5 = xsi_int_to_mem(640);
    t6 = xsi_string_variable_get_image(t10, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t13 = (t17 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 13;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (13 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t9 = xsi_base_array_concat(t9, t12, t11, (char)97, t2, t17, (char)97, t6, t10, (char)101);
    t14 = (t0 + 6563575);
    t21 = ((STD_STANDARD) + 1008);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 1;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (1 - 1);
    t16 = (t25 * 1);
    t16 = (t16 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t16;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t9, t12, (char)97, t14, t22, (char)101);
    t24 = ((STD_STANDARD) + 384);
    t27 = xsi_int_to_mem(640);
    t28 = xsi_string_variable_get_image(t26, t24, t27);
    t31 = ((STD_STANDARD) + 1008);
    t29 = xsi_base_array_concat(t29, t30, t31, (char)97, t19, t20, (char)97, t28, t26, (char)101);
    t16 = (13U + 3U);
    t41 = (t16 + 1U);
    t42 = (t41 + 3U);
    xsi_report(t29, t42, 0);
    xsi_set_current_line(340, ng4);
    t2 = (t0 + 6563576);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(341, ng4);
    t2 = (t0 + 6563576);
    xsi_report(t2, 17U, 0);
    xsi_set_current_line(342, ng4);
    t2 = (t0 + 6563593);
    xsi_report(t2, 40U, 0);
    xsi_set_current_line(343, ng4);
    t2 = (t0 + 6563633);
    xsi_report(t2, 37U, 0);
    xsi_set_current_line(344, ng4);
    t2 = (t0 + 6563670);
    xsi_report(t2, 35U, 0);
    xsi_set_current_line(345, ng4);
    t2 = (t0 + 6563705);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(346, ng4);
    t2 = (t0 + 6563733);
    xsi_report(t2, 38U, 0);
    xsi_set_current_line(347, ng4);
    t2 = (t0 + 6563771);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(348, ng4);
    t2 = (t0 + 6563771);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(349, ng4);
    t2 = (t0 + 6563796);
    xsi_report(t2, 21U, 0);
    xsi_set_current_line(350, ng4);
    t2 = (t0 + 6563817);
    xsi_report(t2, 27U, 0);
    xsi_set_current_line(351, ng4);
    t2 = (t0 + 6563844);
    xsi_report(t2, 29U, 0);
    xsi_set_current_line(352, ng4);
    t2 = (t0 + 6563873);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(353, ng4);
    t2 = (t0 + 6563891);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(355, ng4);

LAB97:    *((char **)t1) = &&LAB98;

LAB1:    return;
LAB4:    xsi_set_current_line(243, ng4);
    t2 = (t0 + 6562865);
    t5 = (t0 + 6562893);
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
    t14 = (t0 + 8808U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 46U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB5;

LAB8:    xsi_set_current_line(248, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6562964);
    *((int *)t4) = 0;
    t5 = (t0 + 6562968);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB11:    if (t45 <= t46)
        goto LAB12;

LAB14:    xsi_set_current_line(258, ng4);
    t2 = (t0 + 6562956);
    t15 = xsi_vhdl_mod(*((int *)t2), 64);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB9:    t2 = (t0 + 6562956);
    t25 = *((int *)t2);
    t3 = (t0 + 6562960);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB10;

LAB22:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6562956);
    *((int *)t4) = t25;
    goto LAB7;

LAB12:    xsi_set_current_line(249, ng4);
    t6 = (t0 + 3176U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(254, ng4);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 6562956);
    t15 = *((int *)t2);
    t44 = (t15 - 0);
    t16 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t41 = (t16 * 640U);
    t4 = (t0 + 6562964);
    t47 = *((int *)t4);
    t48 = (t47 - 0);
    t42 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t4));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t5 = (t3 + t52);
    *((int *)t5) = 0;

LAB16:
LAB13:    t2 = (t0 + 6562964);
    t45 = *((int *)t2);
    t3 = (t0 + 6562968);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB14;

LAB18:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6562964);
    *((int *)t4) = t45;
    goto LAB11;

LAB15:    xsi_set_current_line(250, ng4);
    t9 = (t0 + 4280);
    t11 = (t0 + 3176U);
    t13 = (t0 + 3456U);
    std_textio_readline(STD_TEXTIO, t9, t11, t13);
    xsi_set_current_line(251, ng4);
    t2 = (t0 + 4280);
    t3 = (t0 + 3456U);
    t4 = (t0 + 2248U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(252, ng4);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t44 = work_a_3245970292_3212880686_sub_2489298628_3057020925(t0, t15, 0, 255);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 6562956);
    t47 = *((int *)t2);
    t48 = (t47 - 0);
    t16 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t41 = (t16 * 640U);
    t5 = (t0 + 6562964);
    t49 = *((int *)t5);
    t50 = (t49 - 0);
    t42 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t5));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t6 = (t4 + t52);
    *((int *)t6) = t44;
    goto LAB16;

LAB19:    xsi_set_current_line(259, ng4);
    t3 = (t0 + 6562972);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6562956);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 11;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t44 = (11 - 1);
    t16 = (t44 * 1);
    t16 = (t16 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t17, (char)97, t11, t10, (char)101);
    t19 = (t0 + 6562983);
    t24 = ((STD_STANDARD) + 1008);
    t27 = (t22 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t45 = (1 - 1);
    t16 = (t45 * 1);
    t16 = (t16 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t16;
    t23 = xsi_base_array_concat(t23, t20, t24, (char)97, t13, t12, (char)97, t19, t22, (char)101);
    t28 = ((STD_STANDARD) + 384);
    t29 = xsi_int_to_mem(640);
    t31 = xsi_string_variable_get_image(t26, t28, t29);
    t33 = ((STD_STANDARD) + 1008);
    t32 = xsi_base_array_concat(t32, t30, t33, (char)97, t23, t20, (char)97, t31, t26, (char)101);
    t34 = (t0 + 6562984);
    t39 = ((STD_STANDARD) + 1008);
    t53 = (t37 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 2;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t46 = (2 - 1);
    t16 = (t46 * 1);
    t16 = (t16 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t16;
    t38 = xsi_base_array_concat(t38, t35, t39, (char)97, t32, t30, (char)97, t34, t37, (char)101);
    t54 = ((STD_STANDARD) + 384);
    t56 = (t0 + 6562956);
    t47 = *((int *)t56);
    t48 = (t47 * 100);
    t49 = (t48 / 640);
    t57 = xsi_int_to_mem(t49);
    t58 = xsi_string_variable_get_image(t55, t54, t57);
    t61 = ((STD_STANDARD) + 1008);
    t59 = xsi_base_array_concat(t59, t60, t61, (char)97, t38, t35, (char)97, t58, t55, (char)101);
    t62 = (t0 + 6562986);
    t66 = ((STD_STANDARD) + 1008);
    t68 = (t67 + 0U);
    t69 = (t68 + 0U);
    *((int *)t69) = 1;
    t69 = (t68 + 4U);
    *((int *)t69) = 2;
    t69 = (t68 + 8U);
    *((int *)t69) = 1;
    t50 = (2 - 1);
    t16 = (t50 * 1);
    t16 = (t16 + 1);
    t69 = (t68 + 12U);
    *((unsigned int *)t69) = t16;
    t64 = xsi_base_array_concat(t64, t65, t66, (char)97, t59, t60, (char)97, t62, t67, (char)101);
    t69 = (t10 + 12U);
    t16 = *((unsigned int *)t69);
    t41 = (11U + t16);
    t42 = (t41 + 1U);
    t43 = (t42 + 3U);
    t51 = (t43 + 2U);
    t70 = (t55 + 12U);
    t52 = *((unsigned int *)t70);
    t71 = (t51 + t52);
    t72 = (t71 + 2U);
    xsi_report(t64, t72, 0);
    goto LAB20;

LAB24:    xsi_set_current_line(270, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6563023);
    *((int *)t4) = 0;
    t5 = (t0 + 6563027);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB27:    if (t45 <= t46)
        goto LAB28;

LAB30:    xsi_set_current_line(274, ng4);
    t2 = (t0 + 6563015);
    t15 = xsi_vhdl_mod(*((int *)t2), 128);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB25:    t2 = (t0 + 6563015);
    t25 = *((int *)t2);
    t3 = (t0 + 6563019);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB26;

LAB35:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6563015);
    *((int *)t4) = t25;
    goto LAB23;

LAB28:    xsi_set_current_line(271, ng4);
    t6 = (t0 + 2488U);
    t9 = *((char **)t6);
    t6 = (t0 + 6563023);
    t11 = (t0 + 6563015);
    t47 = work_a_3245970292_3212880686_sub_3687109365_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t13 = (t0 + 6563015);
    t48 = *((int *)t13);
    t49 = (t48 - 0);
    t16 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t41 = (t16 * 640U);
    t18 = (t0 + 6563023);
    t50 = *((int *)t18);
    t73 = (t50 - 0);
    t42 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t18));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t19 = (t14 + t52);
    *((int *)t19) = t47;

LAB29:    t2 = (t0 + 6563023);
    t45 = *((int *)t2);
    t3 = (t0 + 6563027);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB30;

LAB31:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6563023);
    *((int *)t4) = t45;
    goto LAB27;

LAB32:    xsi_set_current_line(275, ng4);
    t3 = (t0 + 6563031);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6563015);
    t44 = *((int *)t6);
    t45 = (t44 * 100);
    t46 = (t45 / 640);
    t9 = xsi_int_to_mem(t46);
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 9;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t47 = (9 - 1);
    t16 = (t47 * 1);
    t16 = (t16 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t17, (char)97, t11, t10, (char)101);
    t19 = (t0 + 6563040);
    t24 = ((STD_STANDARD) + 1008);
    t27 = (t22 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 6;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t48 = (6 - 1);
    t16 = (t48 * 1);
    t16 = (t16 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t16;
    t23 = xsi_base_array_concat(t23, t20, t24, (char)97, t13, t12, (char)97, t19, t22, (char)101);
    t28 = (t10 + 12U);
    t16 = *((unsigned int *)t28);
    t41 = (9U + t16);
    t42 = (t41 + 6U);
    xsi_report(t23, t42, 0);
    goto LAB33;

LAB37:    xsi_set_current_line(282, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6563082);
    *((int *)t4) = 0;
    t5 = (t0 + 6563086);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB40:    if (t45 <= t46)
        goto LAB41;

LAB43:    xsi_set_current_line(286, ng4);
    t2 = (t0 + 6563074);
    t15 = xsi_vhdl_mod(*((int *)t2), 128);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB45;

LAB47:
LAB46:
LAB38:    t2 = (t0 + 6563074);
    t25 = *((int *)t2);
    t3 = (t0 + 6563078);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB39;

LAB48:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6563074);
    *((int *)t4) = t25;
    goto LAB36;

LAB41:    xsi_set_current_line(283, ng4);
    t6 = (t0 + 2728U);
    t9 = *((char **)t6);
    t6 = (t0 + 6563082);
    t11 = (t0 + 6563074);
    t47 = work_a_3245970292_3212880686_sub_551257112_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2848U);
    t14 = *((char **)t13);
    t13 = (t0 + 6563074);
    t48 = *((int *)t13);
    t49 = (t48 - 0);
    t16 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t41 = (t16 * 640U);
    t18 = (t0 + 6563082);
    t50 = *((int *)t18);
    t73 = (t50 - 0);
    t42 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t18));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t19 = (t14 + t52);
    *((int *)t19) = t47;

LAB42:    t2 = (t0 + 6563082);
    t45 = *((int *)t2);
    t3 = (t0 + 6563086);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB43;

LAB44:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6563082);
    *((int *)t4) = t45;
    goto LAB40;

LAB45:    xsi_set_current_line(287, ng4);
    t3 = (t0 + 6563090);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6563074);
    t44 = *((int *)t6);
    t45 = (t44 * 100);
    t46 = (t45 / 640);
    t9 = xsi_int_to_mem(t46);
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 9;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t47 = (9 - 1);
    t16 = (t47 * 1);
    t16 = (t16 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t17, (char)97, t11, t10, (char)101);
    t19 = (t0 + 6563099);
    t24 = ((STD_STANDARD) + 1008);
    t27 = (t22 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 6;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t48 = (6 - 1);
    t16 = (t48 * 1);
    t16 = (t16 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t16;
    t23 = xsi_base_array_concat(t23, t20, t24, (char)97, t13, t12, (char)97, t19, t22, (char)101);
    t28 = (t10 + 12U);
    t16 = *((unsigned int *)t28);
    t41 = (9U + t16);
    t42 = (t41 + 6U);
    xsi_report(t23, t42, 0);
    goto LAB46;

LAB50:    xsi_set_current_line(294, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6563153);
    *((int *)t4) = 0;
    t5 = (t0 + 6563157);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB53:    if (t45 <= t46)
        goto LAB54;

LAB56:
LAB51:    t2 = (t0 + 6563145);
    t25 = *((int *)t2);
    t3 = (t0 + 6563149);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB52;

LAB58:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6563145);
    *((int *)t4) = t25;
    goto LAB49;

LAB54:    xsi_set_current_line(295, ng4);
    t6 = (t0 + 2848U);
    t9 = *((char **)t6);
    t6 = (t0 + 6563153);
    t11 = (t0 + 6563145);
    t47 = work_a_3245970292_3212880686_sub_362460578_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t13 = (t0 + 6563145);
    t48 = *((int *)t13);
    t49 = (t48 - 0);
    t16 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t41 = (t16 * 640U);
    t18 = (t0 + 6563153);
    t50 = *((int *)t18);
    t73 = (t50 - 0);
    t42 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t18));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t19 = (t14 + t52);
    *((int *)t19) = t47;

LAB55:    t2 = (t0 + 6563153);
    t45 = *((int *)t2);
    t3 = (t0 + 6563157);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB56;

LAB57:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6563153);
    *((int *)t4) = t45;
    goto LAB53;

LAB60:    xsi_set_current_line(302, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6563207);
    *((int *)t4) = 0;
    t5 = (t0 + 6563211);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB63:    if (t45 <= t46)
        goto LAB64;

LAB66:
LAB61:    t2 = (t0 + 6563199);
    t25 = *((int *)t2);
    t3 = (t0 + 6563203);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB62;

LAB68:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6563199);
    *((int *)t4) = t25;
    goto LAB59;

LAB64:    xsi_set_current_line(303, ng4);
    t6 = (t0 + 2728U);
    t9 = *((char **)t6);
    t6 = (t0 + 6563207);
    t11 = (t0 + 6563199);
    t47 = work_a_3245970292_3212880686_sub_264419849_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2848U);
    t14 = *((char **)t13);
    t13 = (t0 + 6563199);
    t48 = *((int *)t13);
    t49 = (t48 - 0);
    t16 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t41 = (t16 * 640U);
    t18 = (t0 + 6563207);
    t50 = *((int *)t18);
    t73 = (t50 - 0);
    t42 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t18));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t19 = (t14 + t52);
    *((int *)t19) = t47;

LAB65:    t2 = (t0 + 6563207);
    t45 = *((int *)t2);
    t3 = (t0 + 6563211);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB66;

LAB67:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6563207);
    *((int *)t4) = t45;
    goto LAB63;

LAB70:    xsi_set_current_line(310, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6563250);
    *((int *)t4) = 0;
    t5 = (t0 + 6563254);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB73:    if (t45 <= t46)
        goto LAB74;

LAB76:
LAB71:    t2 = (t0 + 6563242);
    t25 = *((int *)t2);
    t3 = (t0 + 6563246);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB72;

LAB78:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6563242);
    *((int *)t4) = t25;
    goto LAB69;

LAB74:    xsi_set_current_line(311, ng4);
    t6 = (t0 + 2848U);
    t9 = *((char **)t6);
    t6 = (t0 + 6563250);
    t11 = (t0 + 6563242);
    t47 = work_a_3245970292_3212880686_sub_1299665442_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t13 = (t0 + 6563242);
    t48 = *((int *)t13);
    t49 = (t48 - 0);
    t16 = (t49 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t41 = (t16 * 640U);
    t18 = (t0 + 6563250);
    t50 = *((int *)t18);
    t73 = (t50 - 0);
    t42 = (t73 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t18));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t19 = (t14 + t52);
    *((int *)t19) = t47;

LAB75:    t2 = (t0 + 6563250);
    t45 = *((int *)t2);
    t3 = (t0 + 6563254);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB76;

LAB77:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6563250);
    *((int *)t4) = t45;
    goto LAB73;

LAB79:    xsi_set_current_line(319, ng4);
    t2 = (t0 + 6563319);
    t5 = (t0 + 6563347);
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
    t14 = (t0 + 8824U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 41U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB80;

LAB83:    xsi_set_current_line(323, ng4);
    t44 = (640 - 1);
    t4 = (t0 + 6563396);
    *((int *)t4) = 0;
    t5 = (t0 + 6563400);
    *((int *)t5) = t44;
    t45 = 0;
    t46 = t44;

LAB86:    if (t45 <= t46)
        goto LAB87;

LAB89:    xsi_set_current_line(328, ng4);
    t2 = (t0 + 6563388);
    t15 = xsi_vhdl_mod(*((int *)t2), 64);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB91;

LAB93:
LAB92:
LAB84:    t2 = (t0 + 6563388);
    t25 = *((int *)t2);
    t3 = (t0 + 6563392);
    t40 = *((int *)t3);
    if (t25 == t40)
        goto LAB85;

LAB94:    t15 = (t25 + 1);
    t25 = t15;
    t4 = (t0 + 6563388);
    *((int *)t4) = t25;
    goto LAB82;

LAB87:    xsi_set_current_line(324, ng4);
    t6 = (t0 + 4280);
    t9 = (t0 + 3528U);
    t11 = (t0 + 2608U);
    t13 = *((char **)t11);
    t11 = (t0 + 6563388);
    t47 = *((int *)t11);
    t48 = (t47 - 0);
    t16 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t41 = (t16 * 640U);
    t14 = (t0 + 6563396);
    t49 = *((int *)t14);
    t50 = (t49 - 0);
    t42 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t14));
    t43 = (t41 + t42);
    t51 = (4U * t43);
    t52 = (0 + t51);
    t18 = (t13 + t52);
    t73 = *((int *)t18);
    std_textio_write5(STD_TEXTIO, t6, t9, t73, (unsigned char)0, 0);
    xsi_set_current_line(325, ng4);
    t2 = (t0 + 4280);
    t3 = (t0 + 3280U);
    t4 = (t0 + 3528U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB88:    t2 = (t0 + 6563396);
    t45 = *((int *)t2);
    t3 = (t0 + 6563400);
    t46 = *((int *)t3);
    if (t45 == t46)
        goto LAB89;

LAB90:    t15 = (t45 + 1);
    t45 = t15;
    t4 = (t0 + 6563396);
    *((int *)t4) = t45;
    goto LAB86;

LAB91:    xsi_set_current_line(329, ng4);
    t3 = (t0 + 6563404);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6563388);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 10;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t44 = (10 - 1);
    t16 = (t44 * 1);
    t16 = (t16 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t17, (char)97, t11, t10, (char)101);
    t19 = (t0 + 6563414);
    t24 = ((STD_STANDARD) + 1008);
    t27 = (t22 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t45 = (1 - 1);
    t16 = (t45 * 1);
    t16 = (t16 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t16;
    t23 = xsi_base_array_concat(t23, t20, t24, (char)97, t13, t12, (char)97, t19, t22, (char)101);
    t28 = ((STD_STANDARD) + 384);
    t29 = xsi_int_to_mem(640);
    t31 = xsi_string_variable_get_image(t26, t28, t29);
    t33 = ((STD_STANDARD) + 1008);
    t32 = xsi_base_array_concat(t32, t30, t33, (char)97, t23, t20, (char)97, t31, t26, (char)101);
    t34 = (t0 + 6563415);
    t39 = ((STD_STANDARD) + 1008);
    t53 = (t37 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = 2;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t46 = (2 - 1);
    t16 = (t46 * 1);
    t16 = (t16 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t16;
    t38 = xsi_base_array_concat(t38, t35, t39, (char)97, t32, t30, (char)97, t34, t37, (char)101);
    t54 = ((STD_STANDARD) + 384);
    t56 = (t0 + 6563388);
    t47 = *((int *)t56);
    t48 = (t47 * 100);
    t49 = (t48 / 640);
    t57 = xsi_int_to_mem(t49);
    t58 = xsi_string_variable_get_image(t55, t54, t57);
    t61 = ((STD_STANDARD) + 1008);
    t59 = xsi_base_array_concat(t59, t60, t61, (char)97, t38, t35, (char)97, t58, t55, (char)101);
    t62 = (t0 + 6563417);
    t66 = ((STD_STANDARD) + 1008);
    t68 = (t67 + 0U);
    t69 = (t68 + 0U);
    *((int *)t69) = 1;
    t69 = (t68 + 4U);
    *((int *)t69) = 2;
    t69 = (t68 + 8U);
    *((int *)t69) = 1;
    t50 = (2 - 1);
    t16 = (t50 * 1);
    t16 = (t16 + 1);
    t69 = (t68 + 12U);
    *((unsigned int *)t69) = t16;
    t64 = xsi_base_array_concat(t64, t65, t66, (char)97, t59, t60, (char)97, t62, t67, (char)101);
    t69 = (t10 + 12U);
    t16 = *((unsigned int *)t69);
    t41 = (10U + t16);
    t42 = (t41 + 1U);
    t43 = (t42 + 3U);
    t51 = (t43 + 2U);
    t70 = (t55 + 12U);
    t52 = *((unsigned int *)t70);
    t71 = (t51 + t52);
    t72 = (t71 + 2U);
    xsi_report(t64, t72, 0);
    goto LAB92;

LAB95:    goto LAB2;

LAB96:    goto LAB95;

LAB98:    goto LAB96;

}


extern void work_a_3245970292_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3245970292_3212880686_p_0};
	static char *se[] = {(void *)work_a_3245970292_3212880686_sub_2489298628_3057020925,(void *)work_a_3245970292_3212880686_sub_3687109365_3579431146,(void *)work_a_3245970292_3212880686_sub_551257112_3579431146,(void *)work_a_3245970292_3212880686_sub_362460578_3579431146,(void *)work_a_3245970292_3212880686_sub_264419849_3579431146,(void *)work_a_3245970292_3212880686_sub_1299665442_3579431146};
	xsi_register_didat("work_a_3245970292_3212880686", "isim/morphology_optimized_isim_beh.exe.sim/work/a_3245970292_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
