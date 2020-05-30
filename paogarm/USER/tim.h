#ifndef _TIM_H
#define _TIM_H
/******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

extern uint16_t  System_Count;
extern uint16_t  TimeDelay;
extern int32_t   MyTemp;
extern int32_t  PositionTemp2;
extern int32_t  position1;
extern int32_t  position2;

void SysTick_Init(void);
void  SysTick_Start(void);
void Delay_ms(uint16_t nus);
void ENC_Init(void);
void  ENC_Position(void);
#endif