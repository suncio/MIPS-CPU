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
static const char *ng0 = "C:/Users/suncio/Desktop/lab of jz/MyMIPS/data_ram.v";
static const char *ng1 = "ram3_fib.data";
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {61166U, 0U};
static unsigned int ng5[] = {43690U, 0U};



static void Initial_54_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3048);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3208);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3368);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3528);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_66_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[8];
    char t63[8];
    char t85[8];
    char t96[8];
    char t97[8];
    char t104[8];
    char t133[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    int t116;
    char *t117;
    unsigned int t118;
    int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    char *t136;
    char *t137;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5264);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(98, ng0);

LAB63:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(70, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(90, ng0);

LAB62:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1528U);
    t31 = *((char **)t29);
    memset(t54, 0, 8);
    t29 = (t54 + 4);
    t32 = (t31 + 4);
    t9 = *((unsigned int *)t31);
    t10 = (t9 >> 2);
    *((unsigned int *)t54) = t10;
    t11 = *((unsigned int *)t32);
    t12 = (t11 >> 2);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t13 & 1023U);
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 1023U);
    xsi_vlog_generic_get_array_select_value(t30, 8, t4, t8, t28, 2, 1, t54, 10, 2);
    t45 = (t0 + 3208);
    t46 = (t45 + 56U);
    t52 = *((char **)t46);
    t53 = (t0 + 3208);
    t55 = (t53 + 72U);
    t62 = *((char **)t55);
    t64 = (t0 + 3208);
    t65 = (t64 + 64U);
    t78 = *((char **)t65);
    t79 = (t0 + 1528U);
    t86 = *((char **)t79);
    memset(t85, 0, 8);
    t79 = (t85 + 4);
    t87 = (t86 + 4);
    t15 = *((unsigned int *)t86);
    t16 = (t15 >> 2);
    *((unsigned int *)t85) = t16;
    t17 = *((unsigned int *)t87);
    t18 = (t17 >> 2);
    *((unsigned int *)t79) = t18;
    t19 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t19 & 1023U);
    t20 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t20 & 1023U);
    xsi_vlog_generic_get_array_select_value(t63, 8, t52, t62, t78, 2, 1, t85, 10, 2);
    t88 = (t0 + 3368);
    t95 = (t88 + 56U);
    t98 = *((char **)t95);
    t99 = (t0 + 3368);
    t100 = (t99 + 72U);
    t101 = *((char **)t100);
    t102 = (t0 + 3368);
    t103 = (t102 + 64U);
    t105 = *((char **)t103);
    t106 = (t0 + 1528U);
    t107 = *((char **)t106);
    memset(t97, 0, 8);
    t106 = (t97 + 4);
    t114 = (t107 + 4);
    t23 = *((unsigned int *)t107);
    t24 = (t23 >> 2);
    *((unsigned int *)t97) = t24;
    t25 = *((unsigned int *)t114);
    t26 = (t25 >> 2);
    *((unsigned int *)t106) = t26;
    t27 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t27 & 1023U);
    t33 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t33 & 1023U);
    xsi_vlog_generic_get_array_select_value(t96, 8, t98, t101, t105, 2, 1, t97, 10, 2);
    t117 = (t0 + 3528);
    t125 = (t117 + 56U);
    t126 = *((char **)t125);
    t127 = (t0 + 3528);
    t128 = (t127 + 72U);
    t129 = *((char **)t128);
    t130 = (t0 + 3528);
    t131 = (t130 + 64U);
    t132 = *((char **)t131);
    t134 = (t0 + 1528U);
    t135 = *((char **)t134);
    memset(t133, 0, 8);
    t134 = (t133 + 4);
    t136 = (t135 + 4);
    t34 = *((unsigned int *)t135);
    t35 = (t34 >> 2);
    *((unsigned int *)t133) = t35;
    t36 = *((unsigned int *)t136);
    t37 = (t36 >> 2);
    *((unsigned int *)t134) = t37;
    t38 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t38 & 1023U);
    t39 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t39 & 1023U);
    xsi_vlog_generic_get_array_select_value(t104, 8, t126, t129, t132, 2, 1, t133, 10, 2);
    xsi_vlogtype_concat(t6, 32, 32, 4U, t104, 8, t96, 8, t63, 8, t30, 8);
    t137 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t137, t6, 0, 0, 32, 0LL);

LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(71, ng0);

LAB21:    xsi_set_current_line(72, ng0);
    t52 = (t0 + 1688U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 3);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 3);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = ((char*)((ng2)));
    memset(t63, 0, 8);
    t64 = (t54 + 4);
    t65 = (t62 + 4);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = *((unsigned int *)t64);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = (t68 | t71);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t65);
    t75 = (t73 | t74);
    t76 = (~(t75));
    t77 = (t72 & t76);
    if (t77 != 0)
        goto LAB25;

LAB22:    if (t75 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t63) = 1;

LAB25:    t79 = (t63 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t63);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t33 = (t23 & t27);
    if (t33 != 0)
        goto LAB35;

LAB32:    if (t26 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t30) = 1;

LAB35:    t22 = (t30 + 4);
    t34 = *((unsigned int *)t22);
    t35 = (~(t34));
    t36 = *((unsigned int *)t30);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t33 = (t23 & t27);
    if (t33 != 0)
        goto LAB45;

LAB42:    if (t26 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t30) = 1;

LAB45:    t22 = (t30 + 4);
    t34 = *((unsigned int *)t22);
    t35 = (~(t34));
    t36 = *((unsigned int *)t30);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t33 = (t23 & t27);
    if (t33 != 0)
        goto LAB55;

LAB52:    if (t26 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t30) = 1;

LAB55:    t22 = (t30 + 4);
    t34 = *((unsigned int *)t22);
    t35 = (~(t34));
    t36 = *((unsigned int *)t30);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB20;

LAB24:    t78 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(73, ng0);

LAB29:    xsi_set_current_line(74, ng0);
    t86 = (t0 + 1848U);
    t87 = *((char **)t86);
    memset(t85, 0, 8);
    t86 = (t85 + 4);
    t88 = (t87 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (t89 >> 24);
    *((unsigned int *)t85) = t90;
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 24);
    *((unsigned int *)t86) = t92;
    t93 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t93 & 255U);
    t94 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t94 & 255U);
    t95 = (t0 + 3528);
    t98 = (t0 + 3528);
    t99 = (t98 + 72U);
    t100 = *((char **)t99);
    t101 = (t0 + 3528);
    t102 = (t101 + 64U);
    t103 = *((char **)t102);
    t105 = (t0 + 1528U);
    t106 = *((char **)t105);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t107 = (t106 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (t108 >> 2);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 2);
    *((unsigned int *)t105) = t111;
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 1023U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 1023U);
    xsi_vlog_generic_convert_array_indices(t96, t97, t100, t103, 2, 1, t104, 10, 2);
    t114 = (t96 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (!(t115));
    t117 = (t97 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (!(t118));
    t120 = (t116 && t119);
    if (t120 == 1)
        goto LAB30;

LAB31:    goto LAB28;

LAB30:    t121 = *((unsigned int *)t96);
    t122 = *((unsigned int *)t97);
    t123 = (t121 - t122);
    t124 = (t123 + 1);
    xsi_vlogvar_wait_assign_value(t95, t85, 0, *((unsigned int *)t97), t124, 0LL);
    goto LAB31;

LAB34:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(77, ng0);

LAB39:    xsi_set_current_line(78, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    memset(t54, 0, 8);
    t28 = (t54 + 4);
    t31 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 16);
    *((unsigned int *)t54) = t40;
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 16);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t32 = (t0 + 3368);
    t45 = (t0 + 3368);
    t46 = (t45 + 72U);
    t52 = *((char **)t46);
    t53 = (t0 + 3368);
    t55 = (t53 + 64U);
    t62 = *((char **)t55);
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    memset(t96, 0, 8);
    t64 = (t96 + 4);
    t78 = (t65 + 4);
    t47 = *((unsigned int *)t65);
    t48 = (t47 >> 2);
    *((unsigned int *)t96) = t48;
    t49 = *((unsigned int *)t78);
    t50 = (t49 >> 2);
    *((unsigned int *)t64) = t50;
    t51 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t51 & 1023U);
    t56 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t56 & 1023U);
    xsi_vlog_generic_convert_array_indices(t63, t85, t52, t62, 2, 1, t96, 10, 2);
    t79 = (t63 + 4);
    t57 = *((unsigned int *)t79);
    t116 = (!(t57));
    t86 = (t85 + 4);
    t58 = *((unsigned int *)t86);
    t119 = (!(t58));
    t120 = (t116 && t119);
    if (t120 == 1)
        goto LAB40;

LAB41:    goto LAB38;

LAB40:    t59 = *((unsigned int *)t63);
    t60 = *((unsigned int *)t85);
    t123 = (t59 - t60);
    t124 = (t123 + 1);
    xsi_vlogvar_wait_assign_value(t32, t54, 0, *((unsigned int *)t85), t124, 0LL);
    goto LAB41;

LAB44:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(81, ng0);

LAB49:    xsi_set_current_line(82, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    memset(t54, 0, 8);
    t28 = (t54 + 4);
    t31 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 8);
    *((unsigned int *)t54) = t40;
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 8);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t32 = (t0 + 3208);
    t45 = (t0 + 3208);
    t46 = (t45 + 72U);
    t52 = *((char **)t46);
    t53 = (t0 + 3208);
    t55 = (t53 + 64U);
    t62 = *((char **)t55);
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    memset(t96, 0, 8);
    t64 = (t96 + 4);
    t78 = (t65 + 4);
    t47 = *((unsigned int *)t65);
    t48 = (t47 >> 2);
    *((unsigned int *)t96) = t48;
    t49 = *((unsigned int *)t78);
    t50 = (t49 >> 2);
    *((unsigned int *)t64) = t50;
    t51 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t51 & 1023U);
    t56 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t56 & 1023U);
    xsi_vlog_generic_convert_array_indices(t63, t85, t52, t62, 2, 1, t96, 10, 2);
    t79 = (t63 + 4);
    t57 = *((unsigned int *)t79);
    t116 = (!(t57));
    t86 = (t85 + 4);
    t58 = *((unsigned int *)t86);
    t119 = (!(t58));
    t120 = (t116 && t119);
    if (t120 == 1)
        goto LAB50;

LAB51:    goto LAB48;

LAB50:    t59 = *((unsigned int *)t63);
    t60 = *((unsigned int *)t85);
    t123 = (t59 - t60);
    t124 = (t123 + 1);
    xsi_vlogvar_wait_assign_value(t32, t54, 0, *((unsigned int *)t85), t124, 0LL);
    goto LAB51;

LAB54:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(85, ng0);

LAB59:    xsi_set_current_line(86, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    memset(t54, 0, 8);
    t28 = (t54 + 4);
    t31 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 0);
    *((unsigned int *)t54) = t40;
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 0);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t32 = (t0 + 3048);
    t45 = (t0 + 3048);
    t46 = (t45 + 72U);
    t52 = *((char **)t46);
    t53 = (t0 + 3048);
    t55 = (t53 + 64U);
    t62 = *((char **)t55);
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    memset(t96, 0, 8);
    t64 = (t96 + 4);
    t78 = (t65 + 4);
    t47 = *((unsigned int *)t65);
    t48 = (t47 >> 2);
    *((unsigned int *)t96) = t48;
    t49 = *((unsigned int *)t78);
    t50 = (t49 >> 2);
    *((unsigned int *)t64) = t50;
    t51 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t51 & 1023U);
    t56 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t56 & 1023U);
    xsi_vlog_generic_convert_array_indices(t63, t85, t52, t62, 2, 1, t96, 10, 2);
    t79 = (t63 + 4);
    t57 = *((unsigned int *)t79);
    t116 = (!(t57));
    t86 = (t85 + 4);
    t58 = *((unsigned int *)t86);
    t119 = (!(t58));
    t120 = (t116 && t119);
    if (t120 == 1)
        goto LAB60;

LAB61:    goto LAB58;

LAB60:    t59 = *((unsigned int *)t63);
    t60 = *((unsigned int *)t85);
    t123 = (t59 - t60);
    t124 = (t123 + 1);
    xsi_vlogvar_wait_assign_value(t32, t54, 0, *((unsigned int *)t85), t124, 0LL);
    goto LAB61;

}

static void Always_104_2(char *t0)
{
    char t11[8];
    char t15[8];
    char t22[8];
    char t35[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5280);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(114, ng0);

LAB10:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(107, ng0);

LAB9:    xsi_set_current_line(108, ng0);
    t12 = (t0 + 3368);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 3368);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3368);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t23 = (t0 + 2168U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 1023U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 1023U);
    xsi_vlog_generic_get_array_select_value(t15, 8, t14, t18, t21, 2, 1, t22, 10, 2);
    t32 = (t0 + 3528);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = (t0 + 3528);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 3528);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t43 = (t0 + 2168U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 1023U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 1023U);
    xsi_vlog_generic_get_array_select_value(t35, 8, t34, t38, t41, 2, 1, t42, 10, 2);
    xsi_vlogtype_concat(t11, 16, 16, 2U, t35, 8, t15, 8);
    t52 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t52, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3048);
    t16 = (t14 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2168U);
    t19 = *((char **)t18);
    memset(t22, 0, 8);
    t18 = (t22 + 4);
    t20 = (t19 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (t6 >> 0);
    *((unsigned int *)t22) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 0);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t10 & 1023U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 1023U);
    xsi_vlog_generic_get_array_select_value(t15, 8, t4, t13, t17, 2, 1, t22, 10, 2);
    t21 = (t0 + 3208);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 3208);
    t32 = (t25 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 3208);
    t36 = (t34 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2168U);
    t39 = *((char **)t38);
    memset(t42, 0, 8);
    t38 = (t42 + 4);
    t40 = (t39 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (t27 >> 0);
    *((unsigned int *)t42) = t28;
    t29 = *((unsigned int *)t40);
    t30 = (t29 >> 0);
    *((unsigned int *)t38) = t30;
    t31 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t31 & 1023U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 1023U);
    xsi_vlog_generic_get_array_select_value(t35, 8, t24, t33, t37, 2, 1, t42, 10, 2);
    xsi_vlogtype_concat(t11, 16, 16, 2U, t35, 8, t15, 8);
    t41 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t41, t11, 0, 0, 16, 0LL);
    goto LAB8;

}


extern void work_m_00000000002141842653_0362415942_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_66_1,(void *)Always_104_2};
	xsi_register_didat("work_m_00000000002141842653_0362415942", "isim/openmips_min_sopc_tb_isim_beh.exe.sim/work/m_00000000002141842653_0362415942.didat");
	xsi_register_executes(pe);
}
