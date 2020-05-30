#ifndef _USER_H
#define _USER_H
/******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
//#include "stdbool.h"


/* Private variables ---------------------------------------------------------*/
/******************************各个设备地址***********************************/
/*********电机地址***********/
#define    ADDR_Motor_QDQ                      0x00
#define    ADDR_XHZY_Motor_QDQ                 0x01   
#define    ADDR_HY_Motor_QDQ                   0x02
#define    ADDR_XHHY_Motor_QDQ                 0x03
/*******惯性单元地址***********/
#define    ADDR_XHZY_GXDY                      0x04
#define    ADDR_HY_GXDY                        0x05
#define    ADDR_XHHY_GXDY                      0x06
/*******系统控制器地址**********/
#define    ADDR_XH_SYS_Controler               0x07
#define    ADDR_HY_SYS_Controler               0x08

/******************************信息标识***************************************/

/*******故障、报警主动上报*********/
#define    FCoder_Fault                        0x00                         //故障信息主动上报
#define    FCoder_Alert                        0x01                         //报警信息主动上报

/*******系统命令******************/
#define    FCoder_Standby                      0x02                         //待机保护信息标识
#define    FCoder_Cancel_Standby               0x03                         //取消待机保护
#define    FCoder_Initial                      0x04                         //初始化信息标识
#define    FCoder_Device_On_Off                0x05                         //开关机信息标识

/*******返回查询结果*************/
#define    FCoder_Confirm_Receipt              0x06                         //确认收到信息标识
#define    FCoder_SYS_State_Query              0x07                         //系统状态查询信息标识
#define    FCoder_Elevation_Set                0x0A                         //仰角设置信息标识

/****角度查询结果*******/
#define    FCoder_HYAngle_Result               0x0B                         //横摇灯杆角度查询
#define    FCoder_XHZYAngle_Result             0x0C                         //下滑纵摇角度查询
#define    FCoder_XHHYAngle_Result             0x0D                         //下滑横摇角度查询

/****初始化、开关机查询*******/
#define    FCoder__Init_Result                 0x0E                         //初始化结果查询
#define    FCoder_Device_On_Off_Result         0x0F                         //开关机结果查询

/****仰角查询*******/
#define    FCoder_Elevation_State_Result       0x12                         //仰角状态查询

/****工作模式设置*******/
#define    FCoder_WorkingMode_Set              0x13                         //工作模式设置信息标识
#define    FCoder_WorkingMode_Showing_Set      0x14                         //检视模式参数设置

/****并联平台标零*******/
#define    FCoder_ZeroPosition_Set             0x15                         //零位旋变值及惯性单元偏移量信息标识与查询
#define    FCoder_ZeroPosition_Average         0x16                         //零位旋变值及惯性单元偏移量平均值报文信息标识
#define    FCoder_ZeroPosition_Result          0x17                         //标零结果查询
#define    FCoder_ZeroPosition                 0x19                         //进入标零模式
#define    FCoder_ZeroPosition_Exit            0x1A                         //退出标零模式

/****电子限位平台角度*******/
#define    FCoder_ElectronicLimit_Result       0x18                         //电子限位平台角度信息标识及查询
#define    FCoder_SystemAngle_Result           0x1B                         //旋变角度回复
#define    FCoder_SystemAngle_Reply            0x1C                         //旋变角度查询
#define    FCoder_Gyroscope_Choose             0x1D                         //陀螺仪信号源选择

#define    FCoder_FlashCount_Check             0x1E                         //写入Flash计数查询
//#define    FCoder_SystemHealth_Check           0x1F                         //系统健康状态查询
#define    FCoder_Dspace_PWM_OUT               0x1F                         //接收dSPACE PWM数据


/******************************信息流向***************************************/

#define    Direction_In                        0x00                         //惯性单元发往电机驱动器，系统控制器发往惯性单元
#define    Direction_Out                       0x01                         //电机驱动器发往系统控制器

#define    FCoder_Check_Shift                  0x7C0                        //对CAN标准帧进行提取高5位操作

#define    FCoder_Check_Shift_Motor            0x3E                       //对CAN标准帧进行提取1-6位操作

extern   uint8_t    stay1  ;            
extern   uint8_t    stay2  ;          
extern   uint8_t    stay3  ;     
extern   uint8_t    stay4  ; 

extern uint8_t    Alarm_Cunt;                                              //故障，警告发送标识

extern uint8_t    Motor_Num;
extern uint8_t    FCoder_Angle_Result;
extern uint8_t    SYS_Order_Flag;
extern uint8_t    order_start_stop;
extern uint8_t    Gyroscope_Choose;

typedef union   
{
  uint8_t   Data[4];
  int32_t   Value;
  
 }System_Elevation_AngleTypeDef;                                                 //平台仰角

extern   System_Elevation_AngleTypeDef                  System_Elevation;        //系统仰角
extern   System_Elevation_AngleTypeDef                  Gyroscope_Angle;        //惯性单元角度
extern   System_Elevation_AngleTypeDef                  XHZY_SGWY;              //下滑纵摇丝杆位移
extern   System_Elevation_AngleTypeDef                  SGWY_Inport;            //下滑横摇丝杆位移输入

typedef union 
{
  uint8_t  Data[4];
  int32_t  Value;
  
 }System_Angle_ErrorTypeDef; 

extern   System_Angle_ErrorTypeDef                      System_Angle;              //系统角度
extern   System_Angle_ErrorTypeDef                      System_Error;              //系统角度误差
extern   System_Angle_ErrorTypeDef                      Electronic_Limit_Up;       //电子上限位角度
extern   System_Angle_ErrorTypeDef                      Electronic_Limit_Down;     //电子下限位角度
extern   System_Angle_ErrorTypeDef                      ENC_position_zero_average; //零位平均旋变值
extern   System_Angle_ErrorTypeDef                      ENC_position_current;      //当前旋变值（未标定）
extern   System_Angle_ErrorTypeDef                      Flash_Erase_Count;         //Flash擦除计数
extern   System_Angle_ErrorTypeDef                      System_On_Time_minute;
extern   System_Angle_ErrorTypeDef                      System_On_Count;
extern   System_Angle_ErrorTypeDef                      ENC_POSITION;
extern   System_Angle_ErrorTypeDef                      ENC_SPEED;

typedef union 
{
  uint8_t  Data[2];
  int16_t  Value;
  
 }System_PWM_TypeDef; 

extern   System_PWM_TypeDef                             Dspace_PWM;                //Dspace发送PWM值

typedef struct
{	

  uint8_t Init_Result;
  uint8_t Start_Stop_Result;
 
  
 }Result_HandleTypeDef;

extern  Result_HandleTypeDef         Result_Handle;                      //初始化、开关机结果

typedef union 
{
  uint8_t  Data[2];
  struct 
  {
    uint16_t stay1                  :1;                                       //保留位1
    uint16_t stay2                  :1;                                       //保留位2
    uint16_t Current_Fualt          :1;                                       //电流故障（PWM驱动故障）
    uint16_t Angle_Down             :1;                                       //下行程开关故障
    uint16_t Angle_Up               :1;                                       //上行程开关故障
    uint16_t Interrupt_Communication:1;                                       //惯性单元通讯中断
    uint16_t Trouble_Enc            :1;                                       //旋变故障
    uint16_t Block_Motor            :1;                                       //电机卡死（电机故障）
     
    uint16_t stay3                  :1;                                       //保留位3
    uint16_t stay4                  :1;                                       //保留位4
    uint16_t Over_Angle_Error       :1;                                       //伺服系统误差超差
    uint16_t Over_Angle_XXW         :1;                                       //行程短暂超下限（报警）
    uint16_t Over_Angle_SXW         :1;                                       //行程短暂超上限（报警）
    uint16_t Abnormal_Data          :1;                                       //惯性单元数据异常（报警）
    uint16_t Over_Temp_Up           :1;                                       //温度超过80度（报警）
    uint16_t Over_Electricity       :1;                                       //过流（报警）
   
   
    
    

    
//    bool Block_Motor            ;                                       //电机卡死
//    bool Trouble_Enc            ;                                       //旋变故障 
//    bool Interrupt_Communication;                                       //惯性单元通讯中断
//    bool Angle_Up               ;                                       //角度超上限
//    bool Angle_Down             ;                                       //角度超下限
//    bool Current_Fualt          ;                                       //电流故障
//    bool Over_Temp_Down         ;                                       //温度过低（报警）
//    bool Reserved1;                                                      //保留位1
//    
//    bool Over_Electricity       ;                                       //过流（报警）
//    bool Over_Temp_Up           ;                                       //温度过高（报警）
//    bool Abnormal_Data          ;                                       //惯性单元数据异常（报警）
//    bool Over_Angle_SXW         ;                                       //行程短暂超上限（报警）
//    bool Over_Angle_XXW         ;                                       //行程短暂超下限（报警）
//    bool Reserved2              ;                                       //保留位2
//    bool Reserved3              ;                                       //保留位3
//    bool Reserved4              ;                                       //保留位4
   }Bit;
  }System_StateHandleTypeDef;                                                        //系统状态    

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