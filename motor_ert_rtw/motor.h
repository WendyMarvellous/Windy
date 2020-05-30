/*
 * File: motor.h
 *
 * Code generated for Simulink model 'motor'.
 *
 * Model version                  : 1.787
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Wed Oct 23 22:04:43 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_motor_h_
#define RTW_HEADER_motor_h_
#include <math.h>
#include <string.h>
#ifndef motor_COMMON_INCLUDES_
# define motor_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* motor_COMMON_INCLUDES_ */

#include "motor_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S1>/Motor_XHHY' */
typedef struct {
  int128m_T GXZ5;                      /* '<S9>/GXZ5' */
  real_T chu_jd;                       /* '<S9>/chu_jd' */
  real_T DataStoreRead1;               /* '<S9>/Data Store Read1' */
  real_T DataStoreRead2;               /* '<S9>/Data Store Read2' */
  real_T DataTypeConversion1;          /* '<S9>/Data Type Conversion1' */
  real_T GXZ6;                         /* '<S9>/GXZ6' */
  real_T GXZ1;                         /* '<S9>/GXZ1' */
  real_T GXZ9;                         /* '<S9>/GXZ9' */
  real_T Product;                      /* '<S9>/Product' */
  real_T DataTypeConversion3;          /* '<S9>/Data Type Conversion3' */
  real_T GXZ2;                         /* '<S9>/GXZ2' */
  real_T Fcn1;                         /* '<S57>/Fcn1' */
  real_T Fcn2;                         /* '<S57>/Fcn2' */
  real_T Fcn3;                         /* '<S57>/Fcn3' */
  real_T Fcn6;                         /* '<S57>/Fcn6' */
  real_T Fcn4;                         /* '<S57>/Fcn4' */
  real_T Fcn10;                        /* '<S57>/Fcn10' */
  real_T GXZ7;                         /* '<S9>/GXZ7' */
  real_T Fcn5;                         /* '<S57>/Fcn5' */
  real_T Fcn7;                         /* '<S57>/Fcn7' */
  real_T Fcn8;                         /* '<S57>/Fcn8' */
  real_T Sum3;                         /* '<S57>/Sum3' */
  real_T Fcn11;                        /* '<S57>/Fcn11' */
  real_T Sum2;                         /* '<S57>/Sum2' */
  real_T Fcn9;                         /* '<S57>/Fcn9' */
  real_T Product_p;                    /* '<S57>/Product' */
  real_T Fcn12;                        /* '<S57>/Fcn12' */
  real_T GXH7;                         /* '<S9>/GXH7' */
  real_T Product3;                     /* '<S9>/Product3' */
  real_T Sum2_m;                       /* '<S9>/Sum2' */
  real_T Sum;                          /* '<S9>/Sum' */
  real_T XF_XHZY1;                     /* '<S9>/XF_XHZY1' */
  real_T CDB_XHHY;                     /* '<S9>/CDB_XHHY' */
  real_T DiscreteTimeIntegrator;       /* '<S50>/Discrete-Time Integrator' */
  real_T P_KP;                         /* '<S50>/P_KP' */
  real_T Product_h;                    /* '<S50>/Product' */
  real_T ZP_Kp2;                       /* '<S50>/ZP_Kp2' */
  real_T ZV_KD1;                       /* '<S50>/ZV_KD1' */
  real_T Sum_p;                        /* '<S50>/Sum' */
  real_T ZP_KN;                        /* '<S50>/ZP_KN' */
  real_T KD_KG;                        /* '<S50>/KD_KG' */
  real_T ZP_Kp1;                       /* '<S50>/ZP_Kp1' */
  real_T Sum1;                         /* '<S50>/Sum1' */
  real_T DiscreteTimeIntegrator_b;     /* '<S51>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1;      /* '<S51>/Discrete-Time Integrator1' */
  real_T Saturation;                   /* '<S9>/Saturation' */
  real_T Sum1_d;                       /* '<S9>/Sum1' */
  real_T ZV_Kp;                        /* '<S51>/ZV_Kp' */
  real_T ZV_Kp1;                       /* '<S51>/ZV_Kp1' */
  real_T ZV_KD;                        /* '<S51>/ZV_KD' */
  real_T Sum_b;                        /* '<S51>/Sum' */
  real_T ZV_KN;                        /* '<S51>/ZV_KN' */
  real_T Saturation_a;                 /* '<S51>/Saturation' */
  real_T KD_KG_a;                      /* '<S51>/KD_KG' */
  real_T V_KP;                         /* '<S51>/V_KP' */
  real_T Product_e;                    /* '<S51>/Product' */
  real_T V_KI;                         /* '<S51>/V_KI' */
  real_T Product1;                     /* '<S51>/Product1' */
  real_T Sign;                         /* '<S51>/Sign' */
  real_T ZV1_Kp1;                      /* '<S51>/ZV1_Kp1' */
  real_T ZV1_Kp2;                      /* '<S51>/ZV1_Kp2' */
  real_T Sum2_n;                       /* '<S51>/Sum2' */
  real_T Sum1_du;                      /* '<S51>/Sum1' */
  real_T KP_JD1;                       /* '<S9>/KP_JD1' */
  real_T KP_e;                         /* '<S9>/KP_e' */
  real_T ZXF_PID;                      /* '<S9>/ZXF_PID' */
  real_T Subtract;                     /* '<S9>/Subtract' */
  real_T ZXF_PWM;                      /* '<S9>/ZXF_PWM' */
  real_T DataTypeConversion4;          /* '<S9>/Data Type Conversion4' */
  real_T DataTypeConversion2;          /* '<S9>/Data Type Conversion2' */
  real_T GXZ3;                         /* '<S9>/GXZ3' */
  real_T XF_XHZY;                      /* '<S9>/XF_XHZY' */
  real_T Product1_l;                   /* '<S9>/Product1' */
  int64m_T GXZ4;                       /* '<S9>/GXZ4' */
  int32_T DataStoreRead;               /* '<S9>/Data Store Read' */
  int32_T DataStoreRead_c;             /* '<S52>/Data Store Read' */
  uint8_T KG_En;                       /* '<S9>/KG_En' */
  uint8_T EN_extern;                   /* '<S9>/EN_extern' */
  uint8_T KG_clc;                      /* '<S51>/KG_clc' */
  uint8_T KG_JD1;                      /* '<S9>/KG_JD1' */
  uint8_T KG_JD;                       /* '<S9>/KG_JD' */
} rtB_Motor_XHHY_motor;

/* Block states (auto storage) for system '<S1>/Motor_XHHY' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S50>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S51>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S51>/Discrete-Time Integrator1' */
  real_T Sum1_DWORK1;                  /* '<S9>/Sum1' */
  uint32_T Motor_XHHY_ELAPS_T[2];      /* '<S1>/Motor_XHHY' */
  uint32_T Motor_XHHY_PREV_T[2];       /* '<S1>/Motor_XHHY' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S51>/Discrete-Time Integrator' */
} rtDW_Motor_XHHY_motor;

/* Block signals for system '<S1>/Motor_HYDG' */
typedef struct {
  int128m_T GHDG1;                     /* '<S7>/GHDG1' */
  int128m_T XF_XHZY;                   /* '<S7>/XF_XHZY' */
  int128m_T GXZ5;                      /* '<S7>/GXZ5' */
  real_T chu_jd;                       /* '<S7>/chu_jd' */
  real_T Product;                      /* '<S7>/Product' */
  real_T DataTypeConversion1;          /* '<S7>/Data Type Conversion1' */
  real_T GHDG5;                        /* '<S7>/GHDG5' */
  real_T GHDG7;                        /* '<S40>/GHDG7' */
  real_T GHDG8;                        /* '<S40>/GHDG8' */
  real_T Fcn7;                         /* '<S41>/Fcn7' */
  real_T Cl1;                          /* '<S41>/Cl1' */
  real_T Fcn;                          /* '<S41>/Fcn' */
  real_T Fcn4;                         /* '<S41>/Fcn4' */
  real_T GHDG9;                        /* '<S40>/GHDG9' */
  real_T fk_dg;                        /* '<S7>/fk_dg' */
  real_T Sum;                          /* '<S7>/Sum' */
  real_T JD_ek;                        /* '<S7>/JD_e(k)' */
  real_T CDB_XHHY;                     /* '<S7>/CDB_XHHY' */
  real_T DiscreteTimeIntegrator;       /* '<S35>/Discrete-Time Integrator' */
  real_T ZP_Kp;                        /* '<S35>/ZP_Kp' */
  real_T ZP_Kp2;                       /* '<S35>/ZP_Kp2' */
  real_T ZV_KD1;                       /* '<S35>/ZV_KD1' */
  real_T Sum_g;                        /* '<S35>/Sum' */
  real_T ZP_KN;                        /* '<S35>/ZP_KN' */
  real_T KD_KG;                        /* '<S35>/KD_KG' */
  real_T ZP_Kp1;                       /* '<S35>/ZP_Kp1' */
  real_T Sum1;                         /* '<S35>/Sum1' */
  real_T DiscreteTimeIntegrator_o;     /* '<S36>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1;      /* '<S36>/Discrete-Time Integrator1' */
  real_T Saturation;                   /* '<S7>/Saturation' */
  real_T Sum2;                         /* '<S7>/Sum2' */
  real_T ZV_Kp;                        /* '<S36>/ZV_Kp' */
  real_T ZV_Kp1;                       /* '<S36>/ZV_Kp1' */
  real_T ZV_KD;                        /* '<S36>/ZV_KD' */
  real_T Sum_n;                        /* '<S36>/Sum' */
  real_T ZV_KN;                        /* '<S36>/ZV_KN' */
  real_T Saturation_b;                 /* '<S36>/Saturation' */
  real_T KD_KG_l;                      /* '<S36>/KD_KG' */
  real_T Sign;                         /* '<S36>/Sign' */
  real_T ZV1_Kp1;                      /* '<S36>/ZV1_Kp1' */
  real_T ZV1_Kp2;                      /* '<S36>/ZV1_Kp2' */
  real_T ZV_Ki1;                       /* '<S36>/ZV_Ki1' */
  real_T ZV_Kpt;                       /* '<S36>/ZV_Kpt' */
  real_T Sum2_e;                       /* '<S36>/Sum2' */
  real_T Sum1_g;                       /* '<S36>/Sum1' */
  real_T XF_PID;                       /* '<S7>/XF_PID' */
  real_T Sum3;                         /* '<S7>/Sum3' */
  real_T XF_PWM;                       /* '<S7>/XF_PWM' */
  real_T KP_JD;                        /* '<S7>/KP_JD' */
  real_T KP_e;                         /* '<S7>/KP_e' */
  int64m_T GHDG10;                     /* '<S7>/GHDG10' */
  int64m_T GXZ4;                       /* '<S7>/GXZ4' */
  int32_T DataStoreRead;               /* '<S7>/Data Store Read' */
  int32_T DataStoreRead_e;             /* '<S38>/Data Store Read' */
  uint16_T DataTypeConversion3;        /* '<S7>/Data Type Conversion3' */
  uint8_T KG_JD;                       /* '<S7>/KG_JD' */
  uint8_T KG_clc;                      /* '<S36>/KG_clc' */
} rtB_Motor_HYDG_motor;

/* Block states (auto storage) for system '<S1>/Motor_HYDG' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S35>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S36>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S36>/Discrete-Time Integrator1' */
  real_T Sum2_DWORK1;                  /* '<S7>/Sum2' */
  uint32_T Motor_HYDG_ELAPS_T[2];      /* '<S1>/Motor_HYDG' */
  uint32_T Motor_HYDG_PREV_T[2];       /* '<S1>/Motor_HYDG' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S36>/Discrete-Time Integrator' */
} rtDW_Motor_HYDG_motor;

/* Block signals for system '<S1>/Motor_XHZY' */
typedef struct {
  int128m_T GXZ5;                      /* '<S10>/GXZ5' */
  real_T chu_jd;                       /* '<S10>/chu_jd' */
  real_T DataTypeConversion3;          /* '<S10>/Data Type Conversion3' */
  real_T GXZ2;                         /* '<S10>/GXZ2' */
  real_T XF_YJ;                        /* '<S10>/XF_YJ' */
  real_T Product2;                     /* '<S10>/Product2' */
  real_T DataStoreRead2;               /* '<S10>/Data Store Read2' */
  real_T DataStoreRead3;               /* '<S10>/Data Store Read3' */
  real_T DataTypeConversion1;          /* '<S10>/Data Type Conversion1' */
  real_T GXZ6;                         /* '<S10>/GXZ6' */
  real_T GXZ1;                         /* '<S10>/GXZ1' */
  real_T GXZ9;                         /* '<S10>/GXZ9' */
  real_T Product;                      /* '<S10>/Product' */
  real_T GXZ7;                         /* '<S10>/GXZ7' */
  real_T Fcn1;                         /* '<S65>/Fcn1' */
  real_T Fcn2;                         /* '<S65>/Fcn2' */
  real_T Fcn3;                         /* '<S65>/Fcn3' */
  real_T Fcn6;                         /* '<S65>/Fcn6' */
  real_T GXZ8;                         /* '<S10>/GXZ8' */
  real_T Product3;                     /* '<S10>/Product3' */
  real_T Sum2;                         /* '<S10>/Sum2' */
  real_T Sum;                          /* '<S10>/Sum' */
  real_T JD_ek;                        /* '<S10>/JD_e(k)' */
  real_T CDB_XHHY;                     /* '<S10>/CDB_XHHY' */
  real_T DiscreteTimeIntegrator;       /* '<S58>/Discrete-Time Integrator' */
  real_T P_KP;                         /* '<S58>/P_KP' */
  real_T Product_k;                    /* '<S58>/Product' */
  real_T ZP_Kp2;                       /* '<S58>/ZP_Kp2' */
  real_T ZV_KD1;                       /* '<S58>/ZV_KD1' */
  real_T Sum_e;                        /* '<S58>/Sum' */
  real_T ZP_KN;                        /* '<S58>/ZP_KN' */
  real_T KD_KG;                        /* '<S58>/KD_KG' */
  real_T ZP_Kp1;                       /* '<S58>/ZP_Kp1' */
  real_T Sum1;                         /* '<S58>/Sum1' */
  real_T DiscreteTimeIntegrator_b;     /* '<S59>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1;      /* '<S59>/Discrete-Time Integrator1' */
  real_T Saturation;                   /* '<S10>/Saturation' */
  real_T Sum1_n;                       /* '<S10>/Sum1' */
  real_T ZV_Kp;                        /* '<S59>/ZV_Kp' */
  real_T ZV_Kp1;                       /* '<S59>/ZV_Kp1' */
  real_T ZV_KD;                        /* '<S59>/ZV_KD' */
  real_T Sum_i;                        /* '<S59>/Sum' */
  real_T ZV_KN;                        /* '<S59>/ZV_KN' */
  real_T Saturation_p;                 /* '<S59>/Saturation' */
  real_T KD_KG_a;                      /* '<S59>/KD_KG' */
  real_T V_KP;                         /* '<S59>/V_KP' */
  real_T Product_p;                    /* '<S59>/Product' */
  real_T V_KI;                         /* '<S59>/V_KI' */
  real_T Product1;                     /* '<S59>/Product1' */
  real_T Saturation1;                  /* '<S10>/Saturation1' */
  real_T Product4;                     /* '<S10>/Product4' */
  real_T Sign;                         /* '<S59>/Sign' */
  real_T ZV1_Kp1;                      /* '<S59>/ZV1_Kp1' */
  real_T ZV1_Kp2;                      /* '<S59>/ZV1_Kp2' */
  real_T Sum2_h;                       /* '<S59>/Sum2' */
  real_T Sum1_i;                       /* '<S59>/Sum1' */
  real_T KP_JD1;                       /* '<S10>/KP_JD1' */
  real_T KP_JD;                        /* '<S10>/KP_JD' */
  real_T KP_e;                         /* '<S10>/KP_e' */
  real_T ZXF_PID;                      /* '<S10>/ZXF_PID' */
  real_T Subtract;                     /* '<S10>/Subtract' */
  real_T ZXF_PWM;                      /* '<S10>/ZXF_PWM' */
  real_T DataTypeConversion2;          /* '<S10>/Data Type Conversion2' */
  real_T GXZ3;                         /* '<S10>/GXZ3' */
  real_T GXZ10;                        /* '<S10>/GXZ10' */
  real_T XF_XHZY;                      /* '<S10>/XF_XHZY' */
  real_T Product1_a;                   /* '<S10>/Product1' */
  int64m_T GXZ4;                       /* '<S10>/GXZ4' */
  int32_T DataStoreRead1;              /* '<S10>/Data Store Read1' */
  int32_T DataTypeConversion4;         /* '<S10>/Data Type Conversion4' */
  int32_T DataStoreRead;               /* '<S10>/Data Store Read' */
  int32_T DataStoreRead_m;             /* '<S60>/Data Store Read' */
  int32_T DataStoreRead1_d;            /* '<S60>/Data Store Read1' */
  uint8_T KG_YJ;                       /* '<S10>/KG_YJ' */
  uint8_T KG_En;                       /* '<S10>/KG_En' */
  uint8_T EN_extern;                   /* '<S10>/EN_extern' */
  uint8_T KG_clc;                      /* '<S59>/KG_clc' */
  uint8_T Forword;                     /* '<S10>/Forword' */
  uint8_T KG_JD1;                      /* '<S10>/KG_JD1' */
  uint8_T KG_JD;                       /* '<S10>/KG_JD' */
} rtB_Motor_XHZY_motor;

/* Block states (auto storage) for system '<S1>/Motor_XHZY' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S58>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S59>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S59>/Discrete-Time Integrator1' */
  real_T Sum1_DWORK1;                  /* '<S10>/Sum1' */
  uint32_T Motor_XHZY_ELAPS_T[2];      /* '<S1>/Motor_XHZY' */
  uint32_T Motor_XHZY_PREV_T[2];       /* '<S1>/Motor_XHZY' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S59>/Discrete-Time Integrator' */
} rtDW_Motor_XHZY_motor;

/* Block signals for system '<S23>/If Action Subsystem' */
typedef struct {
  real_T PulseGenerator;               /* '<S26>/Pulse Generator' */
  boolean_T DataTypeConversion;        /* '<S26>/Data Type Conversion' */
} rtB_IfActionSubsystem_motor_k;

/* Block states (auto storage) for system '<S23>/If Action Subsystem' */
typedef struct {
  int32_T clockTickCounter;            /* '<S26>/Pulse Generator' */
} rtDW_IfActionSubsystem_motor_n;

/* Block signals for system '<S23>/If Action Subsystem1' */
typedef struct {
  real_T PulseGenerator;               /* '<S27>/Pulse Generator' */
  boolean_T DataTypeConversion;        /* '<S27>/Data Type Conversion' */
} rtB_IfActionSubsystem1_motor;

/* Block states (auto storage) for system '<S23>/If Action Subsystem1' */
typedef struct {
  int32_T clockTickCounter;            /* '<S27>/Pulse Generator' */
} rtDW_IfActionSubsystem1_motor;

/* Block signals for system '<S5>/If Action Subsystem' */
typedef struct {
  rtB_IfActionSubsystem1_motor IfActionSubsystem1;/* '<S23>/If Action Subsystem1' */
  rtB_IfActionSubsystem_motor_k IfActionSubsystem;/* '<S23>/If Action Subsystem' */
} rtB_IfActionSubsystem_motor;

/* Block states (auto storage) for system '<S5>/If Action Subsystem' */
typedef struct {
  rtDW_IfActionSubsystem1_motor IfActionSubsystem1;/* '<S23>/If Action Subsystem1' */
  rtDW_IfActionSubsystem_motor_n IfActionSubsystem;/* '<S23>/If Action Subsystem' */
} rtDW_IfActionSubsystem_motor;

/* Block signals for system '<S1>/Motor_HYDG1' */
typedef struct {
  int128m_T GHDG1;                     /* '<S8>/GHDG1' */
  int128m_T XF_XHZY;                   /* '<S8>/XF_XHZY' */
  real_T DiscreteTimeIntegrator;       /* '<S42>/Discrete-Time Integrator' */
  real_T chu_jd;                       /* '<S8>/chu_jd' */
  real_T Product;                      /* '<S8>/Product' */
  real_T Sum4;                         /* '<S8>/Sum4' */
  real_T GHDG2;                        /* '<S8>/GHDG2' */
  real_T Fcn;                          /* '<S47>/Fcn' */
  real_T Fcn1;                         /* '<S47>/Fcn1' */
  real_T Fcn2;                         /* '<S47>/Fcn2' */
  real_T Fcn3;                         /* '<S47>/Fcn3' */
  real_T Sum1;                         /* '<S47>/Sum1' */
  real_T Fcn4;                         /* '<S47>/Fcn4' */
  real_T Fcn15;                        /* '<S47>/Fcn15' */
  real_T GHDG3;                        /* '<S8>/GHDG3' */
  real_T GHDG4;                        /* '<S8>/GHDG4' */
  real_T DataTypeConversion1;          /* '<S8>/Data Type Conversion1' */
  real_T GHDG5;                        /* '<S8>/GHDG5' */
  real_T fk_dg1;                       /* '<S8>/fk_dg1' */
  real_T fk_dg;                        /* '<S8>/fk_dg' */
  real_T Sum;                          /* '<S8>/Sum' */
  real_T Saturation1;                  /* '<S8>/Saturation1' */
  real_T ZP_Kp;                        /* '<S42>/ZP_Kp' */
  real_T ZV_KD1;                       /* '<S42>/ZV_KD1' */
  real_T Sum_i;                        /* '<S42>/Sum' */
  real_T ZP_KN;                        /* '<S42>/ZP_KN' */
  real_T KD_KG;                        /* '<S42>/KD_KG' */
  real_T P_KP;                         /* '<S42>/P_KP' */
  real_T Product_i;                    /* '<S42>/Product' */
  real_T Sum1_n;                       /* '<S42>/Sum1' */
  real_T DiscreteTimeIntegrator_d;     /* '<S43>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1;      /* '<S43>/Discrete-Time Integrator1' */
  real_T Saturation_limit_speed;       /* '<S8>/Saturation_limit_speed' */
  real_T KP_e2;                        /* '<S8>/KP_e2' */
  real_T Switch;                       /* '<S48>/Switch' */
  real_T Switch2;                      /* '<S48>/Switch2' */
  real_T UnitDelay;                    /* '<S8>/Unit Delay' */
  real_T Sum5;                         /* '<S8>/Sum5' */
  real_T GXZ5;                         /* '<S8>/GXZ5' */
  real_T fk_dg2;                       /* '<S8>/fk_dg2' */
  real_T Sum2;                         /* '<S8>/Sum2' */
  real_T ZV_Kp;                        /* '<S43>/ZV_Kp' */
  real_T ZV_Kp1;                       /* '<S43>/ZV_Kp1' */
  real_T Sum_o;                        /* '<S43>/Sum' */
  real_T ZV_KN;                        /* '<S43>/ZV_KN' */
  real_T KD_KG_h;                      /* '<S43>/KD_KG' */
  real_T V_KP;                         /* '<S43>/V_KP' */
  real_T Product_i4;                   /* '<S43>/Product' */
  real_T V_KI;                         /* '<S43>/V_KI' */
  real_T Product1;                     /* '<S43>/Product1' */
  real_T Sign;                         /* '<S43>/Sign' */
  real_T ZV1_Kp1;                      /* '<S43>/ZV1_Kp1' */
  real_T ZV1_Kp2;                      /* '<S43>/ZV1_Kp2' */
  real_T Sum2_f;                       /* '<S43>/Sum2' */
  real_T Sum1_ne;                      /* '<S43>/Sum1' */
  real_T XF_PID;                       /* '<S8>/XF_PID' */
  real_T Sum3;                         /* '<S8>/Sum3' */
  real_T XF_PWM;                       /* '<S8>/XF_PWM' */
  real_T GHDG7;                        /* '<S8>/GHDG7' */
  real_T GHDG8;                        /* '<S8>/GHDG8' */
  real_T Fcn7;                         /* '<S49>/Fcn7' */
  real_T Cl1;                          /* '<S49>/Cl1' */
  real_T Fcn_l;                        /* '<S49>/Fcn' */
  real_T Fcn4_g;                       /* '<S49>/Fcn4' */
  real_T GHDG9;                        /* '<S8>/GHDG9' */
  real_T fk_dg3;                       /* '<S8>/fk_dg3' */
  real_T KP_JD;                        /* '<S8>/KP_JD' */
  real_T Sum1_h;                       /* '<S8>/Sum1' */
  real_T KP_e;                         /* '<S8>/KP_e' */
  int64m_T GHDG10;                     /* '<S8>/GHDG10' */
  int32_T DataStoreRead;               /* '<S8>/Data Store Read' */
  int32_T DataStoreRead_a;             /* '<S45>/Data Store Read' */
  uint16_T DataTypeConversion3;        /* '<S8>/Data Type Conversion3' */
  uint8_T KG_JD;                       /* '<S8>/KG_JD' */
  uint8_T KG_clc;                      /* '<S43>/KG_clc' */
  boolean_T LowerRelop1;               /* '<S48>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S48>/UpperRelop' */
} rtB_Motor_HYDG1_motor;

/* Block states (auto storage) for system '<S1>/Motor_HYDG1' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S42>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_a;/* '<S43>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S43>/Discrete-Time Integrator1' */
  real_T UnitDelay_DSTATE;             /* '<S8>/Unit Delay' */
  uint32_T Motor_HYDG1_ELAPS_T[2];     /* '<S1>/Motor_HYDG1' */
  uint32_T Motor_HYDG1_PREV_T[2];      /* '<S1>/Motor_HYDG1' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S43>/Discrete-Time Integrator' */
} rtDW_Motor_HYDG1_motor;

/* Block signals for system '<S1>/Showing' */
typedef struct {
  real_T MultiportSwitch;              /* '<S12>/Multiport Switch' */
  real_T DataStoreRead;                /* '<S12>/Data Store Read' */
  real_T Product;                      /* '<S12>/Product' */
  real_T DataTypeConversion1;          /* '<S12>/Data Type Conversion1' */
  real_T SineWave1;                    /* '<S12>/Sine Wave1' */
  real_T SineWave2;                    /* '<S12>/Sine Wave2' */
  real_T SineWave3;                    /* '<S12>/Sine Wave3' */
  real_T SineWave4;                    /* '<S12>/Sine Wave4' */
  real_T SineWave5;                    /* '<S12>/Sine Wave5' */
  real_T SineWave6;                    /* '<S12>/Sine Wave6' */
  real_T SineWave7;                    /* '<S12>/Sine Wave7' */
  real_T SineWave8;                    /* '<S12>/Sine Wave8' */
} rtB_Showing_motor;

/* Block signals for system '<S1>/Angle_Calculation_HY' */
typedef struct {
  real_T DataTypeConversion1;          /* '<S3>/Data Type Conversion1' */
  real_T GHDG5;                        /* '<S3>/GHDG5' */
  real_T GHDG7;                        /* '<S21>/GHDG7' */
  real_T GHDG8;                        /* '<S21>/GHDG8' */
  real_T Fcn7;                         /* '<S22>/Fcn7' */
  real_T Cl1;                          /* '<S22>/Cl1' */
  real_T Fcn;                          /* '<S22>/Fcn' */
  real_T Fcn4;                         /* '<S22>/Fcn4' */
  real_T GHDG9;                        /* '<S21>/GHDG9' */
} rtB_Angle_Calculation_HY_motor;

/* Block signals for system '<S1>/Waveform_Build' */
typedef struct {
  real_T Delay5;                       /* '<S14>/Delay5' */
  real_T DataTypeConversion4;          /* '<S14>/Data Type Conversion4' */
  real_T Gain1;                        /* '<S14>/Gain1' */
  real_T XF_XHZY;                      /* '<S14>/XF_XHZY' */
  real_T Add16;                        /* '<S14>/Add16' */
  real_T Delay7;                       /* '<S14>/Delay7' */
  real_T DataStoreRead1;               /* '<S14>/Data Store Read1' */
  real_T Delay6;                       /* '<S14>/Delay6' */
  real_T DataStoreRead4;               /* '<S14>/Data Store Read4' */
  real_T Add21;                        /* '<S14>/Add21' */
  real_T Switch;                       /* '<S14>/Switch' */
  real_T Add20;                        /* '<S14>/Add20' */
  real_T Abs2;                         /* '<S14>/Abs2' */
  real_T DataStoreRead5;               /* '<S14>/Data Store Read5' */
  real_T Divide1;                      /* '<S14>/Divide1' */
  real_T Saturation2;                  /* '<S14>/Saturation2' */
  real_T Add13;                        /* '<S14>/Add13' */
  real_T Add15;                        /* '<S14>/Add15' */
  real_T Divide;                       /* '<S14>/Divide' */
  real_T Product1;                     /* '<S14>/Product1' */
  real_T Saturation1;                  /* '<S14>/Saturation1' */
  real_T sampletime;                   /* '<S71>/sample time' */
  real_T deltariselimit;               /* '<S71>/delta rise limit' */
  real_T Yk1;                          /* '<S71>/Delay Input2' */
  real_T UkYk1;                        /* '<S71>/Difference Inputs1' */
  real_T Gain3;                        /* '<S14>/Gain3' */
  real_T deltafalllimit;               /* '<S71>/delta fall limit' */
  real_T Switch_c;                     /* '<S74>/Switch' */
  real_T Switch2;                      /* '<S74>/Switch2' */
  real_T DifferenceInputs2;            /* '<S71>/Difference Inputs2' */
  real_T Switch_e;                     /* '<S72>/Switch' */
  real_T Switch2_p;                    /* '<S72>/Switch2' */
  real_T In1;                          /* '<S70>/In1' */
  real_T In1_n;                        /* '<S68>/In1' */
  real_T DataStoreRead5_m;             /* '<S69>/Data Store Read5' */
  real_T Add20_j;                      /* '<S69>/Add20' */
  real_T Saturation;                   /* '<S69>/Saturation' */
  real_T DataStoreRead5_p;             /* '<S67>/Data Store Read5' */
  real_T In1_m;                        /* '<S67>/In1' */
  real_T y1;                           /* '<S67>/MATLAB Function' */
  real_T y2;                           /* '<S67>/MATLAB Function' */
  real_T Gain7;                        /* '<S14>/Gain7' */
  real_T Add12;                        /* '<S14>/Add12' */
  real_T Add19;                        /* '<S14>/Add19' */
  int32_T Gain2;                       /* '<S14>/Gain2' */
  boolean_T LowerRelop1;               /* '<S74>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S74>/UpperRelop' */
  boolean_T LowerRelop1_g;             /* '<S72>/LowerRelop1' */
  boolean_T UpperRelop_p;              /* '<S72>/UpperRelop' */
} rtB_Waveform_Build_motor;

/* Block states (auto storage) for system '<S1>/Waveform_Build' */
typedef struct {
  real_T Delay5_DSTATE;                /* '<S14>/Delay5' */
  real_T Delay7_DSTATE;                /* '<S14>/Delay7' */
  real_T Delay6_DSTATE;                /* '<S14>/Delay6' */
  real_T DelayInput2_DSTATE;           /* '<S71>/Delay Input2' */
  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<S69>/Scope4' */

  uint32_T Waveform_Build_ELAPS_T[2];  /* '<S1>/Waveform_Build' */
  uint32_T Waveform_Build_PREV_T[2];   /* '<S1>/Waveform_Build' */
  int8_T If_ActiveSubsystem;           /* '<S14>/If' */
} rtDW_Waveform_Build_motor;

/* Block signals for system '<S1>/Showing_XHHY' */
typedef struct {
  real_T MultiportSwitch;              /* '<S13>/Multiport Switch' */
  real_T DataStoreRead;                /* '<S13>/Data Store Read' */
  real_T Product;                      /* '<S13>/Product' */
  real_T Gain;                         /* '<S13>/Gain' */
  real_T DataTypeConversion1;          /* '<S13>/Data Type Conversion1' */
  real_T SineWave1;                    /* '<S13>/Sine Wave1' */
  real_T SineWave2;                    /* '<S13>/Sine Wave2' */
  real_T SineWave3;                    /* '<S13>/Sine Wave3' */
  real_T SineWave4;                    /* '<S13>/Sine Wave4' */
  real_T SineWave5;                    /* '<S13>/Sine Wave5' */
  real_T SineWave6;                    /* '<S13>/Sine Wave6' */
  real_T SineWave7;                    /* '<S13>/Sine Wave7' */
  real_T SineWave8;                    /* '<S13>/Sine Wave8' */
} rtB_Showing_XHHY_motor;

/* Block signals (auto storage) */
typedef struct {
  int128m_T GXZ5;                      /* '<S11>/GXZ5' */
  real_T y;                            /* '<Root>/Chart' */
  real_T In;                           /* '<Root>/Chart' */
  real_T Showing_Angle;                /* '<Root>/Chart' */
  real_T Showing_T;                    /* '<Root>/Chart' */
  real_T SFunction_o52;                /* '<Root>/Chart' */
  real_T SFunction_o53;                /* '<Root>/Chart' */
  real_T SFunction_o54;                /* '<Root>/Chart' */
  real_T SFunction_o55;                /* '<Root>/Chart' */
  real_T Showing_Angle_p;              /* '<Root>/Chart' */
  real_T Showing_T_a;                  /* '<Root>/Chart' */
  real_T DataTypeConversion2;          /* '<S4>/Data Type Conversion2' */
  real_T GXZ6;                         /* '<S4>/GXZ6' */
  real_T GXZ1;                         /* '<S4>/GXZ1' */
  real_T UnitDelay;                    /* '<S6>/Unit Delay' */
  real_T Add;                          /* '<S6>/Add' */
  real_T Abs;                          /* '<S6>/Abs' */
  real_T PulseGenerator;               /* '<S31>/Pulse Generator' */
  real_T Product;                      /* '<S11>/Product' */
  real_T DiscreteTimeIntegrator;       /* '<S66>/Discrete-Time Integrator' */
  real_T Sum1;                         /* '<S11>/Sum1' */
  real_T ZV_Kp;                        /* '<S66>/ZV_Kp' */
  real_T ZV_Kpt;                       /* '<S66>/ZV_Kpt' */
  real_T ZV_Kp1;                       /* '<S66>/ZV_Kp1' */
  real_T ZV_KD;                        /* '<S66>/ZV_KD' */
  real_T DiscreteTimeIntegrator1;      /* '<S66>/Discrete-Time Integrator1' */
  real_T Sum;                          /* '<S66>/Sum' */
  real_T ZV_KN;                        /* '<S66>/ZV_KN' */
  real_T Saturation;                   /* '<S66>/Saturation' */
  real_T KD_KG;                        /* '<S66>/KD_KG' */
  real_T Sum2;                         /* '<S66>/Sum2' */
  real_T ZXF_PID;                      /* '<S11>/ZXF_PID' */
  real_T Subtract;                     /* '<S11>/Subtract' */
  real_T ZXF_PWM;                      /* '<S11>/ZXF_PWM' */
  real_T ZV_Ki;                        /* '<S66>/ZV_Ki' */
  int64m_T GXZ4;                       /* '<S11>/GXZ4' */
  int32_T JD_In;                       /* '<Root>/Chart' */
  int32_T Encode_Pos_c;                /* '<Root>/Chart' */
  int32_T Encode_Sp;                   /* '<Root>/Chart' */
  int32_T SGWY_In;                     /* '<Root>/Chart' */
  int32_T Encode_Sp_o;                 /* '<Root>/Chart' */
  int32_T JD_In_f;                     /* '<Root>/Chart' */
  int32_T Encode_Pos_i;                /* '<Root>/Chart' */
  int32_T Encode_Sp_n;                 /* '<Root>/Chart' */
  int32_T JD_In_d;                     /* '<Root>/Chart' */
  int32_T Encode_Pos_f;                /* '<Root>/Chart' */
  int32_T YJ_In;                       /* '<Root>/Chart' */
  int32_T Encode_Sp_l;                 /* '<Root>/Chart' */
  int32_T JD_In_n;                     /* '<Root>/Chart' */
  int32_T Encode_Pos_cm;               /* '<Root>/Chart' */
  int32_T Encode_Pos_d;                /* '<Root>/Chart' */
  int32_T Encode_Pos_dc;               /* '<Root>/Chart' */
  int32_T JD_In_c;                     /* '<Root>/Chart' */
  uint8_T Slect_port;                  /* '<Root>/Chart' */
  uint8_T Slect_port_c;                /* '<Root>/Chart' */
  uint8_T Slect_port_h;                /* '<Root>/Chart' */
  uint8_T x;                           /* '<Root>/Chart' */
  uint8_T Slect_port_e;                /* '<Root>/Chart' */
  uint8_T KG_clc;                      /* '<S11>/KG_clc' */
  uint8_T KG_clc_n;                    /* '<S66>/KG_clc' */
  boolean_T DataStoreRead1;            /* '<S5>/Data Store Read1' */
  boolean_T DataStoreRead;             /* '<S5>/Data Store Read' */
  boolean_T DataTypeConversion;        /* '<S31>/Data Type Conversion' */
  rtB_Showing_XHHY_motor Showing_XHHY; /* '<S1>/Showing_XHHY' */
  rtB_Waveform_Build_motor Waveform_Build;/* '<S1>/Waveform_Build' */
  rtB_Angle_Calculation_HY_motor Angle_Calculation_HY;/* '<S1>/Angle_Calculation_HY' */
  rtB_Showing_motor Showing;           /* '<S1>/Showing' */
  rtB_Motor_HYDG1_motor Motor_HYDG1;   /* '<S1>/Motor_HYDG1' */
  rtB_IfActionSubsystem_motor IfActionSubsystem2;/* '<S5>/If Action Subsystem2' */
  rtB_IfActionSubsystem1_motor IfActionSubsystem1_m;/* '<S24>/If Action Subsystem1' */
  rtB_IfActionSubsystem_motor_k IfActionSubsystem_f;/* '<S24>/If Action Subsystem' */
  rtB_IfActionSubsystem_motor IfActionSubsystem;/* '<S5>/If Action Subsystem' */
  rtB_Motor_XHZY_motor Motor_XHZY;     /* '<S1>/Motor_XHZY' */
  rtB_Motor_HYDG_motor Motor_HYDG;     /* '<S1>/Motor_HYDG' */
  rtB_Motor_XHHY_motor Motor_XHHY;     /* '<S1>/Motor_XHHY' */
} BlockIO_motor;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S6>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S66>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S66>/Discrete-Time Integrator1' */
  real_T Angle_extern;                 /* '<Root>/Angle_extern' */
  real_T Angle_internal;               /* '<Root>/Angle_internal' */
  real_T P_KP;                         /* '<Root>/P_KP' */
  real_T Rate_limit_speed;             /* '<Root>/Rate_limit_speed' */
  real_T Saturation_limit_speed;       /* '<Root>/Saturation_limit_speed' */
  real_T T;                            /* '<Root>/T' */
  real_T T_Count;                      /* '<Root>/T_Count' */
  real_T Temp1;                        /* '<Root>/Temp1' */
  real_T Temp2;                        /* '<Root>/Temp2' */
  real_T V_KI;                         /* '<Root>/V_KI' */
  real_T V_KP;                         /* '<Root>/V_KP' */
  real_T chu_jd;                       /* '<Root>/chu_jd' */
  real_T Angle_S;                      /* '<Root>/chu_jd1' */
  real_T Ts;                           /* '<Root>/Chart' */
  real_T Encode_Pos0;                  /* '<Root>/Chart' */
  real_T Showing_Angle0;               /* '<Root>/Chart' */
  real_T Showing_Angle_Last;           /* '<Root>/Chart' */
  real_T Showing_T_Last;               /* '<Root>/Chart' */
  real_T Average_En;                   /* '<Root>/Chart' */
  real_T XiaoDaShen;                   /* '<Root>/Chart' */
  real_T Cur_GZ_Limit_Down;            /* '<Root>/Chart' */
  real_T Cur_Limit_Down;               /* '<Root>/Chart' */
  real_T Sum1_DWORK1;                  /* '<S11>/Sum1' */
  int32_T JD_HYDG;                     /* '<Root>/JD_HYDG' */
  int32_T JD_HYDG_HC;                  /* '<Root>/JD_HYDG_HC' */
  int32_T JD_XHHY;                     /* '<Root>/JD_XHHY' */
  int32_T JD_XHHY_HC;                  /* '<Root>/JD_XHHY_HC' */
  int32_T JD_XHZY;                     /* '<Root>/JD_XHZY' */
  int32_T JD_XHZY_HC;                  /* '<Root>/JD_XHZY_HC' */
  int32_T YJ_XHZY;                     /* '<Root>/YJ_XHZY' */
  int32_T YJ_XHZY_HC;                  /* '<Root>/YJ_XHZY_HC' */
  int32_T Encode_Pos1;                 /* '<Root>/Chart' */
  int32_T Encode_Pos2;                 /* '<Root>/Chart' */
  int32_T Encode_Pos3;                 /* '<Root>/Chart' */
  int32_T clockTickCounter;            /* '<S31>/Pulse Generator' */
  uint32_T Cur_Limit;                  /* '<Root>/Chart' */
  uint32_T Temp_Up_Limit;              /* '<Root>/Chart' */
  uint32_T Encode_Sp_Min;              /* '<Root>/Chart' */
  uint32_T Encode_Pos_Zero;            /* '<Root>/Chart' */
  uint32_T JD_Max;                     /* '<Root>/Chart' */
  uint32_T Encode_Sp_Max;              /* '<Root>/Chart' */
  uint32_T Temp_Down_Limit;            /* '<Root>/Chart' */
  uint32_T Enc_i;                      /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i2;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i3;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i4;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i5;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i6;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i7;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i8;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i9;         /* '<Root>/Chart' */
  uint32_T Open_Motor_ELAPS_T[2];      /* '<S1>/Open_Motor' */
  uint32_T Open_Motor_PREV_T[2];       /* '<S1>/Open_Motor' */
  uint16_T PWM_Value_Mid;              /* '<Root>/Chart' */
  uint16_T cur_i;                      /* '<Root>/Chart' */
  uint16_T can1_i;                     /* '<Root>/Chart' */
  uint16_T GXDY_i;                     /* '<Root>/Chart' */
  uint16_T Cur_GZ_Limit;               /* '<Root>/Chart' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S66>/Discrete-Time Integrator' */
  uint8_T EN_extern;                   /* '<Root>/EN_extern' */
  uint8_T Forword;                     /* '<Root>/Forword' */
  uint8_T KG;                          /* '<Root>/KG' */
  uint8_T KG_En;                       /* '<Root>/KG_En' */
  uint8_T KG_JD;                       /* '<Root>/KG_JD' */
  uint8_T KG_YJ;                       /* '<Root>/KG_YJ' */
  uint8_T KG_clc;                      /* '<Root>/KG_clc' */
  uint8_T is_active_c3_motor;          /* '<Root>/Chart' */
  uint8_T is_c3_motor;                 /* '<Root>/Chart' */
  uint8_T is_Ready;                    /* '<Root>/Chart' */
  uint8_T is_Current_check;            /* '<Root>/Chart' */
  uint8_T is_active_Current_check;     /* '<Root>/Chart' */
  uint8_T is_M_Run;                    /* '<Root>/Chart' */
  uint8_T is_active_M_Run;             /* '<Root>/Chart' */
  uint8_T is_Initialize;               /* '<Root>/Chart' */
  uint8_T is_Normal_Mode;              /* '<Root>/Chart' */
  uint8_T is_Dspace_Test;              /* '<Root>/Chart' */
  uint8_T is_active_RUN;               /* '<Root>/Chart' */
  uint8_T is_Test_Mode;                /* '<Root>/Chart' */
  uint8_T is_Showing_Mode;             /* '<Root>/Chart' */
  uint8_T is_active_Temp_check;        /* '<Root>/Chart' */
  uint8_T is_ZHI_S_D;                  /* '<Root>/Chart' */
  uint8_T is_active_ZHI_S_D;           /* '<Root>/Chart' */
  uint8_T is_hy;                       /* '<Root>/Chart' */
  uint8_T is_xhhy;                     /* '<Root>/Chart' */
  uint8_T is_xhzy;                     /* '<Root>/Chart' */
  uint8_T is_Close;                    /* '<Root>/Chart' */
  uint8_T is_Algorithm;                /* '<Root>/Chart' */
  uint8_T is_HYDG_Close;               /* '<Root>/Chart' */
  uint8_T is_XHHY_Close;               /* '<Root>/Chart' */
  uint8_T is_XHZY_Close;               /* '<Root>/Chart' */
  uint8_T is_XHHY;                     /* '<Root>/Chart' */
  uint8_T is_GXDY_SJ_BJ;               /* '<Root>/Chart' */
  uint8_T is_active_GXDY_SJ_BJ;        /* '<Root>/Chart' */
  uint8_T is_GXDY_COM_GZ;              /* '<Root>/Chart' */
  uint8_T is_active_GXDY_COM_GZ;       /* '<Root>/Chart' */
  uint8_T is_Algorithm_l;              /* '<Root>/Chart' */
  uint8_T is_active_Algorithm;         /* '<Root>/Chart' */
  uint8_T is_HY;                       /* '<Root>/Chart' */
  uint8_T is_XHZY;                     /* '<Root>/Chart' */
  uint8_T is_Limit_Check;              /* '<Root>/Chart' */
  uint8_T is_active_Limit_Check;       /* '<Root>/Chart' */
  uint8_T is_Limit_Check_j;            /* '<Root>/Chart' */
  uint8_T is_active_Limit_Check_o;     /* '<Root>/Chart' */
  uint8_T is_Algorithm_e;              /* '<Root>/Chart' */
  uint8_T is_active_Algorithm_b;       /* '<Root>/Chart' */
  uint8_T is_XHHY_n;                   /* '<Root>/Chart' */
  uint8_T is_HY_e;                     /* '<Root>/Chart' */
  uint8_T is_XHZY_h;                   /* '<Root>/Chart' */
  uint8_T is_Limit_Up_Test;            /* '<Root>/Chart' */
  uint8_T is_Limit_Down_Test;          /* '<Root>/Chart' */
  uint8_T is_XHHY_nl;                  /* '<Root>/Chart' */
  uint8_T is_XHZY_a;                   /* '<Root>/Chart' */
  uint8_T is_HY_a;                     /* '<Root>/Chart' */
  uint8_T is_HY_h;                     /* '<Root>/Chart' */
  uint8_T is_XHZY_i;                   /* '<Root>/Chart' */
  uint8_T is_XHHY_f;                   /* '<Root>/Chart' */
  uint8_T is_Elevation_Test;           /* '<Root>/Chart' */
  uint8_T is_Limit_Down_Test_i;        /* '<Root>/Chart' */
  uint8_T is_XHZY_m;                   /* '<Root>/Chart' */
  uint8_T is_HY_aj;                    /* '<Root>/Chart' */
  uint8_T is_XHHY_fs;                  /* '<Root>/Chart' */
  uint8_T is_Limit_Up_Test_j;          /* '<Root>/Chart' */
  uint8_T is_XHZY_d;                   /* '<Root>/Chart' */
  uint8_T is_HY_l;                     /* '<Root>/Chart' */
  uint8_T is_XHHY_nb;                  /* '<Root>/Chart' */
  uint8_T is_active_Enc_GZ;            /* '<Root>/Chart' */
  uint8_T is_Enc2;                     /* '<Root>/Chart' */
  uint8_T is_active_Enc2;              /* '<Root>/Chart' */
  uint8_T is_active_Fault_Exit;        /* '<Root>/Chart' */
  uint8_T is_Enc1;                     /* '<Root>/Chart' */
  uint8_T is_active_Enc1;              /* '<Root>/Chart' */
  uint8_T is_Limit_Fault_Exit;         /* '<Root>/Chart' */
  uint8_T is_active_Limit_Fault_Exit;  /* '<Root>/Chart' */
  uint8_T is_Motor_check;              /* '<Root>/Chart' */
  uint8_T is_active_Motor_check;       /* '<Root>/Chart' */
  uint8_T is_Error_Check;              /* '<Root>/Chart' */
  uint8_T is_active_Error_Check;       /* '<Root>/Chart' */
  uint8_T is_Error_Check_g;            /* '<Root>/Chart' */
  uint8_T In_State;                    /* '<Root>/Chart' */
  uint8_T Runing_stable;               /* '<Root>/Chart' */
  boolean_T PC1;                       /* '<Root>/PC1' */
  boolean_T PC2;                       /* '<Root>/PC2' */
  rtDW_Waveform_Build_motor Waveform_Build;/* '<S1>/Waveform_Build' */
  rtDW_Motor_HYDG1_motor Motor_HYDG1;  /* '<S1>/Motor_HYDG1' */
  rtDW_IfActionSubsystem_motor IfActionSubsystem2;/* '<S5>/If Action Subsystem2' */
  rtDW_IfActionSubsystem1_motor IfActionSubsystem1_m;/* '<S24>/If Action Subsystem1' */
  rtDW_IfActionSubsystem_motor_n IfActionSubsystem_f;/* '<S24>/If Action Subsystem' */
  rtDW_IfActionSubsystem_motor IfActionSubsystem;/* '<S5>/If Action Subsystem' */
  rtDW_Motor_XHZY_motor Motor_XHZY;    /* '<S1>/Motor_XHZY' */
  rtDW_Motor_HYDG_motor Motor_HYDG;    /* '<S1>/Motor_HYDG' */
  rtDW_Motor_XHHY_motor Motor_XHHY;    /* '<S1>/Motor_XHHY' */
} D_Work_motor;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T System_Order;                /* '<Root>/System_Order' */
  uint32_T Cur_In;                     /* '<Root>/Cur_In' */
  uint32_T Temp_In;                    /* '<Root>/Temp_In' */
  uint8_T Motor_Num;                   /* '<Root>/Motor_Num' */
  uint8_T Down_Limit;                  /* '<Root>/Down_Limit' */
  int32_T Encode_Sp;                   /* '<Root>/Encode_Sp' */
  uint8_T Up_Limit;                    /* '<Root>/Up_Limit' */
  int32_T JD_In;                       /* '<Root>/JD_In' */
  boolean_T GXDY_State;                /* '<Root>/GXDY_State' */
  uint8_T GXDY_IT_In;                  /* '<Root>/GXDY_IT_In' */
  int32_T SGWY_In;                     /* '<Root>/SGWY_In' */
  int32_T YJ_In;                       /* '<Root>/YJ_In' */
  int32_T Encode_Pos_kj;               /* '<Root>/Encode_Pos_kj' */
  int32_T Encode_sxwPos_Motor;         /* '<Root>/Encode_sxwPos_Motor' */
  int32_T Showing_Angle;               /* '<Root>/Showing_Angle' */
  int32_T Showing_T;                   /* '<Root>/Showing_T' */
  int32_T Test_Mode;                   /* '<Root>/Test_Mode' */
  int32_T Working_Mode;                /* '<Root>/Working_Mode' */
  int32_T Encode_Pos_Zero_Average;     /* '<Root>/Encode_Pos_Zero_Average' */
  uint8_T Gyroscope_Choose;            /* '<Root>/Gyroscope_Choose' */
} ExternalInputs_motor;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T Flag_Cur;                    /* '<Root>/Flag_Cur' */
  boolean_T Motor_En;                  /* '<Root>/Motor_En' */
  uint8_T Flag_Temp_Up;                /* '<Root>/Flag_Temp_Up' */
  uint8_T Open_Result;                 /* '<Root>/Open_Result' */
  int32_T Encode_Pos;                  /* '<Root>/Encode_Pos' */
  uint16_T PWMOUT;                     /* '<Root>/PWMOUT' */
  uint8_T Flag_Temp_Down;              /* '<Root>/Flag_Temp_Down' */
  uint8_T Ini_Result;                  /* '<Root>/Ini_Result' */
  boolean_T QDQ_XH;                    /* '<Root>/QDQ_XH' */
  boolean_T QDQ_HY;                    /* '<Root>/QDQ_HY' */
  uint8_T Flag_Up_limit;               /* '<Root>/Flag_Up_limit' */
  uint8_T Flag_Down_limit;             /* '<Root>/Flag_Down_limit' */
  uint8_T Flag_Enc_Error;              /* '<Root>/Flag_Enc_Error' */
  uint8_T Flag_Motor_Error;            /* '<Root>/Flag_Motor_Error' */
  boolean_T DCZD;                      /* '<Root>/DCZD' */
  uint8_T QDQ_BJ;                      /* '<Root>/QDQ_BJ' */
  uint8_T Flag_GXDY_Error;             /* '<Root>/Flag_GXDY_Error' */
  uint8_T Flag_GXDY_IT;                /* '<Root>/Flag_GXDY_IT' */
  int32_T JD_Error;                    /* '<Root>/JD_Error' */
  int32_T JD_Out;                      /* '<Root>/JD_Out' */
  int32_T SGWY_Out;                    /* '<Root>/SGWY_Out' */
  uint8_T Flag_GZ_Cur;                 /* '<Root>/Flag_GZ_Cur' */
  uint8_T Flag_Up_GZ_limit;            /* '<Root>/Flag_Up_GZ_limit' */
  uint8_T Flag_Down_GZ_limit;          /* '<Root>/Flag_Down_GZ_limit' */
  uint8_T Alarm_Cunt;                  /* '<Root>/Alarm_Cunt' */
  uint8_T dSpace_Init;                 /* '<Root>/dSpace_Init' */
  uint8_T Flag_AngleError;             /* '<Root>/Flag_AngleError' */
} ExternalOutputs_motor;

/* Parameters for system: '<S1>/Motor_XHHY' */
struct rtP_Motor_XHHY_motor_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T GXZ6_Gain;                    /* Expression: (-360)/65536
                                        * Referenced by: '<S9>/GXZ6'
                                        */
  real_T GXZ1_Gain;                    /* Expression: 1/322
                                        * Referenced by: '<S9>/GXZ1'
                                        */
  real_T GXZ9_Gain;                    /* Expression: -1
                                        * Referenced by: '<S9>/GXZ9'
                                        */
  real_T GXZ2_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S9>/GXZ2'
                                        */
  real_T GXZ7_Gain;                    /* Expression: 19/(39*90)
                                        * Referenced by: '<S9>/GXZ7'
                                        */
  real_T GXH7_Gain;                    /* Expression: (-180)/pi
                                        * Referenced by: '<S9>/GXH7'
                                        */
  real_T XF_XHZY1_UpperSat;            /* Expression: 15
                                        * Referenced by: '<S9>/XF_XHZY1'
                                        */
  real_T XF_XHZY1_LowerSat;            /* Expression: -15
                                        * Referenced by: '<S9>/XF_XHZY1'
                                        */
  real_T CDB_XHHY_Gain;                /* Expression: 322
                                        * Referenced by: '<S9>/CDB_XHHY'
                                        */
  real_T Con_ZPWM_Value;               /* Expression: 2500
                                        * Referenced by: '<S9>/Con_ZPWM'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S50>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S50>/Discrete-Time Integrator'
                                        */
  real_T ZP_Kp2_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S50>/ZP_Kp2'
                                        */
  real_T ZV_KD1_Gain;                  /* Expression: 0.036
                                        * Referenced by: '<S50>/ZV_KD1'
                                        */
  real_T ZP_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S50>/ZP_KN'
                                        */
  real_T KD_KG_Gain;                   /* Expression: 0
                                        * Referenced by: '<S50>/KD_KG'
                                        */
  real_T ZP_Kp1_Gain;                  /* Expression: 1
                                        * Referenced by: '<S50>/ZP_Kp1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;/* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                                          * Referenced by: '<S51>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_l;  /* Expression: 0
                                        * Referenced by: '<S51>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 2000
                                          * Referenced by: '<S51>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -2000
                                          * Referenced by: '<S51>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S51>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S51>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator1_UpperSa;/* Expression: 2000
                                          * Referenced by: '<S51>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_LowerSa;/* Expression: -2000
                                          * Referenced by: '<S51>/Discrete-Time Integrator1'
                                          */
  real_T Saturation_UpperSat;          /* Expression: 6600
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -6600
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T ZV_Kp_Gain;                   /* Expression: 0.12
                                        * Referenced by: '<S51>/ZV_Kp'
                                        */
  real_T ZV_Kp1_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S51>/ZV_Kp1'
                                        */
  real_T ZV_KD_Gain;                   /* Expression: 0.01
                                        * Referenced by: '<S51>/ZV_KD'
                                        */
  real_T ZV_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S51>/ZV_KN'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 300
                                        * Referenced by: '<S51>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: -300
                                        * Referenced by: '<S51>/Saturation'
                                        */
  real_T KD_KG_Gain_m;                 /* Expression: 1
                                        * Referenced by: '<S51>/KD_KG'
                                        */
  real_T ZV1_Kp1_Gain;                 /* Expression: 0
                                        * Referenced by: '<S51>/ZV1_Kp1'
                                        */
  real_T ZV1_Kp2_Gain;                 /* Expression: 0
                                        * Referenced by: '<S51>/ZV1_Kp2'
                                        */
  real_T KP_JD1_Gain;                  /* Expression: 1000
                                        * Referenced by: '<S9>/KP_JD1'
                                        */
  real_T KP_e_Gain;                    /* Expression: 1000
                                        * Referenced by: '<S9>/KP_e'
                                        */
  real_T ZXF_PID_UpperSat;             /* Expression: 2500
                                        * Referenced by: '<S9>/ZXF_PID'
                                        */
  real_T ZXF_PID_LowerSat;             /* Expression: -2500
                                        * Referenced by: '<S9>/ZXF_PID'
                                        */
  real_T ZXF_PWM_UpperSat;             /* Expression: 4800
                                        * Referenced by: '<S9>/ZXF_PWM'
                                        */
  real_T ZXF_PWM_LowerSat;             /* Expression: 200
                                        * Referenced by: '<S9>/ZXF_PWM'
                                        */
  real_T GXZ3_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S9>/GXZ3'
                                        */
  real_T XF_XHZY_UpperSat;             /* Expression: 15
                                        * Referenced by: '<S9>/XF_XHZY'
                                        */
  real_T XF_XHZY_LowerSat;             /* Expression: -15
                                        * Referenced by: '<S9>/XF_XHZY'
                                        */
  int64m_T GXZ5_Gain;                  /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S9>/GXZ5'
                                        */
  int32_T GXZ4_Gain;                   /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S9>/GXZ4'
                                        */
};

/* Parameters for system: '<S1>/Motor_HYDG' */
struct rtP_Motor_HYDG_motor_ {
  int128m_T XF_XHZY_UpperSat;          /* Computed Parameter: XF_XHZY_UpperSat
                                        * Referenced by: '<S7>/XF_XHZY'
                                        */
  int128m_T XF_XHZY_LowerSat;          /* Computed Parameter: XF_XHZY_LowerSat
                                        * Referenced by: '<S7>/XF_XHZY'
                                        */
  real_T GHDG5_Gain;                   /* Expression: (-360)/65536
                                        * Referenced by: '<S7>/GHDG5'
                                        */
  real_T GHDG7_Gain;                   /* Expression: 19*4/(360*39)
                                        * Referenced by: '<S40>/GHDG7'
                                        */
  real_T GHDG8_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S40>/GHDG8'
                                        */
  real_T GHDG9_Gain;                   /* Expression: (-180)/pi
                                        * Referenced by: '<S40>/GHDG9'
                                        */
  real_T fk_dg_Gain;                   /* Expression: -1
                                        * Referenced by: '<S7>/fk_dg'
                                        */
  real_T JD_ek_UpperSat;               /* Expression: 15
                                        * Referenced by: '<S7>/JD_e(k)'
                                        */
  real_T JD_ek_LowerSat;               /* Expression: -15
                                        * Referenced by: '<S7>/JD_e(k)'
                                        */
  real_T CDB_XHHY_Gain;                /* Expression: 322
                                        * Referenced by: '<S7>/CDB_XHHY'
                                        */
  real_T Constant_Value;               /* Expression: 2500
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S35>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S35>/Discrete-Time Integrator'
                                        */
  real_T ZP_Kp_Gain;                   /* Expression: 600
                                        * Referenced by: '<S35>/ZP_Kp'
                                        */
  real_T ZP_Kp2_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S35>/ZP_Kp2'
                                        */
  real_T ZV_KD1_Gain;                  /* Expression: 0.036
                                        * Referenced by: '<S35>/ZV_KD1'
                                        */
  real_T ZP_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S35>/ZP_KN'
                                        */
  real_T KD_KG_Gain;                   /* Expression: 0
                                        * Referenced by: '<S35>/KD_KG'
                                        */
  real_T ZP_Kp1_Gain;                  /* Expression: 1
                                        * Referenced by: '<S35>/ZP_Kp1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_p;/* Computed Parameter: DiscreteTimeIntegrator_gainva_p
                                          * Referenced by: '<S36>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_b;  /* Expression: 0
                                        * Referenced by: '<S36>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 2000
                                          * Referenced by: '<S36>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -2000
                                          * Referenced by: '<S36>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S36>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S36>/Discrete-Time Integrator1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 8000
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -8000
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T ZV_Kp_Gain;                   /* Expression: 1.5
                                        * Referenced by: '<S36>/ZV_Kp'
                                        */
  real_T ZV_Kp1_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S36>/ZV_Kp1'
                                        */
  real_T ZV_KD_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<S36>/ZV_KD'
                                        */
  real_T ZV_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S36>/ZV_KN'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 300
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: -300
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T KD_KG_Gain_l;                 /* Expression: 0
                                        * Referenced by: '<S36>/KD_KG'
                                        */
  real_T ZV1_Kp1_Gain;                 /* Expression: 0
                                        * Referenced by: '<S36>/ZV1_Kp1'
                                        */
  real_T ZV1_Kp2_Gain;                 /* Expression: 0
                                        * Referenced by: '<S36>/ZV1_Kp2'
                                        */
  real_T ZV_Ki1_Gain;                  /* Expression: 0.8
                                        * Referenced by: '<S36>/ZV_Ki1'
                                        */
  real_T ZV_Kpt_Gain;                  /* Expression: 0.1
                                        * Referenced by: '<S36>/ZV_Kpt'
                                        */
  real_T XF_PID_UpperSat;              /* Expression: 2500
                                        * Referenced by: '<S7>/XF_PID'
                                        */
  real_T XF_PID_LowerSat;              /* Expression: -2500
                                        * Referenced by: '<S7>/XF_PID'
                                        */
  real_T XF_PWM_UpperSat;              /* Expression: 4000
                                        * Referenced by: '<S7>/XF_PWM'
                                        */
  real_T XF_PWM_LowerSat;              /* Expression: 1000
                                        * Referenced by: '<S7>/XF_PWM'
                                        */
  real_T KP_JD_Gain;                   /* Expression: -1000
                                        * Referenced by: '<S7>/KP_JD'
                                        */
  real_T KP_e_Gain;                    /* Expression: 1000
                                        * Referenced by: '<S7>/KP_e'
                                        */
  int64m_T GHDG1_Gain;                 /* Computed Parameter: GHDG1_Gain
                                        * Referenced by: '<S7>/GHDG1'
                                        */
  int64m_T GXZ5_Gain;                  /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S7>/GXZ5'
                                        */
  int32_T GHDG10_Gain;                 /* Computed Parameter: GHDG10_Gain
                                        * Referenced by: '<S7>/GHDG10'
                                        */
  int32_T GXZ4_Gain;                   /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S7>/GXZ4'
                                        */
};

/* Parameters for system: '<S1>/Motor_XHZY' */
struct rtP_Motor_XHZY_motor_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T GXZ2_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S10>/GXZ2'
                                        */
  real_T XF_YJ_UpperSat;               /* Expression: 10
                                        * Referenced by: '<S10>/XF_YJ'
                                        */
  real_T XF_YJ_LowerSat;               /* Expression: -10
                                        * Referenced by: '<S10>/XF_YJ'
                                        */
  real_T GXZ6_Gain;                    /* Expression: (-360)/65536
                                        * Referenced by: '<S10>/GXZ6'
                                        */
  real_T GXZ1_Gain;                    /* Expression: 1/322
                                        * Referenced by: '<S10>/GXZ1'
                                        */
  real_T GXZ9_Gain;                    /* Expression: -1
                                        * Referenced by: '<S10>/GXZ9'
                                        */
  real_T GXZ7_Gain;                    /* Expression: 19/(39*90)
                                        * Referenced by: '<S10>/GXZ7'
                                        */
  real_T GXZ8_Gain;                    /* Expression: (-180)/pi
                                        * Referenced by: '<S10>/GXZ8'
                                        */
  real_T JD_ek_UpperSat;               /* Expression: 15
                                        * Referenced by: '<S10>/JD_e(k)'
                                        */
  real_T JD_ek_LowerSat;               /* Expression: -15
                                        * Referenced by: '<S10>/JD_e(k)'
                                        */
  real_T CDB_XHHY_Gain;                /* Expression: 322
                                        * Referenced by: '<S10>/CDB_XHHY'
                                        */
  real_T Con_ZPWM_Value;               /* Expression: 2500
                                        * Referenced by: '<S10>/Con_ZPWM'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S58>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S58>/Discrete-Time Integrator'
                                        */
  real_T ZP_Kp2_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S58>/ZP_Kp2'
                                        */
  real_T ZV_KD1_Gain;                  /* Expression: 0.036
                                        * Referenced by: '<S58>/ZV_KD1'
                                        */
  real_T ZP_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S58>/ZP_KN'
                                        */
  real_T KD_KG_Gain;                   /* Expression: 0
                                        * Referenced by: '<S58>/KD_KG'
                                        */
  real_T ZP_Kp1_Gain;                  /* Expression: 1
                                        * Referenced by: '<S58>/ZP_Kp1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_m;/* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                                          * Referenced by: '<S59>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_l;  /* Expression: 0
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 2000
                                          * Referenced by: '<S59>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -2000
                                          * Referenced by: '<S59>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S59>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S59>/Discrete-Time Integrator1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 8000
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -8000
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T ZV_Kp_Gain;                   /* Expression: 0.12
                                        * Referenced by: '<S59>/ZV_Kp'
                                        */
  real_T ZV_Kp1_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S59>/ZV_Kp1'
                                        */
  real_T ZV_KD_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<S59>/ZV_KD'
                                        */
  real_T ZV_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S59>/ZV_KN'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 300
                                        * Referenced by: '<S59>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: -300
                                        * Referenced by: '<S59>/Saturation'
                                        */
  real_T KD_KG_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S59>/KD_KG'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 3000
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -3000
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T ZV1_Kp1_Gain;                 /* Expression: -0.09
                                        * Referenced by: '<S59>/ZV1_Kp1'
                                        */
  real_T ZV1_Kp2_Gain;                 /* Expression: -20
                                        * Referenced by: '<S59>/ZV1_Kp2'
                                        */
  real_T KP_JD1_Gain;                  /* Expression: 1000
                                        * Referenced by: '<S10>/KP_JD1'
                                        */
  real_T KP_JD_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S10>/KP_JD'
                                        */
  real_T KP_e_Gain;                    /* Expression: 1000
                                        * Referenced by: '<S10>/KP_e'
                                        */
  real_T ZXF_PID_UpperSat;             /* Expression: 2500
                                        * Referenced by: '<S10>/ZXF_PID'
                                        */
  real_T ZXF_PID_LowerSat;             /* Expression: -2500
                                        * Referenced by: '<S10>/ZXF_PID'
                                        */
  real_T ZXF_PWM_UpperSat;             /* Expression: 4900
                                        * Referenced by: '<S10>/ZXF_PWM'
                                        */
  real_T ZXF_PWM_LowerSat;             /* Expression: 100
                                        * Referenced by: '<S10>/ZXF_PWM'
                                        */
  real_T GXZ3_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S10>/GXZ3'
                                        */
  real_T GXZ10_Gain;                   /* Expression: -1
                                        * Referenced by: '<S10>/GXZ10'
                                        */
  real_T XF_XHZY_UpperSat;             /* Expression: 15
                                        * Referenced by: '<S10>/XF_XHZY'
                                        */
  real_T XF_XHZY_LowerSat;             /* Expression: -15
                                        * Referenced by: '<S10>/XF_XHZY'
                                        */
  int64m_T GXZ5_Gain;                  /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S10>/GXZ5'
                                        */
  int32_T GXZ4_Gain;                   /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S10>/GXZ4'
                                        */
};

/* Parameters for system: '<S23>/If Action Subsystem' */
struct rtP_IfActionSubsystem_motor_m_ {
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 500
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 250
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
};

/* Parameters for system: '<S23>/If Action Subsystem1' */
struct rtP_IfActionSubsystem1_motor_ {
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 500
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 250
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S27>/Constant'
                                        */
};

/* Parameters for system: '<S5>/If Action Subsystem' */
struct rtP_IfActionSubsystem_motor_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S28>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S28>/Constant1'
                                        */
  rtP_IfActionSubsystem1_motor IfActionSubsystem1;/* '<S23>/If Action Subsystem1' */
  rtP_IfActionSubsystem_motor_m IfActionSubsystem;/* '<S23>/If Action Subsystem' */
};

/* Parameters for system: '<S1>/Motor_HYDG1' */
struct rtP_Motor_HYDG1_motor_ {
  int128m_T XF_XHZY_UpperSat;          /* Computed Parameter: XF_XHZY_UpperSat
                                        * Referenced by: '<S8>/XF_XHZY'
                                        */
  int128m_T XF_XHZY_LowerSat;          /* Computed Parameter: XF_XHZY_LowerSat
                                        * Referenced by: '<S8>/XF_XHZY'
                                        */
  real_T Constant_Value;               /* Expression: 2500
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S42>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S42>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 1000
                                          * Referenced by: '<S42>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -1000
                                          * Referenced by: '<S42>/Discrete-Time Integrator'
                                          */
  real_T GHDG2_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S8>/GHDG2'
                                        */
  real_T GHDG3_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S8>/GHDG3'
                                        */
  real_T GHDG4_Gain;                   /* Expression: (360*39)/(19*4)
                                        * Referenced by: '<S8>/GHDG4'
                                        */
  real_T GHDG5_Gain;                   /* Expression: (-360)/65536
                                        * Referenced by: '<S8>/GHDG5'
                                        */
  real_T fk_dg1_Gain;                  /* Expression: 1
                                        * Referenced by: '<S8>/fk_dg1'
                                        */
  real_T fk_dg_Gain;                   /* Expression: -1
                                        * Referenced by: '<S8>/fk_dg'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 200
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -200
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T ZP_Kp_Gain;                   /* Expression: 1
                                        * Referenced by: '<S42>/ZP_Kp'
                                        */
  real_T ZV_KD1_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S42>/ZV_KD1'
                                        */
  real_T ZP_KN_Gain;                   /* Expression: 400
                                        * Referenced by: '<S42>/ZP_KN'
                                        */
  real_T KD_KG_Gain;                   /* Expression: 100
                                        * Referenced by: '<S42>/KD_KG'
                                        */
  real_T DiscreteTimeIntegrator_gainva_p;/* Computed Parameter: DiscreteTimeIntegrator_gainva_p
                                          * Referenced by: '<S43>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_g;  /* Expression: 0
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperS_j;/* Expression: 2000
                                          * Referenced by: '<S43>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerS_o;/* Expression: -2000
                                          * Referenced by: '<S43>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S43>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S43>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator1_UpperSa;/* Expression: 1000
                                          * Referenced by: '<S43>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_LowerSa;/* Expression: -1000
                                          * Referenced by: '<S43>/Discrete-Time Integrator1'
                                          */
  real_T KP_e2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S8>/KP_e2'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S8>/Unit Delay'
                                        */
  real_T GXZ5_Gain;                    /* Expression: 1000
                                        * Referenced by: '<S8>/GXZ5'
                                        */
  real_T fk_dg2_Gain;                  /* Expression: -1
                                        * Referenced by: '<S8>/fk_dg2'
                                        */
  real_T ZV_Kp_Gain;                   /* Expression: 1.5
                                        * Referenced by: '<S43>/ZV_Kp'
                                        */
  real_T ZV_Kp1_Gain;                  /* Expression: 0.00001
                                        * Referenced by: '<S43>/ZV_Kp1'
                                        */
  real_T ZV_KN_Gain;                   /* Expression: 500
                                        * Referenced by: '<S43>/ZV_KN'
                                        */
  real_T KD_KG_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S43>/KD_KG'
                                        */
  real_T ZV1_Kp1_Gain;                 /* Expression: 0
                                        * Referenced by: '<S43>/ZV1_Kp1'
                                        */
  real_T ZV1_Kp2_Gain;                 /* Expression: 0
                                        * Referenced by: '<S43>/ZV1_Kp2'
                                        */
  real_T XF_PID_UpperSat;              /* Expression: 2500
                                        * Referenced by: '<S8>/XF_PID'
                                        */
  real_T XF_PID_LowerSat;              /* Expression: -2500
                                        * Referenced by: '<S8>/XF_PID'
                                        */
  real_T XF_PWM_UpperSat;              /* Expression: 4900
                                        * Referenced by: '<S8>/XF_PWM'
                                        */
  real_T XF_PWM_LowerSat;              /* Expression: 100
                                        * Referenced by: '<S8>/XF_PWM'
                                        */
  real_T GHDG7_Gain;                   /* Expression: 19*4/(360*39)
                                        * Referenced by: '<S8>/GHDG7'
                                        */
  real_T GHDG8_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S8>/GHDG8'
                                        */
  real_T GHDG9_Gain;                   /* Expression: (-180)/pi
                                        * Referenced by: '<S8>/GHDG9'
                                        */
  real_T fk_dg3_Gain;                  /* Expression: 1
                                        * Referenced by: '<S8>/fk_dg3'
                                        */
  real_T KP_JD_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S8>/KP_JD'
                                        */
  real_T KP_e_Gain;                    /* Expression: 1000
                                        * Referenced by: '<S8>/KP_e'
                                        */
  int64m_T GHDG1_Gain;                 /* Computed Parameter: GHDG1_Gain
                                        * Referenced by: '<S8>/GHDG1'
                                        */
  int32_T GHDG10_Gain;                 /* Computed Parameter: GHDG10_Gain
                                        * Referenced by: '<S8>/GHDG10'
                                        */
};

/* Parameters for system: '<S1>/Showing' */
struct rtP_Showing_motor_ {
  real_T SineWave8_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
  real_T SineWave8_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
  real_T SineWave8_Freq;               /* Expression: pi/15
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
  real_T SineWave8_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
  real_T SineWave7_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
  real_T SineWave7_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
  real_T SineWave7_Freq;               /* Expression: pi/13
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
  real_T SineWave7_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
  real_T SineWave6_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
  real_T SineWave6_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
  real_T SineWave6_Freq;               /* Expression: pi/10
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
  real_T SineWave6_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
  real_T SineWave5_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
  real_T SineWave5_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
  real_T SineWave5_Freq;               /* Expression: pi/8
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
  real_T SineWave5_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
  real_T SineWave4_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
  real_T SineWave4_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
  real_T SineWave4_Freq;               /* Expression: pi/6
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
  real_T SineWave4_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
  real_T SineWave3_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
  real_T SineWave3_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
  real_T SineWave3_Freq;               /* Expression: pi/5
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
  real_T SineWave3_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
  real_T SineWave2_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
  real_T SineWave2_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
  real_T SineWave2_Freq;               /* Expression: pi/4
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
  real_T SineWave2_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
  real_T SineWave1_Amp;                /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: pi/3
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
};

/* Parameters for system: '<S1>/Angle_Calculation_HY' */
struct rtP_Angle_Calculation_HY_motor_ {
  real_T GHDG5_Gain;                   /* Expression: 360/65536
                                        * Referenced by: '<S3>/GHDG5'
                                        */
  real_T GHDG7_Gain;                   /* Expression: 19*4/(360*39)
                                        * Referenced by: '<S21>/GHDG7'
                                        */
  real_T GHDG8_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S21>/GHDG8'
                                        */
  real_T GHDG9_Gain;                   /* Expression: (-180)/pi
                                        * Referenced by: '<S21>/GHDG9'
                                        */
};

/* Parameters for system: '<S1>/Waveform_Build' */
struct rtP_Waveform_Build_motor_ {
  real_T Gain7_Gain;                   /* Expression: 1
                                        * Referenced by: '<S14>/Gain7'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S69>/Constant3'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 999
                                        * Referenced by: '<S69>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S69>/Saturation'
                                        */
  real_T Delay5_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay5'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S14>/Gain1'
                                        */
  real_T XF_XHZY_UpperSat;             /* Expression: 25
                                        * Referenced by: '<S14>/XF_XHZY'
                                        */
  real_T XF_XHZY_LowerSat;             /* Expression: -25
                                        * Referenced by: '<S14>/XF_XHZY'
                                        */
  real_T Delay7_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay7'
                                        */
  real_T Delay6_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay6'
                                        */
  real_T Switch_Threshold;             /* Expression: 150
                                        * Referenced by: '<S14>/Switch'
                                        */
  real_T Constant2_Value;              /* Expression: 25
                                        * Referenced by: '<S14>/Constant2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S14>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.1
                                        * Referenced by: '<S14>/Saturation2'
                                        */
  real_T Constant3_Value_a;            /* Expression: 500
                                        * Referenced by: '<S14>/Constant3'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 50
                                        * Referenced by: '<S14>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0.01
                                        * Referenced by: '<S14>/Saturation1'
                                        */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S71>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S71>/Delay Input2'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S14>/Gain3'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S14>/Gain2'
                                        */
  uint32_T Delay5_DelayLength;         /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<S14>/Delay5'
                                        */
  uint32_T Delay7_DelayLength;         /* Computed Parameter: Delay7_DelayLength
                                        * Referenced by: '<S14>/Delay7'
                                        */
  uint32_T Delay6_DelayLength;         /* Computed Parameter: Delay6_DelayLength
                                        * Referenced by: '<S14>/Delay6'
                                        */
};

/* Parameters for system: '<S1>/Showing_XHHY' */
struct rtP_Showing_XHHY_motor_ {
  real_T SineWave8_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
  real_T SineWave8_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
  real_T SineWave8_Freq;               /* Expression: pi/15
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
  real_T SineWave8_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
  real_T SineWave7_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
  real_T SineWave7_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
  real_T SineWave7_Freq;               /* Expression: pi/13
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
  real_T SineWave7_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
  real_T SineWave6_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
  real_T SineWave6_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
  real_T SineWave6_Freq;               /* Expression: pi/10
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
  real_T SineWave6_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
  real_T SineWave5_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
  real_T SineWave5_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
  real_T SineWave5_Freq;               /* Expression: pi/8
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
  real_T SineWave5_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
  real_T SineWave4_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
  real_T SineWave4_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
  real_T SineWave4_Freq;               /* Expression: pi/6
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
  real_T SineWave4_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
  real_T SineWave3_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
  real_T SineWave3_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
  real_T SineWave3_Freq;               /* Expression: pi/5
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
  real_T SineWave3_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
  real_T SineWave2_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
  real_T SineWave2_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
  real_T SineWave2_Freq;               /* Expression: pi/4
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
  real_T SineWave2_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
  real_T SineWave1_Amp;                /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: pi/3
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S13>/Gain'
                                        */
};

/* Parameters (auto storage) */
struct Parameters_motor_ {
  real_T Con_ZPWM_Value;               /* Expression: 2500
                                        * Referenced by: '<S11>/Con_ZPWM'
                                        */
  real_T SUDU_IN_Value;                /* Expression: 1200
                                        * Referenced by: '<S11>/SUDU_IN'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S66>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S66>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 1000
                                          * Referenced by: '<S66>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -1000
                                          * Referenced by: '<S66>/Discrete-Time Integrator'
                                          */
  real_T ZV_Kp_Gain;                   /* Expression: 0.7
                                        * Referenced by: '<S66>/ZV_Kp'
                                        */
  real_T ZV_Kpt_Gain;                  /* Expression: 1
                                        * Referenced by: '<S66>/ZV_Kpt'
                                        */
  real_T ZV_Kp1_Gain;                  /* Expression: 0.001
                                        * Referenced by: '<S66>/ZV_Kp1'
                                        */
  real_T ZV_KD_Gain;                   /* Expression: 0.095
                                        * Referenced by: '<S66>/ZV_KD'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S66>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S66>/Discrete-Time Integrator1'
                                        */
  real_T ZV_KN_Gain;                   /* Expression: 100
                                        * Referenced by: '<S66>/ZV_KN'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 300
                                        * Referenced by: '<S66>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -300
                                        * Referenced by: '<S66>/Saturation'
                                        */
  real_T KD_KG_Gain;                   /* Expression: 0
                                        * Referenced by: '<S66>/KD_KG'
                                        */
  real_T ZXF_PID_UpperSat;             /* Expression: 2500
                                        * Referenced by: '<S11>/ZXF_PID'
                                        */
  real_T ZXF_PID_LowerSat;             /* Expression: -2500
                                        * Referenced by: '<S11>/ZXF_PID'
                                        */
  real_T ZXF_PWM_UpperSat;             /* Expression: 4800
                                        * Referenced by: '<S11>/ZXF_PWM'
                                        */
  real_T ZXF_PWM_LowerSat;             /* Expression: 200
                                        * Referenced by: '<S11>/ZXF_PWM'
                                        */
  real_T ZV_Ki_Gain;                   /* Expression: 0
                                        * Referenced by: '<S66>/ZV_Ki'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 500
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 250
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay'
                                        */
  real_T GXZ6_Gain;                    /* Expression: 360/65536
                                        * Referenced by: '<S4>/GXZ6'
                                        */
  real_T GXZ1_Gain;                    /* Expression: 1/322
                                        * Referenced by: '<S4>/GXZ1'
                                        */
  real_T Angle_extern_InitialValue;    /* Expression: 0
                                        * Referenced by: '<Root>/Angle_extern'
                                        */
  real_T Angle_internal_InitialValue;  /* Expression: 0
                                        * Referenced by: '<Root>/Angle_internal'
                                        */
  real_T P_KP_InitialValue;            /* Expression: 330
                                        * Referenced by: '<Root>/P_KP'
                                        */
  real_T Rate_limit_speed_InitialValue;/* Expression: 50000
                                        * Referenced by: '<Root>/Rate_limit_speed'
                                        */
  real_T Saturation_limit_speed_InitialV;/* Expression: 16000
                                          * Referenced by: '<Root>/Saturation_limit_speed'
                                          */
  real_T T_InitialValue;               /* Expression: 0
                                        * Referenced by: '<Root>/T'
                                        */
  real_T T_Count_InitialValue;         /* Expression: 0
                                        * Referenced by: '<Root>/T_Count'
                                        */
  real_T Temp1_InitialValue;           /* Expression: 0
                                        * Referenced by: '<Root>/Temp1'
                                        */
  real_T Temp2_InitialValue;           /* Expression: 0
                                        * Referenced by: '<Root>/Temp2'
                                        */
  real_T V_KI_InitialValue;            /* Expression: 10
                                        * Referenced by: '<Root>/V_KI'
                                        */
  real_T V_KP_InitialValue;            /* Expression: 1
                                        * Referenced by: '<Root>/V_KP'
                                        */
  real_T chu_jd_InitialValue;          /* Expression: 0
                                        * Referenced by: '<Root>/chu_jd'
                                        */
  real_T chu_jd1_InitialValue;         /* Expression: 0
                                        * Referenced by: '<Root>/chu_jd1'
                                        */
  int64m_T GXZ5_Gain;                  /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S11>/GXZ5'
                                        */
  int32_T JD_HYDG_InitialValue;        /* Computed Parameter: JD_HYDG_InitialValue
                                        * Referenced by: '<Root>/JD_HYDG'
                                        */
  int32_T JD_HYDG_HC_InitialValue;     /* Computed Parameter: JD_HYDG_HC_InitialValue
                                        * Referenced by: '<Root>/JD_HYDG_HC'
                                        */
  int32_T JD_XHHY_InitialValue;        /* Computed Parameter: JD_XHHY_InitialValue
                                        * Referenced by: '<Root>/JD_XHHY'
                                        */
  int32_T JD_XHHY_HC_InitialValue;     /* Computed Parameter: JD_XHHY_HC_InitialValue
                                        * Referenced by: '<Root>/JD_XHHY_HC'
                                        */
  int32_T JD_XHZY_InitialValue;        /* Computed Parameter: JD_XHZY_InitialValue
                                        * Referenced by: '<Root>/JD_XHZY'
                                        */
  int32_T JD_XHZY_HC_InitialValue;     /* Computed Parameter: JD_XHZY_HC_InitialValue
                                        * Referenced by: '<Root>/JD_XHZY_HC'
                                        */
  int32_T YJ_XHZY_InitialValue;        /* Computed Parameter: YJ_XHZY_InitialValue
                                        * Referenced by: '<Root>/YJ_XHZY'
                                        */
  int32_T YJ_XHZY_HC_InitialValue;     /* Computed Parameter: YJ_XHZY_HC_InitialValue
                                        * Referenced by: '<Root>/YJ_XHZY_HC'
                                        */
  int32_T GXZ4_Gain;                   /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S11>/GXZ4'
                                        */
  uint8_T EN_extern_InitialValue;      /* Computed Parameter: EN_extern_InitialValue
                                        * Referenced by: '<Root>/EN_extern'
                                        */
  uint8_T Forword_InitialValue;        /* Computed Parameter: Forword_InitialValue
                                        * Referenced by: '<Root>/Forword'
                                        */
  uint8_T KG_InitialValue;             /* Computed Parameter: KG_InitialValue
                                        * Referenced by: '<Root>/KG'
                                        */
  uint8_T KG_En_InitialValue;          /* Computed Parameter: KG_En_InitialValue
                                        * Referenced by: '<Root>/KG_En'
                                        */
  uint8_T KG_JD_InitialValue;          /* Computed Parameter: KG_JD_InitialValue
                                        * Referenced by: '<Root>/KG_JD'
                                        */
  uint8_T KG_YJ_InitialValue;          /* Computed Parameter: KG_YJ_InitialValue
                                        * Referenced by: '<Root>/KG_YJ'
                                        */
  uint8_T KG_clc_InitialValue;         /* Computed Parameter: KG_clc_InitialValue
                                        * Referenced by: '<Root>/KG_clc'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S31>/Constant'
                                        */
  boolean_T PC1_InitialValue;          /* Computed Parameter: PC1_InitialValue
                                        * Referenced by: '<Root>/PC1'
                                        */
  boolean_T PC2_InitialValue;          /* Computed Parameter: PC2_InitialValue
                                        * Referenced by: '<Root>/PC2'
                                        */
  rtP_Showing_XHHY_motor Showing_XHHY; /* '<S1>/Showing_XHHY' */
  rtP_Waveform_Build_motor Waveform_Build;/* '<S1>/Waveform_Build' */
  rtP_Angle_Calculation_HY_motor Angle_Calculation_HY;/* '<S1>/Angle_Calculation_HY' */
  rtP_Showing_motor Showing;           /* '<S1>/Showing' */
  rtP_Motor_HYDG1_motor Motor_HYDG1;   /* '<S1>/Motor_HYDG1' */
  rtP_IfActionSubsystem_motor IfActionSubsystem2;/* '<S5>/If Action Subsystem2' */
  rtP_IfActionSubsystem1_motor IfActionSubsystem1_m;/* '<S24>/If Action Subsystem1' */
  rtP_IfActionSubsystem_motor_m IfActionSubsystem_f;/* '<S24>/If Action Subsystem' */
  rtP_IfActionSubsystem_motor IfActionSubsystem;/* '<S5>/If Action Subsystem' */
  rtP_Motor_XHZY_motor Motor_XHZY;     /* '<S1>/Motor_XHZY' */
  rtP_Motor_HYDG_motor Motor_HYDG;     /* '<S1>/Motor_HYDG' */
  rtP_Motor_XHHY_motor Motor_XHHY;     /* '<S1>/Motor_XHHY' */
};

/* Real-time Model Data Structure */
struct tag_RTM_motor {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* Block parameters (auto storage) */
extern Parameters_motor motor_P;

/* Block signals (auto storage) */
extern BlockIO_motor motor_B;

/* Block states (auto storage) */
extern D_Work_motor motor_DWork;

/* External inputs (root inport signals with auto storage) */
extern ExternalInputs_motor motor_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExternalOutputs_motor motor_Y;

/* Model entry point functions */
extern void motor_initialize(void);
extern void motor_step(void);
extern void motor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_motor *const motor_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'motor'
 * '<S1>'   : 'motor/Chart'
 * '<S2>'   : 'motor/Chart/Angle_Calculation'
 * '<S3>'   : 'motor/Chart/Angle_Calculation_HY'
 * '<S4>'   : 'motor/Chart/Angle_Calculation_XH'
 * '<S5>'   : 'motor/Chart/BJ'
 * '<S6>'   : 'motor/Chart/COM_Error'
 * '<S7>'   : 'motor/Chart/Motor_HYDG'
 * '<S8>'   : 'motor/Chart/Motor_HYDG1'
 * '<S9>'   : 'motor/Chart/Motor_XHHY'
 * '<S10>'  : 'motor/Chart/Motor_XHZY'
 * '<S11>'  : 'motor/Chart/Open_Motor'
 * '<S12>'  : 'motor/Chart/Showing'
 * '<S13>'  : 'motor/Chart/Showing_XHHY'
 * '<S14>'  : 'motor/Chart/Waveform_Build'
 * '<S15>'  : 'motor/Chart/Angle_Calculation/If Action Subsystem1'
 * '<S16>'  : 'motor/Chart/Angle_Calculation/If Action Subsystem2'
 * '<S17>'  : 'motor/Chart/Angle_Calculation/If Action Subsystem3'
 * '<S18>'  : 'motor/Chart/Angle_Calculation/If Action Subsystem1/ZYDX_HYDG'
 * '<S19>'  : 'motor/Chart/Angle_Calculation/If Action Subsystem2/ZYDX_XHZY'
 * '<S20>'  : 'motor/Chart/Angle_Calculation/If Action Subsystem3/ZYDX_XHHY'
 * '<S21>'  : 'motor/Chart/Angle_Calculation_HY/fs_plat'
 * '<S22>'  : 'motor/Chart/Angle_Calculation_HY/fs_plat/ZYDX_HYDG'
 * '<S23>'  : 'motor/Chart/BJ/If Action Subsystem'
 * '<S24>'  : 'motor/Chart/BJ/If Action Subsystem1'
 * '<S25>'  : 'motor/Chart/BJ/If Action Subsystem2'
 * '<S26>'  : 'motor/Chart/BJ/If Action Subsystem/If Action Subsystem'
 * '<S27>'  : 'motor/Chart/BJ/If Action Subsystem/If Action Subsystem1'
 * '<S28>'  : 'motor/Chart/BJ/If Action Subsystem/If Action Subsystem2'
 * '<S29>'  : 'motor/Chart/BJ/If Action Subsystem1/If Action Subsystem'
 * '<S30>'  : 'motor/Chart/BJ/If Action Subsystem1/If Action Subsystem1'
 * '<S31>'  : 'motor/Chart/BJ/If Action Subsystem1/If Action Subsystem2'
 * '<S32>'  : 'motor/Chart/BJ/If Action Subsystem2/If Action Subsystem'
 * '<S33>'  : 'motor/Chart/BJ/If Action Subsystem2/If Action Subsystem1'
 * '<S34>'  : 'motor/Chart/BJ/If Action Subsystem2/If Action Subsystem2'
 * '<S35>'  : 'motor/Chart/Motor_HYDG/Control_ZP'
 * '<S36>'  : 'motor/Chart/Motor_HYDG/Control_ZV'
 * '<S37>'  : 'motor/Chart/Motor_HYDG/If Action Subsystem'
 * '<S38>'  : 'motor/Chart/Motor_HYDG/If Action Subsystem1'
 * '<S39>'  : 'motor/Chart/Motor_HYDG/If Action Subsystem2'
 * '<S40>'  : 'motor/Chart/Motor_HYDG/fs_plat'
 * '<S41>'  : 'motor/Chart/Motor_HYDG/fs_plat/ZYDX_HYDG'
 * '<S42>'  : 'motor/Chart/Motor_HYDG1/Control_ZP'
 * '<S43>'  : 'motor/Chart/Motor_HYDG1/Control_ZV'
 * '<S44>'  : 'motor/Chart/Motor_HYDG1/If Action Subsystem'
 * '<S45>'  : 'motor/Chart/Motor_HYDG1/If Action Subsystem1'
 * '<S46>'  : 'motor/Chart/Motor_HYDG1/If Action Subsystem2'
 * '<S47>'  : 'motor/Chart/Motor_HYDG1/NYDX_HYDG'
 * '<S48>'  : 'motor/Chart/Motor_HYDG1/Saturation Dynamic'
 * '<S49>'  : 'motor/Chart/Motor_HYDG1/ZYDX_HYDG'
 * '<S50>'  : 'motor/Chart/Motor_XHHY/Control_HP'
 * '<S51>'  : 'motor/Chart/Motor_XHHY/Control_HV'
 * '<S52>'  : 'motor/Chart/Motor_XHHY/If Action Subsystem1'
 * '<S53>'  : 'motor/Chart/Motor_XHHY/If Action Subsystem2'
 * '<S54>'  : 'motor/Chart/Motor_XHHY/If Action Subsystem3'
 * '<S55>'  : 'motor/Chart/Motor_XHHY/Switch Case Action Subsystem'
 * '<S56>'  : 'motor/Chart/Motor_XHHY/Switch Case Action Subsystem1'
 * '<S57>'  : 'motor/Chart/Motor_XHHY/ZYDX_XHHY'
 * '<S58>'  : 'motor/Chart/Motor_XHZY/Control_ZP'
 * '<S59>'  : 'motor/Chart/Motor_XHZY/Control_ZV'
 * '<S60>'  : 'motor/Chart/Motor_XHZY/If Action Subsystem1'
 * '<S61>'  : 'motor/Chart/Motor_XHZY/If Action Subsystem2'
 * '<S62>'  : 'motor/Chart/Motor_XHZY/If Action Subsystem3'
 * '<S63>'  : 'motor/Chart/Motor_XHZY/Switch Case Action Subsystem'
 * '<S64>'  : 'motor/Chart/Motor_XHZY/Switch Case Action Subsystem1'
 * '<S65>'  : 'motor/Chart/Motor_XHZY/ZYDX_XHZY'
 * '<S66>'  : 'motor/Chart/Open_Motor/sudu_PI'
 * '<S67>'  : 'motor/Chart/Waveform_Build/If Action Subsystem1'
 * '<S68>'  : 'motor/Chart/Waveform_Build/If Action Subsystem2'
 * '<S69>'  : 'motor/Chart/Waveform_Build/If Action Subsystem3'
 * '<S70>'  : 'motor/Chart/Waveform_Build/If Action Subsystem4'
 * '<S71>'  : 'motor/Chart/Waveform_Build/Rate Limiter Dynamic3'
 * '<S72>'  : 'motor/Chart/Waveform_Build/Saturation Dynamic1'
 * '<S73>'  : 'motor/Chart/Waveform_Build/If Action Subsystem1/MATLAB Function'
 * '<S74>'  : 'motor/Chart/Waveform_Build/Rate Limiter Dynamic3/Saturation Dynamic'
 */
#endif                                 /* RTW_HEADER_motor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
