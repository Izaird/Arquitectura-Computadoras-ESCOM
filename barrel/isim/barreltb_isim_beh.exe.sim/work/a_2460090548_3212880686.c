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
static const char *ng0 = "B:/Arquitectura-Computadoras-ESCOM/barrel/barrel.vhd";



static void work_a_2460090548_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(25, ng0);
    t4 = (3 - 1);
    t1 = (t0 + 5147);
    *((int *)t1) = 0;
    t2 = (t0 + 5151);
    *((int *)t2) = t4;
    t5 = 0;
    t6 = t4;

LAB2:    if (t5 <= t6)
        goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 3272);
    t3 = (t1 + 56U);
    t8 = *((char **)t3);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3192);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(26, ng0);
    t7 = (8 - 1);
    t3 = (t0 + 5155);
    *((int *)t3) = t7;
    t8 = (t0 + 5159);
    *((int *)t8) = 0;
    t9 = t7;
    t10 = 0;

LAB6:    if (t9 >= t10)
        goto LAB7;

LAB9:
LAB4:    t1 = (t0 + 5147);
    t5 = *((int *)t1);
    t2 = (t0 + 5151);
    t6 = *((int *)t2);
    if (t5 == t6)
        goto LAB5;

LAB17:    t4 = (t5 + 1);
    t5 = t4;
    t3 = (t0 + 5147);
    *((int *)t3) = t5;
    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);
    t11 = (t0 + 1352U);
    t12 = *((char **)t11);
    t11 = (t0 + 5147);
    t13 = *((int *)t11);
    t14 = (t13 - 2);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t11));
    t16 = (1U * t15);
    t17 = (0 + t16);
    t18 = (t12 + t17);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)2);
    if (t20 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5155);
    t2 = (t0 + 5147);
    t4 = xsi_vhdl_pow(2, *((int *)t2));
    t7 = *((int *)t1);
    t19 = (t7 < t4);
    if (t19 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 5155);
    t3 = (t0 + 5147);
    t4 = xsi_vhdl_pow(2, *((int *)t3));
    t7 = *((int *)t1);
    t13 = (t7 - t4);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t8 = (t2 + t17);
    t19 = *((unsigned char *)t8);
    t11 = (t0 + 1888U);
    t12 = *((char **)t11);
    t11 = (t0 + 5155);
    t23 = *((int *)t11);
    t24 = (t23 - 7);
    t25 = (t24 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t11));
    t26 = (1U * t25);
    t27 = (0 + t26);
    t18 = (t12 + t27);
    *((unsigned char *)t18) = t19;

LAB14:
LAB11:
LAB8:    t1 = (t0 + 5155);
    t9 = *((int *)t1);
    t2 = (t0 + 5159);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB9;

LAB16:    t4 = (t9 + -1);
    t9 = t4;
    t3 = (t0 + 5155);
    *((int *)t3) = t9;
    goto LAB6;

LAB10:    xsi_set_current_line(28, ng0);
    t21 = (t0 + 1888U);
    t22 = *((char **)t21);
    t21 = (t0 + 5155);
    t23 = *((int *)t21);
    t24 = (t23 - 7);
    t25 = (t24 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t21));
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t22 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 1888U);
    t31 = *((char **)t30);
    t30 = (t0 + 5155);
    t32 = *((int *)t30);
    t33 = (t32 - 7);
    t34 = (t33 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t30));
    t35 = (1U * t34);
    t36 = (0 + t35);
    t37 = (t31 + t36);
    *((unsigned char *)t37) = t29;
    goto LAB11;

LAB13:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1888U);
    t8 = *((char **)t3);
    t3 = (t0 + 5155);
    t13 = *((int *)t3);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t3));
    t16 = (1U * t15);
    t17 = (0 + t16);
    t11 = (t8 + t17);
    *((unsigned char *)t11) = (unsigned char)2;
    goto LAB14;

}


extern void work_a_2460090548_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2460090548_3212880686_p_0};
	xsi_register_didat("work_a_2460090548_3212880686", "isim/barreltb_isim_beh.exe.sim/work/a_2460090548_3212880686.didat");
	xsi_register_executes(pe);
}
