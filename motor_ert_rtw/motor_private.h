/*
 * File: motor_private.h
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

#ifndef RTW_HEADER_motor_private_h_
#define RTW_HEADER_motor_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern void sMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[],
  int32_T n2, uint32_T y[], int32_T n);
extern real_T sMultiWord2Double(const uint32_T u1[], int32_T n1, int32_T e1);
extern boolean_T sMultiWordGt(const uint32_T u1[], const uint32_T u2[], int32_T
  n);
extern int32_T sMultiWordCmp(const uint32_T u1[], const uint32_T u2[], int32_T n);
extern boolean_T sMultiWordLt(const uint32_T u1[], const uint32_T u2[], int32_T
  n);
extern void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern int32_T mul_s32_s32_s32_sat(int32_T a, int32_T b);
extern void motor_Motor_XHHY_Init(RT_MODEL_motor * const motor_M,
  rtDW_Motor_XHHY_motor *localDW, rtP_Motor_XHHY_motor *localP);
extern void motor_Motor_XHHY(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In,
  int32_T rtu_Encode_Pos, int32_T rtu_Encode_Sp, uint8_T rtu_Slect_port, int32_T
  rtu_SGWY_In, rtB_Motor_XHHY_motor *localB, rtDW_Motor_XHHY_motor *localDW,
  rtP_Motor_XHHY_motor *localP, real_T *rtd_Angle_extern, real_T
  *rtd_Angle_internal, uint8_T *rtd_EN_extern, int32_T *rtd_JD_XHHY, int32_T
  *rtd_JD_XHHY_HC, uint8_T *rtd_KG_En, uint8_T *rtd_KG_JD, uint8_T *rtd_KG_clc,
  real_T *rtd_P_KP, real_T *rtd_V_KI, real_T *rtd_V_KP, real_T *rtd_chu_jd);
extern void motor_Motor_HYDG_Init(RT_MODEL_motor * const motor_M,
  rtDW_Motor_HYDG_motor *localDW, rtP_Motor_HYDG_motor *localP);
extern void motor_Motor_HYDG(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In,
  int32_T rtu_Encode_Pos, uint8_T rtu_Slect_port, int32_T rtu_Encode_Sp,
  rtB_Motor_HYDG_motor *localB, rtDW_Motor_HYDG_motor *localDW,
  rtP_Motor_HYDG_motor *localP, int32_T *rtd_JD_HYDG, int32_T *rtd_JD_HYDG_HC,
  uint8_T *rtd_KG_JD, uint8_T *rtd_KG_clc, real_T *rtd_chu_jd);
extern void motor_Motor_XHZY_Init(RT_MODEL_motor * const motor_M,
  rtDW_Motor_XHZY_motor *localDW, rtP_Motor_XHZY_motor *localP);
extern void motor_Motor_XHZY(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In,
  int32_T rtu_Encode_Pos, int32_T rtu_YJ_In, int32_T rtu_Encode_Sp, uint8_T
  rtu_Slect_port, rtB_Motor_XHZY_motor *localB, rtDW_Motor_XHZY_motor *localDW,
  rtP_Motor_XHZY_motor *localP, real_T *rtd_Angle_extern, real_T
  *rtd_Angle_internal, uint8_T *rtd_EN_extern, uint8_T *rtd_Forword, int32_T
  *rtd_JD_XHZY, int32_T *rtd_JD_XHZY_HC, uint8_T *rtd_KG_En, uint8_T *rtd_KG_JD,
  uint8_T *rtd_KG_YJ, uint8_T *rtd_KG_clc, real_T *rtd_P_KP, real_T *rtd_V_KI,
  real_T *rtd_V_KP, int32_T *rtd_YJ_XHZY, int32_T *rtd_YJ_XHZY_HC, real_T
  *rtd_chu_jd);
extern void motor_IfActionSubsystem_Init(rtDW_IfActionSubsystem_motor_n *localDW);
extern void motor_IfActionSubsystem_Start(rtDW_IfActionSubsystem_motor_n
  *localDW);
extern void motor_IfActionSubsystem(rtB_IfActionSubsystem_motor_k *localB,
  rtDW_IfActionSubsystem_motor_n *localDW, rtP_IfActionSubsystem_motor_m *localP,
  boolean_T *rtd_PC1, boolean_T *rtd_PC2);
extern void motor_IfActionSubsystem1_Init(rtDW_IfActionSubsystem1_motor *localDW);
extern void motor_IfActionSubsystem1_Start(rtDW_IfActionSubsystem1_motor
  *localDW);
extern void motor_IfActionSubsystem1(rtB_IfActionSubsystem1_motor *localB,
  rtDW_IfActionSubsystem1_motor *localDW, rtP_IfActionSubsystem1_motor *localP,
  boolean_T *rtd_PC1, boolean_T *rtd_PC2);
extern void motor_IfActionSubsystem_p_Start(rtDW_IfActionSubsystem_motor
  *localDW);
extern void motor_IfActionSubsystem_n(real_T rtu_In1,
  rtB_IfActionSubsystem_motor *localB, rtDW_IfActionSubsystem_motor *localDW,
  rtP_IfActionSubsystem_motor *localP, boolean_T *rtd_PC1, boolean_T *rtd_PC2);
extern void motor_Motor_HYDG1_Init(RT_MODEL_motor * const motor_M,
  rtDW_Motor_HYDG1_motor *localDW, rtP_Motor_HYDG1_motor *localP);
extern void motor_Motor_HYDG1(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In,
  int32_T rtu_Encode_Pos, uint8_T rtu_Slect_port, rtB_Motor_HYDG1_motor *localB,
  rtDW_Motor_HYDG1_motor *localDW, rtP_Motor_HYDG1_motor *localP, int32_T
  *rtd_JD_HYDG, int32_T *rtd_JD_HYDG_HC, uint8_T *rtd_KG_JD, uint8_T *rtd_KG_clc,
  real_T *rtd_P_KP, real_T *rtd_Saturation_limit_speed, real_T *rtd_V_KI, real_T
  *rtd_V_KP, real_T *rtd_chu_jd);
extern void motor_Showing(RT_MODEL_motor * const motor_M, real_T
  rtu_Showing_Angle, real_T rtu_Showing_T, rtB_Showing_motor *localB,
  rtP_Showing_motor *localP, real_T *rtd_Angle_S);
extern void motor_Angle_Calculation_HY(int32_T rtu_Encode_Pos,
  rtB_Angle_Calculation_HY_motor *localB, rtP_Angle_Calculation_HY_motor *localP);
extern void motor_Waveform_Build_Init(RT_MODEL_motor * const motor_M,
  rtDW_Waveform_Build_motor *localDW, rtP_Waveform_Build_motor *localP);
extern void motor_Waveform_Build_Start(rtDW_Waveform_Build_motor *localDW);
extern void motor_Waveform_Build(RT_MODEL_motor * const motor_M, int32_T
  rtu_JD_In, rtB_Waveform_Build_motor *localB, rtDW_Waveform_Build_motor
  *localDW, rtP_Waveform_Build_motor *localP, real_T *rtd_T, real_T *rtd_T_Count,
  real_T *rtd_Temp1, real_T *rtd_Temp2);
extern void motor_Showing_XHHY(RT_MODEL_motor * const motor_M, real_T
  rtu_Showing_Angle, real_T rtu_Showing_T, rtB_Showing_XHHY_motor *localB,
  rtP_Showing_XHHY_motor *localP, real_T *rtd_Angle_S);

#endif                                 /* RTW_HEADER_motor_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
