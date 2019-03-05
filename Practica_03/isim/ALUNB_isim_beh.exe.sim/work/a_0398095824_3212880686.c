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
static const char *ng0 = "B:/Arquitectura-Computadoras-ESCOM/Practica_03/ALUNB.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_0398095824_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 7632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0398095824_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:    t8 = (t0 + 7488);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0398095824_3212880686_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(82, ng0);
    t5 = (t0 + 2408U);
    t6 = *((char **)t5);
    t5 = (t0 + 11916);
    t8 = 1;
    if (2U == 2U)
        goto LAB17;

LAB18:    t8 = 0;

LAB19:    if (t8 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 2408U);
    t25 = *((char **)t12);
    t12 = (t0 + 11918);
    t27 = 1;
    if (2U == 2U)
        goto LAB32;

LAB33:    t27 = 0;

LAB34:    if (t27 == 1)
        goto LAB29;

LAB30:    t24 = (unsigned char)0;

LAB31:    if (t24 == 1)
        goto LAB26;

LAB27:    t23 = (unsigned char)0;

LAB28:    if (t23 == 1)
        goto LAB23;

LAB24:    t22 = (unsigned char)0;

LAB25:    t1 = t22;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(86, ng0);
    t5 = (t0 + 7760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(87, ng0);
    t5 = (t0 + 3208U);
    t6 = *((char **)t5);
    t1 = *((unsigned char *)t6);
    t5 = (t0 + 7824);
    t7 = (t5 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t5 = (t0 + 7504);
    *((int *)t5) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t31 = (t0 + 4008U);
    t41 = *((char **)t31);
    t42 = (4 - 4);
    t43 = (t42 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t31 = (t41 + t45);
    t46 = *((unsigned char *)t31);
    t47 = (t0 + 7760);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = t46;
    xsi_driver_first_trans_fast_port(t47);
    xsi_set_current_line(84, ng0);
    t5 = (t0 + 3208U);
    t6 = *((char **)t5);
    t1 = *((unsigned char *)t6);
    t5 = (t0 + 7824);
    t7 = (t5 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t12 = (t0 + 2888U);
    t19 = *((char **)t12);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t2 = t21;
    goto LAB10;

LAB11:    t12 = (t0 + 2728U);
    t16 = *((char **)t12);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t3 = t18;
    goto LAB13;

LAB14:    t12 = (t0 + 2568U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t4 = t15;
    goto LAB16;

LAB17:    t9 = 0;

LAB20:    if (t9 < 2U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t10 = (t6 + t9);
    t11 = (t5 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB18;

LAB22:    t9 = (t9 + 1);
    goto LAB20;

LAB23:    t31 = (t0 + 2888U);
    t38 = *((char **)t31);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)3);
    t22 = t40;
    goto LAB25;

LAB26:    t31 = (t0 + 2728U);
    t35 = *((char **)t31);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)3);
    t23 = t37;
    goto LAB28;

LAB29:    t31 = (t0 + 2568U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    t34 = (t33 == (unsigned char)2);
    t24 = t34;
    goto LAB31;

LAB32:    t28 = 0;

LAB35:    if (t28 < 2U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t29 = (t25 + t28);
    t30 = (t12 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB33;

LAB37:    t28 = (t28 + 1);
    goto LAB35;

}

static void work_a_0398095824_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t0 + 4168U);
    t3 = *((char **)t1);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 7888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 7520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(94, ng0);
    t7 = (t0 + 7888);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

}

static void work_a_0398095824_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t1 = (t0 + 11920);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 7952);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 7536);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(103, ng0);
    t8 = (t0 + 4008U);
    t9 = *((char **)t8);
    t10 = (4 - 4);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = (t0 + 4008U);
    t16 = *((char **)t15);
    t17 = (4 - 1);
    t18 = (t17 - 4);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t15 = (t16 + t21);
    t22 = *((unsigned char *)t15);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t14, t22);
    t24 = (t0 + 7952);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast_port(t24);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

}

static void work_a_0398095824_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t3 = (4 - 1);
    t4 = (t3 - 3);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 8016);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast_port(t9);
    t1 = (t0 + 7552);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_0398095824_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0398095824_3212880686_p_0,(void *)work_a_0398095824_3212880686_p_1,(void *)work_a_0398095824_3212880686_p_2,(void *)work_a_0398095824_3212880686_p_3,(void *)work_a_0398095824_3212880686_p_4,(void *)work_a_0398095824_3212880686_p_5};
	xsi_register_didat("work_a_0398095824_3212880686", "isim/ALUNB_isim_beh.exe.sim/work/a_0398095824_3212880686.didat");
	xsi_register_executes(pe);
}
