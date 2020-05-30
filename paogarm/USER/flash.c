/**
  ******************************************************************************
  * File Name          : FLASH.c
  * Description        : �û��Զ����ļ�
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "flash.h"
#include "can.h"
#include "user.h"
#include "tim.h"
    
/* Private variables ---------------------------------------------------------*/
/******************************�����豸��ַ***********************************/

//int32_t writeFlashData = 0;//����FLAsh��ֵ��С����CAN������ֵд��
uint32_t addr1 = 0x08037000;
uint32_t addr2 = 0x08037004;
uint32_t addr3 = 0x08037008;
uint32_t addr4 = 0x0803700C;

System_Elevation_AngleTypeDef        System_Zero;        //ϵͳ���
System_Elevation_AngleTypeDef        System_BiaoDing_Zero;        //ϵͳ�궨���
//writeFlashData=System_Zero.Value;
int8_t Flash_RW_T = 0;
    
FLASH_EraseInitTypeDef f;//��ʼ��FLASH_EraseInitTypeDef
uint32_t PageError = 0;  //����PageError



/*******************************Private Function*******************************/

/*=========================================================================
                        FLASHд�����ݲ���
=========================================================================*/


void writeFlash(int32_t writeFlashData1, int32_t writeFlashData2, int32_t writeFlashData3, int32_t writeFlashData4)
{
    Flash_RW_T = System_Count;
    writeFlashData2++;
    Flash_Erase_Count.Value++;
    
    //1������FLASH
    HAL_FLASH_Unlock();

    //2������FLASH
    //��ʼ��FLASH_EraseInitTypeDef
    f.TypeErase = FLASH_TYPEERASE_PAGES;
    f.PageAddress = addr1;
    f.NbPages = 1;

    //���ò�������
    HAL_FLASHEx_Erase(&f, &PageError);

    //3����FLASH��д
    HAL_FLASH_Program(TYPEPROGRAM_WORD, addr1, writeFlashData1);
    HAL_FLASH_Program(TYPEPROGRAM_WORD, addr2, writeFlashData2);
    HAL_FLASH_Program(TYPEPROGRAM_WORD, addr3, writeFlashData3);
    HAL_FLASH_Program(TYPEPROGRAM_WORD, addr4, writeFlashData4);

    //4����סFLASH
    HAL_FLASH_Lock();
    
    if(System_Count < Flash_RW_T) Flash_RW_T = 20 - System_Count + Flash_RW_T;
    else Flash_RW_T = System_Count - Flash_RW_T;
}

//FLASH��ȡ���ݲ���
void printFlash(void)
{
    Flash_RW_T = System_Count;
    int32_t average_temp1 = *(__IO uint32_t*)addr1;
    int32_t average_temp2 = *(__IO uint32_t*)addr2;
    int32_t average_temp3 = *(__IO uint32_t*)addr3;
    int32_t average_temp4 = *(__IO uint32_t*)addr4;

//    printf("addr1:0x%x, data:0x%x\r\n", addr1, temp);
    
    ENC_position_zero_average.Value = average_temp1;
    Flash_Erase_Count.Value = average_temp2;
    System_On_Time_minute.Value = average_temp3;
    System_On_Count.Value = average_temp4;
    if(System_Count < Flash_RW_T) Flash_RW_T = 20 - System_Count + Flash_RW_T;
    else Flash_RW_T = System_Count - Flash_RW_T;
}

//void USER_System_Zero(CAN_HandleTypeDef *hcan)                      //ȡ����С�Ƕ�
//{
//   System_Zero.Data[0] = hcan->pRxMsg->Data[0];
//   System_Zero.Data[1] = hcan->pRxMsg->Data[1];
//   System_Zero.Data[2] = hcan->pRxMsg->Data[2];
//   System_Zero.Data[3] = hcan->pRxMsg->Data[3];
//
// }
/*CAN1��������******/
//void CAN1_BiaoDing_Send (CAN_HandleTypeDef *hcan )
//{
//  hcan->pTxMsg->StdId = 0x03;
//  hcan->pTxMsg->RTR = CAN_RTR_DATA;
//  hcan->pTxMsg->IDE = CAN_ID_STD;
//  hcan->pTxMsg->DLC = 4;
//  hcan->pTxMsg->Data[0] = System_BiaoDing_Zero.Data[0];                   
//  hcan->pTxMsg->Data[1] = System_BiaoDing_Zero.Data[1];	
//  hcan->pTxMsg->Data[2] = System_BiaoDing_Zero.Data[2];
//  hcan->pTxMsg->Data[3] = System_BiaoDing_Zero.Data[3];
//  if(HAL_CAN_Transmit_IT(hcan) != HAL_OK)
//   { Flag_Error_Can1_T=1;   }
//  else
//   { Flag_Error_Can1_T=0;   }
// }