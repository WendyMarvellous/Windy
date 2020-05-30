#ifndef _USER_H
#define _USER_H
/******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
//#include "stdbool.h"


/* Private variables ---------------------------------------------------------*/
/******************************�����豸��ַ***********************************/
/*********�����ַ***********/
#define    ADDR_Motor_QDQ                      0x00
#define    ADDR_XHZY_Motor_QDQ                 0x01   
#define    ADDR_HY_Motor_QDQ                   0x02
#define    ADDR_XHHY_Motor_QDQ                 0x03
/*******���Ե�Ԫ��ַ***********/
#define    ADDR_XHZY_GXDY                      0x04
#define    ADDR_HY_GXDY                        0x05
#define    ADDR_XHHY_GXDY                      0x06
/*******ϵͳ��������ַ**********/
#define    ADDR_XH_SYS_Controler               0x07
#define    ADDR_HY_SYS_Controler               0x08

/******************************��Ϣ��ʶ***************************************/

/*******���ϡ����������ϱ�*********/
#define    FCoder_Fault                        0x00                         //������Ϣ�����ϱ�
#define    FCoder_Alert                        0x01                         //������Ϣ�����ϱ�

/*******ϵͳ����******************/
#define    FCoder_Standby                      0x02                         //����������Ϣ��ʶ
#define    FCoder_Cancel_Standby               0x03                         //ȡ����������
#define    FCoder_Initial                      0x04                         //��ʼ����Ϣ��ʶ
#define    FCoder_Device_On_Off                0x05                         //���ػ���Ϣ��ʶ

/*******���ز�ѯ���*************/
#define    FCoder_Confirm_Receipt              0x06                         //ȷ���յ���Ϣ��ʶ
#define    FCoder_SYS_State_Query              0x07                         //ϵͳ״̬��ѯ��Ϣ��ʶ
#define    FCoder_Elevation_Set                0x0A                         //����������Ϣ��ʶ

/****�ǶȲ�ѯ���*******/
#define    FCoder_HYAngle_Result               0x0B                         //��ҡ�Ƹ˽ǶȲ�ѯ
#define    FCoder_XHZYAngle_Result             0x0C                         //�»���ҡ�ǶȲ�ѯ
#define    FCoder_XHHYAngle_Result             0x0D                         //�»���ҡ�ǶȲ�ѯ

/****��ʼ�������ػ���ѯ*******/
#define    FCoder__Init_Result                 0x0E                         //��ʼ�������ѯ
#define    FCoder_Device_On_Off_Result         0x0F                         //���ػ������ѯ

/****���ǲ�ѯ*******/
#define    FCoder_Elevation_State_Result       0x12                         //����״̬��ѯ

/****����ģʽ����*******/
#define    FCoder_WorkingMode_Set              0x13                         //����ģʽ������Ϣ��ʶ
#define    FCoder_WorkingMode_Showing_Set      0x14                         //����ģʽ��������

/****����ƽ̨����*******/
#define    FCoder_ZeroPosition_Set             0x15                         //��λ����ֵ�����Ե�Ԫƫ������Ϣ��ʶ���ѯ
#define    FCoder_ZeroPosition_Average         0x16                         //��λ����ֵ�����Ե�Ԫƫ����ƽ��ֵ������Ϣ��ʶ
#define    FCoder_ZeroPosition_Result          0x17                         //��������ѯ
#define    FCoder_ZeroPosition                 0x19                         //�������ģʽ
#define    FCoder_ZeroPosition_Exit            0x1A                         //�˳�����ģʽ

/****������λƽ̨�Ƕ�*******/
#define    FCoder_ElectronicLimit_Result       0x18                         //������λƽ̨�Ƕ���Ϣ��ʶ����ѯ
#define    FCoder_SystemAngle_Result           0x1B                         //����ǶȻظ�
#define    FCoder_SystemAngle_Reply            0x1C                         //����ǶȲ�ѯ
#define    FCoder_Gyroscope_Choose             0x1D                         //�������ź�Դѡ��

#define    FCoder_FlashCount_Check             0x1E                         //д��Flash������ѯ
//#define    FCoder_SystemHealth_Check           0x1F                         //ϵͳ����״̬��ѯ
#define    FCoder_Dspace_PWM_OUT               0x1F                         //����dSPACE PWM����


/******************************��Ϣ����***************************************/

#define    Direction_In                        0x00                         //���Ե�Ԫ���������������ϵͳ�������������Ե�Ԫ
#define    Direction_Out                       0x01                         //�������������ϵͳ������

#define    FCoder_Check_Shift                  0x7C0                        //��CAN��׼֡������ȡ��5λ����

#define    FCoder_Check_Shift_Motor            0x3E                       //��CAN��׼֡������ȡ1-6λ����

extern   uint8_t    stay1  ;            
extern   uint8_t    stay2  ;          
extern   uint8_t    stay3  ;     
extern   uint8_t    stay4  ; 

extern uint8_t    Alarm_Cunt;                                              //���ϣ����淢�ͱ�ʶ

extern uint8_t    Motor_Num;
extern uint8_t    FCoder_Angle_Result;
extern uint8_t    SYS_Order_Flag;
extern uint8_t    order_start_stop;
extern uint8_t    Gyroscope_Choose;

typedef union   
{
  uint8_t   Data[4];
  int32_t   Value;
  
 }System_Elevation_AngleTypeDef;                                                 //ƽ̨����

extern   System_Elevation_AngleTypeDef                  System_Elevation;        //ϵͳ����
extern   System_Elevation_AngleTypeDef                  Gyroscope_Angle;        //���Ե�Ԫ�Ƕ�
extern   System_Elevation_AngleTypeDef                  XHZY_SGWY;              //�»���ҡ˿��λ��
extern   System_Elevation_AngleTypeDef                  SGWY_Inport;            //�»���ҡ˿��λ������

typedef union 
{
  uint8_t  Data[4];
  int32_t  Value;
  
 }System_Angle_ErrorTypeDef; 

extern   System_Angle_ErrorTypeDef                      System_Angle;              //ϵͳ�Ƕ�
extern   System_Angle_ErrorTypeDef                      System_Error;              //ϵͳ�Ƕ����
extern   System_Angle_ErrorTypeDef                      Electronic_Limit_Up;       //��������λ�Ƕ�
extern   System_Angle_ErrorTypeDef                      Electronic_Limit_Down;     //��������λ�Ƕ�
extern   System_Angle_ErrorTypeDef                      ENC_position_zero_average; //��λƽ������ֵ
extern   System_Angle_ErrorTypeDef                      ENC_position_current;      //��ǰ����ֵ��δ�궨��
extern   System_Angle_ErrorTypeDef                      Flash_Erase_Count;         //Flash��������
extern   System_Angle_ErrorTypeDef                      System_On_Time_minute;
extern   System_Angle_ErrorTypeDef                      System_On_Count;
extern   System_Angle_ErrorTypeDef                      ENC_POSITION;
extern   System_Angle_ErrorTypeDef                      ENC_SPEED;

typedef union 
{
  uint8_t  Data[2];
  int16_t  Value;
  
 }System_PWM_TypeDef; 

extern   System_PWM_TypeDef                             Dspace_PWM;                //Dspace����PWMֵ

typedef struct
{	

  uint8_t Init_Result;
  uint8_t Start_Stop_Result;
 
  
 }Result_HandleTypeDef;

extern  Result_HandleTypeDef         Result_Handle;                      //��ʼ�������ػ����

typedef union 
{
  uint8_t  Data[2];
  struct 
  {
    uint16_t stay1                  :1;                                       //����λ1
    uint16_t stay2                  :1;                                       //����λ2
    uint16_t Current_Fualt          :1;                                       //�������ϣ�PWM�������ϣ�
    uint16_t Angle_Down             :1;                                       //���г̿��ع���
    uint16_t Angle_Up               :1;                                       //���г̿��ع���
    uint16_t Interrupt_Communication:1;                                       //���Ե�ԪͨѶ�ж�
    uint16_t Trouble_Enc            :1;                                       //�������
    uint16_t Block_Motor            :1;                                       //���������������ϣ�
     
    uint16_t stay3                  :1;                                       //����λ3
    uint16_t stay4                  :1;                                       //����λ4
    uint16_t Over_Angle_Error       :1;                                       //�ŷ�ϵͳ����
    uint16_t Over_Angle_XXW         :1;                                       //�г̶��ݳ����ޣ�������
    uint16_t Over_Angle_SXW         :1;                                       //�г̶��ݳ����ޣ�������
    uint16_t Abnormal_Data          :1;                                       //���Ե�Ԫ�����쳣��������
    uint16_t Over_Temp_Up           :1;                                       //�¶ȳ���80�ȣ�������
    uint16_t Over_Electricity       :1;                                       //������������
   
   
    
    

    
//    bool Block_Motor            ;                                       //�������
//    bool Trouble_Enc            ;                                       //������� 
//    bool Interrupt_Communication;                                       //���Ե�ԪͨѶ�ж�
//    bool Angle_Up               ;                                       //�Ƕȳ�����
//    bool Angle_Down             ;                                       //�Ƕȳ�����
//    bool Current_Fualt          ;                                       //��������
//    bool Over_Temp_Down         ;                                       //�¶ȹ��ͣ�������
//    bool Reserved1;                                                      //����λ1
//    
//    bool Over_Electricity       ;                                       //������������
//    bool Over_Temp_Up           ;                                       //�¶ȹ��ߣ�������
//    bool Abnormal_Data          ;                                       //���Ե�Ԫ�����쳣��������
//    bool Over_Angle_SXW         ;                                       //�г̶��ݳ����ޣ�������
//    bool Over_Angle_XXW         ;                                       //�г̶��ݳ����ޣ�������
//    bool Reserved2              ;                                       //����λ2
//    bool Reserved3              ;                                       //����λ3
//    bool Reserved4              ;                                       //����λ4
   }Bit;
  }System_StateHandleTypeDef;                                                        //ϵͳ״̬    

extern   System_StateHandleTypeDef                      System_State;
extern   System_StateHandleTypeDef                      System_State_Last;

extern uint8_t    add1_c  ;
extern uint8_t    add2_c  ;
















void Motrol_Version_Init(void);
void Motrol_Version_Init_Error_Handler(void);
void USER_Response( CAN_HandleTypeDef *hcan );
void USER_Init_Reply(CAN_HandleTypeDef *hcan,Result_HandleTypeDef Result);
void USER_Start_Stop( CAN_HandleTypeDef *hcan );
void USER_Start_Stop_Result( CAN_HandleTypeDef *hcan );
void USER_System_State(CAN_HandleTypeDef *hcan,System_StateHandleTypeDef System_State );
void USER_System_Elevation_Query( CAN_HandleTypeDef *hcan,System_Elevation_AngleTypeDef System_Elevation );
void USER_System_Elevation_Set( CAN_HandleTypeDef *hcan );
void USER_System_Angle__Query( CAN_HandleTypeDef *hcan ,System_Angle_ErrorTypeDef Angle_Result,System_Angle_ErrorTypeDef Error_Result );
void USER_System_Standby__Query(CAN_HandleTypeDef *hcan );
void USER_System_Cancel_Standby__Query( CAN_HandleTypeDef *hcan );
void USER_Alarm_State(CAN_HandleTypeDef *hcan,System_StateHandleTypeDef  System_State);
void USER_Fault_State(CAN_HandleTypeDef *hcan,System_StateHandleTypeDef  System_State);
void USER_Gyroscope_Angle(CAN_HandleTypeDef *hcan);
void USER_Gyroscope_SGWY_send(CAN_HandleTypeDef *hcan);
void USER_Gyroscope_SGWY_recive(CAN_HandleTypeDef *hcan);
void USER__HY_System_Angle__Query( CAN_HandleTypeDef *hcan ,System_Elevation_AngleTypeDef Gyroscope_Angle,System_Angle_ErrorTypeDef Error_Result );

void USER_System_WorkingMode( CAN_HandleTypeDef *hcan );
void USER_System_WorkingMode_Showing_Set( CAN_HandleTypeDef *hcan );
void USER_System_ZeroPosition( CAN_HandleTypeDef *hcan );
void USER_System_ZeroPosition_Set( CAN_HandleTypeDef *hcan );
void USER_System_ZeroPosition_Average( CAN_HandleTypeDef *hcan );
void USER_System_ZeroPosition_Result( CAN_HandleTypeDef *hcan );
void USER_System_ElectronicLimit_Result( CAN_HandleTypeDef *hcan );
void USER_System_ElectronicLimit_Report(  );
void Electronic_Limit_refresh(uint8_t Up_Limit,uint8_t Down_Limit);
void USER_System_ElectronicLimit_Up_Report( CAN_HandleTypeDef *hcan );
void USER_System_ElectronicLimit_Down_Report( CAN_HandleTypeDef *hcan );
void ENC_Zero_Init();
void USER_System_ZeroPosition_Exit( CAN_HandleTypeDef *hcan );
void delay_ms(uint32_t t);
void Over_current_protect(uint32_t Current);
void Limit_Protect(uint8_t Up_Limit,uint8_t Down_Limit);
void USER_SystemAngle_Result( CAN_HandleTypeDef *hcan );
void System_Health_check();
void USER_FlashCount_Check( CAN_HandleTypeDef *hcan );
//void USER_SystemHealth_Check( CAN_HandleTypeDef *hcan );
void USER_Dspace_PWM_OUT( CAN_HandleTypeDef *hcan );
void USER_G_Init( CAN_HandleTypeDef *hcan );
void USER_G_Start_Stop( CAN_HandleTypeDef *hcan,uint8_t G_Start_Stop );
void USER_Gyroscope_Choose( CAN_HandleTypeDef *hcan );
#endif