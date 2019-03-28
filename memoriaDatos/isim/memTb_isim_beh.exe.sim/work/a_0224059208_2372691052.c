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
static const char *ng0 = "B:/Arquitectura-Computadoras-ESCOM/memoriaDatos/memTb.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0224059208_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0224059208_2372691052_p_1(char *t0)
{
    char t7[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5880U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t7, t3, t2, 1);
    t5 = (t7 + 12U);
    t8 = *((unsigned int *)t5);
    t9 = (1U * t8);
    t10 = (8U != t9);
    if (t10 == 1)
        goto LAB4;

LAB5:    t6 = (t0 + 3712);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5864U);
    t4 = (t0 + 5960);
    t6 = (t15 + 0U);
    t11 = (t6 + 0U);
    *((int *)t11) = 0;
    t11 = (t6 + 4U);
    *((int *)t11) = 7;
    t11 = (t6 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t8 = (t16 * 1);
    t8 = (t8 + 1);
    t11 = (t6 + 12U);
    *((unsigned int *)t11) = t8;
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t7, t3, t2, t4, t15);
    t12 = (t7 + 12U);
    t8 = *((unsigned int *)t12);
    t9 = (1U * t8);
    t10 = (8U != t9);
    if (t10 == 1)
        goto LAB6;

LAB7:    t13 = (t0 + 3776);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t11, 8U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(94, ng0);
    t20 = (20 * 1000LL);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t20);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB4:    xsi_size_not_matching(8U, t9, 0);
    goto LAB5;

LAB6:    xsi_size_not_matching(8U, t9, 0);
    goto LAB7;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_0224059208_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0224059208_2372691052_p_0,(void *)work_a_0224059208_2372691052_p_1};
	xsi_register_didat("work_a_0224059208_2372691052", "isim/memTb_isim_beh.exe.sim/work/a_0224059208_2372691052.didat");
	xsi_register_executes(pe);
}
