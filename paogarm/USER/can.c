/**
  ******************************************************************************
  * File Name          : CAN.c
  * Description        : CAN
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "can.h"

/* Private variables ---------------------------------------------------------*/
CanTxMsgTypeDef       		         TxMessage1;
CanRxMsgTypeDef       		         RxMessage1;

CanTxMsgTypeDef       		         TxMessage2;
CanRxMsgTypeDef       		         RxMessage2;

CAN_FilterConfTypeDef 		         sFilterConfig_CAN;


uint16_t  Can1FilterId = 0x03;                 
uint16_t  Can1FilterMaskId = 0x18;

uint16_t  Can2FilterId = 0x01;                 
uint16_t  Can2FilterMaskId = 0x01E;

//uint32_t  Can2FilterId = 0x6042220;                 
//uint16_t  Can2FilterMaskId = 0x01E;

uint8_t   Flag_Can1_R=1 ;                         //默认1正常，0错误
uint8_t   Flag_Can1_T=1 ;

//uint8_t   Flag_Can2_R      =1 ;
//uint8_t   Flag_Can2_T      =1 ;

uint8_t   Can2_R1  =  0 ;
uint8_t   Can2_R2  =  0 ;
    
uint8_t   Flag_Error_Can1_R=1 ;
uint8_t   Flag_Error_Can1_T=1 ;

uint8_t   Flag_Error_Can2_R=1 ;
uint8_t   Flag_Error_Can2_T=1 ;
/* Private function prototypes -----------------------------------------------*/

/************定义CAN1指针变量*******************/
void USER_CanMsg_Init(CAN_HandleTypeDef *hcan,CanTxMsgTypeDef *TxMessage,CanRxMsgTypeDef *RxMessage)
{
  hcan->pTxMsg=TxMessage;
  hcan->pRxMsg=RxMessage;
  }

/*CAN1滤波器初始化函数******/
void USER_CanFilter_Init(CAN_HandleTypeDef *hcan)
{ 
  sFilterConfig_CAN.FilterNumber = 0;                                         //过滤器组0
  sFilterConfig_CAN.FilterMode = CAN_FILTERMODE_IDMASK;                       //表示屏蔽模式 ，可以CAN_FILTERMODE_IDMASK或者CAN_FILTERMODE_IDLIST                
  sFilterConfig_CAN.FilterScale = CAN_FILTERSCALE_32BIT;                      //表示过滤器为32位
  sFilterConfig_CAN.FilterIdHigh =(Can1FilterId<<5);                          //要过滤的ID 高16位
  sFilterConfig_CAN.FilterIdLow = 0x0000;                                     //要过滤的ID 低16位
  sFilterConfig_CAN.FilterMaskIdHigh =(Can1FilterMaskId<<5);                  //过滤器高16位，Bit1-Bit4必须相同
  //sFilterConfig_CAN.FilterMaskIdHigh =0x0000;                               //过滤器高16位，Bit1-Bit4必须相同
  sFilterConfig_CAN.FilterMaskIdLow =0x0000;                                  //过滤器低16位，不作比较
  sFilterConfig_CAN.FilterFIFOAssignment = CAN_FILTER_FIFO0;                  //过滤器被关联到FIFO0
  sFilterConfig_CAN.FilterActivation = ENABLE;                                //使能滤波器
  sFilterConfig_CAN.BankNumber = 14;                                          //开启从属滤波器
  HAL_CAN_ConfigFilter(hcan, &sFilterConfig_CAN);                             //初始化配置CAN
  
  
   /******CAN2低速CAN滤波器设置*************************/
  sFilterConfig_CAN.FilterNumber = 14;                                         //过滤器组14,滤波器2
  sFilterConfig_CAN.FilterMode = CAN_FILTERMODE_IDMASK;                       //表示屏蔽模式              
  sFilterConfig_CAN.FilterScale = CAN_FILTERSCALE_32BIT;
//  sFilterConfig_CAN.FilterIdHigh = (Can2FilterId<<5);
//  sFilterConfig_CAN.FilterIdLow = 0x0000;
  sFilterConfig_CAN.FilterIdHigh = 0x0000;
  sFilterConfig_CAN.FilterIdLow = 0x0000;
//  sFilterConfig_CAN.FilterMaskIdHigh =(Can2FilterMaskId<<5);
//  sFilterConfig_CAN.FilterMaskIdLow=0x0000;
  sFilterConfig_CAN.FilterMaskIdHigh = 0x0000;
  sFilterConfig_CAN.FilterMaskIdLow = 0x0000;
  sFilterConfig_CAN.FilterFIFOAssignment = CAN_FILTER_FIFO0;
  sFilterConfig_CAN.FilterActivation = ENABLE;   
  HAL_CAN_ConfigFilter(hcan, &sFilterConfig_CAN);

  }

/*CAN1发送数据******/
void CAN1_Send (CAN_HandleTypeDef *hcan )
{
  hcan->pTxMsg->StdId = 0x06;
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 4;
  hcan->pTxMsg->Data[0] =0x25;                   
  hcan->pTxMsg->Data[1] =0x23;	
  hcan->pTxMsg->Data[2] =0x45;
  hcan->pTxMsg->Data[3] =0x78;
  if(HAL_CAN_Transmit_IT(hcan) != HAL_OK)
   { Flag_Error_Can1_T=1;   }
  else
   { Flag_Error_Can1_T=0;   }
 // HAL_CAN_Transmit_IT(hcan);

 }
void CAN2_Send (CAN_HandleTypeDef *hcan )
{
  hcan->pTxMsg->StdId = 0x04;
  hcan->pTxMsg->RTR = CAN_RTR_DATA;
  hcan->pTxMsg->IDE = CAN_ID_STD;
  hcan->pTxMsg->DLC = 4;
  hcan->pTxMsg->Data[0] =0x23;                   
  hcan->pTxMsg->Data[1] =0x26;	
  hcan->pTxMsg->Data[2] =0x35;
  hcan->pTxMsg->Data[3] =0x68;
  if(HAL_CAN_Transmit_IT(hcan) != HAL_OK)
   { Flag_Error_Can1_T=1;   }
  else
   { Flag_Error_Can1_T=0;   }
 // HAL_CAN_Transmit_IT(hcan);

 }

