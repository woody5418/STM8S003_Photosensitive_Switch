/********************************************************************
 *@file        adc.c
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       ADC ��ʼ���Լ�ͨ���л�
 *******************************************************************/
#include "adc.h"
#include "delay.h"
/*******************************************************************************
 * ��������Adc_Init
 * ����  ������ADC1_CH3�ĳ�ʼ��
 * ����  ����
 * ���  ����
 * ����  ���ⲿ����
 ******************************************************************************/
void Adc_Init(void)
{
  ADC1_Cmd(ENABLE);

  ADC1_DeInit();
  
  ADC1_Init(ADC1_CONVERSIONMODE_SINGLE, \
    ADC1_CHANNEL_3, ADC1_PRESSEL_FCPU_D2, ADC1_EXTTRIG_TIM, \
      DISABLE, ADC1_ALIGN_RIGHT, ADC1_SCHMITTTRIG_CHANNEL0, DISABLE);
  
  ADC1_Cmd(ENABLE);
  ADC1_StartConversion();

}
/*******************************************************************************
 * ��������Adc_Init_volume
 * ����  ������ADC1_CH2�ĳ�ʼ��
 * ����  ����
 * ���  ����
 * ����  ���ⲿ����
 ******************************************************************************/
void Adc_Init_volume(void)
{
  ADC1_Cmd(ENABLE);

  ADC1_DeInit();
  
  ADC1_Init(ADC1_CONVERSIONMODE_CONTINUOUS, \
    ADC1_CHANNEL_2, ADC1_PRESSEL_FCPU_D2, ADC1_EXTTRIG_TIM, \
      DISABLE, ADC1_ALIGN_RIGHT, ADC1_SCHMITTTRIG_CHANNEL0, DISABLE);
  
  ADC1_Cmd(ENABLE);
  ADC1_StartConversion();

}

