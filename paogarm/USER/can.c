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

uint8_t   Flag_Can1_R=1 ;                         //Ĭ��1������0����
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

/************����CAN1ָ�����*******************/
void USER_CanMsg_Init(CAN_HandleTypeDef *hcan,CanTxMsgTypeDef *TxMessage,CanRxMsgTypeDef *RxMessage)
{
  hcan->pTxMsg=TxMessage;
  hcan->pRxMsg=RxMessage;
  }

/*CAN1�˲�����ʼ������******/
void USER_CanFilter_Init(CAN_HandleTypeDef *hcan)
{ 
  sFilterConfig_CAN.FilterNumber = 0;                                         //��������0
  sFilterConfig_CAN.FilterMode = CAN_FILTERMODE_IDMASK;                       //��ʾ����ģʽ ������CAN_FILTERMODE_IDMASK����CAN_FILTERMODE_IDLIST                
  sFilterConfig_CAN.FilterScale = CAN_FILTERSCALE_32BIT;                      //��ʾ������Ϊ32λ
  sFilterConfig_CAN.FilterIdHigh =(Can1FilterId<<5);                          //Ҫ���˵�ID ��16λ
  sFilterConfig_CAN.FilterIdLow = 0x0000;                                     //Ҫ���˵�ID ��16λ
  sFilterConfig_CAN.FilterMaskIdHigh =(Can1FilterMaskId<<5);                  //��������16λ��Bit1-Bit4������ͬ
  //sFilterConfig_CAN.FilterMaskIdHigh =0x0000;                               //��������16λ��Bit1-Bit4������ͬ
  sFilterConfig_CAN.FilterMaskIdLow =0x0000;                                  //��������16λ�������Ƚ�
  sFilterConfig_CAN.FilterFIFOAssignment = CAN_FILTER_FIFO0;                  //��������������FIFO0
  sFilterConfig_CAN.FilterActivation = ENABLE;                                //ʹ���˲���
  sFilterConfig_CAN.BankNumber = 14;                                          //���������˲���
  HAL_CAN_ConfigFilter(hcan, &sFilterConfig_CAN);                             //��ʼ������CAN
  
  
   /******CAN2����CAN�˲�������*************************/
  sFilterConfig_CAN.FilterNumber = 14;                                         //��������14,�˲���2
  sFilterConfig_CAN.FilterMode = CAN_FILTERMODE_IDMASK;                       //��ʾ����ģʽ              
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

/*CAN1��������******/
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

