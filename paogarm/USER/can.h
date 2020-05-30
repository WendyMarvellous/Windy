#ifndef _CAN_H
#define _CAN_H
/******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
extern CanTxMsgTypeDef       		         TxMessage1;
extern CanRxMsgTypeDef       		         RxMessage1;

extern CanTxMsgTypeDef       		         TxMessage2;
extern CanRxMsgTypeDef       		         RxMessage2;

extern CAN_FilterConfTypeDef 		         sFilterConfig_CAN;

extern uint16_t  Can1FilterId;                 
extern uint16_t  Can1FilterMaskId;

extern uint16_t  Can2FilterId ;                 
//extern uint16_t  Can2FilterMaskId;

//extern uint32_t  Can2FilterId ;                 
extern uint16_t  Can2FilterMaskId;

extern uint8_t   Flag_Can1_R;
extern uint8_t   Flag_Can1_T;

extern uint8_t   Flag_Error_Can2_R;
extern uint8_t   Flag_Error_Can2_T;

extern uint8_t   Flag_Error_Can1_R;
extern uint8_t   Flag_Error_Can1_T;

//extern uint8_t   Flag_Can2_R   ;
//extern uint8_t   Flag_Can2_T   ;

extern uint8_t   Can2_R1       ;
extern uint8_t   Can2_R2       ;

void USER_CanMsg_Init(CAN_HandleTypeDef *hcan,CanTxMsgTypeDef *TxMessage,CanRxMsgTypeDef *RxMessage);
void USER_CanFilter_Init(CAN_HandleTypeDef *hcan);
void CAN1_Send (CAN_HandleTypeDef *hcan );
void CAN2_Send (CAN_HandleTypeDef *hcan );





#endif