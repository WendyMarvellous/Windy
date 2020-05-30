#ifndef _ADC_H
#define _ADC_H
/******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

extern  uint32_t ADC_Receive[60][2];
extern  uint32_t Current_mid;
extern  uint32_t Current;
extern  uint32_t Temp;
extern  uint32_t Temp_mid;

void ADC_Filter(void);







#endif