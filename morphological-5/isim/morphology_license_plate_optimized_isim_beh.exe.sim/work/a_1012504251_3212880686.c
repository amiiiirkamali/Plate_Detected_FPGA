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
static const char *ng3 = "Function final_cleanup ended without a return statement";
static const char *ng4 = "E:/project/Ise/Licens_Plate_Recognition/morphological-5/morphological.vhd";
extern char *STD_TEXTIO;



int work_a_1012504251_3212880686_sub_2489298628_3057020925(char *t1, int t2, int t3, int t4)
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

int work_a_1012504251_3212880686_sub_3711422463_3579431146(char *t1, char *t2, int t3, int t4)
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
    unsigned char t72;
    unsigned char t73;
    unsigned char t74;
    unsigned char t75;
    int t76;
    unsigned char t77;
    int t78;
    unsigned char t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    unsigned char t85;
    int t86;
    int t87;

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
    *((int *)t34) = 0;
    t36 = (t31 + 80U);
    *((unsigned int *)t36) = 4U;
    t37 = (t5 + 484U);
    t38 = ((STD_STANDARD) + 384);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    *((int *)t40) = 0;
    t42 = (t37 + 80U);
    *((unsigned int *)t42) = 4U;
    t43 = (t5 + 604U);
    t44 = ((STD_STANDARD) + 384);
    t45 = (t43 + 88U);
    *((char **)t45) = t44;
    t47 = (t43 + 56U);
    *((char **)t47) = t46;
    xsi_type_set_default_value(t44, t46, 0);
    t48 = (t43 + 80U);
    *((unsigned int *)t48) = 4U;
    t49 = (t5 + 724U);
    t50 = ((STD_STANDARD) + 384);
    t51 = (t49 + 88U);
    *((char **)t51) = t50;
    t53 = (t49 + 56U);
    *((char **)t53) = t52;
    xsi_type_set_default_value(t50, t52, 0);
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
    t10 = (-(1));
    t13 = t10;
    t60 = 1;

LAB4:    if (t13 <= t60)
        goto LAB5;

LAB7:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t56 = (t10 == 255);
    if (t56 != 0)
        goto LAB42;

LAB44:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t56 = (t10 >= 6);
    if (t56 != 0)
        goto LAB65;

LAB67:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t72 = (t10 >= 4);
    if (t72 == 1)
        goto LAB71;

LAB72:    t56 = (unsigned char)0;

LAB73:    if (t56 != 0)
        goto LAB69;

LAB70:    t0 = 0;

LAB1:    return t0;
LAB3:    *((char **)t55) = t2;
    goto LAB2;

LAB5:    t62 = (-(1));
    t68 = t62;
    t71 = 1;

LAB8:    if (t68 <= t71)
        goto LAB9;

LAB11:
LAB6:    if (t13 == t60)
        goto LAB7;

LAB41:    t10 = (t13 + 1);
    t13 = t10;
    goto LAB4;

LAB9:    t72 = (t68 == 0);
    if (t72 == 1)
        goto LAB15;

LAB16:    t56 = (unsigned char)0;

LAB17:    if (t56 != 0)
        goto LAB12;

LAB14:
LAB13:    t10 = (t3 + t68);
    t8 = (t43 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t10 = (t4 + t13);
    t8 = (t49 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t43 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t74 = (t10 >= 0);
    if (t74 == 1)
        goto LAB28;

LAB29:    t73 = (unsigned char)0;

LAB30:    if (t73 == 1)
        goto LAB25;

LAB26:    t72 = (unsigned char)0;

LAB27:    if (t72 == 1)
        goto LAB22;

LAB23:    t56 = (unsigned char)0;

LAB24:    if (t56 != 0)
        goto LAB19;

LAB21:    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t62 = (t10 + 1);
    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t62;

LAB20:
LAB10:    if (t68 == t71)
        goto LAB11;

LAB40:    t10 = (t68 + 1);
    t68 = t10;
    goto LAB8;

LAB12:    goto LAB10;

LAB15:    t73 = (t13 == 0);
    t56 = t73;
    goto LAB17;

LAB18:    goto LAB13;

LAB19:    t8 = (t49 + 56U);
    t18 = *((char **)t8);
    t80 = *((int *)t18);
    t81 = (t80 - 0);
    t11 = (t81 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t80);
    t61 = (t11 * 640U);
    t8 = (t43 + 56U);
    t20 = *((char **)t8);
    t82 = *((int *)t20);
    t83 = (t82 - 0);
    t63 = (t83 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t82);
    t64 = (t61 + t63);
    t65 = (4U * t64);
    t66 = (0 + t65);
    t8 = (t2 + t66);
    t84 = *((int *)t8);
    t85 = (t84 == 255);
    if (t85 != 0)
        goto LAB31;

LAB33:    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t62 = (t10 + 1);
    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t62;

LAB32:    goto LAB20;

LAB22:    t8 = (t49 + 56U);
    t17 = *((char **)t8);
    t78 = *((int *)t17);
    t79 = (t78 < 640);
    t56 = t79;
    goto LAB24;

LAB25:    t8 = (t49 + 56U);
    t15 = *((char **)t8);
    t76 = *((int *)t15);
    t77 = (t76 >= 0);
    t72 = t77;
    goto LAB27;

LAB28:    t8 = (t43 + 56U);
    t14 = *((char **)t8);
    t62 = *((int *)t14);
    t75 = (t62 < 640);
    t73 = t75;
    goto LAB30;

LAB31:    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    t86 = *((int *)t23);
    t87 = (t86 + 1);
    t21 = (t19 + 56U);
    t24 = *((char **)t21);
    t21 = (t24 + 0);
    *((int *)t21) = t87;
    t72 = (t68 != 0);
    if (t72 == 1)
        goto LAB37;

LAB38:    t56 = (unsigned char)0;

LAB39:    if (t56 != 0)
        goto LAB34;

LAB36:    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t62 = (t10 + 1);
    t8 = (t37 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t62;

LAB35:    goto LAB32;

LAB34:    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t62 = (t10 + 1);
    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t62;
    goto LAB35;

LAB37:    t73 = (t13 != 0);
    t56 = t73;
    goto LAB39;

LAB42:    t8 = (t19 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t72 = (t13 <= 1);
    if (t72 != 0)
        goto LAB45;

LAB47:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t73 = (t10 == 2);
    if (t73 == 1)
        goto LAB54;

LAB55:    t72 = (unsigned char)0;

LAB56:    if (t72 == 1)
        goto LAB51;

LAB52:    t56 = (unsigned char)0;

LAB53:    if (t56 != 0)
        goto LAB49;

LAB50:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t72 = (t10 <= 3);
    if (t72 == 1)
        goto LAB60;

LAB61:    t56 = (unsigned char)0;

LAB62:    if (t56 != 0)
        goto LAB58;

LAB59:    t0 = 255;
    goto LAB1;

LAB43:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB45:    t0 = 0;
    goto LAB1;

LAB46:    goto LAB43;

LAB48:    goto LAB46;

LAB49:    t0 = 0;
    goto LAB1;

LAB51:    t8 = (t37 + 56U);
    t15 = *((char **)t8);
    t60 = *((int *)t15);
    t75 = (t60 == 0);
    t56 = t75;
    goto LAB53;

LAB54:    t8 = (t31 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t74 = (t13 == 2);
    t72 = t74;
    goto LAB56;

LAB57:    goto LAB46;

LAB58:    t0 = 0;
    goto LAB1;

LAB60:    t8 = (t37 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t73 = (t13 == 0);
    t56 = t73;
    goto LAB62;

LAB63:    goto LAB46;

LAB64:    goto LAB46;

LAB65:    t0 = 255;
    goto LAB1;

LAB66:    goto LAB43;

LAB68:    goto LAB66;

LAB69:    t0 = 255;
    goto LAB1;

LAB71:    t8 = (t37 + 56U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t73 = (t13 >= 3);
    t56 = t73;
    goto LAB73;

LAB74:    goto LAB66;

LAB75:    goto LAB66;

}

int work_a_1012504251_3212880686_sub_1961700984_3579431146(char *t1, char *t2, int t3, int t4)
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
    unsigned char t83;
    int t84;
    int t85;
    unsigned char t86;
    int t87;
    unsigned char t88;
    int t89;
    int t90;
    int t91;
    unsigned char t92;
    int t93;
    int t94;

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
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    *((unsigned char *)t22) = (unsigned char)0;
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t5 + 244U);
    t26 = ((STD_STANDARD) + 0);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    *((unsigned char *)t28) = (unsigned char)0;
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 1U;
    t31 = (t5 + 364U);
    t32 = ((STD_STANDARD) + 0);
    t33 = (t31 + 88U);
    *((char **)t33) = t32;
    t35 = (t31 + 56U);
    *((char **)t35) = t34;
    *((unsigned char *)t34) = (unsigned char)0;
    t36 = (t31 + 80U);
    *((unsigned int *)t36) = 1U;
    t37 = (t5 + 484U);
    t38 = ((STD_STANDARD) + 0);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    *((unsigned char *)t40) = (unsigned char)0;
    t42 = (t37 + 80U);
    *((unsigned int *)t42) = 1U;
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
    t55 = (t5 + 844U);
    t56 = ((STD_STANDARD) + 384);
    t57 = (t55 + 88U);
    *((char **)t57) = t56;
    t59 = (t55 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, 0);
    t60 = (t55 + 80U);
    *((unsigned int *)t60) = 4U;
    t61 = (t5 + 964U);
    t62 = ((STD_STANDARD) + 384);
    t63 = (t61 + 88U);
    *((char **)t63) = t62;
    t65 = (t61 + 56U);
    *((char **)t65) = t64;
    xsi_type_set_default_value(t62, t64, 0);
    t66 = (t61 + 80U);
    *((unsigned int *)t66) = 4U;
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
    t68 = (t10 == 255);
    if (t68 != 0)
        goto LAB4;

LAB6:
LAB5:    t10 = 1;
    t13 = 4;

LAB8:    if (t10 <= t13)
        goto LAB9;

LAB11:    t10 = 1;
    t13 = 4;

LAB20:    if (t10 <= t13)
        goto LAB21;

LAB23:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t83 = *((unsigned char *)t9);
    if (t83 == 1)
        goto LAB35;

LAB36:    t68 = (unsigned char)0;

LAB37:    if (t68 != 0)
        goto LAB32;

LAB34:
LAB33:    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t67) = t2;
    goto LAB2;

LAB4:    t0 = 255;
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t72 = (t3 + t10);
    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t72;
    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t72 = *((int *)t9);
    t83 = (t72 < 640);
    if (t83 == 1)
        goto LAB15;

LAB16:    t68 = (unsigned char)0;

LAB17:    if (t68 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    if (t10 == t13)
        goto LAB11;

LAB19:    t72 = (t10 + 1);
    t10 = t72;
    goto LAB8;

LAB12:    t15 = (t25 + 56U);
    t17 = *((char **)t15);
    t15 = (t17 + 0);
    *((unsigned char *)t15) = (unsigned char)1;
    goto LAB11;

LAB15:    t74 = (t4 - 0);
    t11 = (t74 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t73 = (t11 * 640U);
    t8 = (t55 + 56U);
    t14 = *((char **)t8);
    t80 = *((int *)t14);
    t84 = (t80 - 0);
    t75 = (t84 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t80);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t8 = (t2 + t78);
    t85 = *((int *)t8);
    t86 = (t85 == 255);
    t68 = t86;
    goto LAB17;

LAB18:    goto LAB13;

LAB21:    t72 = (t3 - t10);
    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t72;
    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t72 = *((int *)t9);
    t83 = (t72 >= 0);
    if (t83 == 1)
        goto LAB27;

LAB28:    t68 = (unsigned char)0;

LAB29:    if (t68 != 0)
        goto LAB24;

LAB26:
LAB25:
LAB22:    if (t10 == t13)
        goto LAB23;

LAB31:    t72 = (t10 + 1);
    t10 = t72;
    goto LAB20;

LAB24:    t15 = (t19 + 56U);
    t17 = *((char **)t15);
    t15 = (t17 + 0);
    *((unsigned char *)t15) = (unsigned char)1;
    goto LAB23;

LAB27:    t74 = (t4 - 0);
    t11 = (t74 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t4);
    t73 = (t11 * 640U);
    t8 = (t55 + 56U);
    t14 = *((char **)t8);
    t80 = *((int *)t14);
    t84 = (t80 - 0);
    t75 = (t84 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t80);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t8 = (t2 + t78);
    t85 = *((int *)t8);
    t86 = (t85 == 255);
    t68 = t86;
    goto LAB29;

LAB30:    goto LAB25;

LAB32:    t10 = (-(1));
    t13 = t10;
    t72 = 1;

LAB38:    if (t13 <= t72)
        goto LAB39;

LAB41:    t8 = (t49 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t68 = (t10 >= 2);
    if (t68 != 0)
        goto LAB66;

LAB68:
LAB67:    goto LAB33;

LAB35:    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t86 = *((unsigned char *)t14);
    t68 = t86;
    goto LAB37;

LAB39:    t74 = (t4 + t13);
    t8 = (t61 + 56U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t74;
    t8 = (t61 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t83 = (t10 >= 0);
    if (t83 == 1)
        goto LAB45;

LAB46:    t68 = (unsigned char)0;

LAB47:    if (t68 != 0)
        goto LAB42;

LAB44:
LAB43:
LAB40:    if (t13 == t72)
        goto LAB41;

LAB65:    t10 = (t13 + 1);
    t13 = t10;
    goto LAB38;

LAB42:    t8 = (t61 + 56U);
    t15 = *((char **)t8);
    t80 = *((int *)t15);
    t84 = (t80 - 0);
    t11 = (t84 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t80);
    t73 = (t11 * 640U);
    t85 = (t3 - 0);
    t75 = (t85 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t3);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t8 = (t2 + t78);
    t87 = *((int *)t8);
    t88 = (t87 == 255);
    if (t88 != 0)
        goto LAB48;

LAB50:
LAB49:    t10 = (-(1));
    t74 = t10;
    t80 = 1;

LAB51:    if (t74 <= t80)
        goto LAB52;

LAB54:    goto LAB43;

LAB45:    t8 = (t61 + 56U);
    t14 = *((char **)t8);
    t74 = *((int *)t14);
    t86 = (t74 < 640);
    t68 = t86;
    goto LAB47;

LAB48:    t17 = (t49 + 56U);
    t18 = *((char **)t17);
    t89 = *((int *)t18);
    t90 = (t89 + 1);
    t17 = (t49 + 56U);
    t20 = *((char **)t17);
    t17 = (t20 + 0);
    *((int *)t17) = t90;
    goto LAB49;

LAB52:    t84 = (t3 + t74);
    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t84;
    t8 = (t55 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t86 = (t10 >= 0);
    if (t86 == 1)
        goto LAB61;

LAB62:    t83 = (unsigned char)0;

LAB63:    if (t83 == 1)
        goto LAB58;

LAB59:    t68 = (unsigned char)0;

LAB60:    if (t68 != 0)
        goto LAB55;

LAB57:
LAB56:
LAB53:    if (t74 == t80)
        goto LAB54;

LAB64:    t10 = (t74 + 1);
    t74 = t10;
    goto LAB51;

LAB55:    t18 = (t49 + 56U);
    t20 = *((char **)t18);
    t93 = *((int *)t20);
    t94 = (t93 + 1);
    t18 = (t49 + 56U);
    t21 = *((char **)t18);
    t18 = (t21 + 0);
    *((int *)t18) = t94;
    goto LAB56;

LAB58:    t8 = (t61 + 56U);
    t15 = *((char **)t8);
    t85 = *((int *)t15);
    t87 = (t85 - 0);
    t11 = (t87 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t85);
    t73 = (t11 * 640U);
    t8 = (t55 + 56U);
    t17 = *((char **)t8);
    t89 = *((int *)t17);
    t90 = (t89 - 0);
    t75 = (t90 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t89);
    t76 = (t73 + t75);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t8 = (t2 + t78);
    t91 = *((int *)t8);
    t92 = (t91 == 255);
    t68 = t92;
    goto LAB60;

LAB61:    t8 = (t55 + 56U);
    t14 = *((char **)t8);
    t84 = *((int *)t14);
    t88 = (t84 < 640);
    t83 = t88;
    goto LAB63;

LAB66:    t0 = 255;
    goto LAB1;

LAB69:    goto LAB67;

LAB70:;
}

int work_a_1012504251_3212880686_sub_1655980658_3579431146(char *t1, char *t2, int t3, int t4)
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

int work_a_1012504251_3212880686_sub_182163547_3579431146(char *t1, char *t2, int t3, int t4)
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

int work_a_1012504251_3212880686_sub_733431485_3579431146(char *t1, char *t2, int t3, int t4)
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
    t37 = (t5 + 484U);
    t38 = ((STD_STANDARD) + 384);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    *((int *)t40) = 0;
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
    t8 = (t12 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t44 = (t10 == 0);
    if (t44 != 0)
        goto LAB4;

LAB6:
LAB5:    t10 = (-(2));
    t13 = t10;
    t48 = 2;

LAB8:    if (t13 <= t48)
        goto LAB9;

LAB11:    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t1 + 1888U);
    t14 = *((char **)t8);
    t13 = *((int *)t14);
    t44 = (t10 < t13);
    if (t44 != 0)
        goto LAB45;

LAB47:    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t44 = (t10 < 2);
    if (t44 != 0)
        goto LAB49;

LAB50:    t0 = 255;

LAB1:    return t0;
LAB3:    *((char **)t43) = t2;
    goto LAB2;

LAB4:    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t50 = (-(2));
    t56 = t50;
    t59 = 2;

LAB12:    if (t56 <= t59)
        goto LAB13;

LAB15:
LAB10:    if (t13 == t48)
        goto LAB11;

LAB44:    t10 = (t13 + 1);
    t13 = t10;
    goto LAB8;

LAB13:    t60 = (t3 + t56);
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t60;
    t10 = (t4 + t13);
    t8 = (t31 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t25 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t63 = (t10 >= 0);
    if (t63 == 1)
        goto LAB25;

LAB26:    t62 = (unsigned char)0;

LAB27:    if (t62 == 1)
        goto LAB22;

LAB23:    t61 = (unsigned char)0;

LAB24:    if (t61 == 1)
        goto LAB19;

LAB20:    t44 = (unsigned char)0;

LAB21:    if (t44 != 0)
        goto LAB16;

LAB18:
LAB17:
LAB14:    if (t56 == t59)
        goto LAB15;

LAB43:    t10 = (t56 + 1);
    t56 = t10;
    goto LAB12;

LAB16:    t8 = (t31 + 56U);
    t18 = *((char **)t8);
    t68 = *((int *)t18);
    t69 = (t68 - 0);
    t11 = (t69 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, t68);
    t49 = (t11 * 640U);
    t8 = (t25 + 56U);
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
        goto LAB28;

LAB30:
LAB29:    goto LAB17;

LAB19:    t8 = (t31 + 56U);
    t17 = *((char **)t8);
    t66 = *((int *)t17);
    t67 = (t66 < 640);
    t44 = t67;
    goto LAB21;

LAB22:    t8 = (t31 + 56U);
    t15 = *((char **)t8);
    t60 = *((int *)t15);
    t65 = (t60 >= 0);
    t61 = t65;
    goto LAB24;

LAB25:    t8 = (t25 + 56U);
    t14 = *((char **)t8);
    t50 = *((int *)t14);
    t64 = (t50 < 640);
    t62 = t64;
    goto LAB27;

LAB28:    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    t74 = *((int *)t23);
    t75 = (t74 + 1);
    t21 = (t19 + 56U);
    t24 = *((char **)t21);
    t21 = (t24 + 0);
    *((int *)t21) = t75;
    t62 = (t56 == 0);
    if (t62 == 1)
        goto LAB37;

LAB38:    t63 = (t13 == 0);
    t61 = t63;

LAB39:    if (t61 == 1)
        goto LAB34;

LAB35:    t44 = (unsigned char)0;

LAB36:    if (t44 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB29;

LAB31:    t8 = (t37 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t50 = (t10 + 1);
    t8 = (t37 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t50;
    goto LAB32;

LAB34:    t65 = (t56 == 0);
    if (t65 == 1)
        goto LAB40;

LAB41:    t64 = (unsigned char)0;

LAB42:    t73 = (!(t64));
    t44 = t73;
    goto LAB36;

LAB37:    t61 = (unsigned char)1;
    goto LAB39;

LAB40:    t67 = (t13 == 0);
    t64 = t67;
    goto LAB42;

LAB45:    t0 = 0;
    goto LAB1;

LAB46:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB48:    goto LAB46;

LAB49:    t0 = 0;
    goto LAB1;

LAB51:    goto LAB46;

LAB52:    goto LAB46;

}

static void work_a_1012504251_3212880686_p_0(char *t0)
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

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(266, ng4);
    t2 = (t0 + 6562412);
    xsi_report(t2, 43U, 0);
    xsi_set_current_line(267, ng4);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 2936U);
    t4 = (t0 + 6562455);
    t6 = (t0 + 8452U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)0);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(268, ng4);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(272, ng4);
    t2 = (t0 + 6562577);
    xsi_report(t2, 21U, 0);
    xsi_set_current_line(273, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562598);
    *((int *)t2) = 0;
    t3 = (t0 + 6562602);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB7:    if (t17 <= t18)
        goto LAB8;

LAB10:    xsi_set_current_line(288, ng4);
    t2 = (t0 + 2936U);
    std_textio_file_close(t2);
    xsi_set_current_line(293, ng4);
    t2 = (t0 + 6562630);
    xsi_report(t2, 27U, 0);
    xsi_set_current_line(294, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562657);
    *((int *)t2) = 0;
    t3 = (t0 + 6562661);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB23:    if (t17 <= t18)
        goto LAB24;

LAB26:    xsi_set_current_line(301, ng4);
    t2 = (t0 + 6562673);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(302, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562701);
    *((int *)t2) = 0;
    t3 = (t0 + 6562705);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB33:    if (t17 <= t18)
        goto LAB34;

LAB36:    xsi_set_current_line(309, ng4);
    t2 = (t0 + 6562717);
    xsi_report(t2, 32U, 0);
    xsi_set_current_line(312, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562749);
    *((int *)t2) = 0;
    t3 = (t0 + 6562753);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB43:    if (t17 <= t18)
        goto LAB44;

LAB46:    xsi_set_current_line(319, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562765);
    *((int *)t2) = 0;
    t3 = (t0 + 6562769);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB53:    if (t17 <= t18)
        goto LAB54;

LAB56:    xsi_set_current_line(326, ng4);
    t2 = (t0 + 6562781);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(327, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562806);
    *((int *)t2) = 0;
    t3 = (t0 + 6562810);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB63:    if (t17 <= t18)
        goto LAB64;

LAB66:    xsi_set_current_line(334, ng4);
    t2 = (t0 + 6562822);
    xsi_report(t2, 20U, 0);
    xsi_set_current_line(335, ng4);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 3040U);
    t4 = (t0 + 6562842);
    t6 = (t0 + 8468U);
    t7 = std_textio_file_open2(t2, t4, t6, (unsigned char)1);
    *((unsigned char *)t3) = t7;
    xsi_set_current_line(336, ng4);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 != (unsigned char)0);
    if (t8 != 0)
        goto LAB73;

LAB75:
LAB74:    xsi_set_current_line(340, ng4);
    t15 = (640 - 1);
    t2 = (t0 + 6562954);
    *((int *)t2) = 0;
    t3 = (t0 + 6562958);
    *((int *)t3) = t15;
    t17 = 0;
    t18 = t15;

LAB76:    if (t17 <= t18)
        goto LAB77;

LAB79:    xsi_set_current_line(350, ng4);
    t2 = (t0 + 3040U);
    std_textio_file_close(t2);
    xsi_set_current_line(353, ng4);
    t2 = (t0 + 6562985);
    xsi_report(t2, 36U, 0);
    xsi_set_current_line(354, ng4);
    t2 = (t0 + 6563021);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(355, ng4);
    t2 = (t0 + 6563021);
    xsi_report(t2, 8U, 0);
    xsi_set_current_line(356, ng4);
    t2 = (t0 + 6563029);
    t4 = (t0 + 6563038);
    t9 = ((STD_STANDARD) + 1008);
    t11 = (t12 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 1;
    t13 = (t11 + 4U);
    *((int *)t13) = 9;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t15 = (9 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t16;
    t13 = (t0 + 8452U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (9U + 47U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(357, ng4);
    t2 = (t0 + 6563085);
    t4 = (t0 + 6563094);
    t9 = ((STD_STANDARD) + 1008);
    t11 = (t12 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 1;
    t13 = (t11 + 4U);
    *((int *)t13) = 9;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t15 = (9 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t16;
    t13 = (t0 + 8468U);
    t6 = xsi_base_array_concat(t6, t10, t9, (char)97, t2, t12, (char)97, t4, t13, (char)101);
    t16 = (9U + 42U);
    xsi_report(t6, t16, 0);
    xsi_set_current_line(358, ng4);
    t2 = (t0 + 6563136);
    t4 = ((STD_STANDARD) + 384);
    t5 = xsi_int_to_mem(640);
    t6 = xsi_string_variable_get_image(t10, t4, t5);
    t11 = ((STD_STANDARD) + 1008);
    t13 = (t31 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 9;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (9 - 1);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t9 = xsi_base_array_concat(t9, t12, t11, (char)97, t2, t31, (char)97, t6, t10, (char)101);
    t14 = (t0 + 6563145);
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
    t16 = (9U + 3U);
    t24 = (t16 + 1U);
    t27 = (t24 + 3U);
    xsi_report(t42, t27, 0);
    xsi_set_current_line(359, ng4);
    t2 = (t0 + 6563146);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(360, ng4);
    t2 = (t0 + 6563146);
    xsi_report(t2, 23U, 0);
    xsi_set_current_line(361, ng4);
    t2 = (t0 + 6563169);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(362, ng4);
    t2 = (t0 + 6563187);
    xsi_report(t2, 21U, 0);
    xsi_set_current_line(363, ng4);
    t2 = (t0 + 6563208);
    xsi_report(t2, 23U, 0);
    xsi_set_current_line(364, ng4);
    t2 = (t0 + 6563231);
    xsi_report(t2, 32U, 0);
    xsi_set_current_line(365, ng4);
    t2 = (t0 + 6563263);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(366, ng4);
    t2 = (t0 + 6563263);
    xsi_report(t2, 19U, 0);
    xsi_set_current_line(367, ng4);
    t2 = (t0 + 6563282);
    xsi_report(t2, 30U, 0);
    xsi_set_current_line(368, ng4);
    t2 = (t0 + 6563312);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(369, ng4);
    t2 = (t0 + 6563337);
    xsi_report(t2, 30U, 0);
    xsi_set_current_line(370, ng4);
    t2 = (t0 + 6563367);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(371, ng4);
    t2 = (t0 + 6563367);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(372, ng4);
    t2 = (t0 + 6563385);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(373, ng4);
    t2 = (t0 + 6563419);
    xsi_report(t2, 37U, 0);
    xsi_set_current_line(374, ng4);
    t2 = (t0 + 6563456);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(375, ng4);
    t2 = (t0 + 6563456);
    xsi_report(t2, 24U, 0);
    xsi_set_current_line(376, ng4);
    t2 = (t0 + 6563480);
    xsi_report(t2, 27U, 0);
    xsi_set_current_line(377, ng4);
    t2 = (t0 + 6563507);
    xsi_report(t2, 23U, 0);
    xsi_set_current_line(378, ng4);
    t2 = (t0 + 6563530);
    xsi_report(t2, 24U, 0);
    xsi_set_current_line(379, ng4);
    t2 = (t0 + 6563554);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(380, ng4);
    t2 = (t0 + 6563554);
    xsi_report(t2, 30U, 0);
    xsi_set_current_line(381, ng4);
    t2 = (t0 + 6563584);
    xsi_report(t2, 38U, 0);
    xsi_set_current_line(382, ng4);
    t2 = (t0 + 6563622);
    xsi_report(t2, 37U, 0);
    xsi_set_current_line(383, ng4);
    t2 = (t0 + 6563659);
    xsi_report(t2, 35U, 0);
    xsi_set_current_line(384, ng4);
    t2 = (t0 + 6563694);
    xsi_report(t2, 33U, 0);
    xsi_set_current_line(385, ng4);
    t2 = (t0 + 6563727);
    xsi_report(t2, 0U, 0);
    xsi_set_current_line(386, ng4);
    t2 = (t0 + 6563727);
    xsi_report(t2, 33U, 0);
    xsi_set_current_line(388, ng4);

LAB91:    *((char **)t1) = &&LAB92;

LAB1:    return;
LAB4:    xsi_set_current_line(269, ng4);
    t2 = (t0 + 6562502);
    t5 = (t0 + 6562530);
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
    t14 = (t0 + 8452U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 47U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB5;

LAB8:    xsi_set_current_line(274, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562606);
    *((int *)t4) = 0;
    t5 = (t0 + 6562610);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB11:    if (t20 <= t21)
        goto LAB12;

LAB14:    xsi_set_current_line(284, ng4);
    t2 = (t0 + 6562598);
    t15 = xsi_vhdl_mod(*((int *)t2), 128);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB9:    t2 = (t0 + 6562598);
    t17 = *((int *)t2);
    t3 = (t0 + 6562602);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB10;

LAB22:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562598);
    *((int *)t4) = t17;
    goto LAB7;

LAB12:    xsi_set_current_line(275, ng4);
    t6 = (t0 + 2936U);
    t7 = std_textio_endfile(t6);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(280, ng4);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 6562598);
    t15 = *((int *)t2);
    t19 = (t15 - 0);
    t16 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t4 = (t0 + 6562606);
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
LAB13:    t2 = (t0 + 6562606);
    t20 = *((int *)t2);
    t3 = (t0 + 6562610);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB14;

LAB18:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562606);
    *((int *)t4) = t20;
    goto LAB11;

LAB15:    xsi_set_current_line(276, ng4);
    t9 = (t0 + 4040);
    t11 = (t0 + 2936U);
    t13 = (t0 + 3216U);
    std_textio_readline(STD_TEXTIO, t9, t11, t13);
    xsi_set_current_line(277, ng4);
    t2 = (t0 + 4040);
    t3 = (t0 + 3216U);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    std_textio_read10(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(278, ng4);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t19 = work_a_1012504251_3212880686_sub_2489298628_3057020925(t0, t15, 0, 255);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 6562598);
    t22 = *((int *)t2);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t2));
    t24 = (t16 * 640U);
    t5 = (t0 + 6562606);
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

LAB19:    xsi_set_current_line(285, ng4);
    t3 = (t0 + 6562614);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6562598);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 15;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t19 = (15 - 1);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t31, (char)97, t11, t10, (char)101);
    t33 = (t0 + 6562629);
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
    t24 = (15U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    xsi_report(t44, t28, 0);
    goto LAB20;

LAB24:    xsi_set_current_line(295, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562665);
    *((int *)t4) = 0;
    t5 = (t0 + 6562669);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB27:    if (t20 <= t21)
        goto LAB28;

LAB30:
LAB25:    t2 = (t0 + 6562657);
    t17 = *((int *)t2);
    t3 = (t0 + 6562661);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB26;

LAB32:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562657);
    *((int *)t4) = t17;
    goto LAB23;

LAB28:    xsi_set_current_line(296, ng4);
    t6 = (t0 + 2248U);
    t9 = *((char **)t6);
    t6 = (t0 + 6562665);
    t11 = (t0 + 6562657);
    t22 = work_a_1012504251_3212880686_sub_3711422463_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2488U);
    t14 = *((char **)t13);
    t13 = (t0 + 6562657);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 6562665);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB29:    t2 = (t0 + 6562665);
    t20 = *((int *)t2);
    t3 = (t0 + 6562669);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB30;

LAB31:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562665);
    *((int *)t4) = t20;
    goto LAB27;

LAB34:    xsi_set_current_line(303, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562709);
    *((int *)t4) = 0;
    t5 = (t0 + 6562713);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB37:    if (t20 <= t21)
        goto LAB38;

LAB40:
LAB35:    t2 = (t0 + 6562701);
    t17 = *((int *)t2);
    t3 = (t0 + 6562705);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB36;

LAB42:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562701);
    *((int *)t4) = t17;
    goto LAB33;

LAB38:    xsi_set_current_line(304, ng4);
    t6 = (t0 + 2488U);
    t9 = *((char **)t6);
    t6 = (t0 + 6562709);
    t11 = (t0 + 6562701);
    t22 = work_a_1012504251_3212880686_sub_1961700984_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t13 = (t0 + 6562701);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 6562709);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB39:    t2 = (t0 + 6562709);
    t20 = *((int *)t2);
    t3 = (t0 + 6562713);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB40;

LAB41:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562709);
    *((int *)t4) = t20;
    goto LAB37;

LAB44:    xsi_set_current_line(313, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562757);
    *((int *)t4) = 0;
    t5 = (t0 + 6562761);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB47:    if (t20 <= t21)
        goto LAB48;

LAB50:
LAB45:    t2 = (t0 + 6562749);
    t17 = *((int *)t2);
    t3 = (t0 + 6562753);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB46;

LAB52:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562749);
    *((int *)t4) = t17;
    goto LAB43;

LAB48:    xsi_set_current_line(314, ng4);
    t6 = (t0 + 2608U);
    t9 = *((char **)t6);
    t6 = (t0 + 6562757);
    t11 = (t0 + 6562749);
    t22 = work_a_1012504251_3212880686_sub_1655980658_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2488U);
    t14 = *((char **)t13);
    t13 = (t0 + 6562749);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 6562757);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB49:    t2 = (t0 + 6562757);
    t20 = *((int *)t2);
    t3 = (t0 + 6562761);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB50;

LAB51:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562757);
    *((int *)t4) = t20;
    goto LAB47;

LAB54:    xsi_set_current_line(320, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562773);
    *((int *)t4) = 0;
    t5 = (t0 + 6562777);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB57:    if (t20 <= t21)
        goto LAB58;

LAB60:
LAB55:    t2 = (t0 + 6562765);
    t17 = *((int *)t2);
    t3 = (t0 + 6562769);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB56;

LAB62:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562765);
    *((int *)t4) = t17;
    goto LAB53;

LAB58:    xsi_set_current_line(321, ng4);
    t6 = (t0 + 2488U);
    t9 = *((char **)t6);
    t6 = (t0 + 6562773);
    t11 = (t0 + 6562765);
    t22 = work_a_1012504251_3212880686_sub_182163547_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t13 = (t0 + 6562765);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 6562773);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB59:    t2 = (t0 + 6562773);
    t20 = *((int *)t2);
    t3 = (t0 + 6562777);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB60;

LAB61:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562773);
    *((int *)t4) = t20;
    goto LAB57;

LAB64:    xsi_set_current_line(328, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562814);
    *((int *)t4) = 0;
    t5 = (t0 + 6562818);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB67:    if (t20 <= t21)
        goto LAB68;

LAB70:
LAB65:    t2 = (t0 + 6562806);
    t17 = *((int *)t2);
    t3 = (t0 + 6562810);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB66;

LAB72:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562806);
    *((int *)t4) = t17;
    goto LAB63;

LAB68:    xsi_set_current_line(329, ng4);
    t6 = (t0 + 2608U);
    t9 = *((char **)t6);
    t6 = (t0 + 6562814);
    t11 = (t0 + 6562806);
    t22 = work_a_1012504251_3212880686_sub_733431485_3579431146(t0, t9, *((int *)t6), *((int *)t11));
    t13 = (t0 + 2368U);
    t14 = *((char **)t13);
    t13 = (t0 + 6562806);
    t23 = *((int *)t13);
    t25 = (t23 - 0);
    t16 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t13));
    t24 = (t16 * 640U);
    t32 = (t0 + 6562814);
    t26 = *((int *)t32);
    t48 = (t26 - 0);
    t27 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t32));
    t28 = (t24 + t27);
    t29 = (4U * t28);
    t30 = (0 + t29);
    t33 = (t14 + t30);
    *((int *)t33) = t22;

LAB69:    t2 = (t0 + 6562814);
    t20 = *((int *)t2);
    t3 = (t0 + 6562818);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB70;

LAB71:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562814);
    *((int *)t4) = t20;
    goto LAB67;

LAB73:    xsi_set_current_line(337, ng4);
    t2 = (t0 + 6562884);
    t5 = (t0 + 6562912);
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
    t14 = (t0 + 8468U);
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t5, t14, (char)101);
    t16 = (28U + 42U);
    xsi_report(t9, t16, (unsigned char)3);
    goto LAB74;

LAB77:    xsi_set_current_line(341, ng4);
    t19 = (640 - 1);
    t4 = (t0 + 6562962);
    *((int *)t4) = 0;
    t5 = (t0 + 6562966);
    *((int *)t5) = t19;
    t20 = 0;
    t21 = t19;

LAB80:    if (t20 <= t21)
        goto LAB81;

LAB83:    xsi_set_current_line(346, ng4);
    t2 = (t0 + 6562954);
    t15 = xsi_vhdl_mod(*((int *)t2), 128);
    t7 = (t15 == 0);
    if (t7 != 0)
        goto LAB85;

LAB87:
LAB86:
LAB78:    t2 = (t0 + 6562954);
    t17 = *((int *)t2);
    t3 = (t0 + 6562958);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB79;

LAB88:    t15 = (t17 + 1);
    t17 = t15;
    t4 = (t0 + 6562954);
    *((int *)t4) = t17;
    goto LAB76;

LAB81:    xsi_set_current_line(342, ng4);
    t6 = (t0 + 4040);
    t9 = (t0 + 3288U);
    t11 = (t0 + 2368U);
    t13 = *((char **)t11);
    t11 = (t0 + 6562954);
    t22 = *((int *)t11);
    t23 = (t22 - 0);
    t16 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 639, 1, *((int *)t11));
    t24 = (t16 * 640U);
    t14 = (t0 + 6562962);
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
    xsi_set_current_line(343, ng4);
    t2 = (t0 + 4040);
    t3 = (t0 + 3040U);
    t4 = (t0 + 3288U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB82:    t2 = (t0 + 6562962);
    t20 = *((int *)t2);
    t3 = (t0 + 6562966);
    t21 = *((int *)t3);
    if (t20 == t21)
        goto LAB83;

LAB84:    t15 = (t20 + 1);
    t20 = t15;
    t4 = (t0 + 6562962);
    *((int *)t4) = t20;
    goto LAB80;

LAB85:    xsi_set_current_line(347, ng4);
    t3 = (t0 + 6562970);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 6562954);
    t9 = xsi_int_to_mem(*((int *)t6));
    t11 = xsi_string_variable_get_image(t10, t5, t9);
    t14 = ((STD_STANDARD) + 1008);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 14;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t19 = (14 - 1);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t16;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)97, t3, t31, (char)97, t11, t10, (char)101);
    t33 = (t0 + 6562984);
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
    t24 = (14U + t16);
    t27 = (t24 + 1U);
    t28 = (t27 + 3U);
    xsi_report(t44, t28, 0);
    goto LAB86;

LAB89:    goto LAB2;

LAB90:    goto LAB89;

LAB92:    goto LAB90;

}


extern void work_a_1012504251_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1012504251_3212880686_p_0};
	static char *se[] = {(void *)work_a_1012504251_3212880686_sub_2489298628_3057020925,(void *)work_a_1012504251_3212880686_sub_3711422463_3579431146,(void *)work_a_1012504251_3212880686_sub_1961700984_3579431146,(void *)work_a_1012504251_3212880686_sub_1655980658_3579431146,(void *)work_a_1012504251_3212880686_sub_182163547_3579431146,(void *)work_a_1012504251_3212880686_sub_733431485_3579431146};
	xsi_register_didat("work_a_1012504251_3212880686", "isim/morphology_license_plate_optimized_isim_beh.exe.sim/work/a_1012504251_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
