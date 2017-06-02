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
static const char *ng0 = "C:/Users/suncio/Desktop/lab of jz/MyMIPS/cp0_reg.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {268435456U, 0U};
static unsigned int ng4[] = {32768U, 0U};
static unsigned int ng5[] = {4980994U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {15, 0};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {14U, 0U};
static unsigned int ng13[] = {13U, 0U};
static int ng14[] = {9, 0};
static int ng15[] = {8, 0};
static int ng16[] = {23, 0};
static int ng17[] = {22, 0};
static int ng18[] = {4, 0};
static int ng19[] = {31, 0};
static int ng20[] = {6, 0};
static int ng21[] = {2, 0};
static unsigned int ng22[] = {8U, 0U};
static unsigned int ng23[] = {10U, 0U};
static unsigned int ng24[] = {15U, 0U};
static unsigned int ng25[] = {16U, 0U};



static void Always_65_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t64[8];
    char t72[8];
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
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    int t110;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    t3 = (t0 + 5120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(78, ng0);

LAB14:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    t21 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB18;

LAB17:    if (t18 != 0)
        goto LAB19;

LAB20:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t22) != 0)
        goto LAB23;

LAB24:    t29 = (t30 + 4);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t29);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB25;

LAB26:    memcpy(t72, t30, 8);

LAB27:    t102 = (t72 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t72);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB46;

LAB43:    if (t18 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB46:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);

LAB74:    t2 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 32, t2, 32);
    if (t32 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng22)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 32, t2, 32);
    if (t32 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng23)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 32, t2, 32);
    if (t32 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng13)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 32, t2, 32);
    if (t32 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng11)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 32, t2, 32);
    if (t32 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 32, t2, 32);
    if (t32 == 1)
        goto LAB85;

LAB86:
LAB88:
LAB87:    xsi_set_current_line(179, ng0);

LAB215:
LAB89:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(66, ng0);

LAB13:    xsi_set_current_line(67, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t37, *((unsigned int *)t30), t39, 0LL);
    goto LAB16;

LAB18:    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB19:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB23:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB25:    t43 = (t0 + 3048);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t0 + 3208);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t31, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t48);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB31;

LAB28:    if (t60 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t31) = 1;

LAB31:    memset(t64, 0, 8);
    t65 = (t31 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t31);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t65) != 0)
        goto LAB34;

LAB35:    t73 = *((unsigned int *)t30);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t30 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB30:    t63 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t64) = 1;
    goto LAB35;

LAB34:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB35;

LAB36:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t30 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t30);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t32 = (t89 & t91);
    t33 = (t93 & t95);
    t96 = (~(t32));
    t97 = (~(t33));
    t98 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t98 & t96);
    t99 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t99 & t97);
    t100 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t100 & t96);
    t101 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t101 & t97);
    goto LAB38;

LAB39:    xsi_set_current_line(82, ng0);

LAB42:    xsi_set_current_line(83, ng0);
    t108 = ((char*)((ng1)));
    t109 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t109, t108, 0, 0, 1, 0LL);
    goto LAB41;

LAB45:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(86, ng0);

LAB50:    xsi_set_current_line(87, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);

LAB51:    t21 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 5, t21, 5);
    if (t32 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t32 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng11)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t32 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t32 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng13)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t32 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB49;

LAB52:    xsi_set_current_line(88, ng0);

LAB63:    xsi_set_current_line(89, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    t28 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 32, 0LL);
    goto LAB62;

LAB54:    xsi_set_current_line(91, ng0);

LAB64:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB62;

LAB56:    xsi_set_current_line(96, ng0);

LAB65:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB62;

LAB58:    xsi_set_current_line(99, ng0);

LAB66:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB62;

LAB60:    xsi_set_current_line(102, ng0);

LAB67:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 3U);
    t7 = (t0 + 3528);
    t8 = (t0 + 3528);
    t21 = (t8 + 72U);
    t28 = *((char **)t21);
    t29 = ((char*)((ng14)));
    t43 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t30, t31, t64, ((int*)(t28)), 2, t29, 32, 1, t43, 32, 1);
    t44 = (t30 + 4);
    t15 = *((unsigned int *)t44);
    t33 = (!(t15));
    t45 = (t31 + 4);
    t16 = *((unsigned int *)t45);
    t34 = (!(t16));
    t35 = (t33 && t34);
    t46 = (t64 + 4);
    t17 = *((unsigned int *)t46);
    t36 = (!(t17));
    t37 = (t35 && t36);
    if (t37 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 23);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 23);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3528);
    t7 = (t0 + 3528);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t28 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 22);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 22);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3528);
    t7 = (t0 + 3528);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t28 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB72;

LAB73:    goto LAB62;

LAB68:    t18 = *((unsigned int *)t64);
    t38 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t31);
    t39 = (t19 - t20);
    t110 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t38, *((unsigned int *)t31), t110, 0LL);
    goto LAB69;

LAB70:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB71;

LAB72:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB73;

LAB75:    xsi_set_current_line(112, ng0);

LAB90:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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
        goto LAB94;

LAB91:    if (t18 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t6) = 1;

LAB94:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(116, ng0);

LAB101:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB102;

LAB103:
LAB97:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB104;

LAB105:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng20)));
    t28 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t8)), 2, t21, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t32 = (!(t9));
    t43 = (t30 + 4);
    t10 = *((unsigned int *)t43);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t44 = (t31 + 4);
    t11 = *((unsigned int *)t44);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB106;

LAB107:    goto LAB89;

LAB77:    xsi_set_current_line(124, ng0);

LAB108:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t21);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t29 = (t6 + 4);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t28);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t43);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t29);
    t25 = *((unsigned int *)t43);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t40 = (t23 & t27);
    if (t40 != 0)
        goto LAB112;

LAB109:    if (t26 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t30) = 1;

LAB112:    t45 = (t30 + 4);
    t41 = *((unsigned int *)t45);
    t42 = (~(t41));
    t51 = *((unsigned int *)t30);
    t52 = (t51 & t42);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB113;

LAB114:
LAB115:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB130;

LAB131:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng22)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng20)));
    t28 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t8)), 2, t21, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t32 = (!(t9));
    t43 = (t30 + 4);
    t10 = *((unsigned int *)t43);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t44 = (t31 + 4);
    t11 = *((unsigned int *)t44);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB132;

LAB133:    goto LAB89;

LAB79:    xsi_set_current_line(137, ng0);

LAB134:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t21);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t29 = (t6 + 4);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t28);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t43);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t29);
    t25 = *((unsigned int *)t43);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t40 = (t23 & t27);
    if (t40 != 0)
        goto LAB138;

LAB135:    if (t26 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t30) = 1;

LAB138:    t45 = (t30 + 4);
    t41 = *((unsigned int *)t45);
    t42 = (~(t41));
    t51 = *((unsigned int *)t30);
    t52 = (t51 & t42);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB139;

LAB140:
LAB141:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB156;

LAB157:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng23)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng20)));
    t28 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t8)), 2, t21, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t32 = (!(t9));
    t43 = (t30 + 4);
    t10 = *((unsigned int *)t43);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t44 = (t31 + 4);
    t11 = *((unsigned int *)t44);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB158;

LAB159:    goto LAB89;

LAB81:    xsi_set_current_line(150, ng0);

LAB160:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t21);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t29 = (t6 + 4);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t28);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t43);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t29);
    t25 = *((unsigned int *)t43);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t40 = (t23 & t27);
    if (t40 != 0)
        goto LAB164;

LAB161:    if (t26 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t30) = 1;

LAB164:    t45 = (t30 + 4);
    t41 = *((unsigned int *)t45);
    t42 = (~(t41));
    t51 = *((unsigned int *)t30);
    t52 = (t51 & t42);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB165;

LAB166:
LAB167:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB182;

LAB183:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng20)));
    t28 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t8)), 2, t21, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t32 = (!(t9));
    t43 = (t30 + 4);
    t10 = *((unsigned int *)t43);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t44 = (t31 + 4);
    t11 = *((unsigned int *)t44);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB184;

LAB185:    goto LAB89;

LAB83:    xsi_set_current_line(163, ng0);

LAB186:    xsi_set_current_line(164, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t21);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t29 = (t6 + 4);
    t43 = (t28 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t28);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t43);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t29);
    t25 = *((unsigned int *)t43);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t40 = (t23 & t27);
    if (t40 != 0)
        goto LAB190;

LAB187:    if (t26 != 0)
        goto LAB189;

LAB188:    *((unsigned int *)t30) = 1;

LAB190:    t45 = (t30 + 4);
    t41 = *((unsigned int *)t45);
    t42 = (~(t41));
    t51 = *((unsigned int *)t30);
    t52 = (t51 & t42);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB191;

LAB192:
LAB193:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB208;

LAB209:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng20)));
    t28 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t8)), 2, t21, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t32 = (!(t9));
    t43 = (t30 + 4);
    t10 = *((unsigned int *)t43);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t44 = (t31 + 4);
    t11 = *((unsigned int *)t44);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB210;

LAB211:    goto LAB89;

LAB85:    xsi_set_current_line(176, ng0);

LAB212:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    t7 = (t0 + 3368);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t21, 2, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t33 = (!(t9));
    if (t33 == 1)
        goto LAB213;

LAB214:    goto LAB89;

LAB93:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(113, ng0);

LAB98:    xsi_set_current_line(114, ng0);
    t29 = (t0 + 2328U);
    t43 = *((char **)t29);
    t29 = ((char*)((ng18)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t43, 32, t29, 32);
    t44 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t44, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB99;

LAB100:    goto LAB97;

LAB99:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB100;

LAB102:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB103;

LAB104:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB105;

LAB106:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t4, t2, t37, *((unsigned int *)t30), t39, 0LL);
    goto LAB107;

LAB111:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(125, ng0);

LAB116:    xsi_set_current_line(126, ng0);
    t46 = (t0 + 2488U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t54 = *((unsigned int *)t47);
    t55 = *((unsigned int *)t46);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t48);
    t62 = *((unsigned int *)t49);
    t66 = (t61 | t62);
    t67 = (~(t66));
    t68 = (t60 & t67);
    if (t68 != 0)
        goto LAB120;

LAB117:    if (t66 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t31) = 1;

LAB120:    t63 = (t31 + 4);
    t69 = *((unsigned int *)t63);
    t70 = (~(t69));
    t73 = *((unsigned int *)t31);
    t74 = (t73 & t70);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(129, ng0);

LAB127:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB128;

LAB129:
LAB123:    goto LAB115;

LAB119:    t50 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(126, ng0);

LAB124:    xsi_set_current_line(127, ng0);
    t65 = (t0 + 2328U);
    t71 = *((char **)t65);
    t65 = ((char*)((ng18)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 32, t71, 32, t65, 32);
    t76 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t76, t64, 0, 0, 32, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB125;

LAB126:    goto LAB123;

LAB125:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB126;

LAB128:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB129;

LAB130:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB131;

LAB132:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t4, t2, t37, *((unsigned int *)t30), t39, 0LL);
    goto LAB133;

LAB137:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(138, ng0);

LAB142:    xsi_set_current_line(139, ng0);
    t46 = (t0 + 2488U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t54 = *((unsigned int *)t47);
    t55 = *((unsigned int *)t46);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t48);
    t62 = *((unsigned int *)t49);
    t66 = (t61 | t62);
    t67 = (~(t66));
    t68 = (t60 & t67);
    if (t68 != 0)
        goto LAB146;

LAB143:    if (t66 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t31) = 1;

LAB146:    t63 = (t31 + 4);
    t69 = *((unsigned int *)t63);
    t70 = (~(t69));
    t73 = *((unsigned int *)t31);
    t74 = (t73 & t70);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(142, ng0);

LAB153:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB154;

LAB155:
LAB149:    goto LAB141;

LAB145:    t50 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(139, ng0);

LAB150:    xsi_set_current_line(140, ng0);
    t65 = (t0 + 2328U);
    t71 = *((char **)t65);
    t65 = ((char*)((ng18)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 32, t71, 32, t65, 32);
    t76 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t76, t64, 0, 0, 32, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB151;

LAB152:    goto LAB149;

LAB151:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB152;

LAB154:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB155;

LAB156:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB157;

LAB158:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t4, t2, t37, *((unsigned int *)t30), t39, 0LL);
    goto LAB159;

LAB163:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(151, ng0);

LAB168:    xsi_set_current_line(152, ng0);
    t46 = (t0 + 2488U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t54 = *((unsigned int *)t47);
    t55 = *((unsigned int *)t46);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t48);
    t62 = *((unsigned int *)t49);
    t66 = (t61 | t62);
    t67 = (~(t66));
    t68 = (t60 & t67);
    if (t68 != 0)
        goto LAB172;

LAB169:    if (t66 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t31) = 1;

LAB172:    t63 = (t31 + 4);
    t69 = *((unsigned int *)t63);
    t70 = (~(t69));
    t73 = *((unsigned int *)t31);
    t74 = (t73 & t70);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(155, ng0);

LAB179:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB180;

LAB181:
LAB175:    goto LAB167;

LAB171:    t50 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(152, ng0);

LAB176:    xsi_set_current_line(153, ng0);
    t65 = (t0 + 2328U);
    t71 = *((char **)t65);
    t65 = ((char*)((ng18)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 32, t71, 32, t65, 32);
    t76 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t76, t64, 0, 0, 32, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB177;

LAB178:    goto LAB175;

LAB177:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB178;

LAB180:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB181;

LAB182:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB183;

LAB184:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t4, t2, t37, *((unsigned int *)t30), t39, 0LL);
    goto LAB185;

LAB189:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB190;

LAB191:    xsi_set_current_line(164, ng0);

LAB194:    xsi_set_current_line(165, ng0);
    t46 = (t0 + 2488U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t54 = *((unsigned int *)t47);
    t55 = *((unsigned int *)t46);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t48);
    t62 = *((unsigned int *)t49);
    t66 = (t61 | t62);
    t67 = (~(t66));
    t68 = (t60 & t67);
    if (t68 != 0)
        goto LAB198;

LAB195:    if (t66 != 0)
        goto LAB197;

LAB196:    *((unsigned int *)t31) = 1;

LAB198:    t63 = (t31 + 4);
    t69 = *((unsigned int *)t63);
    t70 = (~(t69));
    t73 = *((unsigned int *)t31);
    t74 = (t73 & t70);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB199;

LAB200:    xsi_set_current_line(168, ng0);

LAB205:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB206;

LAB207:
LAB201:    goto LAB193;

LAB197:    t50 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB198;

LAB199:    xsi_set_current_line(165, ng0);

LAB202:    xsi_set_current_line(166, ng0);
    t65 = (t0 + 2328U);
    t71 = *((char **)t65);
    t65 = ((char*)((ng18)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 32, t71, 32, t65, 32);
    t76 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t76, t64, 0, 0, 32, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t21, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB203;

LAB204:    goto LAB201;

LAB203:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB204;

LAB206:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB207;

LAB208:    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB209;

LAB210:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t4, t2, t37, *((unsigned int *)t30), t39, 0LL);
    goto LAB211;

LAB213:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB214;

}

static void Always_186_1(char *t0)
{
    char t6[8];
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
    int t30;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 5672);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(186, ng0);

LAB5:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(189, ng0);

LAB14:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t30 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(212, ng0);

LAB40:
LAB32:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(187, ng0);

LAB13:    xsi_set_current_line(188, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(191, ng0);

LAB33:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

LAB18:    xsi_set_current_line(194, ng0);

LAB34:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

LAB20:    xsi_set_current_line(197, ng0);

LAB35:    xsi_set_current_line(198, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

LAB22:    xsi_set_current_line(200, ng0);

LAB36:    xsi_set_current_line(201, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

LAB24:    xsi_set_current_line(203, ng0);

LAB37:    xsi_set_current_line(204, ng0);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

LAB26:    xsi_set_current_line(206, ng0);

LAB38:    xsi_set_current_line(207, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

LAB28:    xsi_set_current_line(209, ng0);

LAB39:    xsi_set_current_line(210, ng0);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB32;

}


extern void work_m_00000000000503308200_3669824866_init()
{
	static char *pe[] = {(void *)Always_65_0,(void *)Always_186_1};
	xsi_register_didat("work_m_00000000000503308200_3669824866", "isim/openmips_min_sopc_tb_isim_beh.exe.sim/work/m_00000000000503308200_3669824866.didat");
	xsi_register_executes(pe);
}
