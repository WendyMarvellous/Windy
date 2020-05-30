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
/*************************�δ�ʱ����ʼ��**************************************/
void SysTick_Init(void)
{
if (HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/10000))     //100um�ж�һ��     
   {
    while(1);
      }
    SysTick->CTRL &= ~ SysTick_CTRL_ENABLE_Msk;          //SysTick��CTRL�Ĵ���SysTick_CTRL_ENABLE_Msk��0,�ر�SysTick ��ʱ��

}

/************************�����δ�ʱ��*****************************************/
void  SysTick_Start(void)
{

 SysTick->CTRL  |= SysTick_CTRL_ENABLE_Msk;                                    //����SysTick��ʱ��
 System_Count=0;                                                              //������ֵΪ0����ʼ����

 }

/************************�δ�ʱ����ʱ*****************************************/
/************��ʱ����*******************/
void Delay_ms( uint16_t nus)                                                  //��ʱ��ѡ��TIM6����λ 10ms
{   
  TimeDelay=nus;
  
  while(TimeDelay!=0);
  

 }

/***************************��������ʼ��****************************************/
 void ENC_Init(void)
 {
   Delay_ms( 2 );                         //�ӳ�1s
   TIM3->CNT=32767;
    }

/**************************������λ��*******************************************/
/*****************************����ʽ������**************************************/
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