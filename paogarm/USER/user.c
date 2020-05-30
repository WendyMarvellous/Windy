/**
  ******************************************************************************
  * File Name          : USER.c
  * Description        : �û��Զ����ļ�
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
/******************************�����豸��ַ***********************************/
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
uint8_t Showing_Angle = 0;            //����ģʽ��ֵ
uint8_t Showing_T = 3;                //����ģʽ����ѡ��
uint8_t Electronic_Limit_Touch = 0;   //�Ƿ������λ 0Ϊ���� 1��������λ 2��������λ
uint32_t System_On_Time_Tick = 0;
uint8_t Gyroscope_Choose = 0;

extern int32_t POSITION;
//uint8_t ENC_position_zero_average[4] = {0,0,0,0};
uint8_t Electronic_Limit_Choose = 0;

System_Elevation_AngleTypeDef        System_Elevation;       //ϵͳ����
System_Elevation_AngleTypeDef        Gyroscope_Angle;        //���Ե�Ԫ�Ƕ�

System_Elevation_AngleTypeDef        XHZY_SGWY;              //�»���ҡ˿��λ��
System_Elevation_AngleTypeDef        SGWY_Inport;            //�»���ҡ˿��λ������

Result_HandleTypeDef                 Result_Handle;          //��ʼ����������ػ����

System_StateHandleTypeDef            System_State;           //ϵͳ״̬
System_StateHandleTypeDef            System_State_Last;


System_Angle_ErrorTypeDef            System_Angle;           //�Ƕ�

System_Angle_ErrorTypeDef            System_Error;           //�Ƕ����


System_Angle_ErrorTypeDef            Electronic_Limit_Up;                  //��������λ�Ƕ�
System_Angle_ErrorTypeDef            Electronic_Limit_Down;                //��������λ�Ƕ�
System_Angle_ErrorTypeDef            ENC_position_zero_average;            //��λ����ƽ��ֵ
System_Angle_ErrorTypeDef            ENC_position_current;                 //��ǰ����ֵ
System_Angle_ErrorTypeDef            Flash_Erase_Count;                    //Flash��������
System_Angle_ErrorTypeDef            System_On_Time_minute;
System_Angle_ErrorTypeDef            System_On_Count;

/*******************************Private Function*******************************/

/*=========================================================================
����������ͺ�ѡ��(����CAN2�ĵ�ַ)
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
    /*******************����ͺ��ɵ�·����Ad1_c��Ad2_c���Ÿߵ;���*****************/
    if(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin) == GPIO_PIN_RESET) add1_c=1;
    else add1_c=0;
    if(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin) == GPIO_PIN_RESET) add2_c=1;
    else add2_c=0;
       
     //  Motor_Num=(!(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin)))+(!(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin)))*2;    /*����ַ���***��ȡI/O�ڵ�ƽ�ߵ�***/
    Motor_Num = add1_c+add2_c*2 ; 
     
    delay_ms(30000);
    
    /*******************����ͺ��ɵ�·����Ad1_c��Ad2_c���Ÿߵ;���*****************/
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
     //Motor_Num=(!(HAL_GPIO_ReadPin(GPIOE, Ad1_c_Pin)))+(!(HAL_GPIO_ReadPin(GPIOE, Ad2_c_Pin)))*2;    /*����ַ���***��ȡI/O�ڵ�ƽ�ߵ�***/
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
   case  ADDR_HY_Motor_QDQ:                                                //��ҡ�Ƹ˵��������,������ָʾ��Ϊ�ٻ�ɫ
//         HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_RESET);
//         HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_RESET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_RESET);              //�»�ϵͳ���ǻ�ɫ
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_RESET);
         Can1FilterId = (ADDR_HY_Motor_QDQ<<1);                             //CAN����Bit1~Bit5λ����ģʽ�Ƚ�λ�����ӻ���ַ
//         Can1FilterId = 0x00;
         Can2FilterId = (ADDR_HY_GXDY<<1);                  //Ӧ���ò���
         FCoder_Angle_Result = FCoder_HYAngle_Result;                       //����ͳһ��ʾ����һ�����������ָ����ǶȲ�ѯ��Ϣ��ʶ
   break;
  case  ADDR_XHHY_Motor_QDQ:                                               //�»���ҡ�����������������ָʾ��Ϊ��ɫ
//         HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_SET);
//         HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_RESET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_SET);               //�»�ϵͳ������ɫ
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_RESET);
         Can1FilterId = (ADDR_XHHY_Motor_QDQ<<1);
         Can2FilterId = (ADDR_XHHY_GXDY<<1);
         FCoder_Angle_Result = FCoder_XHHYAngle_Result;                     //�ǶȽ����ѯ����
   break;
   case ADDR_XHZY_Motor_QDQ:                                               //�»���ҡ�����������������ָʾ��Ϊ��ɫ
//         HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_RESET);
//         HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_SET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_SET);                //�»�ϵͳ������ɫ
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_RESET);
         Can1FilterId = (ADDR_XHZY_Motor_QDQ<<1);
         Can2FilterId = (ADDR_XHZY_GXDY<<1);
         FCoder_Angle_Result = FCoder_XHZYAngle_Result;
   break;
   default: 
      /****������******/
         Motrol_Version_Init_Error_Handler( );
   break; 
  
   
    }
}

/*****************������λ�Ƕȸ���****************************/
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

 /*****************����������ͺ�ѡ�񲻳ɹ�������(ָʾ����)****************************/
void Motrol_Version_Init_Error_Handler(void)
{
//       HAL_GPIO_WritePin(GPIOC, QDQ_HY_Pin, GPIO_PIN_SET);
//       HAL_GPIO_WritePin(GPIOC, QDQ_XH_Pin, GPIO_PIN_SET);
         HAL_GPIO_WritePin(GPIOA, QDQ_ZC_Pin, GPIO_PIN_RESET);       //���Ϻ�ɫ
         HAL_GPIO_WritePin(GPIOA, QDQ_GZ_Pin, GPIO_PIN_SET);
  }

/*CAN1******/
/********ȷ���յ�ָ��************/
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

/********��ʼ�����ָ��************/
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

/********���ػ�ָ��************/
void USER_Start_Stop( CAN_HandleTypeDef *hcan )
{
    order_start_stop = hcan->pRxMsg->Data[0];
//    SYS_Order_Flag = order_start_stop + 1;
//    if((HAL_GPIO_ReadPin(GPIOD,KJ_State_Pin)==GPIO_PIN_RESET)&&(order_start_stop == 0x01))//ʵ��ʹ��
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

/********���ػ����ָ��************/
void USER_Start_Stop_Result( CAN_HandleTypeDef *hcan )
{
   
   hcan->pTxMsg->StdId = ((FCoder_Device_On_Off_Result <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 1;
   hcan->pTxMsg->Data[0] =Result_Handle.Start_Stop_Result;
   HAL_CAN_Transmit_IT(hcan);
  }

/****************ϵͳ״̬��ѯָ��**********************/
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

/****************����״̬��ѯָ��**********************/
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

/****************��������ָ��**************************/
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

/****************�ǶȲ�ѯ**************************/
void USER_System_Angle__Query( CAN_HandleTypeDef *hcan ,System_Angle_ErrorTypeDef Angle_Result,System_Angle_ErrorTypeDef Error_Result )  
{
   hcan->pTxMsg->StdId = ((FCoder_Angle_Result <<6)|Can1FilterId|Direction_Out );
   hcan->pTxMsg->RTR = CAN_RTR_DATA ;
   hcan->pTxMsg->IDE = CAN_ID_STD ;
   hcan->pTxMsg->DLC = 8;
   hcan->pTxMsg->Data[0] = System_Angle.Data[0];//ֱ�ӷ��ع��Ե�Ԫ����
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
//   hcan->pTxMsg->Data[0] = Gyroscope_Angle.Data[0];//System_Angle.Data[0];//ֱ�ӷ��ع��Ե�Ԫ����
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

/**��������**/
void USER_System_Standby__Query(CAN_HandleTypeDef *hcan )
{
  hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 0;
  HAL_CAN_Transmit_IT(hcan);
}

/**ȡ����������**/
void USER_System_Cancel_Standby__Query( CAN_HandleTypeDef *hcan )
{
  hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 0;
  HAL_CAN_Transmit_IT(hcan);
}

/****************����ģʽѡ��**********************/
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

/****************����ģʽ��������**********************/
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

/****************����ģʽ**********************/
void USER_System_ZeroPosition( CAN_HandleTypeDef *hcan )
{
    Test_Mode = 1;//����ģʽ
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
}

/****************�˳�����ģʽ**********************/
void USER_System_ZeroPosition_Exit( CAN_HandleTypeDef *hcan )
{
    if(Test_Mode == 1) Test_Mode = 0;//����ģʽ�ȴ�״̬
    hcan->pTxMsg->StdId = ((FCoder_Confirm_Receipt<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    HAL_CAN_Transmit_IT(hcan);
}

/****************��λ����ֵ�����Ե�Ԫƫת��**********************/
void USER_System_ZeroPosition_Set( CAN_HandleTypeDef *hcan )
{
    ENC_position_current.Value = POSITION + ENC_position_zero_average.Value;
    hcan->pTxMsg->StdId = ((FCoder_ZeroPosition_Set<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 4;
    hcan->pTxMsg->Data[0] = ENC_position_current.Data[0];    //����ֵ
    hcan->pTxMsg->Data[1] = ENC_position_current.Data[1];
    hcan->pTxMsg->Data[2] = ENC_position_current.Data[2];
    hcan->pTxMsg->Data[3] = ENC_position_current.Data[3];
    HAL_CAN_Transmit_IT(hcan);
//    ENC_position_zero_average.Value = ENC_position_zero_average.Value - POSITION;
}

/****************��λ����ֵ�����Ե�Ԫƫת��ƽ��ֵ**********************/
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

/****************��������ѯ**********************/
void USER_System_ZeroPosition_Result( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_ZeroPosition_Result<<6)|Can1FilterId|Direction_Out );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 4;
    hcan->pTxMsg->Data[0] = ENC_position_zero_average.Data[0];    //����ֵ
    hcan->pTxMsg->Data[1] = ENC_position_zero_average.Data[1];
    hcan->pTxMsg->Data[2] = ENC_position_zero_average.Data[2];
    hcan->pTxMsg->Data[3] = ENC_position_zero_average.Data[3];
    HAL_CAN_Transmit_IT(hcan);
}

/****************������λ��ѯ**********************/
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
    //��MATLAB�����ϡ�����λ��Ϣ
}

/****************������λ�ϱ�**********************/
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

/****************��dSpace���������PWMͨ��**********************/
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

/****************���Ե�Ԫ��ʼ��**********************/
void USER_G_Init( CAN_HandleTypeDef *hcan )
{
    hcan->pTxMsg->StdId = ((FCoder_Initial<<6)|Can2FilterId|Direction_In );
    hcan->pTxMsg->RTR = CAN_RTR_DATA;
    hcan->pTxMsg->IDE = CAN_ID_STD;
    hcan->pTxMsg->DLC = 0;
    hcan->State = HAL_CAN_STATE_READY;
    HAL_CAN_Transmit_IT(hcan);
}

/****************���Ե�Ԫ���ػ�**********************/
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

/**������Ϣ�����ϱ�**/
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

/**������Ϣ�����ϱ�**/
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

/**����������**/
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

/**��λ����**/
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

/**�������ź�Դѡ��**/
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

/**ϵͳ����״̬ͳ��**/
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

/**��λ�����ʼ��**/
void ENC_Zero_Init()
{
    printFlash();
    System_On_Count.Value++;
//    writeFlash(ENC_position_zero_average.Value, Flash_Erase_Count.Value, System_On_Time_minute.Value, System_On_Count.Value);
}

/**CAN2**/
/**���Ե�Ԫ�Ƕ�**/
void USER_Gyroscope_Angle(CAN_HandleTypeDef *hcan)                      //ȡ�Ƕ�
{
//  if((RxMessage2.StdId==0x308)||(RxMessage2.StdId==0x34C)||(RxMessage2.StdId==0x2d4))
//  {
   Gyroscope_Angle.Data[0] = hcan->pRxMsg->Data[0];
   Gyroscope_Angle.Data[1] = hcan->pRxMsg->Data[1];
   Gyroscope_Angle.Data[2] = hcan->pRxMsg->Data[2];
   Gyroscope_Angle.Data[3] = hcan->pRxMsg->Data[3];
//   }
 }

/**��XHZY��˿��λ�Ʒ��͸�XHHY**/
void USER_Gyroscope_SGWY_send(CAN_HandleTypeDef *hcan)                      //����XHZY��˿��λ��
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
void USER_Gyroscope_SGWY_recive(CAN_HandleTypeDef *hcan)                      //����XHZY��˿��λ��
{
  if(RxMessage2.StdId==0x0c)
  {
  SGWY_Inport.Data[0]=hcan->pRxMsg->Data[0];
  SGWY_Inport.Data[1]=hcan->pRxMsg->Data[1];
  SGWY_Inport.Data[2]=hcan->pRxMsg->Data[2];
  SGWY_Inport.Data[3]=hcan->pRxMsg->Data[3];
  } 
}