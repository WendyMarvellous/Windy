#include "adc.h"


uint32_t ADC_Receive[60][2];
uint32_t Current=0;
uint32_t Temp=0;

uint32_t Current_mid=1953;//��ʼ��������ֵ����Ҫ����
uint32_t Temp_mid=1953;//��ʼ��������ֵ����Ҫ����

void ADC_Filter(void)
{
  uint8_t i;
  uint32_t Temp_mid=0;
  uint32_t Current_mid=0;
 /*********************���ȷ��ADC��Ӧ����ͨ��**********************************/
 /********ͨ����ʼ�����ò���˳��1��2��ͨ��1�����Ȳ�����ͨ��10�¶Ⱥ����*********/
  
    for(i=0;i<60;i++)
   { Current_mid  =  Current_mid+ADC_Receive[i][0];
     Temp_mid     =  Temp_mid+ADC_Receive[i][1];
  }
Current      =   Current_mid/60;
Temp         =   Temp_mid/60;
}





/* Private function prototypes -----------------------------------------------*/