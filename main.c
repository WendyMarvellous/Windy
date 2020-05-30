/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_hal.h"
#include "rtc.h"
#include "usart.h"
#include "gpio.h"

/* USER CODE BEGIN Includes */
#include "lvbo.h"
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
uint8_t ReadBuffer[10];
uint16_t ti=0;
int16_t jiasudux;
int16_t jiasuduy;
int16_t jiasuduz;
uint16_t nn=0;
uint8_t GPSCtr[16]={0X24,0X50,0X48,0X58,0X4D,0X31,0X30,0X32,0X2C,0X30,0X30,0X2A,0X31,0X32,0X0D,0X0A};////�ر�����NMEA���
uint8_t GPSCtr1[19]={0X24,0X50,0X48,0X58,0X4D,0X31,0X30,0X33,0X2C,0X47,0X47,0X41,0X2C,0X35,0X2A,0X34,0X42,0X0D,0X0A};////��GGA��䣬5sһ�����
//uint8_t GPSCtr1[19]={0X24,0X50,0X48,0X58,0X4D,0X31,0X30,0X33,0X2C,0X47,0X47,0X41,0X2C,0X31,0X2A,0X34,0X46,0X0D,0X0A};////��GGA��䣬1sһ�����
uint8_t GPSCtr2[19]={0X24,0X50,0X48,0X58,0X4D,0X31,0X30,0X33,0X2C,0X41,0X4E,0X54,0X2C,0X30,0X2A,0X35,0X34,0X0D,0X0A};////�ر�ANT���
uint8_t GPSCtr3[13]={0X24,0X43,0X46,0X43,0X48,0X57,0X2C,0X30,0X2A,0X34,0X35,0X0D,0X0A};//��������λ
uint8_t GPSCtr4[13]={0X24,0X43,0X46,0X43,0X48,0X57,0X2C,0X31,0X2A,0X34,0X34,0X0D,0X0A};//��������λ
uint8_t TEMP[2];
uint16_t jiaoyan=0X330;
uint8_t GPSData[50];
uint8_t LoRaData[50];
uint8_t LoRaDatai=0;
uint8_t LoRaxiumian[4]={0XEE,0XFF,0XEE,0XFF};
uint8_t didian;
uint16_t temp=0;
uint8_t xiumianstate=0;
uint8_t antE=0;
uint8_t GPSErrorn=0;
uint8_t GPS_flag=0;
uint8_t zhongduantime=0;
uint32_t zhongduantime1=0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */
void delay(uint32_t delaytime)
{
   while(ti<(delaytime*20))
    {
      ti++;
    }
    ti=0;
}

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
  lvbo_initialize( );
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_RTC_Init();
  MX_USART1_UART_Init();
  MX_USART3_UART_Init();

  /* USER CODE BEGIN 2 */
     lvbo_DW.bushuall=BKP->DR2;////��ȡ���ݼĴ������ܲ���
     HAL_GPIO_WritePin(GPIOA, LED1_Pin, GPIO_PIN_SET);
     HAL_GPIO_WritePin(GPIOA, RXT_Pin, GPIO_PIN_SET);////RXT�ø�
     if(BKP->DR1!=0X5050)//////�ж��Ƿ��һ�����ã��������������
     {
     RCC->APB1ENR|=1<<28;/////ʹ�ܵ�Դʱ��
     RCC->APB1ENR|=1<<28;/////ʹ�ܱ���ʱ��
     PWR->CR|=1<<8;/////ȡ��������д����
     RCC->BDCR|=1<<16;/////����������λ����
     RCC->BDCR&=~(1<<16);/////����������λ����
//     RCC->BDCR|=1<<0;
//     while(!(RCC->BDCR&0X02)&&temp<250)
//     {
//       temp++;
//       HAL_Delay(10);
//     };
//     if(temp>=250)return 1;
//    RCC->BDCR|=1<<8;
     RCC->BDCR|=1<<9;
     RCC->BDCR|=1<<15;////RTCʱ��ʹ��
     while(!(RTC->CRL&(1<<5)));////�ȴ�RTC�Ĵ����������
     while(!(RTC->CRL&(1<<3)));////�ȴ�RTC�Ĵ���ͬ��
     RTC->CRH=0X02;////���������ж�
     while(!(RTC->CRL&(1<<5)));////�ȴ�RTC�Ĵ����������
     RTC->CRL|=1<<4;/////��������ģʽ
     RTC->PRLH=0X0000;
     RTC->PRLL=0X7FFF; ////����Ԥ��Ƶϵ��������1sһ�ε��ź�
     RTC->ALRH=0X0000;
     RTC->ALRL=0X012C;////����5min����һ���ж�
     RTC->CRL&=~(1<<4);/////���ø���
     while(!(RTC->CRL&(1<<5)));////�ȴ�RTC�Ĵ����������
     HAL_Delay(100);
     lis2dh_WriteOneByte(0X20,0X67);///////��Դģʽ ͨ��ģʽ 400HZ ��������ļ��ٶȴ�����ʹ��
     lis2dh_WriteOneByte(0X1F,0XC0);/////�¶ȴ�����ʹ��
     lis2dh_WriteOneByte(0X23,0X90);/////��Դģʽ ��������+-4g ���ݸ���ģʽ
     lis2dh_WriteOneByte(0X34,0X6A);/////INT2ģʽ
     lis2dh_WriteOneByte(0X36,0X22);/////��ֵ1120
     lis2dh_WriteOneByte(0X37,0X70);/////INTʱ��
     lis2dh_WriteOneByte(0X25,0XF8);/////
     
     HAL_GPIO_WritePin(GPIOA, GPS_KEY_Pin, GPIO_PIN_SET);////��GPS��Դ����
     HAL_GPIO_WritePin(GPIOA, LED2_Pin, GPIO_PIN_RESET);////��GPS������
     HAL_Delay(2000);
     HAL_UART_Transmit(&huart1,GPSCtr4,13,0xffff);//////GPS���ã�������
     HAL_Delay(2000);
     HAL_UART_Transmit(&huart1,GPSCtr,16,0xffff);//////GPS����
     HAL_Delay(2000);
     HAL_UART_Transmit(&huart1,GPSCtr1,19,0xffff);//////GPS����
     HAL_Delay(2000);
     HAL_UART_Transmit(&huart1,GPSCtr2,19,0xffff);//////GPS����
     HAL_Delay(2000);
     //HAL_GPIO_WritePin(GPIOA, GPS_KEY_Pin, GPIO_PIN_RESET);////�ر�GPS��Դ����
     HAL_GPIO_WritePin(GPIOA, LED2_Pin, GPIO_PIN_SET);////�ر�GPS������
     //HAL_Delay(3000);
     
     PWR->CR&=0XFFFFFF0F;/////���õ͵羯�����
     PWR->CR|=0X000000F0;/////2.9V�͵羯��
     
     BKP->DR1=0X5050;/////������ô���
     }
     else
     {
       while(!(RTC->CRL&(1<<3)));////�ȴ�RTC�Ĵ���ͬ��
       RTC->CRH=0X02;////���������ж�
       while(!(RTC->CRL&(1<<5)));////�ȴ�RTC�Ĵ����������
     }
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
     nn++;
     didian=(PWR->CSR&0X0000004);///��ȡ�͵�״̬
     if(didian==1)
       HAL_GPIO_WritePin(GPIOA, LED1_Pin, GPIO_PIN_RESET);/////�����͵羯����
     else
       HAL_GPIO_WritePin(GPIOA, LED1_Pin, GPIO_PIN_SET);/////�رյ͵羯����
     TEMP[0]=lis2dh_ReadOneByte(0X0C);  /////TEMP_L
     TEMP[1]=lis2dh_ReadOneByte(0X0D); ///TEMP_H
     
     ReadBuffer[2]=lis2dh_ReadOneByte(0X28);/////x_L
     ReadBuffer[3]=lis2dh_ReadOneByte(0X29);/////x_H
     jiasudux=(ReadBuffer[3]*256+ReadBuffer[2])/64;
     if(jiasudux>=512)
       jiasudux=(jiasudux-1024)*8;
     else jiasudux=jiasudux*8;
      lvbo_U.ax=jiasudux;
  
     ReadBuffer[4]=lis2dh_ReadOneByte(0X2A);///y_L
     ReadBuffer[5]=lis2dh_ReadOneByte(0X2B);////y_H
          jiasuduy= (ReadBuffer[5]*256+ReadBuffer[4])/64;
     if(jiasuduy>=512)
       jiasuduy=(jiasuduy-1024)*8;
     else jiasuduy=jiasuduy*8;
     lvbo_U.ay=jiasuduy;
     
     ReadBuffer[6]=lis2dh_ReadOneByte(0X2C);/////z_L
     ReadBuffer[7]=lis2dh_ReadOneByte(0X2D);////z_H
         jiasuduz= (ReadBuffer[7]*256+ReadBuffer[6])/64;
     if(jiasuduz>=512)
       jiasuduz=(jiasuduz-1024)*8;
     else jiasuduz=jiasuduz*8;
     lvbo_U.az=jiasuduz;
     
     
     lvbo_step();
     
     if(lvbo_Y.xiumin==1)///���߶���
     {
       lvbo_Y.GPS_state=1;
       xiumianstate++;
     }
     
      if(lvbo_Y.LoRa_state==1)
      { 
        //HAL_Delay(2000);
       
        while(LoRaDatai<24)/////����LoRaҪ���͵�����
        {
          LoRaData[LoRaDatai]=GPSData[LoRaDatai+19];
          LoRaDatai++;
        }
        /////////////////////
        
        for(LoRaDatai=0;LoRaDatai<10;LoRaDatai++)/////����LoRaҪ���͵�����,ʱ��
        {
          LoRaData[LoRaDatai]=GPSData[LoRaDatai+8];          
        }
        LoRaData[10]=0x3A;///////:
        LoRaData[11]=GPSData[29];/////N or S
        for(LoRaDatai=12;LoRaDatai<22;LoRaDatai++)/////γ��
        {
          LoRaData[LoRaDatai]=GPSData[LoRaDatai+7];          
        }
        LoRaData[22]=GPSData[42];/////W or E
        for(LoRaDatai=23;LoRaDatai<34;LoRaDatai++)//////����
        {
          LoRaData[LoRaDatai]=GPSData[LoRaDatai+8];         
        }
        LoRaData[34]=0x54;
        if(TEMP[1]< 0x80) 
        {
          LoRaData[35]='+';
          LoRaData[36]=TEMP[1]/10+48;
          LoRaData[37]=TEMP[1]%10+48;
        }
        else{ 
             LoRaData[35]='-';
              LoRaData[36]=(256-TEMP[1])/10+48;
              LoRaData[37]=(256-TEMP[1])%10+48;                 
        }
        LoRaData[38]=0x2C;
        LoRaData[39]=didian+48;
        LoRaData[40]=0x2C;
        LoRaData[41]=lvbo_DW.bushuall/10000+48;////�ܲ������λ
        LoRaData[42]=(lvbo_DW.bushuall/1000)%10+48;////�ܲ���ǧλ
        LoRaData[43]=(lvbo_DW.bushuall/100)%10+48;////�ܲ�����λ
        LoRaData[44]=(lvbo_DW.bushuall/10)%10+48;////�ܲ���ʮλ
        LoRaData[45]=(lvbo_DW.bushuall)%10+48;////�ܲ�����λ
        if(GPS_flag==2)
        {
          LoRaData[11]='G';
          LoRaData[12]='P';
          LoRaData[13]='S';
          LoRaData[14]='A';
          LoRaData[15]='N';
          LoRaData[16]='T';
          LoRaData[17]='E';
          LoRaData[18]='R';
          LoRaData[19]='R';
          LoRaData[20]='O';
          LoRaData[21]='R';
          GPS_flag=0;
        for(LoRaDatai=22;LoRaDatai<34;LoRaDatai++)//////����
        {
          LoRaData[LoRaDatai]=0X20;         
        }
        }
        HAL_GPIO_WritePin(GPIOA, B_Pin|A_Pin , GPIO_PIN_SET);///����LoRa
        HAL_Delay(100);
        HAL_UART_Transmit(&huart3,LoRaData,46,0xffff);/////LoRa��������
        HAL_Delay(100);
        HAL_UART_Transmit(&huart3,LoRaxiumian,4,0xffff);/////LoRa����
        lvbo_Y.LoRa_state=0;
        HAL_GPIO_WritePin(GPIOA, B_Pin|A_Pin , GPIO_PIN_RESET);///��λ��������
        memset(GPSData,0,50);/////GPS��������
        memset(LoRaData,0,50);////LoRa��������
        zhongduantime=0;
        
      }

         if(xiumianstate==2) //////���� 
     {
       BKP->DR2=lvbo_DW.bushuall;
       HAL_PWR_DisableWakeUpPin(PWR_WAKEUP_PIN1);
       
       SET_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPDEEP_Msk));////����SLEEPDEEPλ    
       
       RCC->APB1ENR|=1<<28;///ʹ�ܵ�Դʱ��
       PWR->CR|=0X00000100;//////ʹ��WAKEUP����
       HAL_PWR_EnableWakeUpPin(PWR_WAKEUP_PIN1);
       
       SET_BIT(PWR->CR, PWR_CR_PDDS);//////����PDDSλ
       PWR->CR|=0X00000004;/////����λ����WUF
       __WFI();
       
     }
     
     
     
     
     
     if(lvbo_Y.GPS_state==1)
     {
       HAL_GPIO_WritePin(GPIOA, GPS_KEY_Pin, GPIO_PIN_SET);////��GPS��Դ����
       HAL_GPIO_WritePin(GPIOA, LED2_Pin, GPIO_PIN_RESET);/////����GPS������
       //HAL_UART_Transmit(&huart1,GPSCtr4,13,0xffff);//////GPS���ã�������
        // HAL_Delay(1000);////�ȴ��ز���
       antE=0;
       while((jiaoyan==0X330|jiaoyan==0X0)&GPS_flag==0)
       {
         HAL_Delay(1000);
        // HAL_UART_Receive(&huart1,GPSData,50,0xffff);//////GPS�������� ��ѯ��ʽ
         HAL_UART_Receive_IT(&huart1,GPSData,50);//////���жϷ�ʽ��������
         
         jiaoyan=(GPSData[19]+GPSData[20]+GPSData[21]+GPSData[18]+GPSData[24]+GPSData[25]+GPSData[26]+GPSData[23]+GPSData[31]+GPSData[32]+GPSData[33]+GPSData[34]+GPSData[30]+GPSData[37]+GPSData[38]+GPSData[39]+GPSData[36]);
         if(GPSData[1]!=0X47|GPSData[2]!=0X4E|GPSData[3]!=0X47|GPSData[4]!=0X47|GPSData[5]!=0X41)
         jiaoyan=0X330;
         if(jiaoyan!=0X330&jiaoyan!=0X0)
         { 
           GPS_flag=1; 
         }
         else{
         antE++;
         GPSErrorn++;
         
         // if(zhongduantime>=10)
         if(GPSErrorn>=100)
          {
           // if(jiaoyan==0X330)
            GPS_flag=2;

            GPSErrorn=0;
          }
         }
         
       }
       // GPS_flag=0;
        jiaoyan=0X330;/////��λУ��λ
       // HAL_GPIO_WritePin(GPIOA, GPS_KEY_Pin, GPIO_PIN_RESET);////�ر�GPS��Դ����
        HAL_GPIO_WritePin(GPIOA, LED2_Pin, GPIO_PIN_SET);/////�ر�GPS������
       lvbo_U.GPS_OK=1;
     }
     if(lvbo_Y.GPS_OKans==1)
       lvbo_U.GPS_OK=0;
     
  }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_PeriphCLKInitTypeDef PeriphClkInit;

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_LSI|RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInit.RTCClockSelection = RCC_RTCCLKSOURCE_LSI;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* USER CODE BEGIN 4 */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)/////�����жϻص�������ÿ���ж�ֻ�ص�һ��
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(huart);
  /* NOTE: This function Should not be modified, when the callback is needed,
           the HAL_UART_RxCpltCallback could be implemented in the user file
   */
  zhongduantime++;
}



/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
  /* USER CODE END Error_Handler_Debug */ 
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
