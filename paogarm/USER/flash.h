#ifndef _FLASH_H
#define _FLASH_H
/******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"



/* Private variables ---------------------------------------------------------*/

//extern    int32_t    writeFlashData ;
extern    uint32_t   addr1 ;
extern    uint32_t   addr2 ;
extern    uint32_t   addr3 ;
extern    uint32_t   addr4 ;

//typedef union 
//{
//  uint8_t   Data[4];
//  int32_t   Value;
//  
// }System_Elevation_AngleTypeDef; 
//extern    System_Elevation_AngleTypeDef        System_Zero;        //ϵͳ���
//extern    System_Elevation_AngleTypeDef        System_BiaoDing_Zero;        //ϵͳ�궨���



/*******************************Private Function*******************************/


void writeFlash(int32_t writeFlashData1, int32_t writeFlashData2, int32_t writeFlashData3, int32_t writeFlashData4);//FLASHд������

void printFlash(void);//FLASH��ȡ����

//void USER_System_Zero(CAN_HandleTypeDef *hcan);
//void CAN1_BiaoDing_Send (CAN_HandleTypeDef *hcan );


#endif