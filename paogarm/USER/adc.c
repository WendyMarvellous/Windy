#include "adc.h"


uint32_t ADC_Receive[60][2];
uint32_t Current=0;
uint32_t Temp=0;

uint32_t Current_mid=1953;//初始化电流中值，需要换算
uint32_t Temp_mid=1953;//初始化电流中值，需要换算

void ADC_Filter(void)
{
  uint8_t i;
  uint32_t Temp_mid=0;
  uint32_t Current_mid=0;
 /*********************如何确定ADC对应采样通道**********************************/
 /********通过初始化设置采样顺序1，2，通道1电流先采样，通道10温度后采样*********/
  
    for(i=0;i<60;i++)
   { Current_mid  =  Current_mid+ADC_Receive[i][0];
     Temp_mid     =  Temp_mid+ADC_Receive[i][1];
  }
Current      =   Current_mid/60;
Temp         =   Temp_mid/60;
}





/* Private function prototypes -----------------------------------------------*/