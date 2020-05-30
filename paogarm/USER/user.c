/**
  ******************************************************************************
  * File Name          : USER.c
  * Description        : 用户自定义文件
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "user.h"
#include "can.h"
#include "flash.h"

#include "motor.h"
#include "motor_private.h"
//#include "stdbool.h"


/* Private variables ---------------------------------------------------------*/
/******************************各个设备地址***********************************/
uint8_t    Motor_Num = 0;
uint8_t    FCoder_Angle_Result;

uint8_t    SYS_Order_Flag = 0;

uint8_t    order_start_stop = 0;

uint8_t    Alarm_Cunt = 0;

uint8_t    add1_c = 0;
uint8_t    add2_c = 0;

uint8_t    stay1 = 1;            
uint8_t    stay2 = 1;          
uint8_t    stay3 = 1;     
uint8_t    stay4 = 1;

uint8_t WorkingMode = 0;
uint8_t Test_Mode = 0;
uint8_t Showing_Angle = 0;            //检视模式幅值
uint8_t Showing_T = 3;                //检视模式周期选项
uint8_t Electronic_Limit_Touch = 0;   //是否检测过限位 0为检测过 1检测过上限位 2检测过下限位
uint32_t System_On_Time_Tick = 0;
uint8_t Gyroscope_Choose = 0;

extern int32_t POSITION;
//uint8_t ENC_position_zero_average[4] = {0,0,0,0};
uint8_t Electronic_Limit_Choose = 0;

System_Elevation_AngleTypeDef        System_Elevation;       //系统仰角
System_Elevation_AngleTypeDef        Gyroscope_Angle;        //惯性单元角度

System_Elevation_AngleTypeDef        XHZY_SGWY;              //下滑纵摇丝杆位移
System_Elevation_AngleTypeDef        SGWY_Inport;            //下滑横摇丝杆位移输入

Result_HandleTypeDef                 Result_Handle;          //初始化结果及开关机结果

System_StateHandleTypeDef            System_State;           //系统状态
System_StateHandleTypeDef            System_State_Last;


System_Angle_ErrorTypeDef            System_Angle;           //角度

System_Angle_ErrorTypeDef            System_Error;           //角度误差


System_Angle_ErrorTypeDef            Electronic_Limit_Up;                  //电子上限位角度
System_Angle_ErrorTypeDef            Electronic_Limit_Down;                //电子下限位角度
System_Angle_ErrorTypeDef            ENC_position_zero_average;            //零位旋变平均值
System_Angle_ErrorTypeDef            ENC_position_current;                 //当前旋变值
System_Angle_ErrorTypeDef            Flash_Erase_Count;                    //Flash擦除计数
System_Angle_ErrorTypeDef            System_On_Time_minute;
System_Angle_ErrorTypeDef            System_On_Count;

/*******************************Private Function*******************************/

/*=========================================================================
电机驱动器型号选择(处理CAN2的地址)
=========================================================================*/

void delay_ms(uint32_t t)
{
    int i = 0, ii = 0;
    for(i = 0;i < t;i++)
    for(ii = 0;ii < 100;ii++);
}

void Motrol_Version_Init(void)
{
    unsigned  char Motor_Num1=0;
    uint8_t    count = 0;
  
    ENC_position_zero_average.Value = 0;
    
//    while(HAL_GPIO_ReadPin(GPIOD,KJ_State_Pin) == GPIO_PIN_SET);
    delay_ms(30000);
    loop:delay_ms(30000);
    count++;
    if(count > 5)
    {
        Motor_Num = 2;
        goto loop2;
    }
    /*******************电机型号由电路板中Ad1_c、Ad2_c引脚高低决定*****************/
    if(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin) == GPIO_PIN_RESET) add1_c=1;
    else add1_c=0;
    if(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin) == GPIO_PIN_RESET) add2_c=1;
    else add2_c=0;
       
     //  Motor_Num=(!(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin)))+(!(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin)))*2;    /*读地址板号***读取I/O口电平高低***/
    Motor_Num = add1_c+add2_c*2 ; 
     
    delay_ms(30000);
    
    /*******************电机型号由电路板中Ad1_c、Ad2_c引脚高低决定*****************/
     if(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin) == GPIO_PIN_RESET)
     {
         add1_c=1;
     }
     else
     {
         add1_c=0;
     }
     if(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin) == GPIO_PIN_RESET)
     {
         add2_c=1;
     }
     else
     {
         add2_c=0;
     }      
     //Motor_Num=(!(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin)))+(!(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin)))*2;    /*读地址板号***读取I/O口电平高低***/
     Motor_Num1 = add1_c+add2_c*2;
     
     
     if(Motor_Num1 != Motor_Num)
     {
       Motrol_Version_Init_Error_Handler( );
       goto loop;
     }
     
     if(Motor_Num != ADDR_HY_Motor_QDQ && Motor_Num != ADDR_XHHY_Motor_QDQ && Motor_Num != ADDR_XHZY_Motor_QDQ)
     {
         Motrol_Version_Init_Error_Handler( );
         goto loop;
     }
loop2:  switch ( Motor_Num )                      
  {
   case  ADDR_HY_Motor_QDQ:                                                //横摇灯杆电机驱动器,驱动器指示灯为橘黄色
//         HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_RESET);
//         HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_RESET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_RESET);              //下滑系统都是黄色
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_RESET);
         Can1FilterId = (ADDR_HY_Motor_QDQ<<1);                             //CAN报文Bit1~Bit5位屏蔽模式比较位，即从机地址
//         Can1FilterId = 0x00;
         Can2FilterId = (ADDR_HY_GXDY<<1);                  //应该用不上
         FCoder_Angle_Result = FCoder_HYAngle_Result;                       //便于统一表示，用一个变量来区分各个角度查询信息标识
   break;
  case  ADDR_XHHY_Motor_QDQ:                                               //下滑横摇电机驱动器，驱动器指示灯为绿色
//         HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_SET);
//         HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_RESET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_SET);               //下滑系统都是绿色
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_RESET);
         Can1FilterId = (ADDR_XHHY_Motor_QDQ<<1);
         Can2FilterId = (ADDR_XHHY_GXDY<<1);
         FCoder_Angle_Result = FCoder_XHHYAngle_Result;                     //角度结果查询报文
   break;
   case ADDR_XHZY_Motor_QDQ:                                               //下滑纵摇电机驱动器，驱动器指示灯为红色
//         HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_RESET);
//         HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_SET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_SET);                //下滑系统都是绿色
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_RESET);
         Can1FilterId = (ADDR_XHZY_Motor_QDQ<<1);
         Can2FilterId = (ADDR_XHZY_GXDY<<1);
         FCoder_Angle_Result = FCoder_XHZYAngle_Result;
   break;
   default: 
      /****错误处理******/
         Motrol_Version_Init_Error_Handler( );
   break; 
  
   
    }
}

/*****************电子限位角度更新****************************/
void Electronic_Limit_refresh(uint8_t Up_Limit,uint8_t Down_Limit)
{
    if(Up_Limit == 0) //Electronic_Limit_Up = System_Angle;
    {
        Electronic_Limit_Up.Data[0] = System_Angle.Data[0];
        Electronic_Limit_Up.Data[1] = System_Angle.Data[1];
        Electronic_Limit_Up.Data[2] = System_Angle.Data[2];
        Electronic_Limit_Up.Data[3] = System_Angle.Data[3];
    }
    if(Down_Limit == 0)
    {
        Electronic_Limit_Down.Data[0] = System_Angle.Data[0];
        Electronic_Limit_Down.Data[1] = System_Angle.Data[1];
        Electronic_Limit_Down.Data[2] = System_Angle.Data[2];
        Electronic_Limit_Down.Data[3] = System_Angle.Data[3];
    }
}

 /*****************电机驱动器型号选择不成功错误处理(指示灯灭)****************************/
void Motrol_Version_Init_Error_Handler(void)
{
//       HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_SET);
//       HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_SET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_RESET);       //故障红色
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_SET);
  }

/*CAN1******/
/********确认收到指令************/
void USER_Response( CAN_HandleTypeDef *hcan )
{
  System_Elevation.Data[0] = hcan->pRxMsg->Data[4];
  System_Elevation.Data[1] = hcan->pRxMsg->Data[5];
  System_Elevation.Data[2] = hcan->pRxMsg->Data[6];
  System_Elevation.Data[3] = hcan->pRxMsg->Data[7];
  
  hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 0; 
  HAL_CAN_Transmit_IT(hcan);
  }

/********初始化结果指令************/
void USER_Init_Reply(CAN_HandleTypeDef *hcan,Result_HandleTypeDef Result)
{
    if(Result_Handle.Init_Result != 2)
    {
        hcan->pTxMsg->StdId = ((FCoder__Init_Result << 6)|Can1FilterId|Direction_Out );
        hcan->pTxMsg->RTR = CAN_RTR_DATA ;
        hcan->pTxMsg->IDE = CAN_ID_STD ;
        hcan->pTxMsg->DLC = 1;
        hcan->pTxMsg->Data[0] =Result_Handle.Init_Result;
        HAL_CAN_Transmit_IT(hcan);
    }
 }

/********开关机指令************/
void USER_Start_Stop( CAN_HandleTypeDef *hcan )
{
    order_start_stop = hcan->pRxMsg->Data[0];
//    SYS_Order_Flag = order_start_stop + 1;
//    if((HAL_GPIO_ReadPin(GPIOD,KJ_State_Pin)==GPIO_PIN_RESET)&&(order_start_stop == 0x01))//实际使用
    if(order_start_stop == 0x01)
    {
        SYS_Order_Flag=2;
        if(Test_Mode != 5) Test_Mode = 0;
    }
//    if((HAL_GPIO_ReadPin(GPIOD,KJ_State_Pin)==GPIO_PIN_SET)&&(order_start_stop == 0x02))
    if(order_start_stop == 0x02)
    {
        SYS_Order_Flag=3;
        Test_Mode = 0;
        System_Elevation.Value = 0;
    }
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
 }

/********开关机结果指令************/
void USER_Start_Stop_Result( CAN_HandleTypeDef *hcan )
{
   
   hcan->pTxMsg->StdId = ((FCoder_Device_On_Off_Result <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 1;
   hcan->pTxMsg->Data[0] =Result_Handle.Start_Stop_Result;
   HAL_CAN_Transmit_IT(hcan);
  }

/****************系统状态查询指令**********************/
void USER_System_State(CAN_HandleTypeDef *hcan,System_StateHandleTypeDef System_State )
{

   
   hcan->pTxMsg->StdId = ((FCoder_SYS_State_Query <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 2;
   hcan->pTxMsg->Data[0] = System_State.Data[0];
   hcan->pTxMsg->Data[1] = System_State.Data[1];
   HAL_CAN_Transmit_IT(hcan);
}

/****************仰角状态查询指令**********************/
void USER_System_Elevation_Query( CAN_HandleTypeDef *hcan,System_Elevation_AngleTypeDef System_Elevation )
{
   hcan->pTxMsg->StdId = ((FCoder_Elevation_State_Result <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 4;
   hcan->pTxMsg->Data[0] = System_Elevation.Data[0];
   hcan->pTxMsg->Data[1] = System_Elevation.Data[1];
   hcan->pTxMsg->Data[2] = System_Elevation.Data[2];
   hcan->pTxMsg->Data[3] = System_Elevation.Data[3];
   HAL_CAN_Transmit_IT(hcan);
 }

/****************仰角设置指令**************************/
void USER_System_Elevation_Set( CAN_HandleTypeDef *hcan )
{
  System_Elevation.Data[0] = hcan->pRxMsg->Data[0];
  System_Elevation.Data[1] = hcan->pRxMsg->Data[1];
  System_Elevation.Data[2] = hcan->pRxMsg->Data[2];
  System_Elevation.Data[3] = hcan->pRxMsg->Data[3];
  if(WorkingMode == 1) Test_Mode = 4;

  hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 0; 
  HAL_CAN_Transmit_IT(hcan);
  }

/****************角度查询**************************/
void USER_System_Angle__Query( CAN_HandleTypeDef *hcan ,System_Angle_ErrorTypeDef Angle_Result,System_Angle_ErrorTypeDef Error_Result )  
{
   hcan->pTxMsg->StdId = ((FCoder_Angle_Result <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 8;
   hcan->pTxMsg->Data[0] = System_Angle.Data[0];//直接返回惯性单元读数
   hcan->pTxMsg->Data[1] = System_Angle.Data[1];
   hcan->pTxMsg->Data[2] = System_Angle.Data[2];
   hcan->pTxMsg->Data[3] = System_Angle.Data[3];
   hcan->pTxMsg->Data[4] = System_Error.Data[0];
   hcan->pTxMsg->Data[5] = System_Error.Data[1];
   hcan->pTxMsg->Data[6] = System_Error.Data[2];
   hcan->pTxMsg->Data[7] = System_Error.Data[3];
   HAL_CAN_Transmit_IT(hcan);

}

void  USER__HY_System_Angle__Query( CAN_HandleTypeDef *hcan ,System_Elevation_AngleTypeDef Gyroscope_Angle,System_Angle_ErrorTypeDef Error_Result )  
{
   hcan->pTxMsg->StdId = ((FCoder_Angle_Result <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 8;
//   hcan->pTxMsg->Data[0] = Gyroscope_Angle.Data[0];//System_Angle.Data[0];//直接返回惯性单元读数
//   hcan->pTxMsg->Data[1] = Gyroscope_Angle.Data[1];//System_Angle.Data[1];
//   hcan->pTxMsg->Data[2] = Gyroscope_Angle.Data[2];//System_Angle.Data[2];
//   hcan->pTxMsg->Data[3] = Gyroscope_Angle.Data[3];//System_Angle.Data[3];
   hcan->pTxMsg->Data[0] = System_Angle.Data[0];
   hcan->pTxMsg->Data[1] = System_Angle.Data[1];
   hcan->pTxMsg->Data[2] = System_Angle.Data[2];
   hcan->pTxMsg->Data[3] = System_Angle.Data[3];
   hcan->pTxMsg->Data[4] = System_Error.Data[0];
   hcan->pTxMsg->Data[5] = System_Error.Data[1];
   hcan->pTxMsg->Data[6] = System_Error.Data[2];
   hcan->pTxMsg->Data[7] = System_Error.Data[3];
   HAL_CAN_Transmit_IT(hcan);

}

/**待机保护**/
void USER_System_Standby__Query(CAN_HandleTypeDef *hcan )
{
  hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 0;
  HAL_CAN_Transmit_IT(hcan);
}

/**取消待机保护**/
void USER_System_Cancel_Standby__Query( CAN_HandleTypeDef *hcan )
{
  hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 0;
  HAL_CAN_Transmit_IT(hcan);
}

/****************工作模式选择**********************/
void USER_System_WorkingMode( CAN_HandleTypeDef *hcan )
{
    WorkingMode = hcan->pRxMsg->Data[0];
    if(WorkingMode == 4)
    {
        WorkingMode = 1;
        Test_Mode = 5;
    }
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0; 
    HAL_CAN_Transmit_IT(hcan);
}  

/****************检视模式参数设置**********************/
void USER_System_WorkingMode_Showing_Set( CAN_HandleTypeDef *hcan )
{
    if((hcan->pRxMsg->Data[1]) <= 6) Showing_T = 1;
    else if((hcan->pRxMsg->Data[1]) <= 8) Showing_T = 2;
    else if((hcan->pRxMsg->Data[1]) <= 10) Showing_T = 3;
    else if((hcan->pRxMsg->Data[1]) <= 12) Showing_T = 4;
    else if((hcan->pRxMsg->Data[1]) <= 16) Showing_T = 5;
    else if((hcan->pRxMsg->Data[1]) <= 20) Showing_T = 6;
    else if((hcan->pRxMsg->Data[1]) <= 25) Showing_T = 7;
    else Showing_T = 8;
    Showing_Angle = hcan->pRxMsg->Data[0];
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out);
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
}

/****************标零模式**********************/
void USER_System_ZeroPosition( CAN_HandleTypeDef *hcan )
{
    Test_Mode = 1;//标零模式
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
}

/****************退出标零模式**********************/
void USER_System_ZeroPosition_Exit( CAN_HandleTypeDef *hcan )
{
    if(Test_Mode == 1) Test_Mode = 0;//调试模式等待状态
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
}

/****************零位旋变值及惯性单元偏转量**********************/
void USER_System_ZeroPosition_Set( CAN_HandleTypeDef *hcan )
{
    ENC_position_current.Value = POSITION + ENC_position_zero_average.Value;
    hcan->pTxMsg->StdId = ((FCoder_ZeroPosition_Set<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 4;
    hcan->pTxMsg->Data[0] = ENC_position_current.Data[0];    //旋变值
    hcan->pTxMsg->Data[1] = ENC_position_current.Data[1];
    hcan->pTxMsg->Data[2] = ENC_position_current.Data[2];
    hcan->pTxMsg->Data[3] = ENC_position_current.Data[3];
    HAL_CAN_Transmit_IT(hcan);
//    ENC_position_zero_average.Value = ENC_position_zero_average.Value - POSITION;
}

/****************零位旋变值及惯性单元偏转量平均值**********************/
void USER_System_ZeroPosition_Average( CAN_HandleTypeDef *hcan )
{
    ENC_position_zero_average.Data[0] = hcan->pRxMsg->Data[0];
    ENC_position_zero_average.Data[1] = hcan->pRxMsg->Data[1];
    ENC_position_zero_average.Data[2] = hcan->pRxMsg->Data[2];
    ENC_position_zero_average.Data[3] = hcan->pRxMsg->Data[3];
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
//    writeFlashData = ENC_position_zero_average.Value;
    writeFlash(ENC_position_zero_average.Value, Flash_Erase_Count.Value, System_On_Time_minute.Value, System_On_Count.Value);
}

/****************标零结果查询**********************/
void USER_System_ZeroPosition_Result( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_ZeroPosition_Result<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 4;
    hcan->pTxMsg->Data[0] = ENC_position_zero_average.Data[0];    //旋变值
    hcan->pTxMsg->Data[1] = ENC_position_zero_average.Data[1];
    hcan->pTxMsg->Data[2] = ENC_position_zero_average.Data[2];
    hcan->pTxMsg->Data[3] = ENC_position_zero_average.Data[3];
    HAL_CAN_Transmit_IT(hcan);
}

/****************电子限位查询**********************/
void USER_System_ElectronicLimit_Result( CAN_HandleTypeDef *hcan )
{
    if((Test_Mode != 2)&&(Test_Mode != 3))
    {
        Electronic_Limit_Choose = hcan->pRxMsg->Data[0];
        Test_Mode = (hcan->pRxMsg->Data[0]) + 1;
        Electronic_Limit_Touch = 0;
    }
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
    //向MATLAB发送上、下限位信息
}

/****************电子限位上报**********************/
void USER_System_ElectronicLimit_Up_Report( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_ElectronicLimit_Result<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 5;
    hcan->pTxMsg->Data[0] = Electronic_Limit_Choose;
    hcan->pTxMsg->Data[1] = Electronic_Limit_Up.Data[0];
    hcan->pTxMsg->Data[2] = Electronic_Limit_Up.Data[1];
    hcan->pTxMsg->Data[3] = Electronic_Limit_Up.Data[2];
    hcan->pTxMsg->Data[4] = Electronic_Limit_Up.Data[3];
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT(hcan);
}

void USER_System_ElectronicLimit_Down_Report( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_ElectronicLimit_Result<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 5;
    hcan->pTxMsg->Data[0] = Electronic_Limit_Choose;
    hcan->pTxMsg->Data[1] = Electronic_Limit_Down.Data[0];
    hcan->pTxMsg->Data[2] = Electronic_Limit_Down.Data[1];
    hcan->pTxMsg->Data[3] = Electronic_Limit_Down.Data[2];
    hcan->pTxMsg->Data[4] = Electronic_Limit_Down.Data[3];
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT(hcan);
}

void USER_SystemAngle_Result( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_SystemAngle_Reply<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 6;
    if(Electronic_Limit_Touch == 1)
    {
        hcan->pTxMsg->Data[0] = 2;
        hcan->pTxMsg->Data[1] = 1;
        hcan->pTxMsg->Data[2] = Electronic_Limit_Up.Data[0];
        hcan->pTxMsg->Data[3] = Electronic_Limit_Up.Data[1];
        hcan->pTxMsg->Data[4] = Electronic_Limit_Up.Data[2];
        hcan->pTxMsg->Data[5] = Electronic_Limit_Up.Data[3];
//        Electronic_Limit_Touch = 0;
    }
    else if(Electronic_Limit_Touch == 2)
    {
        hcan->pTxMsg->Data[0] = 2;
        hcan->pTxMsg->Data[1] = 2;
        hcan->pTxMsg->Data[2] = Electronic_Limit_Down.Data[0];
        hcan->pTxMsg->Data[3] = Electronic_Limit_Down.Data[1];
        hcan->pTxMsg->Data[4] = Electronic_Limit_Down.Data[2];
        hcan->pTxMsg->Data[5] = Electronic_Limit_Down.Data[3];
//        Electronic_Limit_Touch = 0;
    }
    else
    {
        hcan->pTxMsg->Data[0] = 1;
        hcan->pTxMsg->Data[1] = Electronic_Limit_Choose;
        hcan->pTxMsg->Data[2] = System_Angle.Data[0];
        hcan->pTxMsg->Data[3] = System_Angle.Data[1];
        hcan->pTxMsg->Data[4] = System_Angle.Data[2];
        hcan->pTxMsg->Data[5] = System_Angle.Data[3];
    }
//    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT(hcan);
}

void USER_FlashCount_Check( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_FlashCount_Check<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 4;
    hcan->pTxMsg->Data[0] = Flash_Erase_Count.Data[0];
    hcan->pTxMsg->Data[1] = Flash_Erase_Count.Data[1];
    hcan->pTxMsg->Data[2] = Flash_Erase_Count.Data[2];
    hcan->pTxMsg->Data[3] = Flash_Erase_Count.Data[3];
    HAL_CAN_Transmit_IT(hcan);
}

//void USER_SystemHealth_Check( CAN_HandleTypeDef *hcan )
//{
//    hcan->pTxMsg->StdId = ((FCoder_SystemHealth_Check<<6)|Can1FilterId|Direction_Out );
//    hcan->pTxMsg->RTR = CAN_RTR_DATA;
//    hcan->pTxMsg->IDE = CAN_ID_STD;
//    hcan->pTxMsg->DLC = 8;
//    hcan->pTxMsg->Data[0] = System_On_Time_minute.Data[0];
//    hcan->pTxMsg->Data[1] = System_On_Time_minute.Data[1];
//    hcan->pTxMsg->Data[2] = System_On_Time_minute.Data[2];
//    hcan->pTxMsg->Data[3] = System_On_Time_minute.Data[3];
//    hcan->pTxMsg->Data[4] = System_On_Count.Data[0];
//    hcan->pTxMsg->Data[5] = System_On_Count.Data[1];
//    hcan->pTxMsg->Data[6] = System_On_Count.Data[2];
//    hcan->pTxMsg->Data[7] = System_On_Count.Data[3];
//    HAL_CAN_Transmit_IT(hcan);
//}

/****************与dSpace进行旋变和PWM通信**********************/
void USER_Dspace_PWM_OUT( CAN_HandleTypeDef *hcan )
{
    Dspace_PWM.Data[0] = hcan->pRxMsg->Data[0];
    Dspace_PWM.Data[1] = hcan->pRxMsg->Data[1];
    hcan->pTxMsg->StdId = ((FCoder_Dspace_PWM_OUT<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 8;
    hcan->pTxMsg->Data[0] = ENC_SPEED.Data[0];
    hcan->pTxMsg->Data[1] = ENC_SPEED.Data[1];
    hcan->pTxMsg->Data[2] = ENC_SPEED.Data[2];
    hcan->pTxMsg->Data[3] = ENC_SPEED.Data[3];
    hcan->pTxMsg->Data[4] = ENC_POSITION.Data[0];
    hcan->pTxMsg->Data[5] = ENC_POSITION.Data[1];
    hcan->pTxMsg->Data[6] = ENC_POSITION.Data[2];
    hcan->pTxMsg->Data[7] = ENC_POSITION.Data[3];
    HAL_CAN_Transmit_IT(hcan);
}

/****************惯性单元初始化**********************/
void USER_G_Init( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_Initial<<6)|Can2FilterId|Direction_In );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT(hcan);
}

/****************惯性单元开关机**********************/
void USER_G_Start_Stop( CAN_HandleTypeDef *hcan,uint8_t G_Start_Stop )
{
    hcan->pTxMsg->StdId = ((FCoder_Device_On_Off<<6)|Can2FilterId|Direction_In );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 1;
    hcan->pTxMsg->Data[0] = G_Start_Stop;
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT(hcan);
}

/**报警信息主动上报**/
void USER_Alarm_State(CAN_HandleTypeDef *hcan,System_StateHandleTypeDef  System_State)
{
    hcan->pTxMsg->StdId = ((FCoder_Alert <<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA ;
    hcan->pTxMsg->IDE = CAN_ID_STD ;
    hcan->pTxMsg->DLC = 1;
    hcan->pTxMsg->Data[0] = System_State.Data[1];
//   hcan->pTxMsg->Data[1] = System_State.Data[1];
//   if(HAL_CAN_Transmit_IT(hcan) != HAL_OK)
//   { Flag_Error_Can1_T=1;   }
//   else
//   { Flag_Error_Can1_T=0;   }
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT( hcan );
    //Alarm_Cunt  =   0;
}

/**故障信息主动上报**/
void USER_Fault_State(CAN_HandleTypeDef *hcan,System_StateHandleTypeDef  System_State)
{
    hcan->pTxMsg->StdId = ((FCoder_Fault <<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA ;
    hcan->pTxMsg->IDE = CAN_ID_STD ;
    hcan->pTxMsg->DLC = 1;
    hcan->pTxMsg->Data[0] = System_State.Data[0];
//   hcan->pTxMsg->Data[1] = System_State.Data[1];
//   if(HAL_CAN_Transmit_IT(hcan) != HAL_OK)
//   { Flag_Error_Can1_T=1;   }
//  else
//   { Flag_Error_Can1_T=0;   }
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT( hcan );
  // Alarm_Cunt    =   0;
   
}

/**过电流保护**/
void Over_current_protect(uint32_t Current)
{
    if(Current > 2200 || Current < 1700)
    {
//        HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_SET);
        if(motor_Y.PWMOUT > 3500) motor_Y.PWMOUT = 3500;
        if(motor_Y.PWMOUT < 1500) motor_Y.PWMOUT = 1500;
    }
//    else HAL_GPIO_WritePin(EN_C_GPIO_Port, EN_C_Pin, GPIO_PIN_RESET);
}

/**限位保护**/
void Limit_Protect(uint8_t Up_Limit,uint8_t Down_Limit)
{
    if(Up_Limit == 0)
    {
        if(motor_Y.PWMOUT > 3000) motor_Y.PWMOUT = 3000;
    }
    if(Down_Limit == 0)
    {
        if(motor_Y.PWMOUT < 2000) motor_Y.PWMOUT = 2000;
    }
    if(Up_Limit == 0)
    {
        if(Dspace_PWM.Value > 3000) Dspace_PWM.Value = 3000;
    }
    if(Down_Limit == 0)
    {
        if(Dspace_PWM.Value < 2000) Dspace_PWM.Value = 2000;
    }
}

/**陀螺仪信号源选择**/
void USER_Gyroscope_Choose( CAN_HandleTypeDef *hcan )
{
    if(hcan->pRxMsg->Data[0] == 1) Gyroscope_Choose = 0;
    if(hcan->pRxMsg->Data[0] == 2) Gyroscope_Choose = 1;
    hcan->pTxMsg->StdId = ( (FCoder_Confirm_Receipt<<6) | Can1FilterId | Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
}

/**系统健康状态统计**/
void System_Health_check()
{
    System_On_Time_Tick++;
    if(System_On_Time_Tick > 1800000)
    {
        System_On_Time_Tick = 0;
        System_On_Time_minute.Value++;
        writeFlash(ENC_position_zero_average.Value, Flash_Erase_Count.Value, System_On_Time_minute.Value, System_On_Count.Value);
    }
}

/**零位旋变初始化**/
void ENC_Zero_Init()
{
    printFlash();
    System_On_Count.Value++;
//    writeFlash(ENC_position_zero_average.Value, Flash_Erase_Count.Value, System_On_Time_minute.Value, System_On_Count.Value);
}

/**CAN2**/
/**惯性单元角度**/
void USER_Gyroscope_Angle(CAN_HandleTypeDef *hcan)                      //取角度
{
//  if((RxMessage2.StdId==0x308)||(RxMessage2.StdId==0x34C)||(RxMessage2.StdId==0x2d4))
//  {
   Gyroscope_Angle.Data[0] = hcan->pRxMsg->Data[0];
   Gyroscope_Angle.Data[1] = hcan->pRxMsg->Data[1];
   Gyroscope_Angle.Data[2] = hcan->pRxMsg->Data[2];
   Gyroscope_Angle.Data[3] = hcan->pRxMsg->Data[3];
//   }
 }

/**将XHZY的丝杆位移发送给XHHY**/
void USER_Gyroscope_SGWY_send(CAN_HandleTypeDef *hcan)                      //发送XHZY的丝杆位移
{
  TxMessage2.StdId= ((0x06)<<1); 
  TxMessage2.RTR= CAN_RTR_DATA;
  TxMessage2.IDE = CAN_ID_STD;
  TxMessage2.DLC = 4;
  TxMessage2.Data[0] =XHZY_SGWY.Data[0];                   
  TxMessage2.Data[1] =XHZY_SGWY.Data[1];	
  TxMessage2.Data[2] =XHZY_SGWY.Data[2];
  TxMessage2.Data[3] =XHZY_SGWY.Data[3];
  if(HAL_CAN_Transmit_IT(hcan) != HAL_OK)
   { Flag_Error_Can2_T=1;   }
  else
   { Flag_Error_Can2_T=0;   }
}
void USER_Gyroscope_SGWY_recive(CAN_HandleTypeDef *hcan)                      //接收XHZY的丝杆位移
{
  if(RxMessage2.StdId==0x0c)
  {
  SGWY_Inport.Data[0]=hcan->pRxMsg->Data[0];
  SGWY_Inport.Data[1]=hcan->pRxMsg->Data[1];
  SGWY_Inport.Data[2]=hcan->pRxMsg->Data[2];
  SGWY_Inport.Data[3]=hcan->pRxMsg->Data[3];
  } 
}