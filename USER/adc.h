/********************************************************************
 *@file        adc.h
 *@author      Woody      QQ£∫2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       ADC ≥ı ºªØ
 *******************************************************************/
#ifndef __ADC_H
#define __ADC_H

#define AD_channel2   (GPIO_PIN_4)

#include "stm8s.h"


extern void Adc_Init(void);
extern void Adc_Init_volume(void);

#endif