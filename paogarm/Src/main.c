/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
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
#include "stm32f1xx_hal.h"

/* USER CODE BEGIN Includes */
     
#include "tim.h"
#include "adc.h"
#include "can.h"
#include "usart.h"
#include "user.h"
#include "flash.h"

#include "motor.h"
#include "motor_private.h"
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;

CAN_HandleTypeDef hcan1;
CAN_HandleTypeDef hcan2;

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim6;

UART_HandleTypeDef huart3;

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
uint16_t PWMOUT=2500;
int32_t  POSITION;
int32_t  SGWY;
uint8_t  CNM = 0;
uint8_t  Big_T_Count = 0;
uint8_t  Fault_Upgrade_Count = 0;
uint8_t  Alarm_Upgrade_Count = 0;
uint8_t  Upgrade_Count = 1;

int32_t A=0;//电流
uint8_t B=0;//温度

System_Angle_ErrorTypeDef            ENC_SPEED;
System_Angle_ErrorTypeDef            ENC_POSITION;
System_PWM_TypeDef                   Dspace_PWM;

extern uint8_t WorkingMode;
extern uint8_t Test_Mode;
extern uint8_t Showing_Angle;            //检视模式幅值
extern uint8_t Showing_T;                //检视模式周期
extern uint8_t Electronic_Limit_Touch;   //是否检测过限位 0为检测过 1检测过上限位 2检测过下限位
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void Error_Handler(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_CAN1_Init(void);
static void MX_CAN2_Init(void);
static void MX_TIM1_Init(void);
static void MX_TIM3_Init(void);
static void MX_USART3_UART_Init(void);
static void MX_TIM6_Init(void);

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);
                

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_ADC1_Init();
  MX_CAN1_Init();
  MX_CAN2_Init();
  MX_TIM1_Init();
  MX_TIM3_Init();
  MX_USART3_UART_Init();
  MX_TIM6_Init();

  /* USER CODE BEGIN 2 */
  /***************************系统时钟******************************************/
  SysTick_Init();
  
   /**************高电磁制动打开,低电磁制动抱死*********************************/
 HAL_GPIO_WritePin(GPIOA,DCZD_Pin, GPIO_PIN_SET);
 
 /*********************编码器*************************************************/
  /******此处顺序不要改动，先开启定时器，初始化旋变芯片，后开通编码器接口，不然数据有错********/
  HAL_TIM_Base_Start_IT(&htim6);                                              //开启定时器中断
  ENC_Init( );                                                                 //旋变初始化
  HAL_TIM_Base_Stop_IT(&htim6);                                                //关闭定时器中断
  HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_ALL);                              //开启编码器 
  
/*****************驱动器选型***************************************************/
 
    Motrol_Version_Init( );
  
/************************ADC(DMA)*********************************************/
  HAL_ADC_Start_DMA(&hadc1, &ADC_Receive[0][0], 120);    //开启ADC(DMA)
/******此处顺序不要改动，先开启定时器，初始化旋变芯片，后开通编码器接口，不然数据有错********/ 
/*************************开启PWM互补通道***************************************/ 
  HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_3);
  HAL_TIMEx_PWMN_Start(&htim1,TIM_CHANNEL_3);
/***************************电机失能*******************************************/
  HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_SET);

/***************************关键功能初始化完成，驱动器正常，引脚拉高*******************************************/  
    HAL_GPIO_WritePin(GPIOC, QDQstate_Pin, GPIO_PIN_RESET);
  
/*******************************CAN*******************************************/
 USER_CanMsg_Init(&hcan1,&TxMessage1,&RxMessage1);                           //CAN1初始化：定义CAN1结构体变量
 USER_CanMsg_Init(&hcan2,&TxMessage2,&RxMessage2);                          //CAN2初始化：定义CAN2结构体变量
 USER_CanFilter_Init(&hcan1);                                              //设置CAN1滤波器（注：若有CAN2，需在CAN1滤波器函数体内添加）
  
  if (HAL_CAN_Receive_IT(&hcan1, CAN_FIFO0) != HAL_OK)
   { Flag_Error_Can1_R=0;  Error_Handler( ); }  //开启CAN1的接收中断 默认1正常，0错误
  if (HAL_CAN_Receive_IT(&hcan2, CAN_FIFO0) != HAL_OK)
  { Flag_Error_Can2_R=0;  Error_Handler( ); }  //开启CAN2的接收中断 默认1正常，0错误
  
/*******************************USART*******************************************/ 
  if (HAL_UART_Receive_IT(&huart3,RxData,1) != HAL_OK)
   { Flag_Error_Can2_R=0;  Error_Handler( ); }  //开启CUSART3的接收中断,默认1正常，0错误

  /***************************电机shi能*******************************************/
 HAL_GPIO_WritePin(GPIOA,DCZD_Pin, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_RESET);
// HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
// HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
 
 
motor_initialize( );
ENC_Zero_Init();
System_State.Data[0] = 0xff;
System_State.Data[1] = 0xff;
System_State_Last.Data[0] = 0xff;
System_State_Last.Data[1] = 0xff;
Dspace_PWM.Value = 2500;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  SysTick_Start(  );
   
  while (1)
  {
  /* USER CODE END WHILE */
 
  /* USER CODE BEGIN 3 */
/*==============================================================================
*****************************开始***********************************************
==============================================================================*/
      
/*==============================================================================
*****************************运行函数*******************************************
=========================================================================******/    
//********************************PWM*******************************************/      
//   TIM1->CCR3=PWMOUT;
/********************************编码器*******************************************/  
    HAL_ADC_Start_DMA(&hadc1, &ADC_Receive[0][0], 120);                       //开启ADC(DMA) 
    ENC_Position(  );

 /*=============================================================================
*****************************输入端口*******************************************
==============================================================================*/
/*****************系统指令输入****************************/ 
    motor_U.System_Order =  SYS_Order_Flag;
    motor_U.Working_Mode = WorkingMode;           //工作模式选择
    motor_U.Test_Mode = Test_Mode;                //调试模式选择
    motor_U.Showing_Angle = Showing_Angle;        //检视模式幅值
    motor_U.Showing_T = Showing_T;                //检视模式周期
    motor_U.Gyroscope_Choose = Gyroscope_Choose;  //陀螺仪信号源选择
   
/*****************片选信号****************************/ 
   motor_U.Motor_Num    =  Motor_Num;

/*****************电流采样输入****************************/    
   motor_U.Cur_In       =  Current;
  // motor_U.Cur_In       =  2600;
/*****************温度采样输入****************************/  
   motor_U.Temp_In      =  Temp;
//   motor_U.Temp_In       =  B;
/*****************上下限位开关输入****************************/ 
//  if(HAL_GPIO_ReadPin(GPIOE, DQXW_S_Pin)==GPIO_PIN_SET)
//  {
//    motor_U.Up_Limit     =  1;
//    }
//  if(HAL_GPIO_ReadPin(GPIOE, DQXW_S_Pin)==GPIO_PIN_RESET)
//  {
//    motor_U.Up_Limit     =  0;
//   }
//  if(HAL_GPIO_ReadPin(DQXW_X_GPIO_Port,DQXW_X_Pin)==GPIO_PIN_SET)
//   {
//   motor_U.Down_Limit   =   1;
//    }
//  if(HAL_GPIO_ReadPin(DQXW_X_GPIO_Port,DQXW_X_Pin)==GPIO_PIN_RESET)
//   {
//   motor_U.Down_Limit   =   0;
//    }
    if(HAL_GPIO_ReadPin(GPIOE, DQXW_S_Pin)==GPIO_PIN_SET)
    {
    motor_U.Up_Limit   =  1;
    }
    if(HAL_GPIO_ReadPin(GPIOE, DQXW_S_Pin)==GPIO_PIN_RESET)
    {
    motor_U.Up_Limit   =  0;
    }
    if(HAL_GPIO_ReadPin(DQXW_X_GPIO_Port,DQXW_X_Pin)==GPIO_PIN_SET)
    {
    motor_U.Down_Limit   =   1;
    }
    if(HAL_GPIO_ReadPin(DQXW_X_GPIO_Port,DQXW_X_Pin)==GPIO_PIN_RESET)
    {
    motor_U.Down_Limit   =   0;
    }
    /*********测试电缸上下电器限位的位置是否有改变2016/11/25********/
   if((motor_U.Up_Limit==0)&&(B==0))
   { A=PositionTemp2;
    motor_U.Encode_sxwPos_Motor =  A-586183/2 ;    //586183/2折算为 5度 
     B=1;}
   else
   { B=0;}

/*****************电子限位角度更新****************************/
    //Electronic_Limit_refresh(motor_U.Up_Limit,motor_U.Down_Limit);

 /*****************惯性单元状态引脚输入****************************/   
  if(HAL_GPIO_ReadPin(GPIOD,GXDY_state_Pin)==GPIO_PIN_SET)
   {
   motor_U.GXDY_State   =   1;
    }
  if(HAL_GPIO_ReadPin(GPIOD,GXDY_state_Pin)==GPIO_PIN_RESET)
   {
   motor_U.GXDY_State   =   0;
    }
  
  /*******************开机状态引脚输入(加到开关机判断)****************************/   

  
 
  /*****************惯性单元中断输入****************************/ 
 //  motor_U.GXDY_IT_In   =  1 ; //临时测试用
  
  if ((Can2_R1==1)&&(Can2_R2==1))  //正常用
  {
   motor_U.GXDY_IT_In   =  1 ; 
   Can2_R2              =  0 ;
  }
  else
  {
   motor_U.GXDY_IT_In   =  0 ;
  }
  
/*****************角度输入***********************************/ 
   motor_U.JD_In        =  Gyroscope_Angle.Value; 
 
  
   motor_U.YJ_In        =  System_Elevation.Value;

  // motor_U.YJ_In        =  0;
   
/*****************编码器输入****************************/ 
   motor_U.Encode_Sp    =  MyTemp;
   motor_U.Encode_Pos_kj = PositionTemp2;
   motor_U.Encode_Pos_Zero_Average = ENC_position_zero_average.Value;
   
/***************丝杆位移(需具体处理)***********************/

   motor_U.SGWY_In    =  SGWY_Inport.Value;

/*==============================================================================
*****************************Simulink程序***************************************
==============================================================================*/
  motor_step( );
    
  
  if(A<motor_B.Motor_XHZY.Product&&((int)motor_B.Motor_XHZY.Product!=0))
    A=(int)motor_B.Motor_XHZY.Product ;
  

/*==============================================================================
*****************************输出端口*******************************************
==============================================================================*/
/*****************初始化结果****************************/ 
  Result_Handle.Init_Result        =   motor_Y.Ini_Result;
//  if(Result_Handle.Init_Result == 1) SYS_Order_Flag = 2;
 
 /*****************开关机结果****************************/ 
  Result_Handle.Start_Stop_Result  =   motor_Y.Open_Result;
 
 /*************************输出故障标识*****************************************/
  System_State.Bit.Trouble_Enc              =   motor_Y.Flag_Enc_Error;
  System_State.Bit.Angle_Up                 =   motor_Y.Flag_Up_GZ_limit;
  System_State.Bit.Angle_Down               =   motor_Y.Flag_Down_GZ_limit;
  System_State.Bit.Current_Fualt            =   motor_Y.Flag_GZ_Cur;
  System_State.Bit.Block_Motor              =   motor_Y.Flag_Motor_Error;
//  System_State.Bit.Over_Temp_Down         =   motor_Y.Flag_Temp_Down;
  System_State.Bit.Interrupt_Communication  =   motor_Y.Flag_GXDY_IT;
  
 /*************************输出警告标识*****************************************/
  System_State.Bit.Over_Electricity   =   motor_Y.Flag_Cur;
  System_State.Bit.Over_Temp_Up       =   motor_Y.Flag_Temp_Up;
  System_State.Bit.Abnormal_Data      =   motor_Y.Flag_GXDY_Error;
  System_State.Bit.Over_Angle_XXW     =   motor_Y.Flag_Down_limit;
  System_State.Bit.Over_Angle_SXW     =   motor_Y.Flag_Up_limit;
  System_State.Bit.Over_Angle_Error   =   motor_Y.Flag_AngleError;
  
/*************************输出I/O口控制*****************************************/
  /********DCZD引脚控制***********/
  if(motor_Y.DCZD == 1)
  {
    HAL_GPIO_WritePin(GPIOA, DCZD_Pin, GPIO_PIN_SET);
  }
  if(motor_Y.DCZD == 0)
     {
    HAL_GPIO_WritePin(GPIOA, DCZD_Pin, GPIO_PIN_RESET);
  }
   /********QDQ_XH,QDQ_HY引脚控制运行指示灯LED***********/
  /********QDQ_XH,QDQ_HY引脚控制LED,都低橘黄色***********/
        /********QDQ_HY低，LED红色***********/
        /********QDQ_XH低，LED绿色***********/
   if(motor_Y.QDQ_XH == 1)
   {
   HAL_GPIO_WritePin(GPIOC,QDQ_XH_Pin, GPIO_PIN_SET);
   }
  else
   {
   HAL_GPIO_WritePin(GPIOC,QDQ_XH_Pin, GPIO_PIN_RESET);
   }
   if(motor_Y.QDQ_HY == 1)
  {
   HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_SET);
   }
  else
  {
   HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_RESET);
  }
  
   /********EN_C引脚控制***********/
  if(motor_Y.Motor_En == 1)
  {
  HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_SET);
  }
    if(motor_Y.Motor_En == 0)
  {
  HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_RESET);
  }
    
 
/*********************输出驱动器状态标识*****************************/
  /**********************故障主动上报******************************/
  
     /**************主动上报信息(需具体处理)***************/
  // Alarm_Cunt   =   motor_Y.Alarm_Cunt;
  
/***************Stateflow中设置状态，区分报警和故障************/
//   switch( motor_Y.QDQ_BJ)
//   {
//     case 0x02 :
//         if( motor_Y.Alarm_Cunt == 2)
//         { 
//           USER_Alarm_State( &hcan1,  System_State);
//           HAL_GPIO_WritePin(GPIOC, QDQstate_Pin, GPIO_PIN_RESET);
//         }
//     break;
//     case 0x03 :
//         if( motor_Y.Alarm_Cunt == 3)
//         {
//           USER_Fault_State( &hcan1,  System_State);
//            HAL_GPIO_WritePin(GPIOC, QDQstate_Pin, GPIO_PIN_SET);
//         }
//     break; 
//     default: 
//          HAL_GPIO_WritePin(GPIOC, QDQstate_Pin, GPIO_PIN_RESET);
//     break; 
//     }
if(Big_T_Count == 0)
{
    if(System_State.Data[0] != System_State_Last.Data[0])
    {
        USER_Fault_State( &hcan1,System_State );
        Fault_Upgrade_Count++;
        if(Fault_Upgrade_Count == Upgrade_Count)
        {
            System_State_Last.Data[0] = System_State.Data[0];
            Fault_Upgrade_Count = 0;
        }
    }
    if(System_State.Data[1] != System_State_Last.Data[1])
    {
        USER_Alarm_State( &hcan1,System_State );
        Alarm_Upgrade_Count++;
        if(Alarm_Upgrade_Count == Upgrade_Count)
        {
            System_State_Last.Data[1] = System_State.Data[1];
            Alarm_Upgrade_Count = 0;
        }
    }
    if(System_State.Data[0] == 0xff && System_State.Data[1] == 0xff) HAL_GPIO_WritePin(GPIOC, QDQstate_Pin, GPIO_PIN_RESET);
    else HAL_GPIO_WritePin(GPIOC, QDQstate_Pin, GPIO_PIN_SET);
}
 
   /**************输出角度信息***************/
  /********角度信息**********/ 
  System_Angle.Value = -motor_Y.JD_Out;
    
  /********误差信息**********/ 
  System_Error.Value = -motor_Y.JD_Error;
  
 /**************输出PWM**************/
//    Over_current_protect(Current);
    Limit_Protect(motor_U.Up_Limit,motor_U.Down_Limit);
    if(motor_Y.dSpace_Init == 1) TIM1->CCR3 = Dspace_PWM.Value;
    else TIM1->CCR3 = motor_Y.PWMOUT;
  
   /**************输出位置信息(需具体处理)***************/
    POSITION  =  motor_Y.Encode_Pos;
//    ENC_SPEED.Value = MyTemp;
//    ENC_POSITION.Value = POSITION;
//    SGWY      =  motor_Y.SGWY_Out;
    XHZY_SGWY.Value   =  motor_Y.SGWY_Out;
//    System_Health_check();

 /*****************CAN1主动发送************************/
    if(Test_Mode == 2)
        if(motor_U.Up_Limit == 0)
        {
            Test_Mode = 0;   //恢复调试状态
            Electronic_Limit_Up.Data[0] = System_Angle.Data[0];
            Electronic_Limit_Up.Data[1] = System_Angle.Data[1];
            Electronic_Limit_Up.Data[2] = System_Angle.Data[2];
            Electronic_Limit_Up.Data[3] = System_Angle.Data[3];
            Electronic_Limit_Touch = 1;
//            USER_SystemAngle_Result( &hcan1 );
//            USER_System_ElectronicLimit_Up_Report( &hcan1 );
        }
    if(Test_Mode == 3)
        if(motor_U.Down_Limit == 0)
        {
            Test_Mode = 0;   //恢复调试状态
            Electronic_Limit_Down.Data[0] = System_Angle.Data[0];
            Electronic_Limit_Down.Data[1] = System_Angle.Data[1];
            Electronic_Limit_Down.Data[2] = System_Angle.Data[2];
            Electronic_Limit_Down.Data[3] = System_Angle.Data[3];
            Electronic_Limit_Touch = 2;
//            USER_SystemAngle_Result( &hcan1 );
//            USER_System_ElectronicLimit_Down_Report( &hcan1 );
        }
    
//    if(CNM == 0)
//    {
//        if(Test_Mode == 5 && SYS_Order_Flag ==2)
//        {
//            USER_G_Init( &hcan1 );
//            CNM = 1;
//        }
//    }
//    else if(CNM == 1)
//    {
//        if(motor_B.dSpace_Init == 1)
//        {
//            USER_G_Start_Stop( &hcan1,1 );
//            CNM = 2;
//        }
//    }
//    else
//    {
//        if(motor_B.dSpace_Init == 0)
//        {
//            USER_G_Start_Stop( &hcan1,2 );
//            CNM = 1;
//        }
//    }

/*==============================================================================
*****************************结束***********************************************
==============================================================================*/    
    Big_T_Count++;
    if(Big_T_Count == 5)
    {
//        USER_Gyroscope_SGWY_send(&hcan2);
        Big_T_Count = 0;
    }
    while(System_Count<=20);
    SysTick_Start(  );
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

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV5;
  RCC_OscInitStruct.Prediv1Source = RCC_PREDIV1_SOURCE_PLL2;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  RCC_OscInitStruct.PLL2.PLL2State = RCC_PLL2_ON;
  RCC_OscInitStruct.PLL2.PLL2MUL = RCC_PLL2_MUL8;
  RCC_OscInitStruct.PLL2.HSEPrediv2Value = RCC_HSE_PREDIV2_DIV5;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }

  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC;
  PeriphClkInit.AdcClockSelection = RCC_ADCPCLK2_DIV6;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }

  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  __HAL_RCC_PLLI2S_ENABLE();

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* ADC1 init function */
static void MX_ADC1_Init(void)
{

  ADC_ChannelConfTypeDef sConfig;

    /**Common config 
    */
  hadc1.Instance = ADC1;
  hadc1.Init.ScanConvMode = ADC_SCAN_ENABLE;
  hadc1.Init.ContinuousConvMode = ENABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 2;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure Regular Channel 
    */
  sConfig.Channel = ADC_CHANNEL_1;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_28CYCLES_5;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure Regular Channel 
    */
  sConfig.Channel = ADC_CHANNEL_10;
  sConfig.Rank = 2;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

/* CAN1 init function */
static void MX_CAN1_Init(void)
{
    hcan1.Instance = CAN1;
    hcan1.Init.Prescaler = 18;
    hcan1.Init.Mode = CAN_MODE_NORMAL;
    hcan1.Init.SJW = CAN_SJW_1TQ;
    hcan1.Init.BS1 = CAN_BS1_6TQ;
    hcan1.Init.BS2 = CAN_BS2_1TQ;
    hcan1.Init.TTCM = DISABLE;
    hcan1.Init.ABOM = DISABLE;
    hcan1.Init.AWUM = DISABLE;
    hcan1.Init.NART = DISABLE;
    hcan1.Init.RFLM = DISABLE;
    hcan1.Init.TXFP = DISABLE;
    if(HAL_CAN_Init(&hcan1) != HAL_OK)
    {
        Error_Handler();
    }
}

/* CAN2 init function */
static void MX_CAN2_Init(void)
{

  hcan2.Instance = CAN2;
  hcan2.Init.Prescaler = 5;
  hcan2.Init.Mode = CAN_MODE_NORMAL;
  hcan2.Init.SJW = CAN_SJW_2TQ;
  hcan2.Init.BS1 = CAN_BS1_5TQ;
  hcan2.Init.BS2 = CAN_BS2_3TQ;
  hcan2.Init.TTCM = DISABLE;
  hcan2.Init.ABOM = DISABLE;
  hcan2.Init.AWUM = DISABLE;
  hcan2.Init.NART = DISABLE;
  hcan2.Init.RFLM = DISABLE;
  hcan2.Init.TXFP = DISABLE;
  if (HAL_CAN_Init(&hcan2) != HAL_OK)
  {
    Error_Handler();
  }

}

/* TIM1 init function */
static void MX_TIM1_Init(void)
{

  TIM_ClockConfigTypeDef sClockSourceConfig;
  TIM_MasterConfigTypeDef sMasterConfig;
  TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig;
  TIM_OC_InitTypeDef sConfigOC;

  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 0;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 5000-1;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }

  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }

  if (HAL_TIM_PWM_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }

  sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_ENABLE;
  sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_ENABLE;
  sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_1;
  sBreakDeadTimeConfig.DeadTime = 40;
  sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
  sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
  sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_ENABLE;
  if (HAL_TIMEx_ConfigBreakDeadTime(&htim1, &sBreakDeadTimeConfig) != HAL_OK)
  {
    Error_Handler();
  }

  sConfigOC.OCMode = TIM_OCMODE_PWM2;
  sConfigOC.Pulse = 2500;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
  sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
  if (HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
  {
    Error_Handler();
  }

  HAL_TIM_MspPostInit(&htim1);

}

/* TIM3 init function */
static void MX_TIM3_Init(void)
{

  TIM_Encoder_InitTypeDef sConfig;
  TIM_MasterConfigTypeDef sMasterConfig;

  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 0;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 65535;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  sConfig.EncoderMode = TIM_ENCODERMODE_TI12;
  sConfig.IC1Polarity = TIM_ICPOLARITY_RISING;
  sConfig.IC1Selection = TIM_ICSELECTION_DIRECTTI;
  sConfig.IC1Prescaler = TIM_ICPSC_DIV1;
  sConfig.IC1Filter = 8;
  sConfig.IC2Polarity = TIM_ICPOLARITY_RISING;
  sConfig.IC2Selection = TIM_ICSELECTION_DIRECTTI;
  sConfig.IC2Prescaler = TIM_ICPSC_DIV1;
  sConfig.IC2Filter = 8;
  if (HAL_TIM_Encoder_Init(&htim3, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

/* TIM6 init function */
static void MX_TIM6_Init(void)
{

  TIM_MasterConfigTypeDef sMasterConfig;

  htim6.Instance = TIM6;
  htim6.Init.Prescaler = 7200-1;
  htim6.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim6.Init.Period = 10;
  if (HAL_TIM_Base_Init(&htim6) != HAL_OK)
  {
    Error_Handler();
  }

  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim6, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }

}

/* USART3 init function */
static void MX_USART3_UART_Init(void)
{

  huart3.Instance = USART3;
  huart3.Init.BaudRate = 115200;
  huart3.Init.WordLength = UART_WORDLENGTH_8B;
  huart3.Init.StopBits = UART_STOPBITS_1;
  huart3.Init.Parity = UART_PARITY_NONE;
  huart3.Init.Mode = UART_MODE_TX_RX;
  huart3.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart3.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart3) != HAL_OK)
  {
    Error_Handler();
  }

}

/** 
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void) 
{
  /* DMA controller clock enable */
  __HAL_RCC_DMA1_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Channel1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);

}

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
        * Free pins are configured automatically as Analog (this feature is enabled through 
        * the Code Generation settings)
*/
static void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pins : PE2 PE3 PE4 PE5 
                           PE6 PE7 PE11 PE15 
                           PE0 PE1 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5 
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_11|GPIO_PIN_15 
                          |GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PC13 PC14 PC15 PC3 
                           PC8 PC9 PC12 */
  GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_3 
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : QDQ_HY_Pin QDQ_XH_Pin */
  GPIO_InitStruct.Pin = QDQ_HY_Pin|QDQ_XH_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PA0 PA4 PA6 PA7 
                           PA8 PA9 PA10 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_4|GPIO_PIN_6|GPIO_PIN_7 
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : QDQ_ZC_Pin */
  GPIO_InitStruct.Pin = QDQ_ZC_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(QDQ_ZC_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : QDQ_GZ_Pin DCZD_Pin */
  GPIO_InitStruct.Pin = QDQ_GZ_Pin|DCZD_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : QDQstate_Pin */
  GPIO_InitStruct.Pin = QDQstate_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(QDQstate_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : DQXW_X_Pin */
  GPIO_InitStruct.Pin = DQXW_X_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DQXW_X_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0 PB1 PB2 PB10 
                           PB11 PB14 PB15 PB4 
                           PB5 PB6 PB7 PB8 
                           PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_10 
                          |GPIO_PIN_11|GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_4 
                          |GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8 
                          |GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : DQXW_S_Pin Ad2_c_Pin Ad1_c_Pin */
  GPIO_InitStruct.Pin = DQXW_S_Pin|Ad2_c_Pin|Ad1_c_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : EN_C_Pin */
  GPIO_InitStruct.Pin = EN_C_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(EN_C_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PD8 PD9 PD10 PD11 
                           PD0 PD1 PD2 PD3 
                           PD4 PD5 PD6 PD7 */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3 
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : KJ_State_Pin GXDY_state_Pin NM_D_Pin DOS_D_Pin */
  GPIO_InitStruct.Pin = KJ_State_Pin|GXDY_state_Pin|NM_D_Pin|DOS_D_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin|QDQ_XH_Pin|QDQstate_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin|QDQ_GZ_Pin|DCZD_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_RESET);

}

/* USER CODE BEGIN 4 */
/************************CAN发送中断回调函数****************************************/
//void HAL_CAN_TxCpltCallback(CAN_HandleTypeDef* hcan)
//{
//  if(hcan->Instance==CAN1)
//    
//    switch((TxMessage1.StdId)>>6)




/************************CAN接收中断回调函数****************************************/
void HAL_CAN_RxCpltCallback(CAN_HandleTypeDef* hcan)
{

/*****************CAN1处理函数*********************************************/
    if(hcan->Instance==CAN1)
    {
        if(((((RxMessage1.StdId)>>1) & 0x000f) == 0) || ((((RxMessage1.StdId)>>1) & 0x000f) == Motor_Num))
        {
//   switch(((RxMessage1.StdId)&(FCoder_Check_Shift))>>6)
      switch((RxMessage1.StdId)>>6)
      {
      //CAN1_Send (&hcan1); 
    case FCoder_Initial :                                          //初始化命令
          SYS_Order_Flag=1;
          USER_Response( &hcan1 );
     break;
     
    case FCoder__Init_Result :                                   //初始化结果查询
          
         USER_Init_Reply(&hcan1,Result_Handle);
     break;
     
     case FCoder_Device_On_Off  :                                          //开关机命令
          
         USER_Start_Stop( &hcan1 ); 
     break;
     
     case FCoder_Device_On_Off_Result  :                                          //开关机命令
          
         USER_Start_Stop_Result( &hcan1 ); 
     break;
     
     case FCoder_SYS_State_Query  :                                          //系统状态查询
          
         USER_System_State( &hcan1, System_State ); 
     break;
     
     case FCoder_Elevation_State_Result  :                                          //仰角状态查询
          
         USER_System_Elevation_Query( &hcan1,System_Elevation );
     break;
     
     case FCoder_Elevation_Set  :                                          //仰角设置
         if(((RxMessage1.StdId)&(FCoder_Check_Shift_Motor))==0x002)
    //     if(Motor_Num==ADDR_XHZY_Motor_QDQ)
         {
         USER_System_Elevation_Set( &hcan1 );
          }
     break;
     
     case  FCoder_HYAngle_Result :                                          //横摇角度信息查询
          
         USER__HY_System_Angle__Query( &hcan1 ,Gyroscope_Angle,System_Error );
     break;
      
     case  FCoder_XHZYAngle_Result :                                          //下滑纵摇角度信息查询
          
         USER_System_Angle__Query( &hcan1 ,System_Angle,System_Error );
     break;
     
     case  FCoder_XHHYAngle_Result  :                                          //下滑横摇角度信息查询
          
         USER_System_Angle__Query( &hcan1 ,System_Angle,System_Error );
     break;
     
     case  FCoder_Standby  :                                                   //待机保护
          SYS_Order_Flag=4;
         USER_System_Standby__Query( &hcan1 );
     break;
     
     case  FCoder_Cancel_Standby  :                                            //取消待机保护
          SYS_Order_Flag=5;
         USER_System_Cancel_Standby__Query( &hcan1 );
     break;
     
     case FCoder_WorkingMode_Set:                                          //工作模式设置        
         USER_System_WorkingMode( &hcan1 );
     break;
     
     case FCoder_WorkingMode_Showing_Set:                                          //检视模式参数设置        
         USER_System_WorkingMode_Showing_Set( &hcan1 );
     break;
     
     case FCoder_ZeroPosition:                                          //进入标零模式        
         USER_System_ZeroPosition( &hcan1 );
     break;
     
     case FCoder_ZeroPosition_Exit:                                          //退出标零模式        
         USER_System_ZeroPosition_Exit( &hcan1 );
     break;
     
     case FCoder_ZeroPosition_Set:                                          //零位旋变值及惯性单元偏转量        
         USER_System_ZeroPosition_Set( &hcan1 );
     break;
     
     case FCoder_ZeroPosition_Average:                                          //零位旋变值及惯性单元偏转量平均值        
         USER_System_ZeroPosition_Average( &hcan1 );
     break;
     
     case FCoder_ZeroPosition_Result:                                          //标零结果查询        
         USER_System_ZeroPosition_Result( &hcan1 );
     break;
     
     case FCoder_ElectronicLimit_Result:                                          //电子限位角度查询        
         USER_System_ElectronicLimit_Result( &hcan1 );
     break;
     
     case FCoder_SystemAngle_Reply:                                           //旋变角度查询
           USER_SystemAngle_Result( &hcan1 );
     break;
     
//     case FCoder_FlashCount_Check:                                             //写入Flash计数查询
//           USER_FlashCount_Check( &hcan1 );
//     break;
     
//     case FCoder_SystemHealth_Check:                                           //系统健康状态查询
//           USER_SystemHealth_Check( &hcan1 );
//     break;
     
     case FCoder_Dspace_PWM_OUT:                                         //接收dSPACE PWM数据
//           if(motor_B.dSpace_Init == 1)
           USER_Dspace_PWM_OUT( &hcan1 );
     break;
     
     case FCoder_Gyroscope_Choose:                                         //陀螺信号源选择
           USER_Gyroscope_Choose( &hcan1 );
     break;
     
     default:
        
     break;
     }
      }
 /*****************开启CAN1*********************************************/
     if (HAL_CAN_Receive_IT(&hcan1, CAN_FIFO0) != HAL_OK)
     {
        Flag_Error_Can1_R=0;
        //Error_Handler( );
     }  //开启CAN1的接收中断
     else
     {Flag_Error_Can1_R=1;}                       //默认1正常，0错误
     }
  /*****************开启CAN2********************************************/ 
     
    if(hcan->Instance==CAN2)
    {
        Can2_R1  =  1 ;
        Can2_R2  =  1 ;
        switch(Motor_Num)
        {
            case ADDR_XHZY_Motor_QDQ:
            {
                if(Gyroscope_Choose == 0)
                {
                    if(RxMessage2.StdId == 0x308)
                    {
                        USER_Gyroscope_Angle( &hcan2 );                                   //取角度
                        if(Big_T_Count == 2) USER_Gyroscope_SGWY_send(&hcan2);
                    }
                }
                else
                {
                    if(RxMessage2.StdId == 0x782)
                    {
                        USER_Gyroscope_Angle( &hcan2 );                                   //取角度
                        USER_Gyroscope_SGWY_send( &hcan2 );
//                        USER_System_Angle__Query( &hcan2 ,System_Angle,System_Error );
                    }
                }
                break;
            }
            case ADDR_XHHY_Motor_QDQ:
            {
                if(Gyroscope_Choose == 0)
                {
                    if(RxMessage2.StdId == 0x34C)
                    {
                        USER_Gyroscope_Angle( &hcan2 );                                   //取角度
                    }
                }
                else
                {
                    if(RxMessage2.StdId == 0x786)
                    {
                        USER_Gyroscope_Angle( &hcan2 );                                   //取角度
//                        USER_System_Angle__Query( &hcan2 ,System_Angle,System_Error );
                    }
                }
                USER_Gyroscope_SGWY_recive(&hcan2);
                break;
            }
            case ADDR_HY_Motor_QDQ:
            {
                if(Gyroscope_Choose == 0)
                {
                    if(RxMessage2.StdId == 0x2CA)
                    {
                        USER_Gyroscope_Angle( &hcan2 );                                   //取角度
                    }
                }
                else
                {
                    if(RxMessage2.StdId == 0x784)
                    {
                        USER_Gyroscope_Angle( &hcan2 );                                   //取角度
//                        USER_System_Angle__Query( &hcan2 ,System_Angle,System_Error );
                    }
                }
                break;
            }
        }
//      if(Gyroscope_Choose == 0)
//      {
//          if(RxMessage2.StdId==0x308||RxMessage2.StdId==0x34c||RxMessage2.StdId==0x2ca)
//          {USER_Gyroscope_Angle(&hcan2);}                      //取角度
//          if( Motor_Num == ADDR_XHZY_Motor_QDQ && RxMessage2.StdId == 0x308 && Big_T_Count == 2) USER_Gyroscope_SGWY_send(&hcan2);
//      }
//      else
//      {
//          if(RxMessage2.StdId==0x782||RxMessage2.StdId==0x784||RxMessage2.StdId==0x786)
//          {USER_Gyroscope_Angle(&hcan2);}                      //取角度
//          if( Motor_Num == ADDR_XHZY_Motor_QDQ && RxMessage2.StdId == 0x782) USER_Gyroscope_SGWY_send(&hcan2);
//      }
//      if( Motor_Num==ADDR_XHHY_Motor_QDQ)
//        {
//        USER_Gyroscope_SGWY_recive(&hcan2);
//        }
//      if( Motor_Num==ADDR_XHZY_Motor_QDQ)
//      {
//          if(Big_T_Count == 2) USER_Gyroscope_SGWY_send(&hcan2);
//      }
     if (HAL_CAN_Receive_IT(&hcan2, CAN_FIFO0) != HAL_OK)
     { 
        Flag_Error_Can2_R=0;
        //Error_Handler( );
     }  //开启CAN2的接收中断
     else
     { Flag_Error_Can2_R=1;}
    }
  }

/************************串口接收中断回调函数****************************************/
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
   /******串口数据处理*******/  
 if(huart->Instance == USART3)     
  {
         if(HAL_UART_Receive_IT(&huart3, RxData,8) != HAL_OK)
           { Flag_Error_Usart3_R=0;  Error_Handler( ); }  //开启USART3的接收中断
         else
           { Flag_Error_Usart3_R=1;}
         if(HAL_UART_Transmit_IT(&huart3, TxData,8) != HAL_OK)
           { Flag_Error_Usart3_T=0;  Error_Handler( ); }  //开启USART3的发送中断
         else
           { Flag_Error_Usart3_T=1;}
  }
}

/*=========================================================================
********串口中断发送中断处理函数***************
=========================================================================*/
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{


 }

/*=========================================================================
********ADC1回调函数********
=========================================================================*/
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{ 
  ADC_Filter(  ) ;                                            //滤波器
  HAL_ADC_Stop_DMA(&hadc1);

}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
  /* USER CODE END Error_Handler */ 
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
