#include "tim.h"

/* Private variables ---------------------------------------------------------*/

uint16_t  System_Count=0;
uint16_t  TimeDelay    =0;

int32_t  MyTemp        = 0;
int32_t  PositionTemp1 = 0;
int32_t  LastPosition1 = 32767;
int32_t  PositionTemp2 = 0;

int32_t  position1=0;
int32_t  position2=0;


/* Private function prototypes -----------------------------------------------*/
/*************************滴答定时器初始化**************************************/
void SysTick_Init(void)
{
if (HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/10000))     //100um中断一次     
   {
    while(1);
      }
    SysTick->CTRL &= ~ SysTick_CTRL_ENABLE_Msk;          //SysTick的CTRL寄存器SysTick_CTRL_ENABLE_Msk清0,关闭SysTick 定时器

}

/************************开启滴答定时器*****************************************/
void  SysTick_Start(void)
{

 SysTick->CTRL  |= SysTick_CTRL_ENABLE_Msk;                                    //开启SysTick定时器
 System_Count=0;                                                              //计数初值为0，开始计数

 }

/************************滴答定时器计时*****************************************/
/************延时函数*******************/
void Delay_ms( uint16_t nus)                                                  //定时器选择TIM6，单位 10ms
{   
  TimeDelay=nus;
  
  while(TimeDelay!=0);
  

 }

/***************************编码器初始化****************************************/
 void ENC_Init(void)
 {
   Delay_ms( 2 );                         //延迟1s
   TIM3->CNT=32767;
    }

/**************************编码器位置*******************************************/
/*****************************绝对式编码器**************************************/
void  ENC_Position(void)
{
   
         
   PositionTemp1 = TIM3->CNT;
   MyTemp        = PositionTemp1;
   MyTemp        = PositionTemp1-LastPosition1;
        
   LastPosition1 = PositionTemp1;
        
   if(MyTemp < -10000)
    MyTemp = MyTemp+65536;
   if(MyTemp >  10000)
    MyTemp = MyTemp-65536;
        
   PositionTemp2=PositionTemp2+MyTemp;
   
   if(position1>PositionTemp2)
     position1 = PositionTemp2 ;
     
    if(position2<PositionTemp2)
     position2 = PositionTemp2 ;
}

/******************************************************************************/	