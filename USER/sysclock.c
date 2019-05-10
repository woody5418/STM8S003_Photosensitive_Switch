/********************************************************************
 *@file        sysclock.c
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       ϵͳʱ��ѡ��
 *******************************************************************/
#include "sysclock.h"

/*******************************************************************************
 * ����: Sysclock_Init
 * ����: ����ϵͳʱ��Ƶ��
 * �β�: ��
 * ����: ��
 * ˵��: ʱ��ѡ��Ϊ�ڲ�16MHz���ڲ�RC��

 ******************************************************************************/
void SystemClock_Init(void)
{
  CLK_HSICmd(ENABLE);/* Set HSIEN bit */
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); /* Fmaster = 16MHz */
}


