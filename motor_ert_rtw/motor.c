/*
 * File: motor.c
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

#include "motor.h"
#include "motor_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define motor_IN_Algorithm             ((uint8_T)1U)
#define motor_IN_Calibration           ((uint8_T)1U)
#define motor_IN_Check_Reset           ((uint8_T)1U)
#define motor_IN_Close                 ((uint8_T)1U)
#define motor_IN_Close_Wait            ((uint8_T)2U)
#define motor_IN_Defualt               ((uint8_T)1U)
#define motor_IN_Defualt1              ((uint8_T)1U)
#define motor_IN_Defult                ((uint8_T)1U)
#define motor_IN_Defult1               ((uint8_T)2U)
#define motor_IN_Defult2               ((uint8_T)3U)
#define motor_IN_Dspace_Test           ((uint8_T)2U)
#define motor_IN_Elevation_Test        ((uint8_T)3U)
#define motor_IN_Error_Check           ((uint8_T)1U)
#define motor_IN_HY                    ((uint8_T)2U)
#define motor_IN_HYDG_Close            ((uint8_T)1U)
#define motor_IN_HY_f                  ((uint8_T)1U)
#define motor_IN_Initialize            ((uint8_T)2U)
#define motor_IN_Int                   ((uint8_T)1U)
#define motor_IN_Int1                  ((uint8_T)2U)
#define motor_IN_Int1_d                ((uint8_T)3U)
#define motor_IN_Int2                  ((uint8_T)4U)
#define motor_IN_Int2_i                ((uint8_T)3U)
#define motor_IN_Int3                  ((uint8_T)3U)
#define motor_IN_Int3_l                ((uint8_T)4U)
#define motor_IN_Int4                  ((uint8_T)4U)
#define motor_IN_Int4_b                ((uint8_T)5U)
#define motor_IN_Int5                  ((uint8_T)5U)
#define motor_IN_Int5_a                ((uint8_T)6U)
#define motor_IN_Int6                  ((uint8_T)6U)
#define motor_IN_Int6_m                ((uint8_T)7U)
#define motor_IN_Int7                  ((uint8_T)8U)
#define motor_IN_Int8                  ((uint8_T)9U)
#define motor_IN_Int_k                 ((uint8_T)2U)
#define motor_IN_Limit_Down_Test       ((uint8_T)4U)
#define motor_IN_Limit_Down_Test_f     ((uint8_T)3U)
#define motor_IN_Limit_Up_Test         ((uint8_T)5U)
#define motor_IN_Limit_Up_Test_k       ((uint8_T)4U)
#define motor_IN_NO_ACTIVE_CHILD       ((uint8_T)0U)
#define motor_IN_Normal_Mode           ((uint8_T)3U)
#define motor_IN_P1                    ((uint8_T)1U)
#define motor_IN_P10                   ((uint8_T)2U)
#define motor_IN_P11                   ((uint8_T)3U)
#define motor_IN_P12                   ((uint8_T)4U)
#define motor_IN_P2                    ((uint8_T)4U)
#define motor_IN_P2_a                  ((uint8_T)5U)
#define motor_IN_P3                    ((uint8_T)5U)
#define motor_IN_P3_k                  ((uint8_T)6U)
#define motor_IN_P4                    ((uint8_T)6U)
#define motor_IN_P4_o                  ((uint8_T)7U)
#define motor_IN_P5                    ((uint8_T)7U)
#define motor_IN_P5_n                  ((uint8_T)8U)
#define motor_IN_P8                    ((uint8_T)8U)
#define motor_IN_P8_e                  ((uint8_T)9U)
#define motor_IN_PID_parameters1       ((uint8_T)1U)
#define motor_IN_PID_parameters2       ((uint8_T)2U)
#define motor_IN_PID_parameters3       ((uint8_T)3U)
#define motor_IN_Parameters_Reset      ((uint8_T)2U)
#define motor_IN_Parameters_Reset0     ((uint8_T)3U)
#define motor_IN_QDQ_BJ                ((uint8_T)1U)
#define motor_IN_QDQ_GZ                ((uint8_T)2U)
#define motor_IN_RUN                   ((uint8_T)1U)
#define motor_IN_Ready                 ((uint8_T)1U)
#define motor_IN_Ready_Run             ((uint8_T)2U)
#define motor_IN_Showing_Mode          ((uint8_T)4U)
#define motor_IN_Sleeping_protect_1    ((uint8_T)1U)
#define motor_IN_Sleeping_protect_1_h  ((uint8_T)2U)
#define motor_IN_Sleeping_protect_2    ((uint8_T)2U)
#define motor_IN_Sleeping_protect_2_m  ((uint8_T)3U)
#define motor_IN_Sleeping_protect_3    ((uint8_T)3U)
#define motor_IN_Sleeping_protect_3_f  ((uint8_T)4U)
#define motor_IN_Start                 ((uint8_T)2U)
#define motor_IN_Test_Mode             ((uint8_T)5U)
#define motor_IN_XHHY                  ((uint8_T)3U)
#define motor_IN_XHHY_Close            ((uint8_T)2U)
#define motor_IN_XHHY_Error            ((uint8_T)5U)
#define motor_IN_XHHY_Error1           ((uint8_T)4U)
#define motor_IN_XHHY_Run              ((uint8_T)5U)
#define motor_IN_XHHY_Run1             ((uint8_T)6U)
#define motor_IN_XHHY_Run1_d           ((uint8_T)7U)
#define motor_IN_XHHY_Run_e            ((uint8_T)6U)
#define motor_IN_XHHY_Wait             ((uint8_T)7U)
#define motor_IN_XHHY_Wait1            ((uint8_T)8U)
#define motor_IN_XHHY_Wait2            ((uint8_T)9U)
#define motor_IN_XHHY_Wait_g           ((uint8_T)8U)
#define motor_IN_XHHY_m                ((uint8_T)5U)
#define motor_IN_XHHY_m1               ((uint8_T)2U)
#define motor_IN_XHZY                  ((uint8_T)4U)
#define motor_IN_XHZY_Close            ((uint8_T)3U)
#define motor_IN_XHZY_Close1           ((uint8_T)6U)
#define motor_IN_XHZY_Close1_f         ((uint8_T)3U)
#define motor_IN_XHZY_Close_c          ((uint8_T)5U)
#define motor_IN_XHZY_Close_cm         ((uint8_T)2U)
#define motor_IN_XHZY_Error            ((uint8_T)7U)
#define motor_IN_XHZY_Error1           ((uint8_T)4U)
#define motor_IN_XHZY_Error_f          ((uint8_T)4U)
#define motor_IN_XHZY_Error_fb         ((uint8_T)5U)
#define motor_IN_XHZY_Run              ((uint8_T)5U)
#define motor_IN_XHZY_Run1             ((uint8_T)6U)
#define motor_IN_XHZY_Run1_a           ((uint8_T)7U)
#define motor_IN_XHZY_Run_i            ((uint8_T)6U)
#define motor_IN_XHZY_Wait             ((uint8_T)7U)
#define motor_IN_XHZY_Wait_l           ((uint8_T)8U)
#define motor_IN_XHZY_p                ((uint8_T)6U)
#define motor_IN_XHZY_pv               ((uint8_T)3U)
#define motor_IN_defult                ((uint8_T)6U)
#define motor_IN_defult1               ((uint8_T)1U)
#define motor_IN_defult1_k             ((uint8_T)2U)
#define motor_IN_defult2               ((uint8_T)2U)
#define motor_IN_defult2_e             ((uint8_T)3U)
#define motor_IN_defult3               ((uint8_T)4U)
#define motor_IN_defult4               ((uint8_T)5U)
#define motor_IN_defult_b              ((uint8_T)3U)
#define motor_IN_defult_bq             ((uint8_T)1U)
#define motor_IN_defult_bqy            ((uint8_T)2U)
#define motor_IN_hy                    ((uint8_T)4U)
#define motor_IN_p1                    ((uint8_T)1U)
#define motor_IN_p10                   ((uint8_T)10U)
#define motor_IN_p11                   ((uint8_T)9U)
#define motor_IN_p11_b                 ((uint8_T)11U)
#define motor_IN_p12                   ((uint8_T)10U)
#define motor_IN_p1_a                  ((uint8_T)3U)
#define motor_IN_p1_aq                 ((uint8_T)4U)
#define motor_IN_p1_aqc                ((uint8_T)2U)
#define motor_IN_p2                    ((uint8_T)2U)
#define motor_IN_p2_k                  ((uint8_T)5U)
#define motor_IN_p2_kb                 ((uint8_T)3U)
#define motor_IN_p2_kbn                ((uint8_T)1U)
#define motor_IN_p3                    ((uint8_T)3U)
#define motor_IN_p3_e                  ((uint8_T)6U)
#define motor_IN_p3_ex                 ((uint8_T)4U)
#define motor_IN_p3_exj                ((uint8_T)2U)
#define motor_IN_p4                    ((uint8_T)4U)
#define motor_IN_p4_n                  ((uint8_T)7U)
#define motor_IN_p4_nv                 ((uint8_T)2U)
#define motor_IN_p4_nvu                ((uint8_T)3U)
#define motor_IN_p5                    ((uint8_T)5U)
#define motor_IN_p5_m                  ((uint8_T)3U)
#define motor_IN_p6                    ((uint8_T)6U)
#define motor_IN_p7                    ((uint8_T)7U)
#define motor_IN_r2                    ((uint8_T)8U)
#define motor_IN_xhhy                  ((uint8_T)5U)
#define motor_IN_xhzy                  ((uint8_T)6U)

/* Block signals (auto storage) */
BlockIO_motor motor_B;

/* Block states (auto storage) */
D_Work_motor motor_DWork;

/* External inputs (root inport signals with auto storage) */
ExternalInputs_motor motor_U;

/* External outputs (root outports fed by signals with auto storage) */
ExternalOutputs_motor motor_Y;

/* Real-time model */
RT_MODEL_motor motor_M_;
RT_MODEL_motor *const motor_M = &motor_M_;

/* Forward declaration for local functions */
static uint8_T motor_Temp_Up_Check(uint16_T In1, uint16_T In2);
static uint8_T motor_Temp_Down_Check(uint16_T In1, uint16_T In2);
static void motor_defult(void);
static void motor_XHZY_as(void);
static void motor_Limit_Down_Test(void);
static void motor_XHZY_a(void);
static void motor_Limit_Up_Test(void);
static void motor_exit_internal_Test_Mode(void);
static uint8_T motor_Init_Result_Check(uint8_T In1, uint8_T In2, real_T In3);
static void motor_hy(void);
static void motor_xhhy(void);
static void motor_Initialize(void);
static void motor_enter_atomic_XHZY_Run(void);
static void motor_enter_atomic_XHZY_Run1(void);
static void motor_exit_internal_Normal_Mode(void);
static void motor_HY(void);
static void motor_XHHY(void);
static void motor_Algorithm_a(void);
static void motor_RUN(void);
static void motor_Normal_Mode(void);
static void moto_exit_internal_Showing_Mode(void);
static void enter_internal_Limit_Down_Test(void);
static void mo_enter_internal_Limit_Up_Test(void);
static void motor_XHZY(void);
static void motor_XHZY_asn(void);
static void motor_Limit_Down_Test_b(void);
static void motor_XHZY_asnq(void);
static void motor_Limit_Up_Test_a(void);
static void motor_XHHY_n(void);
static void motor_Algorithm_ac(void);
static void motor_Showing_Mode(void);
static void motor_Algorithm(void);
static void motor_M_Run(void);
static void motor_Ready_Run(void);
void sMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[], int32_T
                   n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T nj;
  uint32_T u1i;
  uint32_T yk;
  uint32_T a1;
  uint32_T a0;
  uint32_T b1;
  uint32_T w10;
  uint32_T w01;
  uint32_T cb;
  boolean_T isNegative1;
  boolean_T isNegative2;
  uint32_T cb1;
  uint32_T cb2;
  isNegative1 = ((u1[n1 - 1] & 2147483648U) != 0U);
  isNegative2 = ((u2[n2 - 1] & 2147483648U) != 0U);
  cb1 = 1U;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    cb = 0U;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint32_T)(u1i < cb1);
    }

    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    cb2 = 1U;
    k = n - i;
    nj = n2 <= k ? n2 : k;
    k = i;
    for (j = 0; j < nj; j++) {
      yk = y[k];
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint32_T)(u1i < cb2);
      }

      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk += cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1U;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint32_T)(yk < cb);
    }
  }
}

real_T sMultiWord2Double(const uint32_T u1[], int32_T n1, int32_T e1)
{
  real_T y;
  int32_T i;
  int32_T exp_0;
  uint32_T u1i;
  uint32_T cb;
  y = 0.0;
  exp_0 = e1;
  if ((u1[n1 - 1] & 2147483648U) != 0U) {
    cb = 1U;
    for (i = 0; i < n1; i++) {
      u1i = ~u1[i];
      cb += u1i;
      y -= ldexp(cb, exp_0);
      cb = (uint32_T)(cb < u1i);
      exp_0 += 32;
    }
  } else {
    for (i = 0; i < n1; i++) {
      y += ldexp(u1[i], exp_0);
      exp_0 += 32;
    }
  }

  return y;
}

boolean_T sMultiWordGt(const uint32_T u1[], const uint32_T u2[], int32_T n)
{
  return sMultiWordCmp(u1, u2, n) > 0 ? (int32_T)1 : (int32_T)0;
}

int32_T sMultiWordCmp(const uint32_T u1[], const uint32_T u2[], int32_T n)
{
  int32_T y;
  uint32_T su1;
  uint32_T su2;
  int32_T i;
  su1 = u1[n - 1] & 2147483648U;
  su2 = u2[n - 1] & 2147483648U;
  if ((su1 ^ su2) != 0U) {
    y = su1 != 0U ? -1 : 1;
  } else {
    y = 0;
    i = n;
    while ((y == 0) && (i > 0)) {
      i--;
      su1 = u1[i];
      su2 = u2[i];
      if (su1 != su2) {
        y = su1 > su2 ? 1 : -1;
      }
    }
  }

  return y;
}

boolean_T sMultiWordLt(const uint32_T u1[], const uint32_T u2[], int32_T n)
{
  return sMultiWordCmp(u1, u2, n) < 0 ? (int32_T)1 : (int32_T)0;
}

void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T absIn0;
  uint32_T absIn1;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  absIn0 = (uint32_T)(in0 < 0 ? -in0 : in0);
  absIn1 = (uint32_T)(in1 < 0 ? -in1 : in1);
  in0Hi = absIn0 >> 16U;
  in0Lo = absIn0 & 65535U;
  in1Hi = absIn1 >> 16U;
  absIn0 = absIn1 & 65535U;
  productHiLo = in0Hi * absIn0;
  productLoHi = in0Lo * in1Hi;
  absIn0 *= in0Lo;
  absIn1 = 0U;
  in0Lo = (productLoHi << 16U) + absIn0;
  if (in0Lo < absIn0) {
    absIn1 = 1U;
  }

  absIn0 = in0Lo;
  in0Lo += productHiLo << 16U;
  if (in0Lo < absIn0) {
    absIn1++;
  }

  absIn0 = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi) +
    absIn1;
  if (!((in0 == 0) || ((in1 == 0) || ((in0 > 0) == (in1 > 0))))) {
    absIn0 = ~absIn0;
    in0Lo = ~in0Lo;
    in0Lo++;
    if (in0Lo == 0U) {
      absIn0++;
    }
  }

  *ptrOutBitsHi = absIn0;
  *ptrOutBitsLo = in0Lo;
}

int32_T mul_s32_s32_s32_sat(int32_T a, int32_T b)
{
  int32_T result;
  uint32_T u32_chi;
  uint32_T u32_clo;
  mul_wide_s32(a, b, &u32_chi, &u32_clo);
  if (((int32_T)u32_chi > 0) || ((u32_chi == 0U) && (u32_clo >= 2147483648U))) {
    result = MAX_int32_T;
  } else if (((int32_T)u32_chi < -1) || (((int32_T)u32_chi == -1) && (u32_clo <
               2147483648U))) {
    result = MIN_int32_T;
  } else {
    result = (int32_T)u32_clo;
  }

  return result;
}

/* Initial conditions for function-call system: '<S1>/Motor_XHHY' */
void motor_Motor_XHHY_Init(RT_MODEL_motor * const motor_M, rtDW_Motor_XHHY_motor
  *localDW, rtP_Motor_XHHY_motor *localP)
{
  uint32_T prevT_idx_0;
  uint32_T prevT_idx_1;
  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_XHHY_PREV_T[0] = prevT_idx_0;
  localDW->Motor_XHHY_PREV_T[1] = prevT_idx_1;

  /* InitializeConditions for DiscreteIntegrator: '<S50>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i = localP->DiscreteTimeIntegrator_IC_l;
  localDW->DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S51>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE = localP->DiscreteTimeIntegrator1_IC;
}

/* Output and update for function-call system: '<S1>/Motor_XHHY' */
void motor_Motor_XHHY(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In, int32_T
                      rtu_Encode_Pos, int32_T rtu_Encode_Sp, uint8_T
                      rtu_Slect_port, int32_T rtu_SGWY_In, rtB_Motor_XHHY_motor *
                      localB, rtDW_Motor_XHHY_motor *localDW,
                      rtP_Motor_XHHY_motor *localP, real_T *rtd_Angle_extern,
                      real_T *rtd_Angle_internal, uint8_T *rtd_EN_extern,
                      int32_T *rtd_JD_XHHY, int32_T *rtd_JD_XHHY_HC, uint8_T
                      *rtd_KG_En, uint8_T *rtd_KG_JD, uint8_T *rtd_KG_clc,
                      real_T *rtd_P_KP, real_T *rtd_V_KI, real_T *rtd_V_KP,
                      real_T *rtd_chu_jd)
{
  uint32_T elapseT_H;
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  int64m_T tmp;
  int64m_T tmp_0;
  int128m_T tmp_1;
  real_T u0;
  real_T u1;
  real_T u2;
  prevT_idx_0 = localDW->Motor_XHHY_PREV_T[0];
  prevT_idx_1 = localDW->Motor_XHHY_PREV_T[1];
  elapseTime_idx_0 = motor_M->Timing.clockTick0 - prevT_idx_0;
  elapseT_H = motor_M->Timing.clockTickH0 - prevT_idx_1;
  if (prevT_idx_0 > motor_M->Timing.clockTick0) {
    elapseT_H--;
  }

  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_XHHY_ELAPS_T[0] = elapseTime_idx_0;
  localDW->Motor_XHHY_PREV_T[0] = prevT_idx_0;
  localDW->Motor_XHHY_ELAPS_T[1] = elapseT_H;
  localDW->Motor_XHHY_PREV_T[1] = prevT_idx_1;

  /* DataStoreRead: '<S9>/chu_jd' */
  localB->chu_jd = *rtd_chu_jd;

  /* DataStoreRead: '<S9>/Data Store Read1' */
  localB->DataStoreRead1 = *rtd_Angle_extern;

  /* DataStoreRead: '<S9>/Data Store Read2' */
  localB->DataStoreRead2 = *rtd_Angle_internal;

  /* DataStoreRead: '<S9>/KG_En' */
  localB->KG_En = *rtd_KG_En;

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  localB->DataTypeConversion1 = rtu_Encode_Pos;

  /* Gain: '<S9>/GXZ6' */
  localB->GXZ6 = localP->GXZ6_Gain * localB->DataTypeConversion1;

  /* Gain: '<S9>/GXZ1' */
  localB->GXZ1 = localP->GXZ1_Gain * localB->GXZ6;

  /* Gain: '<S9>/GXZ9' */
  localB->GXZ9 = localP->GXZ9_Gain * localB->GXZ1;

  /* Product: '<S9>/Product' */
  localB->Product = (real_T)localB->KG_En * localB->GXZ9;

  /* DataStoreRead: '<S9>/EN_extern' */
  localB->EN_extern = *rtd_EN_extern;

  /* DataTypeConversion: '<S9>/Data Type Conversion3' */
  localB->DataTypeConversion3 = rtu_SGWY_In;

  /* Gain: '<S9>/GXZ2' */
  localB->GXZ2 = localP->GXZ2_Gain * localB->DataTypeConversion3;

  /* Fcn: '<S57>/Fcn1' */
  localB->Fcn1 = localB->GXZ2 + 265.5;

  /* Fcn: '<S57>/Fcn2' */
  localB->Fcn2 = (90490.25 - localB->Fcn1 * localB->Fcn1) / 20000.0;

  /* Fcn: '<S57>/Fcn3' */
  u0 = (7.0490249999999985 - localB->Fcn2 * localB->Fcn2) + 1.0;
  if (u0 < 0.0) {
    u0 = -sqrt(-u0);
  } else {
    u0 = sqrt(u0);
  }

  localB->Fcn3 = (2.655 - u0) / (localB->Fcn2 + 1.0);

  /* End of Fcn: '<S57>/Fcn3' */

  /* Fcn: '<S57>/Fcn6' */
  localB->Fcn6 = 2.0 * atan(localB->Fcn3);

  /* Fcn: '<S57>/Fcn4' */
  localB->Fcn4 = 2.655 * cos(localB->Fcn6);

  /* Fcn: '<S57>/Fcn10' */
  localB->Fcn10 = localB->Fcn4 * localB->Fcn4 + 1.0;

  /* Gain: '<S9>/GXZ7' */
  localB->GXZ7 = localP->GXZ7_Gain * localB->GXZ6;

  /* Fcn: '<S57>/Fcn5' */
  localB->Fcn5 = localB->GXZ7 + 265.5;

  /* Fcn: '<S57>/Fcn7' */
  localB->Fcn7 = (90490.25 - localB->Fcn5 * localB->Fcn5) / 20000.0;

  /* Fcn: '<S57>/Fcn8' */
  localB->Fcn8 = localB->Fcn7 * localB->Fcn7;

  /* Sum: '<S57>/Sum3' */
  localB->Sum3 = localB->Fcn10 - localB->Fcn8;

  /* Fcn: '<S57>/Fcn11' */
  u0 = localB->Sum3;
  if (u0 < 0.0) {
    u0 = -sqrt(-u0);
  } else {
    u0 = sqrt(u0);
  }

  localB->Fcn11 = u0;

  /* End of Fcn: '<S57>/Fcn11' */

  /* Sum: '<S57>/Sum2' */
  localB->Sum2 = localB->Fcn4 - localB->Fcn11;

  /* Fcn: '<S57>/Fcn9' */
  localB->Fcn9 = 1.0 / (localB->Fcn7 + 1.0);

  /* Product: '<S57>/Product' */
  localB->Product_p = localB->Sum2 * localB->Fcn9;

  /* Fcn: '<S57>/Fcn12' */
  localB->Fcn12 = 2.0 * atan(localB->Product_p);

  /* Gain: '<S9>/GXH7' */
  localB->GXH7 = localP->GXH7_Gain * localB->Fcn12;

  /* Product: '<S9>/Product3' */
  localB->Product3 = (real_T)localB->EN_extern * localB->GXH7;

  /* Sum: '<S9>/Sum2' */
  localB->Sum2_m = (localB->DataStoreRead2 + localB->Product) - localB->Product3;

  /* Sum: '<S9>/Sum' */
  localB->Sum = (localB->chu_jd + localB->DataStoreRead1) - localB->Sum2_m;

  /* Saturate: '<S9>/XF_XHZY1' */
  u0 = localB->Sum;
  u1 = localP->XF_XHZY1_LowerSat;
  u2 = localP->XF_XHZY1_UpperSat;
  if (u0 > u2) {
    localB->XF_XHZY1 = u2;
  } else if (u0 < u1) {
    localB->XF_XHZY1 = u1;
  } else {
    localB->XF_XHZY1 = u0;
  }

  /* End of Saturate: '<S9>/XF_XHZY1' */

  /* Gain: '<S9>/CDB_XHHY' */
  localB->CDB_XHHY = localP->CDB_XHHY_Gain * localB->XF_XHZY1;

  /* DiscreteIntegrator: '<S50>/Discrete-Time Integrator' */
  localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

  /* DataStoreRead: '<S50>/P_KP' */
  localB->P_KP = *rtd_P_KP;

  /* Product: '<S50>/Product' */
  localB->Product_h = localB->CDB_XHHY * localB->P_KP;

  /* Gain: '<S50>/ZP_Kp2' */
  localB->ZP_Kp2 = localP->ZP_Kp2_Gain * localB->Product_h;

  /* Gain: '<S50>/ZV_KD1' */
  localB->ZV_KD1 = localP->ZV_KD1_Gain * localB->ZP_Kp2;

  /* Sum: '<S50>/Sum' */
  localB->Sum_p = localB->ZV_KD1 - localB->DiscreteTimeIntegrator;

  /* Gain: '<S50>/ZP_KN' */
  localB->ZP_KN = localP->ZP_KN_Gain * localB->Sum_p;

  /* Gain: '<S50>/KD_KG' */
  localB->KD_KG = localP->KD_KG_Gain * localB->ZP_KN;

  /* Gain: '<S50>/ZP_Kp1' */
  localB->ZP_Kp1 = localP->ZP_Kp1_Gain * localB->Product_h;

  /* Sum: '<S50>/Sum1' */
  localB->Sum1 = localB->ZP_Kp1 + localB->KD_KG;

  /* DataStoreRead: '<S51>/KG_clc' */
  localB->KG_clc = *rtd_KG_clc;

  /* DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */
  if (((localB->KG_clc > 0) && (localDW->DiscreteTimeIntegrator_PrevRese <= 0)) ||
      ((localB->KG_clc <= 0) && (localDW->DiscreteTimeIntegrator_PrevRese == 1)))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_i =
      localP->DiscreteTimeIntegrator_IC_l;
  }

  if (localDW->DiscreteTimeIntegrator_DSTATE_i >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_i =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_i <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE_i =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  localB->DiscreteTimeIntegrator_b = localDW->DiscreteTimeIntegrator_DSTATE_i;

  /* End of DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */

  /* DiscreteIntegrator: '<S51>/Discrete-Time Integrator1' */
  localB->DiscreteTimeIntegrator1 = localDW->DiscreteTimeIntegrator1_DSTATE;

  /* Saturate: '<S9>/Saturation' */
  u0 = localB->Sum1;
  u1 = localP->Saturation_LowerSat;
  u2 = localP->Saturation_UpperSat;
  if (u0 > u2) {
    localB->Saturation = u2;
  } else if (u0 < u1) {
    localB->Saturation = u1;
  } else {
    localB->Saturation = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Gain: '<S9>/GXZ4' */
  prevT_idx_0 = (uint32_T)localP->GXZ4_Gain;
  prevT_idx_1 = (uint32_T)rtu_Encode_Sp;
  sMultiWordMul(&prevT_idx_0, 1, &prevT_idx_1, 1, &tmp.chunks[0U], 2);
  localB->GXZ4 = tmp;

  /* Gain: '<S9>/GXZ5' */
  tmp = localP->GXZ5_Gain;
  tmp_0 = localB->GXZ4;
  sMultiWordMul(&tmp.chunks[0U], 2, &tmp_0.chunks[0U], 2, &tmp_1.chunks[0U], 4);
  localB->GXZ5 = tmp_1;

  /* Sum: '<S9>/Sum1' */
  tmp_1 = localB->GXZ5;
  localB->Sum1_d = localB->Saturation - sMultiWord2Double(&tmp_1.chunks[0U], 4,
    0) * 2.0194839173657902E-28;

  /* Gain: '<S51>/ZV_Kp' */
  localB->ZV_Kp = localP->ZV_Kp_Gain * localB->Sum1_d;

  /* Gain: '<S51>/ZV_Kp1' */
  localB->ZV_Kp1 = localP->ZV_Kp1_Gain * localB->ZV_Kp;

  /* Gain: '<S51>/ZV_KD' */
  localB->ZV_KD = localP->ZV_KD_Gain * localB->ZV_Kp1;

  /* Sum: '<S51>/Sum' */
  localB->Sum_b = localB->ZV_KD - localB->DiscreteTimeIntegrator1;

  /* Gain: '<S51>/ZV_KN' */
  localB->ZV_KN = localP->ZV_KN_Gain * localB->Sum_b;

  /* Saturate: '<S51>/Saturation' */
  u0 = localB->ZV_KN;
  u1 = localP->Saturation_LowerSat_l;
  u2 = localP->Saturation_UpperSat_l;
  if (u0 > u2) {
    localB->Saturation_a = u2;
  } else if (u0 < u1) {
    localB->Saturation_a = u1;
  } else {
    localB->Saturation_a = u0;
  }

  /* End of Saturate: '<S51>/Saturation' */

  /* Gain: '<S51>/KD_KG' */
  localB->KD_KG_a = localP->KD_KG_Gain_m * localB->Saturation_a;

  /* DataStoreRead: '<S51>/V_KP' */
  localB->V_KP = *rtd_V_KP;

  /* Product: '<S51>/Product' */
  localB->Product_e = localB->ZV_Kp * localB->V_KP;

  /* DataStoreRead: '<S51>/V_KI' */
  localB->V_KI = *rtd_V_KI;

  /* Product: '<S51>/Product1' */
  localB->Product1 = localB->ZV_Kp * localB->V_KI;

  /* Signum: '<S51>/Sign' */
  u0 = localB->Saturation;
  if (u0 < 0.0) {
    localB->Sign = -1.0;
  } else if (u0 > 0.0) {
    localB->Sign = 1.0;
  } else {
    localB->Sign = u0;
  }

  /* End of Signum: '<S51>/Sign' */

  /* Gain: '<S51>/ZV1_Kp1' */
  localB->ZV1_Kp1 = localP->ZV1_Kp1_Gain * localB->Saturation;

  /* Gain: '<S51>/ZV1_Kp2' */
  localB->ZV1_Kp2 = localP->ZV1_Kp2_Gain * localB->Sign;

  /* Sum: '<S51>/Sum2' */
  localB->Sum2_n = (localB->DiscreteTimeIntegrator_b + localB->Product_e) +
    localB->KD_KG_a;

  /* Sum: '<S51>/Sum1' */
  localB->Sum1_du = (localB->ZV1_Kp1 + localB->ZV1_Kp2) + localB->Sum2_n;

  /* Gain: '<S9>/KP_JD1' */
  localB->KP_JD1 = localP->KP_JD1_Gain * localB->GXH7;

  /* Gain: '<S9>/KP_e' */
  localB->KP_e = localP->KP_e_Gain * localB->Sum;

  /* Saturate: '<S9>/ZXF_PID' */
  u0 = localB->Sum1_du;
  u1 = localP->ZXF_PID_LowerSat;
  u2 = localP->ZXF_PID_UpperSat;
  if (u0 > u2) {
    localB->ZXF_PID = u2;
  } else if (u0 < u1) {
    localB->ZXF_PID = u1;
  } else {
    localB->ZXF_PID = u0;
  }

  /* End of Saturate: '<S9>/ZXF_PID' */

  /* Sum: '<S9>/Subtract' incorporates:
   *  Constant: '<S9>/Con_ZPWM'
   */
  localB->Subtract = localB->ZXF_PID + localP->Con_ZPWM_Value;

  /* Saturate: '<S9>/ZXF_PWM' */
  u0 = localB->Subtract;
  u1 = localP->ZXF_PWM_LowerSat;
  u2 = localP->ZXF_PWM_UpperSat;
  if (u0 > u2) {
    localB->ZXF_PWM = u2;
  } else if (u0 < u1) {
    localB->ZXF_PWM = u1;
  } else {
    localB->ZXF_PWM = u0;
  }

  /* End of Saturate: '<S9>/ZXF_PWM' */

  /* If: '<S9>/If' */
  if (rtu_Slect_port == 5) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    /* DataStoreWrite: '<S54>/Data Store Write' */
    *rtd_JD_XHHY_HC = rtu_JD_In;

    /* DataStoreWrite: '<S54>/Data Store Write1' */
    *rtd_JD_XHHY = rtu_JD_In;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem3' */
  } else if (rtu_Slect_port == 4) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    /* DataStoreRead: '<S52>/Data Store Read' */
    localB->DataStoreRead_c = *rtd_JD_XHHY_HC;

    /* DataStoreWrite: '<S52>/Data Store Write1' */
    *rtd_JD_XHHY = localB->DataStoreRead_c;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    /* DataStoreWrite: '<S53>/Data Store Write' */
    *rtd_JD_XHHY_HC = rtu_JD_In;

    /* DataStoreWrite: '<S53>/Data Store Write1' */
    *rtd_JD_XHHY = rtu_JD_In;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem2' */
  }

  /* End of If: '<S9>/If' */

  /* DataStoreRead: '<S9>/KG_JD1' */
  localB->KG_JD1 = *rtd_EN_extern;

  /* DataStoreRead: '<S9>/KG_JD' */
  localB->KG_JD = *rtd_KG_JD;

  /* DataTypeConversion: '<S9>/Data Type Conversion4' */
  localB->DataTypeConversion4 = localB->KG_JD;

  /* DataStoreRead: '<S9>/Data Store Read' */
  localB->DataStoreRead = *rtd_JD_XHHY;

  /* DataTypeConversion: '<S9>/Data Type Conversion2' */
  localB->DataTypeConversion2 = localB->DataStoreRead;

  /* Gain: '<S9>/GXZ3' */
  localB->GXZ3 = localP->GXZ3_Gain * localB->DataTypeConversion2;

  /* Saturate: '<S9>/XF_XHZY' */
  u0 = localB->GXZ3;
  u1 = localP->XF_XHZY_LowerSat;
  u2 = localP->XF_XHZY_UpperSat;
  if (u0 > u2) {
    localB->XF_XHZY = u2;
  } else if (u0 < u1) {
    localB->XF_XHZY = u1;
  } else {
    localB->XF_XHZY = u0;
  }

  /* End of Saturate: '<S9>/XF_XHZY' */

  /* Product: '<S9>/Product1' */
  localB->Product1_l = localB->DataTypeConversion4 * localB->XF_XHZY;

  /* If: '<S9>/If1' */
  if (localB->KG_JD1 > 0) {
    /* Outputs for IfAction SubSystem: '<S9>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    /* DataStoreWrite: '<S55>/Data Store Write' */
    *rtd_Angle_extern = localB->Product1_l;

    /* DataStoreWrite: '<S55>/Data Store Write1' incorporates:
     *  Constant: '<S55>/Constant'
     */
    *rtd_Angle_internal = localP->Constant_Value;

    /* End of Outputs for SubSystem: '<S9>/Switch Case Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S9>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    /* DataStoreWrite: '<S56>/Data Store Write1' */
    *rtd_Angle_internal = localB->Product1_l;

    /* DataStoreWrite: '<S56>/Data Store Write' incorporates:
     *  Constant: '<S56>/Constant'
     */
    *rtd_Angle_extern = localP->Constant_Value_a;

    /* End of Outputs for SubSystem: '<S9>/Switch Case Action Subsystem1' */
  }

  /* End of If: '<S9>/If1' */

  /* Update for DiscreteIntegrator: '<S50>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * (real_T)localDW->
    Motor_XHHY_ELAPS_T[0] * localB->ZP_KN;

  /* Update for DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i +=
    localP->DiscreteTimeIntegrator_gainva_j * (real_T)
    localDW->Motor_XHHY_ELAPS_T[0] * localB->Product1;
  if (localDW->DiscreteTimeIntegrator_DSTATE_i >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_i =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_i <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE_i =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  localDW->DiscreteTimeIntegrator_PrevRese = (int8_T)(localB->KG_clc > 0);

  /* End of Update for DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S51>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE +=
    localP->DiscreteTimeIntegrator1_gainval * (real_T)
    localDW->Motor_XHHY_ELAPS_T[0] * localB->ZV_KN;
  if (localDW->DiscreteTimeIntegrator1_DSTATE >=
      localP->DiscreteTimeIntegrator1_UpperSa) {
    localDW->DiscreteTimeIntegrator1_DSTATE =
      localP->DiscreteTimeIntegrator1_UpperSa;
  } else {
    if (localDW->DiscreteTimeIntegrator1_DSTATE <=
        localP->DiscreteTimeIntegrator1_LowerSa) {
      localDW->DiscreteTimeIntegrator1_DSTATE =
        localP->DiscreteTimeIntegrator1_LowerSa;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S51>/Discrete-Time Integrator1' */
}

/* Initial conditions for function-call system: '<S1>/Motor_HYDG' */
void motor_Motor_HYDG_Init(RT_MODEL_motor * const motor_M, rtDW_Motor_HYDG_motor
  *localDW, rtP_Motor_HYDG_motor *localP)
{
  uint32_T prevT_idx_0;
  uint32_T prevT_idx_1;
  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_HYDG_PREV_T[0] = prevT_idx_0;
  localDW->Motor_HYDG_PREV_T[1] = prevT_idx_1;

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i = localP->DiscreteTimeIntegrator_IC_b;
  localDW->DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S36>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE = localP->DiscreteTimeIntegrator1_IC;
}

/* Output and update for function-call system: '<S1>/Motor_HYDG' */
void motor_Motor_HYDG(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In, int32_T
                      rtu_Encode_Pos, uint8_T rtu_Slect_port, int32_T
                      rtu_Encode_Sp, rtB_Motor_HYDG_motor *localB,
                      rtDW_Motor_HYDG_motor *localDW, rtP_Motor_HYDG_motor
                      *localP, int32_T *rtd_JD_HYDG, int32_T *rtd_JD_HYDG_HC,
                      uint8_T *rtd_KG_JD, uint8_T *rtd_KG_clc, real_T
                      *rtd_chu_jd)
{
  int128m_T tmp;
  int128m_T tmp_0;
  uint32_T elapseT_H;
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  int64m_T tmp_1;
  int64m_T tmp_2;
  int128m_T tmp_3;
  int128m_T tmp_4;
  real_T u0;
  real_T u1;
  real_T u2;
  prevT_idx_0 = localDW->Motor_HYDG_PREV_T[0];
  prevT_idx_1 = localDW->Motor_HYDG_PREV_T[1];
  elapseTime_idx_0 = motor_M->Timing.clockTick0 - prevT_idx_0;
  elapseT_H = motor_M->Timing.clockTickH0 - prevT_idx_1;
  if (prevT_idx_0 > motor_M->Timing.clockTick0) {
    elapseT_H--;
  }

  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_HYDG_ELAPS_T[0] = elapseTime_idx_0;
  localDW->Motor_HYDG_PREV_T[0] = prevT_idx_0;
  localDW->Motor_HYDG_ELAPS_T[1] = elapseT_H;
  localDW->Motor_HYDG_PREV_T[1] = prevT_idx_1;

  /* DataStoreRead: '<S7>/chu_jd' */
  localB->chu_jd = *rtd_chu_jd;

  /* DataStoreRead: '<S7>/KG_JD' */
  localB->KG_JD = *rtd_KG_JD;

  /* DataStoreRead: '<S7>/Data Store Read' */
  localB->DataStoreRead = *rtd_JD_HYDG;

  /* Gain: '<S7>/GHDG10' */
  prevT_idx_0 = (uint32_T)localP->GHDG10_Gain;
  prevT_idx_1 = (uint32_T)localB->DataStoreRead;
  sMultiWordMul(&prevT_idx_0, 1, &prevT_idx_1, 1, &tmp_1.chunks[0U], 2);
  localB->GHDG10 = tmp_1;

  /* Gain: '<S7>/GHDG1' */
  tmp_1 = localP->GHDG1_Gain;
  tmp_2 = localB->GHDG10;
  sMultiWordMul(&tmp_1.chunks[0U], 2, &tmp_2.chunks[0U], 2, &tmp_3.chunks[0U], 4);
  localB->GHDG1 = tmp_3;

  /* Saturate: '<S7>/XF_XHZY' */
  tmp_3 = localB->GHDG1;
  tmp = localP->XF_XHZY_LowerSat;
  tmp_0 = localP->XF_XHZY_UpperSat;
  if (sMultiWordGt(&tmp_3.chunks[0U], &tmp_0.chunks[0U], 4)) {
    localB->XF_XHZY = tmp_0;
  } else if (sMultiWordLt(&tmp_3.chunks[0U], &tmp.chunks[0U], 4)) {
    localB->XF_XHZY = tmp;
  } else {
    localB->XF_XHZY = tmp_3;
  }

  /* End of Saturate: '<S7>/XF_XHZY' */

  /* Product: '<S7>/Product' */
  tmp_3 = localB->XF_XHZY;
  localB->Product = sMultiWord2Double(&tmp_3.chunks[0U], 4, 0) *
    1.9721522630525295E-31 * (real_T)localB->KG_JD;

  /* DataTypeConversion: '<S7>/Data Type Conversion1' */
  localB->DataTypeConversion1 = rtu_Encode_Pos;

  /* Gain: '<S7>/GHDG5' */
  localB->GHDG5 = localP->GHDG5_Gain * localB->DataTypeConversion1;

  /* Gain: '<S40>/GHDG7' */
  localB->GHDG7 = localP->GHDG7_Gain * localB->GHDG5;

  /* Gain: '<S40>/GHDG8' */
  localB->GHDG8 = localP->GHDG8_Gain * localB->GHDG7;

  /* Fcn: '<S41>/Fcn7' */
  localB->Fcn7 = localB->GHDG8 + 0.2655;

  /* Fcn: '<S41>/Cl1' */
  localB->Cl1 = (0.090490250000000008 - localB->Fcn7 * localB->Fcn7) /
    0.020000000000000004;

  /* Fcn: '<S41>/Fcn' */
  u0 = (7.0490249999999985 - localB->Cl1 * localB->Cl1) + 1.0;
  if (u0 < 0.0) {
    u0 = -sqrt(-u0);
  } else {
    u0 = sqrt(u0);
  }

  localB->Fcn = (2.655 - u0) / (localB->Cl1 + 1.0);

  /* End of Fcn: '<S41>/Fcn' */

  /* Fcn: '<S41>/Fcn4' */
  localB->Fcn4 = 2.0 * atan(localB->Fcn);

  /* Gain: '<S40>/GHDG9' */
  localB->GHDG9 = localP->GHDG9_Gain * localB->Fcn4;

  /* Gain: '<S7>/fk_dg' */
  localB->fk_dg = localP->fk_dg_Gain * localB->GHDG9;

  /* Sum: '<S7>/Sum' */
  localB->Sum = (localB->chu_jd + localB->Product) - localB->fk_dg;

  /* Saturate: '<S7>/JD_e(k)' */
  u0 = localB->Sum;
  u1 = localP->JD_ek_LowerSat;
  u2 = localP->JD_ek_UpperSat;
  if (u0 > u2) {
    localB->JD_ek = u2;
  } else if (u0 < u1) {
    localB->JD_ek = u1;
  } else {
    localB->JD_ek = u0;
  }

  /* End of Saturate: '<S7>/JD_e(k)' */

  /* Gain: '<S7>/CDB_XHHY' */
  localB->CDB_XHHY = localP->CDB_XHHY_Gain * localB->JD_ek;

  /* DiscreteIntegrator: '<S35>/Discrete-Time Integrator' */
  localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

  /* Gain: '<S35>/ZP_Kp' */
  localB->ZP_Kp = localP->ZP_Kp_Gain * localB->CDB_XHHY;

  /* Gain: '<S35>/ZP_Kp2' */
  localB->ZP_Kp2 = localP->ZP_Kp2_Gain * localB->ZP_Kp;

  /* Gain: '<S35>/ZV_KD1' */
  localB->ZV_KD1 = localP->ZV_KD1_Gain * localB->ZP_Kp2;

  /* Sum: '<S35>/Sum' */
  localB->Sum_g = localB->ZV_KD1 - localB->DiscreteTimeIntegrator;

  /* Gain: '<S35>/ZP_KN' */
  localB->ZP_KN = localP->ZP_KN_Gain * localB->Sum_g;

  /* Gain: '<S35>/KD_KG' */
  localB->KD_KG = localP->KD_KG_Gain * localB->ZP_KN;

  /* Gain: '<S35>/ZP_Kp1' */
  localB->ZP_Kp1 = localP->ZP_Kp1_Gain * localB->ZP_Kp;

  /* Sum: '<S35>/Sum1' */
  localB->Sum1 = localB->ZP_Kp1 + localB->KD_KG;

  /* DataStoreRead: '<S36>/KG_clc' */
  localB->KG_clc = *rtd_KG_clc;

  /* DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */
  if (((localB->KG_clc > 0) && (localDW->DiscreteTimeIntegrator_PrevRese <= 0)) ||
      ((localB->KG_clc <= 0) && (localDW->DiscreteTimeIntegrator_PrevRese == 1)))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_i =
      localP->DiscreteTimeIntegrator_IC_b;
  }

  if (localDW->DiscreteTimeIntegrator_DSTATE_i >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_i =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_i <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE_i =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  localB->DiscreteTimeIntegrator_o = localDW->DiscreteTimeIntegrator_DSTATE_i;

  /* End of DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */

  /* DiscreteIntegrator: '<S36>/Discrete-Time Integrator1' */
  localB->DiscreteTimeIntegrator1 = localDW->DiscreteTimeIntegrator1_DSTATE;

  /* Saturate: '<S7>/Saturation' */
  u0 = localB->Sum1;
  u1 = localP->Saturation_LowerSat;
  u2 = localP->Saturation_UpperSat;
  if (u0 > u2) {
    localB->Saturation = u2;
  } else if (u0 < u1) {
    localB->Saturation = u1;
  } else {
    localB->Saturation = u0;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Gain: '<S7>/GXZ4' incorporates:
   *  Gain: '<S7>/GHDG1'
   */
  prevT_idx_0 = (uint32_T)localP->GXZ4_Gain;
  prevT_idx_1 = (uint32_T)rtu_Encode_Sp;
  sMultiWordMul(&prevT_idx_0, 1, &prevT_idx_1, 1, &tmp_1.chunks[0U], 2);
  localB->GXZ4 = tmp_1;

  /* Gain: '<S7>/GXZ5' */
  tmp_2 = localP->GXZ5_Gain;
  tmp_1 = localB->GXZ4;
  sMultiWordMul(&tmp_2.chunks[0U], 2, &tmp_1.chunks[0U], 2, &tmp_4.chunks[0U], 4);
  localB->GXZ5 = tmp_4;

  /* Sum: '<S7>/Sum2' */
  tmp_3 = localB->GXZ5;
  localB->Sum2 = localB->Saturation - sMultiWord2Double(&tmp_3.chunks[0U], 4, 0)
    * 4.0389678347315804E-28;

  /* Gain: '<S36>/ZV_Kp' */
  localB->ZV_Kp = localP->ZV_Kp_Gain * localB->Sum2;

  /* Gain: '<S36>/ZV_Kp1' */
  localB->ZV_Kp1 = localP->ZV_Kp1_Gain * localB->ZV_Kp;

  /* Gain: '<S36>/ZV_KD' */
  localB->ZV_KD = localP->ZV_KD_Gain * localB->ZV_Kp1;

  /* Sum: '<S36>/Sum' */
  localB->Sum_n = localB->ZV_KD - localB->DiscreteTimeIntegrator1;

  /* Gain: '<S36>/ZV_KN' */
  localB->ZV_KN = localP->ZV_KN_Gain * localB->Sum_n;

  /* Saturate: '<S36>/Saturation' */
  u0 = localB->ZV_KN;
  u1 = localP->Saturation_LowerSat_i;
  u2 = localP->Saturation_UpperSat_m;
  if (u0 > u2) {
    localB->Saturation_b = u2;
  } else if (u0 < u1) {
    localB->Saturation_b = u1;
  } else {
    localB->Saturation_b = u0;
  }

  /* End of Saturate: '<S36>/Saturation' */

  /* Gain: '<S36>/KD_KG' */
  localB->KD_KG_l = localP->KD_KG_Gain_l * localB->Saturation_b;

  /* Signum: '<S36>/Sign' */
  u0 = localB->Saturation;
  if (u0 < 0.0) {
    localB->Sign = -1.0;
  } else if (u0 > 0.0) {
    localB->Sign = 1.0;
  } else {
    localB->Sign = u0;
  }

  /* End of Signum: '<S36>/Sign' */

  /* Gain: '<S36>/ZV1_Kp1' */
  localB->ZV1_Kp1 = localP->ZV1_Kp1_Gain * localB->Saturation;

  /* Gain: '<S36>/ZV1_Kp2' */
  localB->ZV1_Kp2 = localP->ZV1_Kp2_Gain * localB->Sign;

  /* Gain: '<S36>/ZV_Ki1' */
  localB->ZV_Ki1 = localP->ZV_Ki1_Gain * localB->DiscreteTimeIntegrator_o;

  /* Gain: '<S36>/ZV_Kpt' */
  localB->ZV_Kpt = localP->ZV_Kpt_Gain * localB->ZV_Kp;

  /* Sum: '<S36>/Sum2' */
  localB->Sum2_e = (localB->ZV_Ki1 + localB->ZV_Kpt) + localB->KD_KG_l;

  /* Sum: '<S36>/Sum1' */
  localB->Sum1_g = (localB->ZV1_Kp1 + localB->ZV1_Kp2) + localB->Sum2_e;

  /* Saturate: '<S7>/XF_PID' */
  u0 = localB->Sum1_g;
  u1 = localP->XF_PID_LowerSat;
  u2 = localP->XF_PID_UpperSat;
  if (u0 > u2) {
    localB->XF_PID = u2;
  } else if (u0 < u1) {
    localB->XF_PID = u1;
  } else {
    localB->XF_PID = u0;
  }

  /* End of Saturate: '<S7>/XF_PID' */

  /* Sum: '<S7>/Sum3' incorporates:
   *  Constant: '<S7>/Constant'
   */
  localB->Sum3 = localB->XF_PID + localP->Constant_Value;

  /* Saturate: '<S7>/XF_PWM' */
  u0 = localB->Sum3;
  u1 = localP->XF_PWM_LowerSat;
  u2 = localP->XF_PWM_UpperSat;
  if (u0 > u2) {
    localB->XF_PWM = u2;
  } else if (u0 < u1) {
    localB->XF_PWM = u1;
  } else {
    localB->XF_PWM = u0;
  }

  /* End of Saturate: '<S7>/XF_PWM' */

  /* DataTypeConversion: '<S7>/Data Type Conversion3' */
  u0 = fmod(floor(localB->XF_PWM), 65536.0);
  localB->DataTypeConversion3 = (uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(uint16_T)u0);

  /* Gain: '<S7>/KP_JD' */
  localB->KP_JD = localP->KP_JD_Gain * localB->fk_dg;

  /* Gain: '<S7>/KP_e' */
  localB->KP_e = localP->KP_e_Gain * localB->Sum;

  /* If: '<S7>/If' */
  if (rtu_Slect_port == 5) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    /* DataStoreWrite: '<S37>/Data Store Write' */
    *rtd_JD_HYDG_HC = rtu_JD_In;

    /* DataStoreWrite: '<S37>/Data Store Write1' */
    *rtd_JD_HYDG = rtu_JD_In;

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
  } else if (rtu_Slect_port == 4) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    /* DataStoreRead: '<S38>/Data Store Read' */
    localB->DataStoreRead_e = *rtd_JD_HYDG_HC;

    /* DataStoreWrite: '<S38>/Data Store Write1' */
    *rtd_JD_HYDG = localB->DataStoreRead_e;

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* DataStoreWrite: '<S39>/Data Store Write' */
    *rtd_JD_HYDG_HC = rtu_JD_In;

    /* DataStoreWrite: '<S39>/Data Store Write1' */
    *rtd_JD_HYDG = rtu_JD_In;

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem2' */
  }

  /* End of If: '<S7>/If' */

  /* Update for DiscreteIntegrator: '<S35>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * (real_T)localDW->
    Motor_HYDG_ELAPS_T[0] * localB->ZP_KN;

  /* Update for DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i +=
    localP->DiscreteTimeIntegrator_gainva_p * (real_T)
    localDW->Motor_HYDG_ELAPS_T[0] * localB->ZV_Kp;
  if (localDW->DiscreteTimeIntegrator_DSTATE_i >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_i =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_i <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE_i =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  localDW->DiscreteTimeIntegrator_PrevRese = (int8_T)(localB->KG_clc > 0);

  /* End of Update for DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S36>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE +=
    localP->DiscreteTimeIntegrator1_gainval * (real_T)
    localDW->Motor_HYDG_ELAPS_T[0] * localB->ZV_KN;
}

/* Initial conditions for function-call system: '<S1>/Motor_XHZY' */
void motor_Motor_XHZY_Init(RT_MODEL_motor * const motor_M, rtDW_Motor_XHZY_motor
  *localDW, rtP_Motor_XHZY_motor *localP)
{
  uint32_T prevT_idx_0;
  uint32_T prevT_idx_1;
  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_XHZY_PREV_T[0] = prevT_idx_0;
  localDW->Motor_XHZY_PREV_T[1] = prevT_idx_1;

  /* InitializeConditions for DiscreteIntegrator: '<S58>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_c = localP->DiscreteTimeIntegrator_IC_l;
  localDW->DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S59>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE = localP->DiscreteTimeIntegrator1_IC;
}

/* Output and update for function-call system: '<S1>/Motor_XHZY' */
void motor_Motor_XHZY(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In, int32_T
                      rtu_Encode_Pos, int32_T rtu_YJ_In, int32_T rtu_Encode_Sp,
                      uint8_T rtu_Slect_port, rtB_Motor_XHZY_motor *localB,
                      rtDW_Motor_XHZY_motor *localDW, rtP_Motor_XHZY_motor
                      *localP, real_T *rtd_Angle_extern, real_T
                      *rtd_Angle_internal, uint8_T *rtd_EN_extern, uint8_T
                      *rtd_Forword, int32_T *rtd_JD_XHZY, int32_T
                      *rtd_JD_XHZY_HC, uint8_T *rtd_KG_En, uint8_T *rtd_KG_JD,
                      uint8_T *rtd_KG_YJ, uint8_T *rtd_KG_clc, real_T *rtd_P_KP,
                      real_T *rtd_V_KI, real_T *rtd_V_KP, int32_T *rtd_YJ_XHZY,
                      int32_T *rtd_YJ_XHZY_HC, real_T *rtd_chu_jd)
{
  uint32_T elapseT_H;
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  int64m_T tmp;
  int64m_T tmp_0;
  int128m_T tmp_1;
  real_T u1;
  real_T u2;
  real_T u;
  prevT_idx_0 = localDW->Motor_XHZY_PREV_T[0];
  prevT_idx_1 = localDW->Motor_XHZY_PREV_T[1];
  elapseTime_idx_0 = motor_M->Timing.clockTick0 - prevT_idx_0;
  elapseT_H = motor_M->Timing.clockTickH0 - prevT_idx_1;
  if (prevT_idx_0 > motor_M->Timing.clockTick0) {
    elapseT_H--;
  }

  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_XHZY_ELAPS_T[0] = elapseTime_idx_0;
  localDW->Motor_XHZY_PREV_T[0] = prevT_idx_0;
  localDW->Motor_XHZY_ELAPS_T[1] = elapseT_H;
  localDW->Motor_XHZY_PREV_T[1] = prevT_idx_1;

  /* DataStoreRead: '<S10>/chu_jd' */
  localB->chu_jd = *rtd_chu_jd;

  /* DataStoreRead: '<S10>/KG_YJ' */
  localB->KG_YJ = *rtd_KG_YJ;

  /* DataStoreRead: '<S10>/Data Store Read1' */
  localB->DataStoreRead1 = *rtd_YJ_XHZY;

  /* DataTypeConversion: '<S10>/Data Type Conversion3' */
  localB->DataTypeConversion3 = localB->DataStoreRead1;

  /* Gain: '<S10>/GXZ2' */
  localB->GXZ2 = localP->GXZ2_Gain * localB->DataTypeConversion3;

  /* Saturate: '<S10>/XF_YJ' */
  u = localB->GXZ2;
  u1 = localP->XF_YJ_LowerSat;
  u2 = localP->XF_YJ_UpperSat;
  if (u > u2) {
    localB->XF_YJ = u2;
  } else if (u < u1) {
    localB->XF_YJ = u1;
  } else {
    localB->XF_YJ = u;
  }

  /* End of Saturate: '<S10>/XF_YJ' */

  /* Product: '<S10>/Product2' */
  localB->Product2 = (real_T)localB->KG_YJ * localB->XF_YJ;

  /* DataStoreRead: '<S10>/Data Store Read2' */
  localB->DataStoreRead2 = *rtd_Angle_extern;

  /* DataStoreRead: '<S10>/Data Store Read3' */
  localB->DataStoreRead3 = *rtd_Angle_internal;

  /* DataStoreRead: '<S10>/KG_En' */
  localB->KG_En = *rtd_KG_En;

  /* DataTypeConversion: '<S10>/Data Type Conversion1' */
  localB->DataTypeConversion1 = rtu_Encode_Pos;

  /* Gain: '<S10>/GXZ6' */
  localB->GXZ6 = localP->GXZ6_Gain * localB->DataTypeConversion1;

  /* Gain: '<S10>/GXZ1' */
  localB->GXZ1 = localP->GXZ1_Gain * localB->GXZ6;

  /* Gain: '<S10>/GXZ9' */
  localB->GXZ9 = localP->GXZ9_Gain * localB->GXZ1;

  /* Product: '<S10>/Product' */
  localB->Product = (real_T)localB->KG_En * localB->GXZ9;

  /* DataStoreRead: '<S10>/EN_extern' */
  localB->EN_extern = *rtd_EN_extern;

  /* Gain: '<S10>/GXZ7' */
  localB->GXZ7 = localP->GXZ7_Gain * localB->GXZ6;

  /* Fcn: '<S65>/Fcn1' */
  localB->Fcn1 = localB->GXZ7 + 265.5;

  /* Fcn: '<S65>/Fcn2' */
  localB->Fcn2 = (90490.25 - localB->Fcn1 * localB->Fcn1) / 20000.0;

  /* Fcn: '<S65>/Fcn3' */
  u = (7.0490249999999985 - localB->Fcn2 * localB->Fcn2) + 1.0;
  if (u < 0.0) {
    u = -sqrt(-u);
  } else {
    u = sqrt(u);
  }

  localB->Fcn3 = (2.655 - u) / (localB->Fcn2 + 1.0);

  /* End of Fcn: '<S65>/Fcn3' */

  /* Fcn: '<S65>/Fcn6' */
  localB->Fcn6 = 2.0 * atan(localB->Fcn3);

  /* Gain: '<S10>/GXZ8' */
  localB->GXZ8 = localP->GXZ8_Gain * localB->Fcn6;

  /* Product: '<S10>/Product3' */
  localB->Product3 = (real_T)localB->EN_extern * localB->GXZ8;

  /* Sum: '<S10>/Sum2' */
  localB->Sum2 = (localB->DataStoreRead3 + localB->Product) - localB->Product3;

  /* Sum: '<S10>/Sum' */
  localB->Sum = ((localB->chu_jd + localB->Product2) + localB->DataStoreRead2) -
    localB->Sum2;

  /* Saturate: '<S10>/JD_e(k)' */
  u = localB->Sum;
  u1 = localP->JD_ek_LowerSat;
  u2 = localP->JD_ek_UpperSat;
  if (u > u2) {
    localB->JD_ek = u2;
  } else if (u < u1) {
    localB->JD_ek = u1;
  } else {
    localB->JD_ek = u;
  }

  /* End of Saturate: '<S10>/JD_e(k)' */

  /* Gain: '<S10>/CDB_XHHY' */
  localB->CDB_XHHY = localP->CDB_XHHY_Gain * localB->JD_ek;

  /* DiscreteIntegrator: '<S58>/Discrete-Time Integrator' */
  localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

  /* DataStoreRead: '<S58>/P_KP' */
  localB->P_KP = *rtd_P_KP;

  /* Product: '<S58>/Product' */
  localB->Product_k = localB->CDB_XHHY * localB->P_KP;

  /* Gain: '<S58>/ZP_Kp2' */
  localB->ZP_Kp2 = localP->ZP_Kp2_Gain * localB->Product_k;

  /* Gain: '<S58>/ZV_KD1' */
  localB->ZV_KD1 = localP->ZV_KD1_Gain * localB->ZP_Kp2;

  /* Sum: '<S58>/Sum' */
  localB->Sum_e = localB->ZV_KD1 - localB->DiscreteTimeIntegrator;

  /* Gain: '<S58>/ZP_KN' */
  localB->ZP_KN = localP->ZP_KN_Gain * localB->Sum_e;

  /* Gain: '<S58>/KD_KG' */
  localB->KD_KG = localP->KD_KG_Gain * localB->ZP_KN;

  /* Gain: '<S58>/ZP_Kp1' */
  localB->ZP_Kp1 = localP->ZP_Kp1_Gain * localB->Product_k;

  /* Sum: '<S58>/Sum1' */
  localB->Sum1 = localB->ZP_Kp1 + localB->KD_KG;

  /* DataStoreRead: '<S59>/KG_clc' */
  localB->KG_clc = *rtd_KG_clc;

  /* DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */
  if (((localB->KG_clc > 0) && (localDW->DiscreteTimeIntegrator_PrevRese <= 0)) ||
      ((localB->KG_clc <= 0) && (localDW->DiscreteTimeIntegrator_PrevRese == 1)))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_c =
      localP->DiscreteTimeIntegrator_IC_l;
  }

  if (localDW->DiscreteTimeIntegrator_DSTATE_c >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_c =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_c <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE_c =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  localB->DiscreteTimeIntegrator_b = localDW->DiscreteTimeIntegrator_DSTATE_c;

  /* End of DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */

  /* DiscreteIntegrator: '<S59>/Discrete-Time Integrator1' */
  localB->DiscreteTimeIntegrator1 = localDW->DiscreteTimeIntegrator1_DSTATE;

  /* Saturate: '<S10>/Saturation' */
  u = localB->Sum1;
  u1 = localP->Saturation_LowerSat;
  u2 = localP->Saturation_UpperSat;
  if (u > u2) {
    localB->Saturation = u2;
  } else if (u < u1) {
    localB->Saturation = u1;
  } else {
    localB->Saturation = u;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Gain: '<S10>/GXZ4' */
  prevT_idx_0 = (uint32_T)localP->GXZ4_Gain;
  prevT_idx_1 = (uint32_T)rtu_Encode_Sp;
  sMultiWordMul(&prevT_idx_0, 1, &prevT_idx_1, 1, &tmp.chunks[0U], 2);
  localB->GXZ4 = tmp;

  /* Gain: '<S10>/GXZ5' */
  tmp = localP->GXZ5_Gain;
  tmp_0 = localB->GXZ4;
  sMultiWordMul(&tmp.chunks[0U], 2, &tmp_0.chunks[0U], 2, &tmp_1.chunks[0U], 4);
  localB->GXZ5 = tmp_1;

  /* Sum: '<S10>/Sum1' */
  tmp_1 = localB->GXZ5;
  localB->Sum1_n = localB->Saturation - sMultiWord2Double(&tmp_1.chunks[0U], 4,
    0) * 2.0194839173657902E-28;

  /* Gain: '<S59>/ZV_Kp' */
  localB->ZV_Kp = localP->ZV_Kp_Gain * localB->Sum1_n;

  /* Gain: '<S59>/ZV_Kp1' */
  localB->ZV_Kp1 = localP->ZV_Kp1_Gain * localB->ZV_Kp;

  /* Gain: '<S59>/ZV_KD' */
  localB->ZV_KD = localP->ZV_KD_Gain * localB->ZV_Kp1;

  /* Sum: '<S59>/Sum' */
  localB->Sum_i = localB->ZV_KD - localB->DiscreteTimeIntegrator1;

  /* Gain: '<S59>/ZV_KN' */
  localB->ZV_KN = localP->ZV_KN_Gain * localB->Sum_i;

  /* Saturate: '<S59>/Saturation' */
  u = localB->ZV_KN;
  u1 = localP->Saturation_LowerSat_p;
  u2 = localP->Saturation_UpperSat_f;
  if (u > u2) {
    localB->Saturation_p = u2;
  } else if (u < u1) {
    localB->Saturation_p = u1;
  } else {
    localB->Saturation_p = u;
  }

  /* End of Saturate: '<S59>/Saturation' */

  /* Gain: '<S59>/KD_KG' */
  localB->KD_KG_a = localP->KD_KG_Gain_c * localB->Saturation_p;

  /* DataStoreRead: '<S59>/V_KP' */
  localB->V_KP = *rtd_V_KP;

  /* Product: '<S59>/Product' */
  localB->Product_p = localB->ZV_Kp * localB->V_KP;

  /* DataStoreRead: '<S59>/V_KI' */
  localB->V_KI = *rtd_V_KI;

  /* Product: '<S59>/Product1' */
  localB->Product1 = localB->ZV_Kp * localB->V_KI;

  /* DataStoreRead: '<S10>/Forword' */
  localB->Forword = *rtd_Forword;

  /* Saturate: '<S10>/Saturation1' */
  u = localB->Saturation;
  u1 = localP->Saturation1_LowerSat;
  u2 = localP->Saturation1_UpperSat;
  if (u > u2) {
    localB->Saturation1 = u2;
  } else if (u < u1) {
    localB->Saturation1 = u1;
  } else {
    localB->Saturation1 = u;
  }

  /* End of Saturate: '<S10>/Saturation1' */

  /* Product: '<S10>/Product4' */
  localB->Product4 = (real_T)localB->Forword * localB->Saturation1;

  /* Signum: '<S59>/Sign' */
  u = localB->Product4;
  if (u < 0.0) {
    localB->Sign = -1.0;
  } else if (u > 0.0) {
    localB->Sign = 1.0;
  } else {
    localB->Sign = u;
  }

  /* End of Signum: '<S59>/Sign' */

  /* Gain: '<S59>/ZV1_Kp1' */
  localB->ZV1_Kp1 = localP->ZV1_Kp1_Gain * localB->Product4;

  /* Gain: '<S59>/ZV1_Kp2' */
  localB->ZV1_Kp2 = localP->ZV1_Kp2_Gain * localB->Sign;

  /* Sum: '<S59>/Sum2' */
  localB->Sum2_h = (localB->DiscreteTimeIntegrator_b + localB->Product_p) +
    localB->KD_KG_a;

  /* Sum: '<S59>/Sum1' */
  localB->Sum1_i = (localB->ZV1_Kp1 + localB->ZV1_Kp2) + localB->Sum2_h;

  /* Gain: '<S10>/KP_JD1' */
  localB->KP_JD1 = localP->KP_JD1_Gain * localB->GXZ7;

  /* DataTypeConversion: '<S10>/Data Type Conversion4' */
  u = fmod(floor(localB->KP_JD1), 4.294967296E+9);
  localB->DataTypeConversion4 = u < 0.0 ? -(int32_T)(uint32_T)-u : (int32_T)
    (uint32_T)u;

  /* Gain: '<S10>/KP_JD' */
  localB->KP_JD = localP->KP_JD_Gain * localB->GXZ8;

  /* Gain: '<S10>/KP_e' */
  localB->KP_e = localP->KP_e_Gain * localB->Sum;

  /* Saturate: '<S10>/ZXF_PID' */
  u = localB->Sum1_i;
  u1 = localP->ZXF_PID_LowerSat;
  u2 = localP->ZXF_PID_UpperSat;
  if (u > u2) {
    localB->ZXF_PID = u2;
  } else if (u < u1) {
    localB->ZXF_PID = u1;
  } else {
    localB->ZXF_PID = u;
  }

  /* End of Saturate: '<S10>/ZXF_PID' */

  /* Sum: '<S10>/Subtract' incorporates:
   *  Constant: '<S10>/Con_ZPWM'
   */
  localB->Subtract = localB->ZXF_PID + localP->Con_ZPWM_Value;

  /* Saturate: '<S10>/ZXF_PWM' */
  u = localB->Subtract;
  u1 = localP->ZXF_PWM_LowerSat;
  u2 = localP->ZXF_PWM_UpperSat;
  if (u > u2) {
    localB->ZXF_PWM = u2;
  } else if (u < u1) {
    localB->ZXF_PWM = u1;
  } else {
    localB->ZXF_PWM = u;
  }

  /* End of Saturate: '<S10>/ZXF_PWM' */

  /* If: '<S10>/If' */
  if (rtu_Slect_port == 5) {
    /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    /* DataStoreWrite: '<S62>/Data Store Write' */
    *rtd_JD_XHZY_HC = rtu_JD_In;

    /* DataStoreWrite: '<S62>/Data Store Write1' */
    *rtd_JD_XHZY = rtu_JD_In;

    /* DataStoreWrite: '<S62>/Data Store Write2' */
    *rtd_YJ_XHZY_HC = rtu_YJ_In;

    /* DataStoreWrite: '<S62>/Data Store Write3' */
    *rtd_YJ_XHZY = rtu_YJ_In;

    /* End of Outputs for SubSystem: '<S10>/If Action Subsystem3' */
  } else if (rtu_Slect_port == 4) {
    /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S60>/Action Port'
     */
    /* DataStoreRead: '<S60>/Data Store Read' */
    localB->DataStoreRead_m = *rtd_JD_XHZY_HC;

    /* DataStoreWrite: '<S60>/Data Store Write1' */
    *rtd_JD_XHZY = localB->DataStoreRead_m;

    /* DataStoreRead: '<S60>/Data Store Read1' */
    localB->DataStoreRead1_d = *rtd_YJ_XHZY_HC;

    /* DataStoreWrite: '<S60>/Data Store Write2' */
    *rtd_YJ_XHZY = localB->DataStoreRead1_d;

    /* End of Outputs for SubSystem: '<S10>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    /* DataStoreWrite: '<S61>/Data Store Write' */
    *rtd_JD_XHZY_HC = rtu_JD_In;

    /* DataStoreWrite: '<S61>/Data Store Write1' */
    *rtd_JD_XHZY = rtu_JD_In;

    /* DataStoreWrite: '<S61>/Data Store Write2' */
    *rtd_YJ_XHZY_HC = rtu_YJ_In;

    /* DataStoreWrite: '<S61>/Data Store Write3' */
    *rtd_YJ_XHZY = rtu_YJ_In;

    /* End of Outputs for SubSystem: '<S10>/If Action Subsystem2' */
  }

  /* End of If: '<S10>/If' */

  /* DataStoreRead: '<S10>/KG_JD1' */
  localB->KG_JD1 = *rtd_EN_extern;

  /* DataStoreRead: '<S10>/KG_JD' */
  localB->KG_JD = *rtd_KG_JD;

  /* DataStoreRead: '<S10>/Data Store Read' */
  localB->DataStoreRead = *rtd_JD_XHZY;

  /* DataTypeConversion: '<S10>/Data Type Conversion2' */
  localB->DataTypeConversion2 = localB->DataStoreRead;

  /* Gain: '<S10>/GXZ3' */
  localB->GXZ3 = localP->GXZ3_Gain * localB->DataTypeConversion2;

  /* Gain: '<S10>/GXZ10' */
  localB->GXZ10 = localP->GXZ10_Gain * localB->GXZ3;

  /* Saturate: '<S10>/XF_XHZY' */
  u = localB->GXZ10;
  u1 = localP->XF_XHZY_LowerSat;
  u2 = localP->XF_XHZY_UpperSat;
  if (u > u2) {
    localB->XF_XHZY = u2;
  } else if (u < u1) {
    localB->XF_XHZY = u1;
  } else {
    localB->XF_XHZY = u;
  }

  /* End of Saturate: '<S10>/XF_XHZY' */

  /* Product: '<S10>/Product1' */
  localB->Product1_a = (real_T)localB->KG_JD * localB->XF_XHZY;

  /* If: '<S10>/If1' */
  if (localB->KG_JD1 > 0) {
    /* Outputs for IfAction SubSystem: '<S10>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    /* DataStoreWrite: '<S63>/Data Store Write' */
    *rtd_Angle_extern = localB->Product1_a;

    /* DataStoreWrite: '<S63>/Data Store Write1' incorporates:
     *  Constant: '<S63>/Constant'
     */
    *rtd_Angle_internal = localP->Constant_Value;

    /* End of Outputs for SubSystem: '<S10>/Switch Case Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S10>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    /* DataStoreWrite: '<S64>/Data Store Write1' */
    *rtd_Angle_internal = localB->Product1_a;

    /* DataStoreWrite: '<S64>/Data Store Write' incorporates:
     *  Constant: '<S64>/Constant'
     */
    *rtd_Angle_extern = localP->Constant_Value_k;

    /* End of Outputs for SubSystem: '<S10>/Switch Case Action Subsystem1' */
  }

  /* End of If: '<S10>/If1' */

  /* Update for DiscreteIntegrator: '<S58>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * (real_T)localDW->
    Motor_XHZY_ELAPS_T[0] * localB->ZP_KN;

  /* Update for DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_c +=
    localP->DiscreteTimeIntegrator_gainva_m * (real_T)
    localDW->Motor_XHZY_ELAPS_T[0] * localB->Product1;
  if (localDW->DiscreteTimeIntegrator_DSTATE_c >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_c =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_c <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE_c =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  localDW->DiscreteTimeIntegrator_PrevRese = (int8_T)(localB->KG_clc > 0);

  /* End of Update for DiscreteIntegrator: '<S59>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S59>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE +=
    localP->DiscreteTimeIntegrator1_gainval * (real_T)
    localDW->Motor_XHZY_ELAPS_T[0] * localB->ZV_KN;
}

/*
 * Initial conditions for action system:
 *    '<S23>/If Action Subsystem'
 *    '<S24>/If Action Subsystem'
 *    '<S25>/If Action Subsystem'
 */
void motor_IfActionSubsystem_Init(rtDW_IfActionSubsystem_motor_n *localDW)
{
  /* InitializeConditions for DiscretePulseGenerator: '<S26>/Pulse Generator' */
  localDW->clockTickCounter = 0;
}

/*
 * Start for action system:
 *    '<S23>/If Action Subsystem'
 *    '<S24>/If Action Subsystem'
 *    '<S25>/If Action Subsystem'
 */
void motor_IfActionSubsystem_Start(rtDW_IfActionSubsystem_motor_n *localDW)
{
  /* InitializeConditions for IfAction SubSystem: '<S23>/If Action Subsystem' */
  motor_IfActionSubsystem_Init(localDW);

  /* End of InitializeConditions for SubSystem: '<S23>/If Action Subsystem' */
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem'
 *    '<S24>/If Action Subsystem'
 *    '<S25>/If Action Subsystem'
 */
void motor_IfActionSubsystem(rtB_IfActionSubsystem_motor_k *localB,
  rtDW_IfActionSubsystem_motor_n *localDW, rtP_IfActionSubsystem_motor_m *localP,
  boolean_T *rtd_PC1, boolean_T *rtd_PC2)
{
  /* DiscretePulseGenerator: '<S26>/Pulse Generator' */
  localB->PulseGenerator = (localDW->clockTickCounter <
    localP->PulseGenerator_Duty) && (localDW->clockTickCounter >= 0) ?
    localP->PulseGenerator_Amp : 0.0;
  if (localDW->clockTickCounter >= localP->PulseGenerator_Period - 1.0) {
    localDW->clockTickCounter = 0;
  } else {
    localDW->clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S26>/Pulse Generator' */

  /* DataTypeConversion: '<S26>/Data Type Conversion' */
  localB->DataTypeConversion = (localB->PulseGenerator != 0.0);

  /* DataStoreWrite: '<S26>/Data Store Write' */
  *rtd_PC1 = localB->DataTypeConversion;

  /* DataStoreWrite: '<S26>/Data Store Write1' */
  *rtd_PC2 = localB->DataTypeConversion;
}

/*
 * Initial conditions for action system:
 *    '<S23>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem1'
 *    '<S25>/If Action Subsystem1'
 */
void motor_IfActionSubsystem1_Init(rtDW_IfActionSubsystem1_motor *localDW)
{
  /* InitializeConditions for DiscretePulseGenerator: '<S27>/Pulse Generator' */
  localDW->clockTickCounter = 0;
}

/*
 * Start for action system:
 *    '<S23>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem1'
 *    '<S25>/If Action Subsystem1'
 */
void motor_IfActionSubsystem1_Start(rtDW_IfActionSubsystem1_motor *localDW)
{
  /* InitializeConditions for IfAction SubSystem: '<S23>/If Action Subsystem1' */
  motor_IfActionSubsystem1_Init(localDW);

  /* End of InitializeConditions for SubSystem: '<S23>/If Action Subsystem1' */
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem1'
 *    '<S25>/If Action Subsystem1'
 */
void motor_IfActionSubsystem1(rtB_IfActionSubsystem1_motor *localB,
  rtDW_IfActionSubsystem1_motor *localDW, rtP_IfActionSubsystem1_motor *localP,
  boolean_T *rtd_PC1, boolean_T *rtd_PC2)
{
  /* DataStoreWrite: '<S27>/Data Store Write1' incorporates:
   *  Constant: '<S27>/Constant'
   */
  *rtd_PC2 = localP->Constant_Value;

  /* DiscretePulseGenerator: '<S27>/Pulse Generator' */
  localB->PulseGenerator = (localDW->clockTickCounter <
    localP->PulseGenerator_Duty) && (localDW->clockTickCounter >= 0) ?
    localP->PulseGenerator_Amp : 0.0;
  if (localDW->clockTickCounter >= localP->PulseGenerator_Period - 1.0) {
    localDW->clockTickCounter = 0;
  } else {
    localDW->clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S27>/Pulse Generator' */

  /* DataTypeConversion: '<S27>/Data Type Conversion' */
  localB->DataTypeConversion = (localB->PulseGenerator != 0.0);

  /* DataStoreWrite: '<S27>/Data Store Write' */
  *rtd_PC1 = localB->DataTypeConversion;
}

/*
 * Start for action system:
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem2'
 */
void motor_IfActionSubsystem_p_Start(rtDW_IfActionSubsystem_motor *localDW)
{
  /* Start for IfAction SubSystem: '<S23>/If Action Subsystem' */
  motor_IfActionSubsystem_Start(&localDW->IfActionSubsystem);

  /* End of Start for SubSystem: '<S23>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S23>/If Action Subsystem1' */
  motor_IfActionSubsystem1_Start(&localDW->IfActionSubsystem1);

  /* End of Start for SubSystem: '<S23>/If Action Subsystem1' */
}

/*
 * Output and update for action system:
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem2'
 */
void motor_IfActionSubsystem_n(real_T rtu_In1, rtB_IfActionSubsystem_motor
  *localB, rtDW_IfActionSubsystem_motor *localDW, rtP_IfActionSubsystem_motor
  *localP, boolean_T *rtd_PC1, boolean_T *rtd_PC2)
{
  /* If: '<S23>/If' */
  if (rtu_In1 == 2.0) {
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    motor_IfActionSubsystem(&localB->IfActionSubsystem,
      &localDW->IfActionSubsystem, (rtP_IfActionSubsystem_motor_m *)
      &localP->IfActionSubsystem, rtd_PC1, rtd_PC2);

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem' */
  } else if (rtu_In1 == 3.0) {
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    motor_IfActionSubsystem1(&localB->IfActionSubsystem1,
      &localDW->IfActionSubsystem1, (rtP_IfActionSubsystem1_motor *)
      &localP->IfActionSubsystem1, rtd_PC1, rtd_PC2);

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    /* DataStoreWrite: '<S28>/Data Store Write' incorporates:
     *  Constant: '<S28>/Constant'
     */
    *rtd_PC1 = localP->Constant_Value;

    /* DataStoreWrite: '<S28>/Data Store Write1' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    *rtd_PC2 = localP->Constant1_Value;

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem2' */
  }

  /* End of If: '<S23>/If' */
}

/* Initial conditions for function-call system: '<S1>/Motor_HYDG1' */
void motor_Motor_HYDG1_Init(RT_MODEL_motor * const motor_M,
  rtDW_Motor_HYDG1_motor *localDW, rtP_Motor_HYDG1_motor *localP)
{
  uint32_T prevT_idx_0;
  uint32_T prevT_idx_1;
  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_HYDG1_PREV_T[0] = prevT_idx_0;
  localDW->Motor_HYDG1_PREV_T[1] = prevT_idx_1;

  /* InitializeConditions for DiscreteIntegrator: '<S42>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_a = localP->DiscreteTimeIntegrator_IC_g;
  localDW->DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S43>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE = localP->DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

/* Output and update for function-call system: '<S1>/Motor_HYDG1' */
void motor_Motor_HYDG1(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In,
  int32_T rtu_Encode_Pos, uint8_T rtu_Slect_port, rtB_Motor_HYDG1_motor *localB,
  rtDW_Motor_HYDG1_motor *localDW, rtP_Motor_HYDG1_motor *localP, int32_T
  *rtd_JD_HYDG, int32_T *rtd_JD_HYDG_HC, uint8_T *rtd_KG_JD, uint8_T *rtd_KG_clc,
  real_T *rtd_P_KP, real_T *rtd_Saturation_limit_speed, real_T *rtd_V_KI, real_T
  *rtd_V_KP, real_T *rtd_chu_jd)
{
  int128m_T tmp;
  int128m_T tmp_0;
  uint32_T elapseT_H;
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  int64m_T tmp_1;
  int64m_T tmp_2;
  int128m_T tmp_3;
  real_T u0;
  real_T u1;
  real_T u2;
  prevT_idx_0 = localDW->Motor_HYDG1_PREV_T[0];
  prevT_idx_1 = localDW->Motor_HYDG1_PREV_T[1];
  elapseTime_idx_0 = motor_M->Timing.clockTick0 - prevT_idx_0;
  elapseT_H = motor_M->Timing.clockTickH0 - prevT_idx_1;
  if (prevT_idx_0 > motor_M->Timing.clockTick0) {
    elapseT_H--;
  }

  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Motor_HYDG1_ELAPS_T[0] = elapseTime_idx_0;
  localDW->Motor_HYDG1_PREV_T[0] = prevT_idx_0;
  localDW->Motor_HYDG1_ELAPS_T[1] = elapseT_H;
  localDW->Motor_HYDG1_PREV_T[1] = prevT_idx_1;

  /* DiscreteIntegrator: '<S42>/Discrete-Time Integrator' */
  localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

  /* DataStoreRead: '<S8>/chu_jd' */
  localB->chu_jd = *rtd_chu_jd;

  /* DataStoreRead: '<S8>/KG_JD' */
  localB->KG_JD = *rtd_KG_JD;

  /* DataStoreRead: '<S8>/Data Store Read' */
  localB->DataStoreRead = *rtd_JD_HYDG;

  /* Gain: '<S8>/GHDG10' */
  prevT_idx_0 = (uint32_T)localP->GHDG10_Gain;
  prevT_idx_1 = (uint32_T)localB->DataStoreRead;
  sMultiWordMul(&prevT_idx_0, 1, &prevT_idx_1, 1, &tmp_1.chunks[0U], 2);
  localB->GHDG10 = tmp_1;

  /* Gain: '<S8>/GHDG1' */
  tmp_1 = localP->GHDG1_Gain;
  tmp_2 = localB->GHDG10;
  sMultiWordMul(&tmp_1.chunks[0U], 2, &tmp_2.chunks[0U], 2, &tmp_3.chunks[0U], 4);
  localB->GHDG1 = tmp_3;

  /* Saturate: '<S8>/XF_XHZY' */
  tmp_3 = localB->GHDG1;
  tmp = localP->XF_XHZY_LowerSat;
  tmp_0 = localP->XF_XHZY_UpperSat;
  if (sMultiWordGt(&tmp_3.chunks[0U], &tmp_0.chunks[0U], 4)) {
    localB->XF_XHZY = tmp_0;
  } else if (sMultiWordLt(&tmp_3.chunks[0U], &tmp.chunks[0U], 4)) {
    localB->XF_XHZY = tmp;
  } else {
    localB->XF_XHZY = tmp_3;
  }

  /* End of Saturate: '<S8>/XF_XHZY' */

  /* Product: '<S8>/Product' */
  tmp_3 = localB->XF_XHZY;
  localB->Product = sMultiWord2Double(&tmp_3.chunks[0U], 4, 0) *
    9.8607613152626476E-32 * (real_T)localB->KG_JD;

  /* Sum: '<S8>/Sum4' */
  localB->Sum4 = localB->chu_jd + localB->Product;

  /* Gain: '<S8>/GHDG2' */
  localB->GHDG2 = localP->GHDG2_Gain * localB->Sum4;

  /* Fcn: '<S47>/Fcn' */
  localB->Fcn = (1.0 - cos(localB->GHDG2)) * 0.1;

  /* Fcn: '<S47>/Fcn1' */
  localB->Fcn1 = localB->Fcn * localB->Fcn;

  /* Fcn: '<S47>/Fcn2' */
  localB->Fcn2 = 0.2655 - 0.1 * sin(localB->GHDG2);

  /* Fcn: '<S47>/Fcn3' */
  localB->Fcn3 = localB->Fcn2 * localB->Fcn2;

  /* Sum: '<S47>/Sum1' */
  localB->Sum1 = localB->Fcn1 + localB->Fcn3;

  /* Fcn: '<S47>/Fcn4' */
  u0 = localB->Sum1;
  if (u0 < 0.0) {
    u0 = -sqrt(-u0);
  } else {
    u0 = sqrt(u0);
  }

  localB->Fcn4 = u0;

  /* End of Fcn: '<S47>/Fcn4' */

  /* Fcn: '<S47>/Fcn15' */
  localB->Fcn15 = localB->Fcn4 - 0.2655;

  /* Gain: '<S8>/GHDG3' */
  localB->GHDG3 = localP->GHDG3_Gain * localB->Fcn15;

  /* Gain: '<S8>/GHDG4' */
  localB->GHDG4 = localP->GHDG4_Gain * localB->GHDG3;

  /* DataTypeConversion: '<S8>/Data Type Conversion1' */
  localB->DataTypeConversion1 = rtu_Encode_Pos;

  /* Gain: '<S8>/GHDG5' */
  localB->GHDG5 = localP->GHDG5_Gain * localB->DataTypeConversion1;

  /* Gain: '<S8>/fk_dg1' */
  localB->fk_dg1 = localP->fk_dg1_Gain * localB->GHDG5;

  /* Gain: '<S8>/fk_dg' */
  localB->fk_dg = localP->fk_dg_Gain * localB->fk_dg1;

  /* Sum: '<S8>/Sum' */
  localB->Sum = localB->GHDG4 - localB->fk_dg;

  /* Saturate: '<S8>/Saturation1' */
  u0 = localB->Sum;
  u1 = localP->Saturation1_LowerSat;
  u2 = localP->Saturation1_UpperSat;
  if (u0 > u2) {
    localB->Saturation1 = u2;
  } else if (u0 < u1) {
    localB->Saturation1 = u1;
  } else {
    localB->Saturation1 = u0;
  }

  /* End of Saturate: '<S8>/Saturation1' */

  /* Gain: '<S42>/ZP_Kp' */
  localB->ZP_Kp = localP->ZP_Kp_Gain * localB->Saturation1;

  /* Gain: '<S42>/ZV_KD1' */
  localB->ZV_KD1 = localP->ZV_KD1_Gain * localB->ZP_Kp;

  /* Sum: '<S42>/Sum' */
  localB->Sum_i = localB->ZV_KD1 - localB->DiscreteTimeIntegrator;

  /* Gain: '<S42>/ZP_KN' */
  localB->ZP_KN = localP->ZP_KN_Gain * localB->Sum_i;

  /* Gain: '<S42>/KD_KG' */
  localB->KD_KG = localP->KD_KG_Gain * localB->ZP_KN;

  /* DataStoreRead: '<S42>/P_KP' */
  localB->P_KP = *rtd_P_KP;

  /* Product: '<S42>/Product' */
  localB->Product_i = localB->ZP_Kp * localB->P_KP;

  /* Sum: '<S42>/Sum1' */
  localB->Sum1_n = localB->Product_i + localB->KD_KG;

  /* DataStoreRead: '<S43>/KG_clc' */
  localB->KG_clc = *rtd_KG_clc;

  /* DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  if (((localB->KG_clc > 0) && (localDW->DiscreteTimeIntegrator_PrevRese <= 0)) ||
      ((localB->KG_clc <= 0) && (localDW->DiscreteTimeIntegrator_PrevRese == 1)))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_a =
      localP->DiscreteTimeIntegrator_IC_g;
  }

  if (localDW->DiscreteTimeIntegrator_DSTATE_a >=
      localP->DiscreteTimeIntegrator_UpperS_j) {
    localDW->DiscreteTimeIntegrator_DSTATE_a =
      localP->DiscreteTimeIntegrator_UpperS_j;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_a <=
        localP->DiscreteTimeIntegrator_LowerS_o) {
      localDW->DiscreteTimeIntegrator_DSTATE_a =
        localP->DiscreteTimeIntegrator_LowerS_o;
    }
  }

  localB->DiscreteTimeIntegrator_d = localDW->DiscreteTimeIntegrator_DSTATE_a;

  /* End of DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */

  /* DiscreteIntegrator: '<S43>/Discrete-Time Integrator1' */
  localB->DiscreteTimeIntegrator1 = localDW->DiscreteTimeIntegrator1_DSTATE;

  /* DataStoreRead: '<S8>/Saturation_limit_speed' */
  localB->Saturation_limit_speed = *rtd_Saturation_limit_speed;

  /* RelationalOperator: '<S48>/LowerRelop1' */
  localB->LowerRelop1 = (localB->Sum1_n > localB->Saturation_limit_speed);

  /* Gain: '<S8>/KP_e2' */
  localB->KP_e2 = localP->KP_e2_Gain * localB->Saturation_limit_speed;

  /* RelationalOperator: '<S48>/UpperRelop' */
  localB->UpperRelop = (localB->Sum1_n < localB->KP_e2);

  /* Switch: '<S48>/Switch' */
  if (localB->UpperRelop) {
    localB->Switch = localB->KP_e2;
  } else {
    localB->Switch = localB->Sum1_n;
  }

  /* End of Switch: '<S48>/Switch' */

  /* Switch: '<S48>/Switch2' */
  if (localB->LowerRelop1) {
    localB->Switch2 = localB->Saturation_limit_speed;
  } else {
    localB->Switch2 = localB->Switch;
  }

  /* End of Switch: '<S48>/Switch2' */

  /* UnitDelay: '<S8>/Unit Delay' */
  localB->UnitDelay = localDW->UnitDelay_DSTATE;

  /* Sum: '<S8>/Sum5' */
  localB->Sum5 = localB->fk_dg1 - localB->UnitDelay;

  /* Gain: '<S8>/GXZ5' */
  localB->GXZ5 = localP->GXZ5_Gain * localB->Sum5;

  /* Gain: '<S8>/fk_dg2' */
  localB->fk_dg2 = localP->fk_dg2_Gain * localB->GXZ5;

  /* Sum: '<S8>/Sum2' */
  localB->Sum2 = localB->Switch2 - localB->fk_dg2;

  /* Gain: '<S43>/ZV_Kp' */
  localB->ZV_Kp = localP->ZV_Kp_Gain * localB->Sum2;

  /* Gain: '<S43>/ZV_Kp1' */
  localB->ZV_Kp1 = localP->ZV_Kp1_Gain * localB->ZV_Kp;

  /* Sum: '<S43>/Sum' */
  localB->Sum_o = localB->ZV_Kp1 - localB->DiscreteTimeIntegrator1;

  /* Gain: '<S43>/ZV_KN' */
  localB->ZV_KN = localP->ZV_KN_Gain * localB->Sum_o;

  /* Gain: '<S43>/KD_KG' */
  localB->KD_KG_h = localP->KD_KG_Gain_e * localB->ZV_KN;

  /* DataStoreRead: '<S43>/V_KP' */
  localB->V_KP = *rtd_V_KP;

  /* Product: '<S43>/Product' */
  localB->Product_i4 = localB->ZV_Kp * localB->V_KP;

  /* DataStoreRead: '<S43>/V_KI' */
  localB->V_KI = *rtd_V_KI;

  /* Product: '<S43>/Product1' */
  localB->Product1 = localB->DiscreteTimeIntegrator_d * localB->V_KI;

  /* Signum: '<S43>/Sign' */
  u0 = localB->Switch2;
  if (u0 < 0.0) {
    localB->Sign = -1.0;
  } else if (u0 > 0.0) {
    localB->Sign = 1.0;
  } else {
    localB->Sign = u0;
  }

  /* End of Signum: '<S43>/Sign' */

  /* Gain: '<S43>/ZV1_Kp1' */
  localB->ZV1_Kp1 = localP->ZV1_Kp1_Gain * localB->Switch2;

  /* Gain: '<S43>/ZV1_Kp2' */
  localB->ZV1_Kp2 = localP->ZV1_Kp2_Gain * localB->Sign;

  /* Sum: '<S43>/Sum2' */
  localB->Sum2_f = (localB->Product1 + localB->Product_i4) + localB->KD_KG_h;

  /* Sum: '<S43>/Sum1' */
  localB->Sum1_ne = (localB->ZV1_Kp1 + localB->ZV1_Kp2) + localB->Sum2_f;

  /* Saturate: '<S8>/XF_PID' */
  u0 = localB->Sum1_ne;
  u1 = localP->XF_PID_LowerSat;
  u2 = localP->XF_PID_UpperSat;
  if (u0 > u2) {
    localB->XF_PID = u2;
  } else if (u0 < u1) {
    localB->XF_PID = u1;
  } else {
    localB->XF_PID = u0;
  }

  /* End of Saturate: '<S8>/XF_PID' */

  /* Sum: '<S8>/Sum3' incorporates:
   *  Constant: '<S8>/Constant'
   */
  localB->Sum3 = localB->XF_PID + localP->Constant_Value;

  /* Saturate: '<S8>/XF_PWM' */
  u0 = localB->Sum3;
  u1 = localP->XF_PWM_LowerSat;
  u2 = localP->XF_PWM_UpperSat;
  if (u0 > u2) {
    localB->XF_PWM = u2;
  } else if (u0 < u1) {
    localB->XF_PWM = u1;
  } else {
    localB->XF_PWM = u0;
  }

  /* End of Saturate: '<S8>/XF_PWM' */

  /* DataTypeConversion: '<S8>/Data Type Conversion3' */
  u0 = fmod(floor(localB->XF_PWM), 65536.0);
  localB->DataTypeConversion3 = (uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-u0 : (int32_T)(uint16_T)u0);

  /* Gain: '<S8>/GHDG7' */
  localB->GHDG7 = localP->GHDG7_Gain * localB->GHDG5;

  /* Gain: '<S8>/GHDG8' */
  localB->GHDG8 = localP->GHDG8_Gain * localB->GHDG7;

  /* Fcn: '<S49>/Fcn7' */
  localB->Fcn7 = localB->GHDG8 + 0.2655;

  /* Fcn: '<S49>/Cl1' */
  localB->Cl1 = (0.090490250000000008 - localB->Fcn7 * localB->Fcn7) /
    0.020000000000000004;

  /* Fcn: '<S49>/Fcn' */
  u0 = (7.0490249999999985 - localB->Cl1 * localB->Cl1) + 1.0;
  if (u0 < 0.0) {
    u0 = -sqrt(-u0);
  } else {
    u0 = sqrt(u0);
  }

  localB->Fcn_l = (2.655 - u0) / (localB->Cl1 + 1.0);

  /* End of Fcn: '<S49>/Fcn' */

  /* Fcn: '<S49>/Fcn4' */
  localB->Fcn4_g = 2.0 * atan(localB->Fcn_l);

  /* Gain: '<S8>/GHDG9' */
  localB->GHDG9 = localP->GHDG9_Gain * localB->Fcn4_g;

  /* Gain: '<S8>/fk_dg3' */
  localB->fk_dg3 = localP->fk_dg3_Gain * localB->GHDG9;

  /* Gain: '<S8>/KP_JD' */
  localB->KP_JD = localP->KP_JD_Gain * localB->fk_dg3;

  /* Sum: '<S8>/Sum1' */
  localB->Sum1_h = localB->Sum4 - localB->fk_dg3;

  /* Gain: '<S8>/KP_e' */
  localB->KP_e = localP->KP_e_Gain * localB->Sum1_h;

  /* If: '<S8>/If' */
  if (rtu_Slect_port == 5) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    /* DataStoreWrite: '<S44>/Data Store Write' */
    *rtd_JD_HYDG_HC = rtu_JD_In;

    /* DataStoreWrite: '<S44>/Data Store Write1' */
    *rtd_JD_HYDG = rtu_JD_In;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
  } else if (rtu_Slect_port == 4) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    /* DataStoreRead: '<S45>/Data Store Read' */
    localB->DataStoreRead_a = *rtd_JD_HYDG_HC;

    /* DataStoreWrite: '<S45>/Data Store Write1' */
    *rtd_JD_HYDG = localB->DataStoreRead_a;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    /* DataStoreWrite: '<S46>/Data Store Write' */
    *rtd_JD_HYDG_HC = rtu_JD_In;

    /* DataStoreWrite: '<S46>/Data Store Write1' */
    *rtd_JD_HYDG = rtu_JD_In;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem2' */
  }

  /* End of If: '<S8>/If' */

  /* Update for DiscreteIntegrator: '<S42>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * (real_T)
    localDW->Motor_HYDG1_ELAPS_T[0] * localB->ZP_KN;
  if (localDW->DiscreteTimeIntegrator_DSTATE >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S42>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_a +=
    localP->DiscreteTimeIntegrator_gainva_p * (real_T)
    localDW->Motor_HYDG1_ELAPS_T[0] * localB->ZV_Kp;
  if (localDW->DiscreteTimeIntegrator_DSTATE_a >=
      localP->DiscreteTimeIntegrator_UpperS_j) {
    localDW->DiscreteTimeIntegrator_DSTATE_a =
      localP->DiscreteTimeIntegrator_UpperS_j;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE_a <=
        localP->DiscreteTimeIntegrator_LowerS_o) {
      localDW->DiscreteTimeIntegrator_DSTATE_a =
        localP->DiscreteTimeIntegrator_LowerS_o;
    }
  }

  localDW->DiscreteTimeIntegrator_PrevRese = (int8_T)(localB->KG_clc > 0);

  /* End of Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE +=
    localP->DiscreteTimeIntegrator1_gainval * (real_T)
    localDW->Motor_HYDG1_ELAPS_T[0] * localB->ZV_KN;
  if (localDW->DiscreteTimeIntegrator1_DSTATE >=
      localP->DiscreteTimeIntegrator1_UpperSa) {
    localDW->DiscreteTimeIntegrator1_DSTATE =
      localP->DiscreteTimeIntegrator1_UpperSa;
  } else {
    if (localDW->DiscreteTimeIntegrator1_DSTATE <=
        localP->DiscreteTimeIntegrator1_LowerSa) {
      localDW->DiscreteTimeIntegrator1_DSTATE =
        localP->DiscreteTimeIntegrator1_LowerSa;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator1' */

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localB->fk_dg1;
}

/* Output and update for function-call system: '<S1>/Showing' */
void motor_Showing(RT_MODEL_motor * const motor_M, real_T rtu_Showing_Angle,
                   real_T rtu_Showing_T, rtB_Showing_motor *localB,
                   rtP_Showing_motor *localP, real_T *rtd_Angle_S)
{
  /* MultiPortSwitch: '<S12>/Multiport Switch' */
  switch ((int32_T)rtu_Showing_T) {
   case 1:
    /* Sin: '<S12>/Sine Wave1' */
    localB->SineWave1 = sin(localP->SineWave1_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave1_Phase) * localP->SineWave1_Amp +
      localP->SineWave1_Bias;
    localB->MultiportSwitch = localB->SineWave1;
    break;

   case 2:
    /* Sin: '<S12>/Sine Wave2' */
    localB->SineWave2 = sin(localP->SineWave2_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave2_Phase) * localP->SineWave2_Amp +
      localP->SineWave2_Bias;
    localB->MultiportSwitch = localB->SineWave2;
    break;

   case 3:
    /* Sin: '<S12>/Sine Wave3' */
    localB->SineWave3 = sin(localP->SineWave3_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave3_Phase) * localP->SineWave3_Amp +
      localP->SineWave3_Bias;
    localB->MultiportSwitch = localB->SineWave3;
    break;

   case 4:
    /* Sin: '<S12>/Sine Wave4' */
    localB->SineWave4 = sin(localP->SineWave4_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave4_Phase) * localP->SineWave4_Amp +
      localP->SineWave4_Bias;
    localB->MultiportSwitch = localB->SineWave4;
    break;

   case 5:
    /* Sin: '<S12>/Sine Wave5' */
    localB->SineWave5 = sin(localP->SineWave5_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave5_Phase) * localP->SineWave5_Amp +
      localP->SineWave5_Bias;
    localB->MultiportSwitch = localB->SineWave5;
    break;

   case 6:
    /* Sin: '<S12>/Sine Wave6' */
    localB->SineWave6 = sin(localP->SineWave6_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave6_Phase) * localP->SineWave6_Amp +
      localP->SineWave6_Bias;
    localB->MultiportSwitch = localB->SineWave6;
    break;

   case 7:
    /* Sin: '<S12>/Sine Wave7' */
    localB->SineWave7 = sin(localP->SineWave7_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave7_Phase) * localP->SineWave7_Amp +
      localP->SineWave7_Bias;
    localB->MultiportSwitch = localB->SineWave7;
    break;

   default:
    /* Sin: '<S12>/Sine Wave8' */
    localB->SineWave8 = sin(localP->SineWave8_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave8_Phase) * localP->SineWave8_Amp +
      localP->SineWave8_Bias;
    localB->MultiportSwitch = localB->SineWave8;
    break;
  }

  /* End of MultiPortSwitch: '<S12>/Multiport Switch' */

  /* DataStoreWrite: '<S12>/Data Store Write' */
  *rtd_Angle_S = localB->MultiportSwitch;

  /* DataStoreRead: '<S12>/Data Store Read' */
  localB->DataStoreRead = *rtd_Angle_S;

  /* Product: '<S12>/Product' */
  localB->Product = localB->DataStoreRead * rtu_Showing_Angle;

  /* DataTypeConversion: '<S12>/Data Type Conversion1' */
  localB->DataTypeConversion1 = localB->Product;
}

/* Output and update for function-call system: '<S1>/Angle_Calculation_HY' */
void motor_Angle_Calculation_HY(int32_T rtu_Encode_Pos,
  rtB_Angle_Calculation_HY_motor *localB, rtP_Angle_Calculation_HY_motor *localP)
{
  real_T tmp;

  /* DataTypeConversion: '<S3>/Data Type Conversion1' */
  localB->DataTypeConversion1 = rtu_Encode_Pos;

  /* Gain: '<S3>/GHDG5' */
  localB->GHDG5 = localP->GHDG5_Gain * localB->DataTypeConversion1;

  /* Gain: '<S21>/GHDG7' */
  localB->GHDG7 = localP->GHDG7_Gain * localB->GHDG5;

  /* Gain: '<S21>/GHDG8' */
  localB->GHDG8 = localP->GHDG8_Gain * localB->GHDG7;

  /* Fcn: '<S22>/Fcn7' */
  localB->Fcn7 = localB->GHDG8 + 0.2655;

  /* Fcn: '<S22>/Cl1' */
  localB->Cl1 = (0.090490250000000008 - localB->Fcn7 * localB->Fcn7) /
    0.020000000000000004;

  /* Fcn: '<S22>/Fcn' */
  tmp = (7.0490249999999985 - localB->Cl1 * localB->Cl1) + 1.0;
  if (tmp < 0.0) {
    tmp = -sqrt(-tmp);
  } else {
    tmp = sqrt(tmp);
  }

  localB->Fcn = (2.655 - tmp) / (localB->Cl1 + 1.0);

  /* End of Fcn: '<S22>/Fcn' */

  /* Fcn: '<S22>/Fcn4' */
  localB->Fcn4 = 2.0 * atan(localB->Fcn);

  /* Gain: '<S21>/GHDG9' */
  localB->GHDG9 = localP->GHDG9_Gain * localB->Fcn4;
}

/* Initial conditions for function-call system: '<S1>/Waveform_Build' */
void motor_Waveform_Build_Init(RT_MODEL_motor * const motor_M,
  rtDW_Waveform_Build_motor *localDW, rtP_Waveform_Build_motor *localP)
{
  uint32_T prevT_idx_0;
  uint32_T prevT_idx_1;
  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Waveform_Build_PREV_T[0] = prevT_idx_0;
  localDW->Waveform_Build_PREV_T[1] = prevT_idx_1;

  /* InitializeConditions for Delay: '<S14>/Delay5' */
  localDW->Delay5_DSTATE = localP->Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<S14>/Delay7' */
  localDW->Delay7_DSTATE = localP->Delay7_InitialCondition;

  /* InitializeConditions for Delay: '<S14>/Delay6' */
  localDW->Delay6_DSTATE = localP->Delay6_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S71>/Delay Input2' */
  localDW->DelayInput2_DSTATE = localP->DelayInput2_InitialCondition;
}

/* Start for function-call system: '<S1>/Waveform_Build' */
void motor_Waveform_Build_Start(rtDW_Waveform_Build_motor *localDW)
{
  /* Start for If: '<S14>/If' */
  localDW->If_ActiveSubsystem = -1;
}

/* Output and update for function-call system: '<S1>/Waveform_Build' */
void motor_Waveform_Build(RT_MODEL_motor * const motor_M, int32_T rtu_JD_In,
  rtB_Waveform_Build_motor *localB, rtDW_Waveform_Build_motor *localDW,
  rtP_Waveform_Build_motor *localP, real_T *rtd_T, real_T *rtd_T_Count, real_T
  *rtd_Temp1, real_T *rtd_Temp2)
{
  uint32_T elapseT_H;
  int8_T rtAction;
  real_T elapseTime;
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  real_T u1;
  real_T u2;
  prevT_idx_0 = localDW->Waveform_Build_PREV_T[0];
  prevT_idx_1 = localDW->Waveform_Build_PREV_T[1];
  elapseTime_idx_0 = motor_M->Timing.clockTick0 - prevT_idx_0;
  elapseT_H = motor_M->Timing.clockTickH0 - prevT_idx_1;
  if (prevT_idx_0 > motor_M->Timing.clockTick0) {
    elapseT_H--;
  }

  prevT_idx_0 = motor_M->Timing.clockTick0;
  prevT_idx_1 = motor_M->Timing.clockTickH0;
  localDW->Waveform_Build_ELAPS_T[0] = elapseTime_idx_0;
  localDW->Waveform_Build_PREV_T[0] = prevT_idx_0;
  localDW->Waveform_Build_ELAPS_T[1] = elapseT_H;
  localDW->Waveform_Build_PREV_T[1] = prevT_idx_1;

  /* Delay: '<S14>/Delay5' */
  localB->Delay5 = localDW->Delay5_DSTATE;

  /* DataTypeConversion: '<S14>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtu_JD_In;

  /* Gain: '<S14>/Gain1' */
  localB->Gain1 = localP->Gain1_Gain * localB->DataTypeConversion4;

  /* Saturate: '<S14>/XF_XHZY' */
  elapseTime = localB->Gain1;
  u1 = localP->XF_XHZY_LowerSat;
  u2 = localP->XF_XHZY_UpperSat;
  if (elapseTime > u2) {
    localB->XF_XHZY = u2;
  } else if (elapseTime < u1) {
    localB->XF_XHZY = u1;
  } else {
    localB->XF_XHZY = elapseTime;
  }

  /* End of Saturate: '<S14>/XF_XHZY' */

  /* Sum: '<S14>/Add16' */
  localB->Add16 = localB->XF_XHZY - localB->Delay5;

  /* If: '<S14>/If' incorporates:
   *  Inport: '<S67>/In1'
   */
  rtAction = (int8_T)!(localB->Add16 != 0.0);
  localDW->If_ActiveSubsystem = rtAction;
  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    /* DataStoreWrite: '<S67>/Data Store Write2' */
    *rtd_Temp1 = localB->Delay5;

    /* DataStoreRead: '<S67>/Data Store Read5' */
    localB->DataStoreRead5_p = *rtd_T_Count;

    /* MATLAB Function: '<S67>/MATLAB Function' */
    /* MATLAB Function 'Chart/Waveform_Build/If Action Subsystem1/MATLAB Function': '<S73>:1' */
    /* '<S73>:1:4' */
    localB->y1 = localB->DataStoreRead5_p + 1.0;

    /* '<S73>:1:5' */
    localB->y2 = 0.0;

    /* DataStoreWrite: '<S67>/Data Store Write1' */
    *rtd_T_Count = localB->y2;

    /* DataStoreWrite: '<S67>/Data Store Write3' */
    *rtd_T = localB->y1;
    localB->In1_m = localB->Add16;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S69>/Action Port'
     */
    /* DataStoreRead: '<S69>/Data Store Read5' */
    localB->DataStoreRead5_m = *rtd_T_Count;

    /* Sum: '<S69>/Add20' incorporates:
     *  Constant: '<S69>/Constant3'
     */
    localB->Add20_j = localB->DataStoreRead5_m + localP->Constant3_Value;

    /* Saturate: '<S69>/Saturation' */
    elapseTime = localB->Add20_j;
    u1 = localP->Saturation_LowerSat;
    u2 = localP->Saturation_UpperSat;
    if (elapseTime > u2) {
      localB->Saturation = u2;
    } else if (elapseTime < u1) {
      localB->Saturation = u1;
    } else {
      localB->Saturation = elapseTime;
    }

    /* End of Saturate: '<S69>/Saturation' */

    /* DataStoreWrite: '<S69>/Data Store Write1' */
    *rtd_T_Count = localB->Saturation;
    break;
  }

  /* End of If: '<S14>/If' */

  /* Delay: '<S14>/Delay7' */
  localB->Delay7 = localDW->Delay7_DSTATE;

  /* DataStoreRead: '<S14>/Data Store Read1' */
  localB->DataStoreRead1 = *rtd_T_Count;

  /* Delay: '<S14>/Delay6' */
  localB->Delay6 = localDW->Delay6_DSTATE;

  /* DataStoreRead: '<S14>/Data Store Read4' */
  localB->DataStoreRead4 = *rtd_Temp1;

  /* Sum: '<S14>/Add21' */
  localB->Add21 = localB->DataStoreRead4 - localB->Delay6;

  /* If: '<S14>/If1' incorporates:
   *  Inport: '<S68>/In1'
   */
  if (localB->Add21 != 0.0) {
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    /* DataStoreWrite: '<S68>/Data Store Write2' */
    *rtd_Temp2 = localB->Delay6;
    localB->In1_n = localB->Add21;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem2' */
  }

  /* End of If: '<S14>/If1' */

  /* Switch: '<S14>/Switch' */
  if (localB->DataStoreRead1 > localP->Switch_Threshold) {
    localB->Switch = localB->XF_XHZY;
  } else {
    /* Gain: '<S14>/Gain7' */
    localB->Gain7 = localP->Gain7_Gain * localB->In1_m;

    /* Sum: '<S14>/Add12' */
    localB->Add12 = localB->In1_m - localB->In1_n;

    /* Sum: '<S14>/Add19' */
    localB->Add19 = (localB->Add12 + localB->Gain7) + localB->XF_XHZY;
    localB->Switch = localB->Add19;
  }

  /* End of Switch: '<S14>/Switch' */

  /* Sum: '<S14>/Add20' */
  localB->Add20 = localB->Switch - localB->Delay7;

  /* If: '<S14>/If2' incorporates:
   *  Inport: '<S70>/In1'
   */
  if (localB->Add20 != 0.0) {
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    localB->In1 = localB->Add20;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem4' */
  }

  /* End of If: '<S14>/If2' */

  /* Abs: '<S14>/Abs2' */
  localB->Abs2 = fabs(localB->In1);

  /* DataStoreRead: '<S14>/Data Store Read5' */
  localB->DataStoreRead5 = *rtd_T;

  /* Product: '<S14>/Divide1' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  localB->Divide1 = localB->DataStoreRead5 / localP->Constant2_Value;

  /* Saturate: '<S14>/Saturation2' */
  elapseTime = localB->Divide1;
  u1 = localP->Saturation2_LowerSat;
  u2 = localP->Saturation2_UpperSat;
  if (elapseTime > u2) {
    localB->Saturation2 = u2;
  } else if (elapseTime < u1) {
    localB->Saturation2 = u1;
  } else {
    localB->Saturation2 = elapseTime;
  }

  /* End of Saturate: '<S14>/Saturation2' */

  /* Sum: '<S14>/Add13' */
  localB->Add13 = localB->XF_XHZY - localB->Saturation2;

  /* Sum: '<S14>/Add15' */
  localB->Add15 = localB->Saturation2 + localB->XF_XHZY;

  /* Product: '<S14>/Divide' incorporates:
   *  Constant: '<S14>/Constant3'
   */
  localB->Divide = localP->Constant3_Value_a / localB->DataStoreRead5;

  /* Product: '<S14>/Product1' */
  localB->Product1 = localB->Divide * localB->Abs2;

  /* Saturate: '<S14>/Saturation1' */
  elapseTime = localB->Product1;
  u1 = localP->Saturation1_LowerSat;
  u2 = localP->Saturation1_UpperSat;
  if (elapseTime > u2) {
    localB->Saturation1 = u2;
  } else if (elapseTime < u1) {
    localB->Saturation1 = u1;
  } else {
    localB->Saturation1 = elapseTime;
  }

  /* End of Saturate: '<S14>/Saturation1' */

  /* SampleTimeMath: '<S71>/sample time'
   *
   * About '<S71>/sample time':
   *  y = K where K = ( w * Ts )
   */
  elapseTime = ((real_T)localDW->Waveform_Build_ELAPS_T[0] * 0.002 + (real_T)
                localDW->Waveform_Build_ELAPS_T[1] * 8.589934592E+6) *
    localP->sampletime_WtEt;
  localB->sampletime = elapseTime;

  /* Product: '<S71>/delta rise limit' */
  localB->deltariselimit = localB->Saturation1 * localB->sampletime;

  /* UnitDelay: '<S71>/Delay Input2' */
  localB->Yk1 = localDW->DelayInput2_DSTATE;

  /* Sum: '<S71>/Difference Inputs1' */
  localB->UkYk1 = localB->Switch - localB->Yk1;

  /* RelationalOperator: '<S74>/LowerRelop1' */
  localB->LowerRelop1 = (localB->UkYk1 > localB->deltariselimit);

  /* Gain: '<S14>/Gain3' */
  localB->Gain3 = localP->Gain3_Gain * localB->Saturation1;

  /* Product: '<S71>/delta fall limit' */
  localB->deltafalllimit = localB->Gain3 * localB->sampletime;

  /* RelationalOperator: '<S74>/UpperRelop' */
  localB->UpperRelop = (localB->UkYk1 < localB->deltafalllimit);

  /* Switch: '<S74>/Switch' */
  if (localB->UpperRelop) {
    localB->Switch_c = localB->deltafalllimit;
  } else {
    localB->Switch_c = localB->UkYk1;
  }

  /* End of Switch: '<S74>/Switch' */

  /* Switch: '<S74>/Switch2' */
  if (localB->LowerRelop1) {
    localB->Switch2 = localB->deltariselimit;
  } else {
    localB->Switch2 = localB->Switch_c;
  }

  /* End of Switch: '<S74>/Switch2' */

  /* Sum: '<S71>/Difference Inputs2' */
  localB->DifferenceInputs2 = localB->Switch2 + localB->Yk1;

  /* RelationalOperator: '<S72>/LowerRelop1' */
  localB->LowerRelop1_g = (localB->DifferenceInputs2 > localB->Add15);

  /* RelationalOperator: '<S72>/UpperRelop' */
  localB->UpperRelop_p = (localB->DifferenceInputs2 < localB->Add13);

  /* Switch: '<S72>/Switch' */
  if (localB->UpperRelop_p) {
    localB->Switch_e = localB->Add13;
  } else {
    localB->Switch_e = localB->DifferenceInputs2;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Switch: '<S72>/Switch2' */
  if (localB->LowerRelop1_g) {
    localB->Switch2_p = localB->Add15;
  } else {
    localB->Switch2_p = localB->Switch_e;
  }

  /* End of Switch: '<S72>/Switch2' */

  /* Gain: '<S14>/Gain2' */
  elapseTime = fmod(floor(localP->Gain2_Gain * localB->Switch2_p),
                    4.294967296E+9);
  localB->Gain2 = elapseTime < 0.0 ? -(int32_T)(uint32_T)-elapseTime : (int32_T)
    (uint32_T)elapseTime;

  /* Update for Delay: '<S14>/Delay5' */
  localDW->Delay5_DSTATE = localB->XF_XHZY;

  /* Update for Delay: '<S14>/Delay7' */
  localDW->Delay7_DSTATE = localB->Switch;

  /* Update for Delay: '<S14>/Delay6' */
  localDW->Delay6_DSTATE = localB->DataStoreRead4;

  /* Update for UnitDelay: '<S71>/Delay Input2' */
  localDW->DelayInput2_DSTATE = localB->DifferenceInputs2;
}

/* Output and update for function-call system: '<S1>/Showing_XHHY' */
void motor_Showing_XHHY(RT_MODEL_motor * const motor_M, real_T rtu_Showing_Angle,
  real_T rtu_Showing_T, rtB_Showing_XHHY_motor *localB, rtP_Showing_XHHY_motor
  *localP, real_T *rtd_Angle_S)
{
  /* MultiPortSwitch: '<S13>/Multiport Switch' */
  switch ((int32_T)rtu_Showing_T) {
   case 1:
    /* Sin: '<S13>/Sine Wave1' */
    localB->SineWave1 = sin(localP->SineWave1_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave1_Phase) * localP->SineWave1_Amp +
      localP->SineWave1_Bias;
    localB->MultiportSwitch = localB->SineWave1;
    break;

   case 2:
    /* Sin: '<S13>/Sine Wave2' */
    localB->SineWave2 = sin(localP->SineWave2_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave2_Phase) * localP->SineWave2_Amp +
      localP->SineWave2_Bias;
    localB->MultiportSwitch = localB->SineWave2;
    break;

   case 3:
    /* Sin: '<S13>/Sine Wave3' */
    localB->SineWave3 = sin(localP->SineWave3_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave3_Phase) * localP->SineWave3_Amp +
      localP->SineWave3_Bias;
    localB->MultiportSwitch = localB->SineWave3;
    break;

   case 4:
    /* Sin: '<S13>/Sine Wave4' */
    localB->SineWave4 = sin(localP->SineWave4_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave4_Phase) * localP->SineWave4_Amp +
      localP->SineWave4_Bias;
    localB->MultiportSwitch = localB->SineWave4;
    break;

   case 5:
    /* Sin: '<S13>/Sine Wave5' */
    localB->SineWave5 = sin(localP->SineWave5_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave5_Phase) * localP->SineWave5_Amp +
      localP->SineWave5_Bias;
    localB->MultiportSwitch = localB->SineWave5;
    break;

   case 6:
    /* Sin: '<S13>/Sine Wave6' */
    localB->SineWave6 = sin(localP->SineWave6_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave6_Phase) * localP->SineWave6_Amp +
      localP->SineWave6_Bias;
    localB->MultiportSwitch = localB->SineWave6;
    break;

   case 7:
    /* Sin: '<S13>/Sine Wave7' */
    localB->SineWave7 = sin(localP->SineWave7_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave7_Phase) * localP->SineWave7_Amp +
      localP->SineWave7_Bias;
    localB->MultiportSwitch = localB->SineWave7;
    break;

   default:
    /* Sin: '<S13>/Sine Wave8' */
    localB->SineWave8 = sin(localP->SineWave8_Freq *
      (((motor_M->Timing.clockTick0+motor_M->Timing.clockTickH0* 4294967296.0)) *
       0.002) + localP->SineWave8_Phase) * localP->SineWave8_Amp +
      localP->SineWave8_Bias;
    localB->MultiportSwitch = localB->SineWave8;
    break;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch' */

  /* DataStoreWrite: '<S13>/Data Store Write' */
  *rtd_Angle_S = localB->MultiportSwitch;

  /* DataStoreRead: '<S13>/Data Store Read' */
  localB->DataStoreRead = *rtd_Angle_S;

  /* Product: '<S13>/Product' */
  localB->Product = localB->DataStoreRead * rtu_Showing_Angle;

  /* Gain: '<S13>/Gain' */
  localB->Gain = localP->Gain_Gain * localB->Product;

  /* DataTypeConversion: '<S13>/Data Type Conversion1' */
  localB->DataTypeConversion1 = localB->Gain;
}

/* Function for Chart: '<Root>/Chart' */
static uint8_T motor_Temp_Up_Check(uint16_T In1, uint16_T In2)
{
  uint8_T y;

  /* Graphical Function 'Temp_Up_Check': '<S1>:52' */
  y = 0U;

  /* Transition: '<S1>:440' */
  if ((!(In1 >= In2)) && (In1 < 2060)) {
    /* Transition: '<S1>:442' */
    y = 1U;

    /* Transition: '<S1>:445' */
  } else {
    /* Transition: '<S1>:441' */
    /* Transition: '<S1>:443' */
    /* Transition: '<S1>:445' */
    /* Transition: '<S1>:1077' */
  }

  return y;
}

/* Function for Chart: '<Root>/Chart' */
static uint8_T motor_Temp_Down_Check(uint16_T In1, uint16_T In2)
{
  uint8_T y;

  /* Graphical Function 'Temp_Down_Check': '<S1>:85' */
  y = 0U;

  /* Transition: '<S1>:478' */
  if ((!(In1 <= In2)) && (In1 > 150)) {
    /* Transition: '<S1>:480' */
    y = 1U;

    /* Transition: '<S1>:483' */
  } else {
    /* Transition: '<S1>:479' */
    /* Transition: '<S1>:481' */
    /* Transition: '<S1>:482' */
    /* Transition: '<S1>:483' */
    /* Transition: '<S1>:1078' */
  }

  return y;
}

/* Function for Chart: '<Root>/Chart' */
static void motor_defult(void)
{
  /* Inport: '<Root>/Test_Mode' incorporates:
   *  Inport: '<Root>/Motor_Num'
   */
  /* During 'defult': '<S1>:239' */
  if (motor_U.Test_Mode == 1) {
    /* Transition: '<S1>:429' */
    motor_DWork.is_Test_Mode = motor_IN_Calibration;

    /* Entry 'Calibration': '<S1>:237' */
    /* 标定模式 */
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = true;

    /* 电机失能 */
    motor_DWork.chu_jd = 0.0;
    motor_DWork.KG = 1U;
  } else if (motor_U.Test_Mode == 2) {
    /* Transition: '<S1>:432' */
    motor_DWork.is_Test_Mode = motor_IN_Limit_Up_Test;

    /* Inport: '<Root>/Motor_Num' */
    /* Entry 'Limit_Up_Test': '<S1>:238' */
    /* 测试电子上限位 */
    /* Entry Internal 'Limit_Up_Test': '<S1>:238' */
    /* Transition: '<S1>:664' */
    if (motor_U.Motor_Num == 1) {
      /* Transition: '<S1>:666' */
      motor_DWork.is_Limit_Up_Test = motor_IN_XHZY_pv;

      /* Entry 'XHZY': '<S1>:257' */
      /* 下滑纵摇电子上限位测试 */
      /* Entry Internal 'XHZY': '<S1>:257' */
      /* Transition: '<S1>:693' */
      motor_DWork.is_XHZY_a = motor_IN_Int;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int': '<S1>:259' */
      /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
      motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

      /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
      /* DataTypeConversion: '<S4>/Data Type Conversion2' */
      motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

      /* Gain: '<S4>/GXZ6' */
      motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

      /* Gain: '<S4>/GXZ1' */
      motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

      /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
      motor_DWork.chu_jd = motor_B.GXZ1;
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_YJ = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    } else if (motor_U.Motor_Num == 3) {
      /* Transition: '<S1>:665' */
      motor_DWork.is_Limit_Up_Test = motor_IN_XHHY_m1;

      /* Entry 'XHHY': '<S1>:256' */
      /* 下滑横摇电子上限位测试 */
      /* Entry Internal 'XHHY': '<S1>:256' */
      /* Transition: '<S1>:685' */
      motor_DWork.is_XHHY_nl = motor_IN_Int;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int': '<S1>:268' */
      /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
      motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

      /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
      /* DataTypeConversion: '<S4>/Data Type Conversion2' */
      motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

      /* Gain: '<S4>/GXZ6' */
      motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

      /* Gain: '<S4>/GXZ1' */
      motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

      /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
      motor_DWork.chu_jd = motor_B.GXZ1;
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    } else {
      if (motor_U.Motor_Num == 2) {
        /* Transition: '<S1>:667' */
        motor_DWork.is_Limit_Up_Test = motor_IN_HY_f;

        /* Entry 'HY': '<S1>:258' */
        /* 调试模式 */
        /* Entry Internal 'HY': '<S1>:258' */
        /* Transition: '<S1>:701' */
        motor_DWork.is_HY_a = motor_IN_Int;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int': '<S1>:275' */
        /* Simulink Function 'Angle_Calculation_HY': '<S1>:253' */
        motor_B.Encode_Pos_dc = motor_Y.Encode_Pos;

        /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_HY' */
        motor_Angle_Calculation_HY(motor_B.Encode_Pos_dc,
          &motor_B.Angle_Calculation_HY, (rtP_Angle_Calculation_HY_motor *)
          &motor_P.Angle_Calculation_HY);

        /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_HY' */
        motor_DWork.chu_jd = motor_B.Angle_Calculation_HY.GHDG9;
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.KG = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      }
    }
  } else if (motor_U.Test_Mode == 3) {
    /* Transition: '<S1>:430' */
    motor_DWork.is_Test_Mode = motor_IN_Limit_Down_Test;

    /* Inport: '<Root>/Motor_Num' */
    /* Entry 'Limit_Down_Test': '<S1>:240' */
    /* 电子下限位检测 */
    /* Entry Internal 'Limit_Down_Test': '<S1>:240' */
    /* Transition: '<S1>:675' */
    if (motor_U.Motor_Num == 1) {
      /* Transition: '<S1>:677' */
      motor_DWork.is_Limit_Down_Test = motor_IN_XHZY_pv;

      /* Entry 'XHZY': '<S1>:288' */
      /* 下滑纵摇电子下限位测试 */
      /* Entry Internal 'XHZY': '<S1>:288' */
      /* Transition: '<S1>:717' */
      motor_DWork.is_XHZY_i = motor_IN_Int;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int': '<S1>:289' */
      /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
      motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

      /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
      /* DataTypeConversion: '<S4>/Data Type Conversion2' */
      motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

      /* Gain: '<S4>/GXZ6' */
      motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

      /* Gain: '<S4>/GXZ1' */
      motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

      /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
      motor_DWork.chu_jd = motor_B.GXZ1;
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_YJ = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    } else if (motor_U.Motor_Num == 3) {
      /* Transition: '<S1>:676' */
      motor_DWork.is_Limit_Down_Test = motor_IN_XHHY_m1;

      /* Entry 'XHHY': '<S1>:296' */
      /* 下滑横摇电子下限位测试 */
      /* Entry Internal 'XHHY': '<S1>:296' */
      /* Transition: '<S1>:725' */
      motor_DWork.is_XHHY_f = motor_IN_Int;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int': '<S1>:297' */
      /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
      motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

      /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
      /* DataTypeConversion: '<S4>/Data Type Conversion2' */
      motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

      /* Gain: '<S4>/GXZ6' */
      motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

      /* Gain: '<S4>/GXZ1' */
      motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

      /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
      motor_DWork.chu_jd = motor_B.GXZ1;
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    } else {
      if (motor_U.Motor_Num == 2) {
        /* Transition: '<S1>:678' */
        motor_DWork.is_Limit_Down_Test = motor_IN_HY_f;

        /* Entry 'HY': '<S1>:280' */
        /* 横摇灯杆电子下限位测试 */
        /* Entry Internal 'HY': '<S1>:280' */
        /* Transition: '<S1>:709' */
        motor_DWork.is_HY_h = motor_IN_Int;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int': '<S1>:281' */
        /* Simulink Function 'Angle_Calculation_HY': '<S1>:253' */
        motor_B.Encode_Pos_dc = motor_Y.Encode_Pos;

        /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_HY' */
        motor_Angle_Calculation_HY(motor_B.Encode_Pos_dc,
          &motor_B.Angle_Calculation_HY, (rtP_Angle_Calculation_HY_motor *)
          &motor_P.Angle_Calculation_HY);

        /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_HY' */
        motor_DWork.chu_jd = motor_B.Angle_Calculation_HY.GHDG9;
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.KG = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      }
    }
  } else if ((motor_U.Test_Mode == 4) && (motor_U.Motor_Num == 1)) {
    /* Transition: '<S1>:427' */
    motor_DWork.is_Test_Mode = motor_IN_Elevation_Test;

    /* Entry 'Elevation_Test': '<S1>:304' */
    /* 标定模式 */
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.chu_jd = 0.0;

    /* Entry Internal 'Elevation_Test': '<S1>:304' */
    /* Transition: '<S1>:734' */
    motor_DWork.is_Elevation_Test = motor_IN_Int;
    motor_DWork.temporalCounter_i1 = 0U;

    /* Entry 'Int': '<S1>:305' */
    motor_DWork.KG = 1U;
    motor_DWork.KG_JD = 0U;
    motor_DWork.KG_YJ = 1U;
    motor_DWork.KG_En = 1U;
    motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  } else {
    if (motor_U.Test_Mode == 5) {
      /* Transition: '<S1>:1064' */
      motor_DWork.is_Test_Mode = motor_IN_Dspace_Test;

      /* Entry 'Dspace_Test': '<S1>:1051' */
      /* Dspace调试 */
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.chu_jd = 0.0;

      /* Entry Internal 'Dspace_Test': '<S1>:1051' */
      /* Transition: '<S1>:1054' */
      motor_DWork.is_Dspace_Test = motor_IN_Int;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int': '<S1>:1058' */
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_YJ = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    }
  }

  /* End of Inport: '<Root>/Test_Mode' */
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHZY_as(void)
{
  int32_T tmp;
  uint16_T tmp_0;
  real_T tmp_1;

  /* During 'XHZY': '<S1>:288' */
  switch (motor_DWork.is_XHZY_i) {
   case motor_IN_Int:
    /* During 'Int': '<S1>:289' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:718' */
      motor_DWork.is_XHZY_i = motor_IN_Int8;
    }
    break;

   case motor_IN_Int1:
    /* Inport: '<Root>/Down_Limit' */
    /* During 'Int1': '<S1>:290' */
    if (motor_U.Down_Limit == 0) {
      /* Transition: '<S1>:719' */
      /* 下限位开关低电平有效 */
      motor_DWork.is_XHZY_i = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int2': '<S1>:291' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(5.0 / motor_DWork.Ts))
    {
      /* Transition: '<S1>:1039' */
      motor_Y.Flag_Down_GZ_limit = 0U;

      /* 下限位开关故障$/ */
      motor_DWork.is_XHZY_i = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int2': '<S1>:291' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }

    /* End of Inport: '<Root>/Down_Limit' */
    break;

   case motor_IN_Int2_i:
    /* During 'Int2': '<S1>:291' */
    if (motor_DWork.temporalCounter_i1 >= 50U) {
      /* Transition: '<S1>:721' */
      motor_DWork.is_XHZY_i = motor_IN_Int7;
      motor_DWork.temporalCounter_i1 = 0U;
    } else {
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int3_l:
    /* During 'Int3': '<S1>:292' */
    if (fabs(motor_DWork.chu_jd) < 0.1) {
      /* Transition: '<S1>:723' */
      motor_DWork.is_XHZY_i = motor_IN_Int4_b;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int4': '<S1>:294' */
      motor_DWork.chu_jd = 0.0;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int4_b:
    /* During 'Int4': '<S1>:294' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:724' */
      motor_DWork.is_XHZY_i = motor_IN_Int5_a;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int5': '<S1>:295' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int5_a:
    /* During 'Int5': '<S1>:295' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:722' */
      motor_DWork.is_XHZY_i = motor_IN_Int6_m;

      /* Entry 'Int6': '<S1>:293' */
      motor_Y.DCZD = true;

      /* 开启制动 */
    }
    break;

   case motor_IN_Int6_m:
    /* During 'Int6': '<S1>:293' */
    /* Transition: '<S1>:720' */
    /* Transition: '<S1>:674' */
    motor_DWork.is_XHZY_i = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Down_Test = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Test_Mode = motor_IN_defult;

    /* Entry 'defult': '<S1>:239' */
    motor_Y.Open_Result = 1U;

    /* 开机状态位成功 */
    motor_DWork.In_State = 2U;
    break;

   case motor_IN_Int7:
    /* During 'Int7': '<S1>:973' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:974' */
      motor_DWork.is_XHZY_i = motor_IN_Int3_l;

      /* Entry 'Int3': '<S1>:292' */
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   default:
    /* During 'Int8': '<S1>:992' */
    if (motor_DWork.chu_jd < -16.0) {
      /* Transition: '<S1>:993' */
      motor_DWork.is_XHZY_i = motor_IN_Int1;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int1': '<S1>:290' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_U.Down_Limit == 0) {
      /* Transition: '<S1>:994' */
      /* 下限位开关低电平有效 */
      motor_DWork.is_XHZY_i = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int2': '<S1>:291' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Limit_Down_Test(void)
{
  int32_T tmp;
  real_T tmp_0;
  uint16_T tmp_1;

  /* During 'Limit_Down_Test': '<S1>:240' */
  switch (motor_DWork.is_Limit_Down_Test) {
   case motor_IN_HY_f:
    /* During 'HY': '<S1>:280' */
    switch (motor_DWork.is_HY_h) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:281' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:710' */
        motor_DWork.is_HY_h = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Down_Limit' */
      /* During 'Int1': '<S1>:282' */
      if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:711' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_HY_h = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:283' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(7.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1040' */
        motor_Y.Flag_Down_GZ_limit = 0U;

        /* 下限位开关故障$/ */
        motor_DWork.is_HY_h = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:283' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:283' */
      if (motor_DWork.temporalCounter_i1 >= 50U) {
        /* Transition: '<S1>:713' */
        motor_DWork.is_HY_h = motor_IN_Int7;
        motor_DWork.temporalCounter_i1 = 0U;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:284' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:714' */
        motor_DWork.is_HY_h = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int4': '<S1>:286' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:286' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:716' */
        motor_DWork.is_HY_h = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int5': '<S1>:287' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:287' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:715' */
        motor_DWork.is_HY_h = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:285' */
        motor_Y.DCZD = true;

        /* 开启制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:285' */
      /* Transition: '<S1>:712' */
      /* Transition: '<S1>:674' */
      motor_DWork.is_HY_h = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Down_Test = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Test_Mode = motor_IN_defult;

      /* Entry 'defult': '<S1>:239' */
      motor_Y.Open_Result = 1U;

      /* 开机状态位成功 */
      motor_DWork.In_State = 2U;
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:975' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:976' */
        motor_DWork.is_HY_h = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:284' */
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:995' */
      if (motor_DWork.chu_jd < -14.0) {
        /* Transition: '<S1>:997' */
        motor_DWork.is_HY_h = motor_IN_Int1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int1': '<S1>:282' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:996' */
        /* 下限位开关低电平有效 */
        motor_DWork.is_HY_h = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:283' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;
    }
    break;

   case motor_IN_XHHY_m1:
    /* During 'XHHY': '<S1>:296' */
    switch (motor_DWork.is_XHHY_f) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:297' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:726' */
        motor_DWork.is_XHHY_f = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Down_Limit' */
      /* During 'Int1': '<S1>:298' */
      if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:727' */
        /* 下限位开关低电平有效 */
        motor_DWork.is_XHHY_f = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:299' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(5.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1041' */
        motor_Y.Flag_Down_GZ_limit = 0U;

        /* 下限位开关故障$/ */
        motor_DWork.is_XHHY_f = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:299' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:299' */
      if (motor_DWork.temporalCounter_i1 >= 50U) {
        /* Transition: '<S1>:729' */
        motor_DWork.is_XHHY_f = motor_IN_Int7;
        motor_DWork.temporalCounter_i1 = 0U;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:300' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:730' */
        motor_DWork.is_XHHY_f = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int4': '<S1>:302' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:302' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:732' */
        motor_DWork.is_XHHY_f = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int5': '<S1>:303' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:303' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:731' */
        motor_DWork.is_XHHY_f = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:301' */
        motor_Y.DCZD = true;

        /* 开启制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:301' */
      /* Transition: '<S1>:728' */
      /* Transition: '<S1>:674' */
      motor_DWork.is_XHHY_f = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Down_Test = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Test_Mode = motor_IN_defult;

      /* Entry 'defult': '<S1>:239' */
      motor_Y.Open_Result = 1U;

      /* 开机状态位成功 */
      motor_DWork.In_State = 2U;
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:977' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:979' */
        motor_DWork.is_XHHY_f = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:300' */
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:998' */
      if (motor_DWork.chu_jd < -16.0) {
        /* Transition: '<S1>:999' */
        motor_DWork.is_XHHY_f = motor_IN_Int1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int1': '<S1>:298' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:1001' */
        /* 下限位开关低电平有效 */
        motor_DWork.is_XHHY_f = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:299' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;
    }
    break;

   default:
    motor_XHZY_as();
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHZY_a(void)
{
  int32_T tmp;
  uint16_T tmp_0;
  real_T tmp_1;

  /* During 'XHZY': '<S1>:257' */
  switch (motor_DWork.is_XHZY_a) {
   case motor_IN_Int:
    /* During 'Int': '<S1>:259' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:694' */
      motor_DWork.is_XHZY_a = motor_IN_Int8;
    }
    break;

   case motor_IN_Int1:
    /* Inport: '<Root>/Up_Limit' */
    /* During 'Int1': '<S1>:260' */
    if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:695' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_XHZY_a = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int2': '<S1>:261' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(5.0 / motor_DWork.Ts))
    {
      /* Transition: '<S1>:1036' */
      motor_Y.Flag_Up_GZ_limit = 0U;

      /* 上限位开关故障$/ */
      motor_DWork.is_XHZY_a = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int2': '<S1>:261' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }

    /* End of Inport: '<Root>/Up_Limit' */
    break;

   case motor_IN_Int2_i:
    /* During 'Int2': '<S1>:261' */
    if (motor_DWork.temporalCounter_i1 >= 50U) {
      /* Transition: '<S1>:697' */
      motor_DWork.is_XHZY_a = motor_IN_Int7;
      motor_DWork.temporalCounter_i1 = 0U;
    } else {
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int3_l:
    /* During 'Int3': '<S1>:262' */
    if (fabs(motor_DWork.chu_jd) < 0.1) {
      /* Transition: '<S1>:698' */
      motor_DWork.is_XHZY_a = motor_IN_Int4_b;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int4': '<S1>:263' */
      motor_DWork.chu_jd = 0.0;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int4_b:
    /* During 'Int4': '<S1>:263' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:700' */
      motor_DWork.is_XHZY_a = motor_IN_Int5_a;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int5': '<S1>:264' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int5_a:
    /* During 'Int5': '<S1>:264' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:699' */
      motor_DWork.is_XHZY_a = motor_IN_Int6_m;

      /* Entry 'Int6': '<S1>:265' */
      motor_Y.DCZD = true;

      /* 开启制动 */
    }
    break;

   case motor_IN_Int6_m:
    /* During 'Int6': '<S1>:265' */
    /* Transition: '<S1>:696' */
    /* Transition: '<S1>:663' */
    motor_DWork.is_XHZY_a = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Up_Test = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Test_Mode = motor_IN_defult;

    /* Entry 'defult': '<S1>:239' */
    motor_Y.Open_Result = 1U;

    /* 开机状态位成功 */
    motor_DWork.In_State = 2U;
    break;

   case motor_IN_Int7:
    /* During 'Int7': '<S1>:967' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:968' */
      motor_DWork.is_XHZY_a = motor_IN_Int3_l;

      /* Entry 'Int3': '<S1>:262' */
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   default:
    /* During 'Int8': '<S1>:986' */
    if (motor_DWork.chu_jd > 16.0) {
      /* Transition: '<S1>:987' */
      motor_DWork.is_XHZY_a = motor_IN_Int1;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int1': '<S1>:260' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:1002' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_XHZY_a = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Int2': '<S1>:261' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Limit_Up_Test(void)
{
  int32_T tmp;
  real_T tmp_0;
  uint16_T tmp_1;

  /* During 'Limit_Up_Test': '<S1>:238' */
  switch (motor_DWork.is_Limit_Up_Test) {
   case motor_IN_HY_f:
    /* During 'HY': '<S1>:258' */
    switch (motor_DWork.is_HY_a) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:275' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:702' */
        motor_DWork.is_HY_a = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Up_Limit' */
      /* During 'Int1': '<S1>:278' */
      if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:703' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_HY_a = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:279' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(7.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1037' */
        motor_Y.Flag_Up_GZ_limit = 0U;

        /* 上限位开关故障$/ */
        motor_DWork.is_HY_a = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:279' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:279' */
      if (motor_DWork.temporalCounter_i1 >= 50U) {
        /* Transition: '<S1>:705' */
        motor_DWork.is_HY_a = motor_IN_Int7;
        motor_DWork.temporalCounter_i1 = 0U;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:274' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:706' */
        motor_DWork.is_HY_a = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int4': '<S1>:277' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:277' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:708' */
        motor_DWork.is_HY_a = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int5': '<S1>:276' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:276' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:707' */
        motor_DWork.is_HY_a = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:273' */
        motor_Y.DCZD = true;

        /* 开启制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:273' */
      /* Transition: '<S1>:704' */
      /* Transition: '<S1>:663' */
      motor_DWork.is_HY_a = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Up_Test = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Test_Mode = motor_IN_defult;

      /* Entry 'defult': '<S1>:239' */
      motor_Y.Open_Result = 1U;

      /* 开机状态位成功 */
      motor_DWork.In_State = 2U;
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:969' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:970' */
        motor_DWork.is_HY_a = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:274' */
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:990' */
      if (motor_DWork.chu_jd > 14.0) {
        /* Transition: '<S1>:991' */
        motor_DWork.is_HY_a = motor_IN_Int1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int1': '<S1>:278' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:1003' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_HY_a = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:279' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;
    }
    break;

   case motor_IN_XHHY_m1:
    /* During 'XHHY': '<S1>:256' */
    switch (motor_DWork.is_XHHY_nl) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:268' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:686' */
        motor_DWork.is_XHHY_nl = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Up_Limit' */
      /* During 'Int1': '<S1>:271' */
      if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:687' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_XHHY_nl = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:272' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(5.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1038' */
        motor_Y.Flag_Up_GZ_limit = 0U;

        /* 上限位开关故障$/ */
        motor_DWork.is_XHHY_nl = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:272' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:272' */
      if (motor_DWork.temporalCounter_i1 >= 50U) {
        /* Transition: '<S1>:689' */
        motor_DWork.is_XHHY_nl = motor_IN_Int7;
        motor_DWork.temporalCounter_i1 = 0U;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:267' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:690' */
        motor_DWork.is_XHHY_nl = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int4': '<S1>:270' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:270' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:692' */
        motor_DWork.is_XHHY_nl = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int5': '<S1>:269' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:269' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:691' */
        motor_DWork.is_XHHY_nl = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:266' */
        motor_Y.DCZD = true;

        /* 开启制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:266' */
      /* Transition: '<S1>:688' */
      /* Transition: '<S1>:663' */
      motor_DWork.is_XHHY_nl = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Up_Test = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Test_Mode = motor_IN_defult;

      /* Entry 'defult': '<S1>:239' */
      motor_Y.Open_Result = 1U;

      /* 开机状态位成功 */
      motor_DWork.In_State = 2U;
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:971' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:972' */
        motor_DWork.is_XHHY_nl = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:267' */
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:988' */
      if (motor_DWork.chu_jd > 16.0) {
        /* Transition: '<S1>:989' */
        motor_DWork.is_XHHY_nl = motor_IN_Int1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int1': '<S1>:271' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:1004' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_XHHY_nl = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Int2': '<S1>:272' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;
    }
    break;

   default:
    motor_XHZY_a();
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_exit_internal_Test_Mode(void)
{
  /* Exit Internal 'Test_Mode': '<S1>:35' */
  motor_DWork.is_Test_Mode = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'Dspace_Test': '<S1>:1051' */
  motor_DWork.is_Dspace_Test = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'Elevation_Test': '<S1>:304' */
  motor_DWork.is_Elevation_Test = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'Limit_Down_Test': '<S1>:240' */
  /* Exit Internal 'HY': '<S1>:280' */
  motor_DWork.is_HY_h = motor_IN_NO_ACTIVE_CHILD;
  motor_DWork.is_Limit_Down_Test = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'XHHY': '<S1>:296' */
  motor_DWork.is_XHHY_f = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'XHZY': '<S1>:288' */
  motor_DWork.is_XHZY_i = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'Limit_Up_Test': '<S1>:238' */
  /* Exit Internal 'HY': '<S1>:258' */
  motor_DWork.is_HY_a = motor_IN_NO_ACTIVE_CHILD;
  motor_DWork.is_Limit_Up_Test = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'XHHY': '<S1>:256' */
  motor_DWork.is_XHHY_nl = motor_IN_NO_ACTIVE_CHILD;

  /* Exit Internal 'XHZY': '<S1>:257' */
  motor_DWork.is_XHZY_a = motor_IN_NO_ACTIVE_CHILD;
}

/* Function for Chart: '<Root>/Chart' */
static uint8_T motor_Init_Result_Check(uint8_T In1, uint8_T In2, real_T In3)
{
  uint8_T y;

  /* MATLAB Function 'Init_Result_Check': '<S1>:105' */
  if ((In1 == 1) && (In2 == 1) && (In3 == 1.0)) {
    /* '<S1>:105:2' */
    /* '<S1>:105:3' */
    y = 1U;
  } else {
    /* '<S1>:105:5' */
    y = 0U;
  }

  return y;
}

/* Function for Chart: '<Root>/Chart' */
static void motor_hy(void)
{
  boolean_T guard1 = false;
  real_T tmp;
  int32_T saturatedUnaryMinus;

  /* During 'hy': '<S1>:62' */
  switch (motor_DWork.is_hy) {
   case motor_IN_P1:
    /* During 'P1': '<S1>:39' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:452' */
      /* 等待2S */
      if (motor_DWork.Encode_Pos0 <= 293092.0) {
        /* Transition: '<S1>:453' */
        /* 293092为2.5度 */
        motor_DWork.is_hy = motor_IN_P8;

        /* Entry 'P8': '<S1>:29' */
        motor_Y.Flag_Motor_Error = 0U;

        /* 电机故障，不能正转
           Motor_En=1;
           电机失能，关 */
      } else {
        if (motor_U.Encode_Sp < 0) {
          /* Inport: '<Root>/Encode_Sp' */
          saturatedUnaryMinus = motor_U.Encode_Sp;
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        } else {
          /* Inport: '<Root>/Encode_Sp' */
          saturatedUnaryMinus = motor_U.Encode_Sp;
        }

        if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
          /* Transition: '<S1>:454' */
          /*  判断电机是否到达上机械限位
             故障（卡死）
             编码器故障 */
          motor_DWork.is_hy = motor_IN_P3;

          /* Entry 'P3': '<S1>:26' */
          /* en:PWMOUT=PWM_Value_Down;
             du:PWMOUT=PWM_Value_Down;%电机下行$/
             on after(4/Ts,tick):Flag_Up_GZ_limit= uint8(0);%上限位开关故障$/
             Motor_En=1;
             电机失能，关
             PWMOUT=PWM_Value_Mid;
             4S之后停机$/ */
          motor_Y.Flag_Up_GZ_limit = 0U;

          /* 上限位开关故障$/ */
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }
    break;

   case motor_IN_P10:
    /* During 'P10': '<S1>:68' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
      /* Transition: '<S1>:461' */
      motor_DWork.is_hy = motor_IN_p11;

      /* Entry 'p11': '<S1>:40' */
      motor_DWork.Encode_Pos0 = motor_DWork.Encode_Pos3;
      motor_DWork.Average_En = 1.0;
      motor_DWork.chu_jd = -20.5;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    } else {
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;

      /* 电机触碰到机械限位 */
    }
    break;

   case motor_IN_P11:
    /* During 'P11': '<S1>:1175' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1169' */
      motor_DWork.is_hy = motor_IN_P2;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P2': '<S1>:41' */
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
    }
    break;

   case motor_IN_P2:
    /* Inport: '<Root>/Encode_Sp' */
    /* Inport: '<Root>/Down_Limit' */
    /* During 'P2': '<S1>:41' */
    if (motor_U.Encode_Sp < 0) {
      saturatedUnaryMinus = motor_U.Encode_Sp;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.Encode_Sp;
    }

    if ((motor_DWork.temporalCounter_i1 >= (uint32_T)(3.0 / motor_DWork.Ts)) &&
        ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min)) {
      /* Transition: '<S1>:458' */
      /* 等待3S */
      /* Transition: '<S1>:456' */
      /*  判断电机是否到达下机械限位
         故障（卡死） */
      motor_DWork.is_hy = motor_IN_P5;

      /* Entry 'P5': '<S1>:24' */
      /* en:PWMOUT=PWM_Value_Up;
         du:PWMOUT=PWM_Value_Up;%电机上行
         on after(4/Ts,tick):Flag_Down_GZ_limit=0;%下限位开关故障
         Motor_En=1;
         PWMOUT=PWM_Value_Mid;
         4S之后停机 */
      motor_Y.Flag_Down_GZ_limit = 0U;

      /* 下限位开关故障 */
    } else if (motor_U.Down_Limit == 0) {
      /* Transition: '<S1>:459' */
      /* 下限位开关低电平有效 */
      motor_DWork.is_hy = motor_IN_P4;

      /* Entry 'P4': '<S1>:28' */
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
    } else {
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
    }

    /* End of Inport: '<Root>/Down_Limit' */
    break;

   case motor_IN_P3:
    /* During 'P3': '<S1>:26' */
    /* Transition: '<S1>:1030' */
    motor_DWork.is_hy = motor_IN_P2;
    motor_DWork.temporalCounter_i1 = 0U;

    /* Entry 'P2': '<S1>:41' */
    motor_DWork.chu_jd -= 0.01;

    /* Inport: '<Root>/JD_In' */
    /* Simulink Function 'Motor_HYDG': '<S1>:77' */
    motor_B.JD_In_f = motor_U.JD_In;
    tmp = motor_DWork.Encode_Pos0;
    if (tmp < 2.147483648E+9) {
      if (tmp >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_B.Encode_Pos_i = saturatedUnaryMinus;

    /* Inport: '<Root>/System_Order' */
    motor_B.Slect_port_c = motor_U.System_Order;

    /* Inport: '<Root>/Encode_Sp' */
    motor_B.Encode_Sp_n = motor_U.Encode_Sp;

    /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
    motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                     motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                     &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                     (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                     &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                     &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                     &motor_DWork.chu_jd);

    /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
    motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
    tmp = motor_B.Motor_HYDG.KP_e;
    if (tmp < 2.147483648E+9) {
      if (tmp >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Error = saturatedUnaryMinus;
    tmp = motor_B.Motor_HYDG.KP_JD;
    if (tmp < 2.147483648E+9) {
      if (tmp >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Out = saturatedUnaryMinus;
    break;

   case motor_IN_P4:
    /* Inport: '<Root>/Encode_Sp' */
    /* During 'P4': '<S1>:28' */
    if (motor_U.Encode_Sp < 0) {
      saturatedUnaryMinus = motor_U.Encode_Sp;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.Encode_Sp;
    }

    if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
      /* Transition: '<S1>:460' */
      /*  判断电机是否到达下机械限位 */
      motor_DWork.is_hy = motor_IN_P10;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P10': '<S1>:68' */
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
    } else {
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;

      /* 电机触碰到机械限位 */
    }
    break;

   case motor_IN_P5:
    /* During 'P5': '<S1>:24' */
    /* Transition: '<S1>:1029' */
    motor_DWork.is_hy = motor_IN_p11;

    /* Entry 'p11': '<S1>:40' */
    motor_DWork.Encode_Pos0 = motor_DWork.Encode_Pos3;
    motor_DWork.Average_En = 1.0;
    motor_DWork.chu_jd = -20.5;
    motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    break;

   case motor_IN_P8:
    /* During 'P8': '<S1>:29' */
    break;

   case motor_IN_p11:
    /* During 'p11': '<S1>:40' */
    if (fabs(motor_DWork.chu_jd) <= 0.02) {
      /* Transition: '<S1>:463' */
      motor_DWork.is_hy = motor_IN_p12;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'p12': '<S1>:125' */
      motor_Y.Motor_En = true;

      /* 关电机 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行回零点 */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
    }
    break;

   default:
    /* During 'p12': '<S1>:125' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
      /* Transition: '<S1>:462' */
      /* Transition: '<S1>:406' */
      motor_DWork.is_hy = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Initialize = motor_IN_Check_Reset;

      /* Entry 'Check_Reset': '<S1>:71' */
      motor_Y.Ini_Result = motor_Init_Result_Check(motor_Y.Flag_Cur,
        motor_Y.Flag_Temp_Up, (real_T)motor_Y.Flag_Temp_Down);
      motor_Y.DCZD = true;
    }
    break;
  }

  if (guard1) {
    /* Inport: '<Root>/Up_Limit' */
    if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:455' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_hy = motor_IN_P11;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P11': '<S1>:1175' */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行  */
      /* Simulink Function 'Motor_HYDG': '<S1>:77' */
      motor_B.JD_In_f = motor_U.JD_In;
      tmp = motor_DWork.Encode_Pos0;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_i = saturatedUnaryMinus;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_c = motor_U.System_Order;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_n = motor_U.Encode_Sp;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
      motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                       motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                       &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                       (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                       &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
      motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
      tmp = motor_B.Motor_HYDG.KP_e;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      tmp = motor_B.Motor_HYDG.KP_JD;
      if (tmp < 2.147483648E+9) {
        if (tmp >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
    }

    /* End of Inport: '<Root>/Up_Limit' */
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_xhhy(void)
{
  boolean_T guard1 = false;
  uint16_T tmp;
  real_T tmp_0;
  int32_T saturatedUnaryMinus;

  /* During 'xhhy': '<S1>:65' */
  switch (motor_DWork.is_xhhy) {
   case motor_IN_P1:
    /* Inport: '<Root>/Up_Limit' incorporates:
     *  Inport: '<Root>/Encode_Sp'
     */
    /* During 'P1': '<S1>:25' */
    if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:468' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_xhhy = motor_IN_P10;

      /* Entry 'P10': '<S1>:30' */
      motor_DWork.chu_jd += 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(2.0 / motor_DWork.Ts))
    {
      /* Transition: '<S1>:465' */
      /* 等待2S */
      if (motor_DWork.Encode_Pos0 <= 293092.0) {
        /* Transition: '<S1>:466' */
        /* 293092为2.5度 */
        motor_DWork.is_xhhy = motor_IN_P8_e;

        /* Entry 'P8': '<S1>:31' */
        motor_Y.Flag_Motor_Error = 0U;

        /* 电机故障，不能正转
           Motor_En=1;
           电机失能，关 */
      } else {
        if (motor_U.Encode_Sp < 0) {
          /* Inport: '<Root>/Encode_Sp' */
          saturatedUnaryMinus = motor_U.Encode_Sp;
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        } else {
          /* Inport: '<Root>/Encode_Sp' */
          saturatedUnaryMinus = motor_U.Encode_Sp;
        }

        if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
          /* Transition: '<S1>:467' */
          /*  判断电机是否到达上机械限位
             故障（卡死）
             编码器故障 */
          motor_DWork.is_xhhy = motor_IN_P3_k;

          /* Entry 'P3': '<S1>:114' */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          motor_Y.Flag_Up_GZ_limit = 0U;

          /* 上限位开关故障$/
             Motor_En=1;
             电机失能，关
             PWMOUT=PWM_Value_Mid;
             4S之后停机$/ */
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    /* End of Inport: '<Root>/Up_Limit' */
    break;

   case motor_IN_P10:
    /* Inport: '<Root>/Encode_Sp' */
    /* During 'P10': '<S1>:30' */
    if (motor_U.Encode_Sp < 0) {
      saturatedUnaryMinus = motor_U.Encode_Sp;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.Encode_Sp;
    }

    if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
      /* Transition: '<S1>:469' */
      /*  判断电机是否到达上机械限位 */
      motor_DWork.is_xhhy = motor_IN_P12;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P12': '<S1>:1172' */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      motor_DWork.chu_jd += 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;

      /* 电机触碰到机械上限位 */
    }
    break;

   case motor_IN_P11:
    /* During 'P11': '<S1>:34' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
      /* Transition: '<S1>:475' */
      motor_DWork.is_xhhy = motor_IN_p10;

      /* Entry 'p10': '<S1>:61' */
      motor_DWork.Encode_Pos0 = motor_DWork.Encode_Pos2;
      motor_DWork.Average_En = 1.0;

      /* chu_jd = Angle_Calculation_XH(Encode_Pos); */
      motor_DWork.chu_jd = -20.5;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    } else {
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;

      /* 电机触碰到机械限位 */
    }
    break;

   case motor_IN_P12:
    /* During 'P12': '<S1>:1172' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1174' */
      motor_DWork.is_xhhy = motor_IN_P2_a;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P2': '<S1>:69' */
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    }
    break;

   case motor_IN_P2_a:
    /* Inport: '<Root>/Encode_Sp' */
    /* Inport: '<Root>/Down_Limit' */
    /* During 'P2': '<S1>:69' */
    if (motor_U.Encode_Sp < 0) {
      saturatedUnaryMinus = motor_U.Encode_Sp;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.Encode_Sp;
    }

    if ((motor_DWork.temporalCounter_i1 >= (uint32_T)(3.0 / motor_DWork.Ts)) &&
        ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min)) {
      /* Transition: '<S1>:470' */
      /* 等待3S */
      /* Transition: '<S1>:471' */
      /*  判断电机是否到达下机械限位
         故障（卡死） */
      motor_DWork.is_xhhy = motor_IN_P5_n;

      /* Entry 'P5': '<S1>:33' */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_Y.Flag_Down_GZ_limit = 0U;

      /* 下限位开关故障
         Motor_En=1;
         PWMOUT=PWM_Value_Mid;
         4S之后停机 */
    } else if (motor_U.Down_Limit == 0) {
      /* Transition: '<S1>:473' */
      /* 下限位开关低电平有效 */
      motor_DWork.is_xhhy = motor_IN_P4_o;

      /* Entry 'P4': '<S1>:38' */
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    } else {
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    }

    /* End of Inport: '<Root>/Down_Limit' */
    break;

   case motor_IN_P3_k:
    /* During 'P3': '<S1>:114' */
    /* Transition: '<S1>:1032' */
    motor_DWork.is_xhhy = motor_IN_P2_a;
    motor_DWork.temporalCounter_i1 = 0U;

    /* Entry 'P2': '<S1>:69' */
    motor_DWork.chu_jd -= 0.01;

    /* Inport: '<Root>/JD_In' */
    /* 电机下行 */
    /* Simulink Function 'Motor_XHHY': '<S1>:42' */
    motor_B.JD_In = motor_U.JD_In;
    tmp_0 = motor_DWork.Encode_Pos0;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_B.Encode_Pos_c = saturatedUnaryMinus;

    /* Inport: '<Root>/Encode_Sp' */
    motor_B.Encode_Sp = motor_U.Encode_Sp;

    /* Inport: '<Root>/System_Order' */
    motor_B.Slect_port = motor_U.System_Order;

    /* Inport: '<Root>/SGWY_In' */
    motor_B.SGWY_In = motor_U.SGWY_In;

    /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
    motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                     motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                     &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                     (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                     &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                     &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                     &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                     &motor_DWork.KG_JD, &motor_DWork.KG_clc, &motor_DWork.P_KP,
                     &motor_DWork.V_KI, &motor_DWork.V_KP, &motor_DWork.chu_jd);

    /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
    tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint16_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint16_T;
    }

    motor_Y.PWMOUT = tmp;
    tmp_0 = motor_B.Motor_XHHY.KP_JD1;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Out = saturatedUnaryMinus;
    tmp_0 = motor_B.Motor_XHHY.KP_e;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Error = saturatedUnaryMinus;
    break;

   case motor_IN_P4_o:
    /* Inport: '<Root>/Encode_Sp' */
    /* During 'P4': '<S1>:38' */
    if (motor_U.Encode_Sp < 0) {
      saturatedUnaryMinus = motor_U.Encode_Sp;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.Encode_Sp;
    }

    if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
      /* Transition: '<S1>:474' */
      /*  判断电机是否到达下机械限位 */
      motor_DWork.is_xhhy = motor_IN_P11;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P11': '<S1>:34' */
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    } else {
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;

      /* 电机触碰到机械限位 */
    }
    break;

   case motor_IN_P5_n:
    /* During 'P5': '<S1>:33' */
    /* Transition: '<S1>:1033' */
    motor_DWork.is_xhhy = motor_IN_P11;
    motor_DWork.temporalCounter_i1 = 0U;

    /* Entry 'P11': '<S1>:34' */
    motor_DWork.chu_jd -= 0.003;

    /* Inport: '<Root>/JD_In' */
    /* 电机下行 */
    /* Simulink Function 'Motor_XHHY': '<S1>:42' */
    motor_B.JD_In = motor_U.JD_In;
    tmp_0 = motor_DWork.Encode_Pos0;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_B.Encode_Pos_c = saturatedUnaryMinus;

    /* Inport: '<Root>/Encode_Sp' */
    motor_B.Encode_Sp = motor_U.Encode_Sp;

    /* Inport: '<Root>/System_Order' */
    motor_B.Slect_port = motor_U.System_Order;

    /* Inport: '<Root>/SGWY_In' */
    motor_B.SGWY_In = motor_U.SGWY_In;

    /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
    motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                     motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                     &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                     (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                     &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                     &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                     &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                     &motor_DWork.KG_JD, &motor_DWork.KG_clc, &motor_DWork.P_KP,
                     &motor_DWork.V_KI, &motor_DWork.V_KP, &motor_DWork.chu_jd);

    /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
    tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint16_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint16_T;
    }

    motor_Y.PWMOUT = tmp;
    tmp_0 = motor_B.Motor_XHHY.KP_JD1;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Out = saturatedUnaryMinus;
    tmp_0 = motor_B.Motor_XHHY.KP_e;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Error = saturatedUnaryMinus;
    break;

   case motor_IN_P8_e:
    /* During 'P8': '<S1>:31' */
    break;

   case motor_IN_p10:
    /* During 'p10': '<S1>:61' */
    if (fabs(motor_DWork.chu_jd) <= 0.02) {
      /* Transition: '<S1>:476' */
      motor_DWork.is_xhhy = motor_IN_p11_b;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'p11': '<S1>:113' */
      motor_Y.Motor_En = true;

      /* 关电机 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行回零点 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    }
    break;

   default:
    /* During 'p11': '<S1>:113' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
      /* Transition: '<S1>:477' */
      /* Transition: '<S1>:406' */
      motor_DWork.is_xhhy = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Initialize = motor_IN_Check_Reset;

      /* Entry 'Check_Reset': '<S1>:71' */
      motor_Y.Ini_Result = motor_Init_Result_Check(motor_Y.Flag_Cur,
        motor_Y.Flag_Temp_Up, (real_T)motor_Y.Flag_Temp_Down);
      motor_Y.DCZD = true;
    }
    break;
  }

  if (guard1) {
    motor_DWork.chu_jd += 0.01;

    /* Inport: '<Root>/JD_In' */
    /* 电机上行 */
    /* Simulink Function 'Motor_XHHY': '<S1>:42' */
    motor_B.JD_In = motor_U.JD_In;
    tmp_0 = motor_DWork.Encode_Pos0;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_B.Encode_Pos_c = saturatedUnaryMinus;

    /* Inport: '<Root>/Encode_Sp' */
    motor_B.Encode_Sp = motor_U.Encode_Sp;

    /* Inport: '<Root>/System_Order' */
    motor_B.Slect_port = motor_U.System_Order;

    /* Inport: '<Root>/SGWY_In' */
    motor_B.SGWY_In = motor_U.SGWY_In;

    /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
    motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                     motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                     &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                     (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                     &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                     &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                     &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                     &motor_DWork.KG_JD, &motor_DWork.KG_clc, &motor_DWork.P_KP,
                     &motor_DWork.V_KI, &motor_DWork.V_KP, &motor_DWork.chu_jd);

    /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
    tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint16_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint16_T;
    }

    motor_Y.PWMOUT = tmp;
    tmp_0 = motor_B.Motor_XHHY.KP_JD1;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Out = saturatedUnaryMinus;
    tmp_0 = motor_B.Motor_XHHY.KP_e;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Error = saturatedUnaryMinus;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Initialize(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  uint16_T tmp;
  real_T tmp_0;
  int32_T saturatedUnaryMinus;

  /* During 'Initialize': '<S1>:12' */
  switch (motor_DWork.is_Initialize) {
   case motor_IN_Check_Reset:
    /* Inport: '<Root>/System_Order' */
    /* During 'Check_Reset': '<S1>:71' */
    if ((motor_Y.Ini_Result == 1) && (motor_U.System_Order == 2)) {
      /* Inport: '<Root>/Working_Mode' */
      /* Transition: '<S1>:402' */
      /* 代表初始化成功，接收开机指令 */
      if (motor_U.Working_Mode == 3) {
        /* Transition: '<S1>:387' */
        motor_DWork.is_Initialize = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_M_Run = motor_IN_Normal_Mode;

        /* Entry 'Normal_Mode': '<S1>:13' */
        /* 正常模式 */
        motor_Y.DCZD = false;

        /* 开电磁制动，低有效 */
        motor_Y.Open_Result = 3U;

        /* 开机未完成状态位 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;

        /* Entry Internal 'Normal_Mode': '<S1>:13' */
        /* Transition: '<S1>:410' */
        motor_DWork.is_Normal_Mode = motor_IN_defult1;
        motor_DWork.temporalCounter_i1 = 0U;
      } else if (motor_U.Working_Mode == 2) {
        /* Transition: '<S1>:385' */
        motor_DWork.is_Initialize = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_M_Run = motor_IN_Showing_Mode;

        /* Entry 'Showing_Mode': '<S1>:51' */
        /* 检视模式 */
        motor_Y.DCZD = false;

        /* 开电磁制动，低有效 */
        motor_Y.Open_Result = 3U;

        /* 开机未完成状态位 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.KG = 0U;

        /* Entry Internal 'Showing_Mode': '<S1>:51' */
        /* Transition: '<S1>:437' */
        motor_DWork.is_Showing_Mode = motor_IN_Start;
        motor_DWork.temporalCounter_i1 = 0U;
      } else if (motor_U.Working_Mode == 1) {
        /* Transition: '<S1>:382' */
        motor_DWork.is_Initialize = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_M_Run = motor_IN_Test_Mode;

        /* Entry 'Test_Mode': '<S1>:35' */
        /* 调试模式 */
        /* Entry Internal 'Test_Mode': '<S1>:35' */
        /* Transition: '<S1>:424' */
        motor_DWork.is_Test_Mode = motor_IN_defult;

        /* Entry 'defult': '<S1>:239' */
        motor_Y.Open_Result = 1U;

        /* 开机状态位成功 */
        motor_DWork.In_State = 2U;
      } else {
        guard2 = true;
      }

      /* End of Inport: '<Root>/Working_Mode' */
    } else {
      guard2 = true;
    }
    break;

   case motor_IN_Parameters_Reset:
    /* Inport: '<Root>/Motor_Num' */
    /* During 'Parameters_Reset': '<S1>:37' */
    /* Transition: '<S1>:400' */
    if (motor_U.Motor_Num == 1) {
      /* Transition: '<S1>:403' */
      motor_DWork.is_Initialize = motor_IN_xhzy;

      /* Entry Internal 'xhzy': '<S1>:128' */
      /* Transition: '<S1>:484' */
      motor_DWork.is_xhzy = motor_IN_P1;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P1': '<S1>:66' */
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = 0U;
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    } else if (motor_U.Motor_Num == 3) {
      /* Transition: '<S1>:397' */
      motor_DWork.is_Initialize = motor_IN_xhhy;

      /* Entry Internal 'xhhy': '<S1>:65' */
      /* Transition: '<S1>:464' */
      motor_DWork.is_xhhy = motor_IN_P1;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P1': '<S1>:25' */
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行 */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
    } else {
      if (motor_U.Motor_Num == 2) {
        /* Transition: '<S1>:401' */
        motor_DWork.is_Initialize = motor_IN_hy;

        /* Entry Internal 'hy': '<S1>:62' */
        /* Transition: '<S1>:451' */
        motor_DWork.is_hy = motor_IN_P1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'P1': '<S1>:39' */
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_clc = 0U;
      }
    }

    /* End of Inport: '<Root>/Motor_Num' */
    break;

   case motor_IN_Parameters_Reset0:
    /* During 'Parameters_Reset0': '<S1>:89' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
      /* Transition: '<S1>:399' */
      motor_DWork.is_Initialize = motor_IN_Parameters_Reset;

      /* Entry 'Parameters_Reset': '<S1>:37' */
      motor_Y.Motor_En = false;

      /* 开电机 */
      motor_DWork.Encode_Pos0 = 0.0;

      /* 位置初始值 */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 1U;
    }
    break;

   case motor_IN_hy:
    motor_hy();
    break;

   case motor_IN_xhhy:
    motor_xhhy();
    break;

   default:
    /* During 'xhzy': '<S1>:128' */
    switch (motor_DWork.is_xhzy) {
     case motor_IN_P1:
      /* During 'P1': '<S1>:66' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:485' */
        /* 等待2S */
        if (motor_DWork.Encode_Pos0 <= 293092.0) {
          /* Transition: '<S1>:486' */
          /* 293092为2.5度 */
          motor_DWork.is_xhzy = motor_IN_P8;

          /* Entry 'P8': '<S1>:32' */
          motor_Y.Flag_Motor_Error = 0U;

          /* 电机故障，不能正转 */
          motor_Y.Motor_En = true;

          /* 电机失能，关 */
        } else {
          if (motor_U.Encode_Sp < 0) {
            /* Inport: '<Root>/Encode_Sp' */
            saturatedUnaryMinus = motor_U.Encode_Sp;
            if (saturatedUnaryMinus <= MIN_int32_T) {
              saturatedUnaryMinus = MAX_int32_T;
            } else {
              saturatedUnaryMinus = -saturatedUnaryMinus;
            }
          } else {
            /* Inport: '<Root>/Encode_Sp' */
            saturatedUnaryMinus = motor_U.Encode_Sp;
          }

          if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
            /* Transition: '<S1>:487' */
            /*  判断电机是否到达上机械限位
               故障（卡死）
               编码器故障 */
            motor_DWork.is_xhzy = motor_IN_P3;

            /* Entry 'P3': '<S1>:127' */
            motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
            motor_Y.Flag_Up_GZ_limit = 0U;

            /* 上限位开关故障$/
               Motor_En=1;
               电机失能，关
               PWMOUT=PWM_Value_Mid;
               4S之后停机$/ */
          } else {
            guard1 = true;
          }
        }
      } else {
        guard1 = true;
      }
      break;

     case motor_IN_P10:
      /* During 'P10': '<S1>:63' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
        /* Transition: '<S1>:495' */
        motor_DWork.is_xhzy = motor_IN_p11;

        /* Entry 'p11': '<S1>:126' */
        motor_DWork.Encode_Pos0 = motor_DWork.Encode_Pos1;
        motor_DWork.Average_En = 1.0;

        /* chu_jd = Angle_Calculation_XH(Encode_Pos); */
        motor_DWork.chu_jd = -20.5;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      } else {
        motor_DWork.chu_jd -= 0.003;

        /* Inport: '<Root>/JD_In' */
        /* 电机下行; */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        tmp_0 = motor_DWork.Encode_Pos0;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_B.Encode_Pos_c = saturatedUnaryMinus;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;

        /* 电机下行
           电机触碰到机械限位 */
      }
      break;

     case motor_IN_P11:
      /* During 'P11': '<S1>:1170' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:1171' */
        motor_DWork.is_xhzy = motor_IN_P2;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'P2': '<S1>:67' */
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* 电机下行; */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        tmp_0 = motor_DWork.Encode_Pos0;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_B.Encode_Pos_c = saturatedUnaryMinus;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      }
      break;

     case motor_IN_P2:
      /* Inport: '<Root>/Encode_Sp' */
      /* Inport: '<Root>/Down_Limit' */
      /* During 'P2': '<S1>:67' */
      if (motor_U.Encode_Sp < 0) {
        saturatedUnaryMinus = motor_U.Encode_Sp;
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      } else {
        saturatedUnaryMinus = motor_U.Encode_Sp;
      }

      if ((motor_DWork.temporalCounter_i1 >= (uint32_T)(3.0 / motor_DWork.Ts)) &&
          ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min)) {
        /* Transition: '<S1>:491' */
        /* 等待3S */
        /* Transition: '<S1>:489' */
        /*  判断电机是否到达下机械限位
           故障（卡死） */
        motor_DWork.is_xhzy = motor_IN_P5;

        /* Entry 'P5': '<S1>:64' */
        motor_Y.Flag_Down_GZ_limit = 0U;

        /* 下限位开关故障
           du:PWMOUT=PWM_Value_Up;%电机上行
           on after(4/Ts,tick):Flag_Down_GZ_limit=0;%下限位开关故障
           Motor_En=1;
           PWMOUT=PWM_Value_Mid;
           4S之后停机 */
      } else if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:492' */
        /* 下限位开关低电平有效 */
        motor_DWork.is_xhzy = motor_IN_P4;

        /* Entry 'P4': '<S1>:72' */
        motor_DWork.chu_jd -= 0.003;

        /* Inport: '<Root>/JD_In' */
        /* 电机下行; */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        tmp_0 = motor_DWork.Encode_Pos0;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_B.Encode_Pos_c = saturatedUnaryMinus;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* 电机下行; */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        tmp_0 = motor_DWork.Encode_Pos0;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_B.Encode_Pos_c = saturatedUnaryMinus;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;

        /* 电机下行 */
      }

      /* End of Inport: '<Root>/Down_Limit' */
      break;

     case motor_IN_P3:
      /* During 'P3': '<S1>:127' */
      /* Transition: '<S1>:1034' */
      motor_DWork.is_xhzy = motor_IN_P2;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P2': '<S1>:67' */
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行; */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      break;

     case motor_IN_P4:
      /* Inport: '<Root>/Encode_Sp' */
      /* During 'P4': '<S1>:72' */
      if (motor_U.Encode_Sp < 0) {
        saturatedUnaryMinus = motor_U.Encode_Sp;
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      } else {
        saturatedUnaryMinus = motor_U.Encode_Sp;
      }

      if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Sp_Min) {
        /* Transition: '<S1>:493' */
        /*  判断电机是否到达下机械限位 */
        motor_DWork.is_xhzy = motor_IN_P10;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'P10': '<S1>:63' */
        motor_DWork.chu_jd -= 0.003;

        /* Inport: '<Root>/JD_In' */
        /* 电机下行; */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        tmp_0 = motor_DWork.Encode_Pos0;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_B.Encode_Pos_c = saturatedUnaryMinus;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      } else {
        motor_DWork.chu_jd -= 0.003;

        /* Inport: '<Root>/JD_In' */
        /* 电机下行; */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        tmp_0 = motor_DWork.Encode_Pos0;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_B.Encode_Pos_c = saturatedUnaryMinus;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;

        /* 电机下行
           电机触碰到机械限位 */
      }
      break;

     case motor_IN_P5:
      /* During 'P5': '<S1>:64' */
      /* Transition: '<S1>:1035' */
      motor_DWork.is_xhzy = motor_IN_P10;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P10': '<S1>:63' */
      motor_DWork.chu_jd -= 0.003;

      /* Inport: '<Root>/JD_In' */
      /* 电机下行; */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;
      break;

     case motor_IN_P8:
      /* During 'P8': '<S1>:32' */
      break;

     case motor_IN_p11:
      /* During 'p11': '<S1>:126' */
      if (fabs(motor_DWork.chu_jd) <= 0.02) {
        /* Transition: '<S1>:496' */
        motor_DWork.is_xhzy = motor_IN_p12;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'p12': '<S1>:76' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* 电机上行回零点 */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      }
      break;

     default:
      /* During 'p12': '<S1>:76' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.2 / motor_DWork.Ts)) {
        /* Transition: '<S1>:494' */
        /* Transition: '<S1>:406' */
        motor_DWork.is_xhzy = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Initialize = motor_IN_Check_Reset;

        /* Entry 'Check_Reset': '<S1>:71' */
        motor_Y.Ini_Result = motor_Init_Result_Check(motor_Y.Flag_Cur,
          motor_Y.Flag_Temp_Up, (real_T)motor_Y.Flag_Temp_Down);
        motor_Y.DCZD = true;
      }
      break;
    }
    break;
  }

  if (guard2) {
    /* 开启制动 */
    motor_Y.Ini_Result = motor_Init_Result_Check(motor_Y.Flag_Cur,
      motor_Y.Flag_Temp_Up, (real_T)motor_Y.Flag_Temp_Down);
  }

  if (guard1) {
    /* Inport: '<Root>/Up_Limit' */
    if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:488' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_xhzy = motor_IN_P11;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'P11': '<S1>:1170' */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* 电机上行; */
      /* Simulink Function 'Motor_XHHY': '<S1>:42' */
      motor_B.JD_In = motor_U.JD_In;
      tmp_0 = motor_DWork.Encode_Pos0;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_B.Encode_Pos_c = saturatedUnaryMinus;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port = motor_U.System_Order;

      /* Inport: '<Root>/SGWY_In' */
      motor_B.SGWY_In = motor_U.SGWY_In;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
      motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                       motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                       &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                       (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                       &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                       &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
      tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp;
      tmp_0 = motor_B.Motor_XHHY.KP_JD1;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Out = saturatedUnaryMinus;
      tmp_0 = motor_B.Motor_XHHY.KP_e;
      if (tmp_0 < 2.147483648E+9) {
        if (tmp_0 >= -2.147483648E+9) {
          saturatedUnaryMinus = (int32_T)tmp_0;
        } else {
          saturatedUnaryMinus = MIN_int32_T;
        }
      } else {
        saturatedUnaryMinus = MAX_int32_T;
      }

      motor_Y.JD_Error = saturatedUnaryMinus;

      /* 电机上行 */
    }

    /* End of Inport: '<Root>/Up_Limit' */
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_enter_atomic_XHZY_Run(void)
{
  /* Entry 'XHZY_Run': '<S1>:150' */
  motor_DWork.KG_En = 0U;
  motor_DWork.KG_JD = 1U;
  motor_DWork.KG_YJ = 1U;
  motor_DWork.EN_extern = 0U;
  motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  motor_Y.Open_Result = 1U;
  motor_DWork.Forword = 0U;
  motor_DWork.P_KP = 380.0;
  motor_DWork.V_KP = 1.0;
  motor_DWork.V_KI = 10.0;
  motor_DWork.Runing_stable = 1U;
}

/* Function for Chart: '<Root>/Chart' */
static void motor_enter_atomic_XHZY_Run1(void)
{
  /* Entry 'XHZY_Run1': '<S1>:1182' */
  motor_DWork.KG_En = 0U;
  motor_DWork.KG_JD = 1U;
  motor_DWork.KG_YJ = 1U;
  motor_DWork.EN_extern = 1U;
  motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  motor_Y.Open_Result = 1U;
  motor_DWork.Forword = 0U;
  motor_DWork.P_KP = 150.0;
  motor_DWork.V_KP = 0.5;
  motor_DWork.V_KI = 8.0;
  motor_DWork.Runing_stable = 1U;
}

/* Function for Chart: '<Root>/Chart' */
static void motor_exit_internal_Normal_Mode(void)
{
  /* Exit Internal 'Normal_Mode': '<S1>:13' */
  if (motor_DWork.is_Normal_Mode == motor_IN_p1_a) {
    /* Exit Internal 'p1': '<S1>:14' */
    /* Exit Internal 'Enc_GZ': '<S1>:15' */
    /* Exit Internal 'Enc2': '<S1>:16' */
    motor_DWork.is_Enc2 = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Enc2 = 0U;

    /* Exit Internal 'Enc1': '<S1>:20' */
    motor_DWork.is_Enc1 = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Enc1 = 0U;
    motor_DWork.is_active_Enc_GZ = 0U;

    /* Exit Internal 'RUN': '<S1>:23' */
    /* Exit Internal 'Error_Check': '<S1>:1294' */
    /* Exit Internal 'Error_Check': '<S1>:1306' */
    motor_DWork.is_Error_Check_g = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Error_Check = motor_IN_NO_ACTIVE_CHILD;

    /* Exit 'Error_Check': '<S1>:1294' */
    motor_Y.Flag_AngleError = 1U;
    motor_DWork.is_active_Error_Check = 0U;

    /* Exit Internal 'Algorithm': '<S1>:165' */
    switch (motor_DWork.is_Algorithm_l) {
     case motor_IN_HY:
      /* Exit Internal 'HY': '<S1>:167' */
      switch (motor_DWork.is_HY) {
       case motor_IN_Sleeping_protect_2:
        /* Exit 'Sleeping_protect_2': '<S1>:166' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_HY = motor_IN_NO_ACTIVE_CHILD;
        break;

       case motor_IN_XHHY_Run:
        /* Exit 'XHHY_Run': '<S1>:170' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_HY = motor_IN_NO_ACTIVE_CHILD;
        break;

       case motor_IN_XHHY_Run1:
        /* Exit 'XHHY_Run1': '<S1>:1232' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_HY = motor_IN_NO_ACTIVE_CHILD;
        break;

       default:
        motor_DWork.is_HY = motor_IN_NO_ACTIVE_CHILD;
        break;
      }

      /* Exit 'HY': '<S1>:167' */
      motor_DWork.P_KP = 1200.0;
      motor_DWork.V_KP = 0.08;
      motor_DWork.V_KI = 0.8;
      motor_DWork.is_Algorithm_l = motor_IN_NO_ACTIVE_CHILD;
      break;

     case motor_IN_XHHY:
      /* Exit Internal 'XHHY': '<S1>:149' */
      switch (motor_DWork.is_XHHY) {
       case motor_IN_Sleeping_protect_2:
        /* Exit 'Sleeping_protect_2': '<S1>:174' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHHY = motor_IN_NO_ACTIVE_CHILD;
        break;

       case motor_IN_XHHY_Run:
        /* Exit 'XHHY_Run': '<S1>:364' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_XHHY = motor_IN_NO_ACTIVE_CHILD;
        break;

       case motor_IN_XHHY_Run1:
        /* Exit 'XHHY_Run1': '<S1>:1198' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_XHHY = motor_IN_NO_ACTIVE_CHILD;
        break;

       default:
        motor_DWork.is_XHHY = motor_IN_NO_ACTIVE_CHILD;
        break;
      }

      /* Exit 'XHHY': '<S1>:149' */
      motor_DWork.P_KP = 330.0;
      motor_DWork.V_KP = 1.0;
      motor_DWork.V_KI = 10.0;
      motor_DWork.is_Algorithm_l = motor_IN_NO_ACTIVE_CHILD;
      break;

     case motor_IN_XHZY:
      /* Exit Internal 'XHZY': '<S1>:172' */
      switch (motor_DWork.is_XHZY) {
       case motor_IN_Sleeping_protect_2:
        /* Exit 'Sleeping_protect_2': '<S1>:236' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHZY = motor_IN_NO_ACTIVE_CHILD;
        break;

       case motor_IN_XHZY_Run:
        /* Exit 'XHZY_Run': '<S1>:150' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_XHZY = motor_IN_NO_ACTIVE_CHILD;
        break;

       case motor_IN_XHZY_Run1:
        /* Exit 'XHZY_Run1': '<S1>:1182' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_XHZY = motor_IN_NO_ACTIVE_CHILD;
        break;

       default:
        motor_DWork.is_XHZY = motor_IN_NO_ACTIVE_CHILD;
        break;
      }

      /* Exit 'XHZY': '<S1>:172' */
      motor_DWork.P_KP = 380.0;
      motor_DWork.V_KP = 1.0;
      motor_DWork.V_KI = 10.0;
      motor_DWork.Forword = 1U;
      motor_DWork.is_Algorithm_l = motor_IN_NO_ACTIVE_CHILD;
      break;

     default:
      motor_DWork.is_Algorithm_l = motor_IN_NO_ACTIVE_CHILD;
      break;
    }

    /* Exit 'Algorithm': '<S1>:165' */
    motor_DWork.EN_extern = 0U;
    motor_DWork.is_active_Algorithm = 0U;

    /* Exit Internal 'Limit_Check': '<S1>:176' */
    motor_DWork.is_Limit_Check = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Limit_Check = 0U;

    /* Exit Internal 'GXDY_SJ_BJ': '<S1>:154' */
    motor_DWork.is_GXDY_SJ_BJ = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_GXDY_SJ_BJ = 0U;

    /* Exit Internal 'GXDY_COM_GZ': '<S1>:162' */
    motor_DWork.is_GXDY_COM_GZ = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_GXDY_COM_GZ = 0U;
    motor_DWork.is_active_RUN = 0U;
    motor_DWork.is_Normal_Mode = motor_IN_NO_ACTIVE_CHILD;
  } else {
    motor_DWork.is_Normal_Mode = motor_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_HY(void)
{
  int32_T tmp;
  real_T tmp_0;

  /* Inport: '<Root>/System_Order' */
  /* During 'HY': '<S1>:167' */
  if (motor_U.System_Order == 3) {
    /* Transition: '<S1>:558' */
    /* Transition: '<S1>:557' */
    motor_exit_internal_Normal_Mode();
    motor_DWork.is_M_Run = motor_IN_Close;
    motor_DWork.is_Close = motor_IN_Close_Wait;
    motor_DWork.temporalCounter_i1 = 0U;

    /* Entry 'Close_Wait': '<S1>:241' */
    motor_Y.Open_Result = 4U;

    /* 正在关机 */
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.EN_extern = 0U;
  } else {
    switch (motor_DWork.is_HY) {
     case motor_IN_Sleeping_protect_1:
      /* During 'Sleeping_protect_1': '<S1>:233' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:563' */
        motor_DWork.is_HY = motor_IN_Sleeping_protect_2;

        /* Entry 'Sleeping_protect_2': '<S1>:166' */
        motor_Y.DCZD = true;

        /* 开电磁制动 */
      }
      break;

     case motor_IN_Sleeping_protect_2:
      /* During 'Sleeping_protect_2': '<S1>:166' */
      if (motor_U.System_Order == 5) {
        /* Transition: '<S1>:566' */
        /* Exit 'Sleeping_protect_2': '<S1>:166' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_HY = motor_IN_Sleeping_protect_3;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Sleeping_protect_3': '<S1>:232' */
        motor_Y.Motor_En = false;

        /* 开电机 */
      }
      break;

     case motor_IN_Sleeping_protect_3:
      /* During 'Sleeping_protect_3': '<S1>:232' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Inport: '<Root>/Gyroscope_Choose' */
        /* Transition: '<S1>:569' */
        if (motor_U.Gyroscope_Choose == 0) {
          /* Transition: '<S1>:1236' */
          motor_DWork.is_HY = motor_IN_XHHY_Wait1;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'XHHY_Wait1': '<S1>:365' */
          motor_DWork.KG_JD = 1U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_Y.Open_Result = 1U;
          motor_DWork.Rate_limit_speed = 5000.0;
          motor_DWork.P_KP = 1200.0;
          motor_DWork.V_KP = 0.08;
          motor_DWork.V_KI = 0.8;
          motor_DWork.Saturation_limit_speed = 3000.0;
        } else {
          if (motor_U.Gyroscope_Choose == 1) {
            /* Transition: '<S1>:1234' */
            motor_DWork.is_HY = motor_IN_XHHY_Wait2;
            motor_DWork.temporalCounter_i1 = 0U;

            /* Entry 'XHHY_Wait2': '<S1>:1227' */
            motor_DWork.KG_JD = 1U;
            motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
            motor_Y.Open_Result = 1U;
            motor_DWork.Rate_limit_speed = 5000.0;
            motor_DWork.P_KP = 300.0;
            motor_DWork.V_KP = 0.08;
            motor_DWork.V_KI = 0.8;
            motor_DWork.Saturation_limit_speed = 3000.0;
          }
        }
      }
      break;

     case motor_IN_XHHY_Error1:
      /* Inport: '<Root>/GXDY_State' */
      /* During 'XHHY_Error1': '<S1>:1138' */
      if (!motor_U.GXDY_State) {
        /* Transition: '<S1>:1139' */
        motor_Y.Motor_En = false;
        motor_DWork.is_HY = motor_IN_XHHY_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'XHHY_Wait': '<S1>:178' */
        /* Open_Result=uint8(1);
           开机状态位成功 */
        motor_DWork.In_State = 2U;
        motor_Y.PWMOUT = 2500U;

        /* during:
           [PWMOUT,JD_Error,JD_Out] = Motor_HYDG(JD_In,Encode_Pos,System_Order,Encode_Sp); */
      }
      break;

     case motor_IN_XHHY_Run:
      /* Inport: '<Root>/Gyroscope_Choose' */
      /* During 'XHHY_Run': '<S1>:170' */
      if (motor_U.System_Order == 4) {
        /* Transition: '<S1>:567' */
        /* Exit 'XHHY_Run': '<S1>:170' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_HY = motor_IN_Sleeping_protect_1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Sleeping_protect_1': '<S1>:233' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if (motor_U.Gyroscope_Choose != 0) {
        /* Transition: '<S1>:1237' */
        /* Transition: '<S1>:1239' */
        /* Transition: '<S1>:557' */
        motor_exit_internal_Normal_Mode();
        motor_DWork.is_M_Run = motor_IN_Close;
        motor_DWork.is_Close = motor_IN_Close_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Close_Wait': '<S1>:241' */
        motor_Y.Open_Result = 4U;

        /* 正在关机 */
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.EN_extern = 0U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* 外部接口 */
        /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
        motor_B.JD_In_n = motor_U.JD_In;
        motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;
        motor_B.Slect_port_e = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
        motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                          motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                          &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                          &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                          &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                          &motor_DWork.KG_clc, &motor_DWork.P_KP,
                          &motor_DWork.Saturation_limit_speed, &motor_DWork.V_KI,
                          &motor_DWork.V_KP, &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG1.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG1.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_XHHY_Run1:
      /* Inport: '<Root>/Gyroscope_Choose' */
      /* During 'XHHY_Run1': '<S1>:1232' */
      if (motor_U.System_Order == 4) {
        /* Transition: '<S1>:1233' */
        /* Exit 'XHHY_Run1': '<S1>:1232' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_HY = motor_IN_Sleeping_protect_1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Sleeping_protect_1': '<S1>:233' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if (motor_U.Gyroscope_Choose != 1) {
        /* Transition: '<S1>:1238' */
        /* Transition: '<S1>:1239' */
        /* Transition: '<S1>:557' */
        motor_exit_internal_Normal_Mode();
        motor_DWork.is_M_Run = motor_IN_Close;
        motor_DWork.is_Close = motor_IN_Close_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Close_Wait': '<S1>:241' */
        motor_Y.Open_Result = 4U;

        /* 正在关机 */
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.EN_extern = 0U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* 外部接口 */
        /* Simulink Function 'Waveform_Build': '<S1>:1223' */
        motor_B.JD_In_c = motor_U.JD_In;

        /* Outputs for Function Call SubSystem: '<S1>/Waveform_Build' */
        motor_Waveform_Build(motor_M, motor_B.JD_In_c, &motor_B.Waveform_Build,
                             &motor_DWork.Waveform_Build,
                             (rtP_Waveform_Build_motor *)&motor_P.Waveform_Build,
                             &motor_DWork.T, &motor_DWork.T_Count,
                             &motor_DWork.Temp1, &motor_DWork.Temp2);

        /* End of Outputs for SubSystem: '<S1>/Waveform_Build' */

        /* JD_forecast = JD_In; */
        /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
        motor_B.JD_In_n = motor_B.Waveform_Build.Gain2;
        motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;
        motor_B.Slect_port_e = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
        motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                          motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                          &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                          &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                          &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                          &motor_DWork.KG_clc, &motor_DWork.P_KP,
                          &motor_DWork.Saturation_limit_speed, &motor_DWork.V_KI,
                          &motor_DWork.V_KP, &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG1.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG1.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_XHHY_Wait:
      /* During 'XHHY_Wait': '<S1>:178' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Inport: '<Root>/Gyroscope_Choose' */
        /* Transition: '<S1>:983' */
        if (motor_U.Gyroscope_Choose == 1) {
          /* Transition: '<S1>:1226' */
          motor_DWork.is_HY = motor_IN_XHHY_Wait2;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'XHHY_Wait2': '<S1>:1227' */
          motor_DWork.KG_JD = 1U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_Y.Open_Result = 1U;
          motor_DWork.Rate_limit_speed = 5000.0;
          motor_DWork.P_KP = 300.0;
          motor_DWork.V_KP = 0.08;
          motor_DWork.V_KI = 0.8;
          motor_DWork.Saturation_limit_speed = 3000.0;
        } else {
          if (motor_U.Gyroscope_Choose == 0) {
            /* Inport: '<Root>/GXDY_State' */
            /* Transition: '<S1>:571' */
            if (motor_U.GXDY_State) {
              /* Transition: '<S1>:984' */
              motor_DWork.is_HY = motor_IN_XHHY_Error1;

              /* Entry 'XHHY_Error1': '<S1>:1138' */
              motor_Y.Motor_En = true;

              /* 关电机 */
              motor_Y.Open_Result = 2U;
            } else {
              /* Transition: '<S1>:1254' */
              /* 惯性单元拉低 */
              motor_DWork.is_HY = motor_IN_XHHY_Wait1;
              motor_DWork.temporalCounter_i1 = 0U;

              /* Entry 'XHHY_Wait1': '<S1>:365' */
              motor_DWork.KG_JD = 1U;
              motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
              motor_Y.Open_Result = 1U;
              motor_DWork.Rate_limit_speed = 5000.0;
              motor_DWork.P_KP = 1200.0;
              motor_DWork.V_KP = 0.08;
              motor_DWork.V_KI = 0.8;
              motor_DWork.Saturation_limit_speed = 3000.0;
            }
          }
        }
      }
      break;

     case motor_IN_XHHY_Wait1:
      /* During 'XHHY_Wait1': '<S1>:365' */
      if (motor_DWork.Saturation_limit_speed >= 16000.0) {
        /* Transition: '<S1>:570' */
        motor_DWork.is_HY = motor_IN_XHHY_Run;

        /* Entry 'XHHY_Run': '<S1>:170' */
        motor_DWork.KG_JD = 1U;
        motor_DWork.Rate_limit_speed = 50000.0;
        motor_DWork.Saturation_limit_speed = 16000.0;
        motor_DWork.Runing_stable = 1U;
      } else if (motor_DWork.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:1178' */
        motor_DWork.is_HY = motor_IN_XHHY_Run;

        /* Entry 'XHHY_Run': '<S1>:170' */
        motor_DWork.KG_JD = 1U;
        motor_DWork.Rate_limit_speed = 50000.0;
        motor_DWork.Saturation_limit_speed = 16000.0;
        motor_DWork.Runing_stable = 1U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
        motor_B.JD_In_n = motor_U.JD_In;
        motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;
        motor_B.Slect_port_e = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
        motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                          motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                          &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                          &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                          &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                          &motor_DWork.KG_clc, &motor_DWork.P_KP,
                          &motor_DWork.Saturation_limit_speed, &motor_DWork.V_KI,
                          &motor_DWork.V_KP, &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG1.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG1.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;

        /* Saturation_limit_speed=Saturation_limit_speed+12; */
        motor_DWork.Saturation_limit_speed = fabs((16000.0 -
          motor_DWork.Saturation_limit_speed) / (real_T)mul_s32_s32_s32_sat
          (100000, motor_Y.JD_Error)) + (motor_DWork.Saturation_limit_speed +
          5.0);
      }
      break;

     default:
      /* During 'XHHY_Wait2': '<S1>:1227' */
      if (motor_DWork.Saturation_limit_speed >= 16000.0) {
        /* Transition: '<S1>:1231' */
        motor_DWork.is_HY = motor_IN_XHHY_Run1;

        /* Entry 'XHHY_Run1': '<S1>:1232' */
        motor_DWork.KG_JD = 1U;
        motor_DWork.Rate_limit_speed = 50000.0;
        motor_DWork.Saturation_limit_speed = 16000.0;
        motor_DWork.Runing_stable = 1U;
      } else if (motor_DWork.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:1229' */
        motor_DWork.is_HY = motor_IN_XHHY_Run1;

        /* Entry 'XHHY_Run1': '<S1>:1232' */
        motor_DWork.KG_JD = 1U;
        motor_DWork.Rate_limit_speed = 50000.0;
        motor_DWork.Saturation_limit_speed = 16000.0;
        motor_DWork.Runing_stable = 1U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Waveform_Build': '<S1>:1223' */
        motor_B.JD_In_c = motor_U.JD_In;

        /* Outputs for Function Call SubSystem: '<S1>/Waveform_Build' */
        motor_Waveform_Build(motor_M, motor_B.JD_In_c, &motor_B.Waveform_Build,
                             &motor_DWork.Waveform_Build,
                             (rtP_Waveform_Build_motor *)&motor_P.Waveform_Build,
                             &motor_DWork.T, &motor_DWork.T_Count,
                             &motor_DWork.Temp1, &motor_DWork.Temp2);

        /* End of Outputs for SubSystem: '<S1>/Waveform_Build' */

        /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
        motor_B.JD_In_n = motor_B.Waveform_Build.Gain2;
        motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;
        motor_B.Slect_port_e = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
        motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                          motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                          &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                          &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                          &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                          &motor_DWork.KG_clc, &motor_DWork.P_KP,
                          &motor_DWork.Saturation_limit_speed, &motor_DWork.V_KI,
                          &motor_DWork.V_KP, &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG1.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG1.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        motor_DWork.Saturation_limit_speed = fabs((16000.0 -
          motor_DWork.Saturation_limit_speed) / (real_T)mul_s32_s32_s32_sat
          (100000, motor_Y.JD_Error)) + (motor_DWork.Saturation_limit_speed +
          5.0);
      }
      break;
    }
  }

  /* End of Inport: '<Root>/System_Order' */
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHHY(void)
{
  boolean_T guard1 = false;
  int32_T tmp;
  uint16_T tmp_0;
  real_T tmp_1;

  /* Inport: '<Root>/System_Order' */
  /* During 'XHHY': '<S1>:149' */
  if (motor_U.System_Order == 3) {
    /* Transition: '<S1>:553' */
    /* Transition: '<S1>:557' */
    motor_exit_internal_Normal_Mode();
    motor_DWork.is_M_Run = motor_IN_Close;
    motor_DWork.is_Close = motor_IN_Close_Wait;
    motor_DWork.temporalCounter_i1 = 0U;

    /* Entry 'Close_Wait': '<S1>:241' */
    motor_Y.Open_Result = 4U;

    /* 正在关机 */
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.EN_extern = 0U;
  } else {
    switch (motor_DWork.is_XHHY) {
     case motor_IN_Sleeping_protect_1:
      /* During 'Sleeping_protect_1': '<S1>:231' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:527' */
        motor_DWork.is_XHHY = motor_IN_Sleeping_protect_2;

        /* Entry 'Sleeping_protect_2': '<S1>:174' */
        motor_Y.DCZD = true;

        /* 开电磁制动 */
      }
      break;

     case motor_IN_Sleeping_protect_2:
      /* During 'Sleeping_protect_2': '<S1>:174' */
      if (motor_U.System_Order == 5) {
        /* Transition: '<S1>:530' */
        /* Exit 'Sleeping_protect_2': '<S1>:174' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHHY = motor_IN_Sleeping_protect_3;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Sleeping_protect_3': '<S1>:230' */
        motor_Y.Motor_En = false;

        /* 开电机 */
      }
      break;

     case motor_IN_Sleeping_protect_3:
      /* During 'Sleeping_protect_3': '<S1>:230' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Inport: '<Root>/Gyroscope_Choose' */
        /* Transition: '<S1>:532' */
        if (motor_U.Gyroscope_Choose == 0) {
          /* Transition: '<S1>:1204' */
          motor_DWork.is_XHHY = motor_IN_XHHY_Run;

          /* Entry 'XHHY_Run': '<S1>:364' */
          motor_DWork.KG_En = 0U;
          motor_DWork.KG_JD = 1U;
          motor_DWork.EN_extern = 0U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_Y.Open_Result = 1U;
          motor_DWork.Runing_stable = 1U;
          motor_DWork.P_KP = 330.0;
          motor_DWork.V_KP = 1.0;
          motor_DWork.V_KI = 10.0;
        } else {
          if (motor_U.Gyroscope_Choose == 1) {
            /* Transition: '<S1>:1205' */
            motor_DWork.is_XHHY = motor_IN_XHHY_Run1;

            /* Entry 'XHHY_Run1': '<S1>:1198' */
            motor_DWork.KG_En = 0U;
            motor_DWork.KG_JD = 1U;
            motor_DWork.EN_extern = 1U;
            motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
            motor_Y.Open_Result = 1U;
            motor_DWork.Runing_stable = 1U;
            motor_DWork.P_KP = 150.0;
            motor_DWork.V_KP = 0.5;
            motor_DWork.V_KI = 8.0;
          }
        }
      }
      break;

     case motor_IN_XHHY_Error1:
      /* Inport: '<Root>/GXDY_State' */
      /* During 'XHHY_Error1': '<S1>:1140' */
      if (!motor_U.GXDY_State) {
        /* Transition: '<S1>:1141' */
        motor_Y.Motor_En = false;
        motor_DWork.is_XHHY = motor_IN_XHHY_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'XHHY_Wait': '<S1>:175' */
        motor_DWork.In_State = 2U;
        motor_DWork.KG_En = 1U;
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;

        /* during:[PWMOUT,JD_Out,JD_Error] = Motor_XHHY(JD_In,Encode_Pos,Encode_Sp,System_Order,SGWY_In); */
      }
      break;

     case motor_IN_XHHY_Run:
      /* Inport: '<Root>/Gyroscope_Choose' */
      /* During 'XHHY_Run': '<S1>:364' */
      if (motor_U.System_Order == 4) {
        /* Transition: '<S1>:531' */
        /* Exit 'XHHY_Run': '<S1>:364' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_XHHY = motor_IN_Sleeping_protect_1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Sleeping_protect_1': '<S1>:231' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if (motor_U.Gyroscope_Choose != 0) {
        /* Transition: '<S1>:1207' */
        /* Transition: '<S1>:1209' */
        /* Transition: '<S1>:557' */
        motor_exit_internal_Normal_Mode();
        motor_DWork.is_M_Run = motor_IN_Close;
        motor_DWork.is_Close = motor_IN_Close_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Close_Wait': '<S1>:241' */
        motor_Y.Open_Result = 4U;

        /* 正在关机 */
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.EN_extern = 0U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* 内部陀螺 */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_1 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_1 < 65536.0) {
          if (tmp_1 >= 0.0) {
            tmp_0 = (uint16_T)tmp_1;
          } else {
            tmp_0 = 0U;
          }
        } else {
          tmp_0 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_0;
        tmp_1 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_1 < 2.147483648E+9) {
          if (tmp_1 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_1;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_1 = motor_B.Motor_XHHY.KP_e;
        if (tmp_1 < 2.147483648E+9) {
          if (tmp_1 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_1;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_XHHY_Run1:
      /* Inport: '<Root>/Gyroscope_Choose' */
      /* During 'XHHY_Run1': '<S1>:1198' */
      if (motor_U.System_Order == 4) {
        /* Transition: '<S1>:1202' */
        /* Exit 'XHHY_Run1': '<S1>:1198' */
        motor_DWork.Runing_stable = 0U;
        motor_DWork.is_XHHY = motor_IN_Sleeping_protect_1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Sleeping_protect_1': '<S1>:231' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if (motor_U.Gyroscope_Choose != 1) {
        /* Transition: '<S1>:1208' */
        /* Transition: '<S1>:1209' */
        /* Transition: '<S1>:557' */
        motor_exit_internal_Normal_Mode();
        motor_DWork.is_M_Run = motor_IN_Close;
        motor_DWork.is_Close = motor_IN_Close_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Close_Wait': '<S1>:241' */
        motor_Y.Open_Result = 4U;

        /* 正在关机 */
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.EN_extern = 0U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* 外部陀螺 */
        /* Simulink Function 'Waveform_Build': '<S1>:1223' */
        motor_B.JD_In_c = motor_U.JD_In;

        /* Outputs for Function Call SubSystem: '<S1>/Waveform_Build' */
        motor_Waveform_Build(motor_M, motor_B.JD_In_c, &motor_B.Waveform_Build,
                             &motor_DWork.Waveform_Build,
                             (rtP_Waveform_Build_motor *)&motor_P.Waveform_Build,
                             &motor_DWork.T, &motor_DWork.T_Count,
                             &motor_DWork.Temp1, &motor_DWork.Temp2);

        /* End of Outputs for SubSystem: '<S1>/Waveform_Build' */

        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_B.Waveform_Build.Gain2;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_1 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_1 < 65536.0) {
          if (tmp_1 >= 0.0) {
            tmp_0 = (uint16_T)tmp_1;
          } else {
            tmp_0 = 0U;
          }
        } else {
          tmp_0 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_0;
        tmp_1 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_1 < 2.147483648E+9) {
          if (tmp_1 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_1;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_1 = motor_B.Motor_XHHY.KP_e;
        if (tmp_1 < 2.147483648E+9) {
          if (tmp_1 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_1;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     default:
      /* During 'XHHY_Wait': '<S1>:175' */
      if (motor_DWork.temporalCounter_i1 >= 500U) {
        /* Inport: '<Root>/Gyroscope_Choose' */
        /* Transition: '<S1>:954' */
        if (motor_U.Gyroscope_Choose == 0) {
          /* Inport: '<Root>/GXDY_State' */
          /* Transition: '<S1>:533' */
          if (!motor_U.GXDY_State) {
            /* Transition: '<S1>:1200' */
            /* 惯性单元拉低 */
            motor_DWork.is_XHHY = motor_IN_XHHY_Run;

            /* Entry 'XHHY_Run': '<S1>:364' */
            motor_DWork.KG_En = 0U;
            motor_DWork.KG_JD = 1U;
            motor_DWork.EN_extern = 0U;
            motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
            motor_Y.Open_Result = 1U;
            motor_DWork.Runing_stable = 1U;
            motor_DWork.P_KP = 330.0;
            motor_DWork.V_KP = 1.0;
            motor_DWork.V_KI = 10.0;
          } else {
            /* Transition: '<S1>:981' */
            motor_DWork.is_XHHY = motor_IN_XHHY_Error1;

            /* Entry 'XHHY_Error1': '<S1>:1140' */
            motor_Y.Motor_En = true;

            /* 关电机 */
            motor_Y.Open_Result = 2U;
          }
        } else {
          guard1 = true;
        }
      }
      break;
    }

    /* Inport: '<Root>/Gyroscope_Choose' */
    if (guard1 && (motor_U.Gyroscope_Choose == 1)) {
      /* Transition: '<S1>:1201' */
      motor_DWork.is_XHHY = motor_IN_XHHY_Run1;

      /* Entry 'XHHY_Run1': '<S1>:1198' */
      motor_DWork.KG_En = 0U;
      motor_DWork.KG_JD = 1U;
      motor_DWork.EN_extern = 1U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      motor_Y.Open_Result = 1U;
      motor_DWork.Runing_stable = 1U;
      motor_DWork.P_KP = 150.0;
      motor_DWork.V_KP = 0.5;
      motor_DWork.V_KI = 8.0;
    }
  }

  /* End of Inport: '<Root>/System_Order' */
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Algorithm_a(void)
{
  boolean_T guard1 = false;
  int32_T tmp;
  uint16_T tmp_0;
  real_T tmp_1;

  /* During 'Algorithm': '<S1>:165' */
  switch (motor_DWork.is_Algorithm_l) {
   case motor_IN_Defualt:
    /* Inport: '<Root>/Motor_Num' */
    /* During 'Defualt': '<S1>:147' */
    if (motor_U.Motor_Num == 3) {
      /* Transition: '<S1>:552' */
      motor_DWork.is_Algorithm_l = motor_IN_XHHY;

      /* Entry Internal 'XHHY': '<S1>:149' */
      /* Transition: '<S1>:526' */
      motor_DWork.is_XHHY = motor_IN_XHHY_Wait;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'XHHY_Wait': '<S1>:175' */
      motor_DWork.In_State = 2U;
      motor_DWork.KG_En = 1U;
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;

      /* during:[PWMOUT,JD_Out,JD_Error] = Motor_XHHY(JD_In,Encode_Pos,Encode_Sp,System_Order,SGWY_In); */
    } else if (motor_U.Motor_Num == 2) {
      /* Transition: '<S1>:554' */
      motor_DWork.is_Algorithm_l = motor_IN_HY;

      /* Entry Internal 'HY': '<S1>:167' */
      /* Transition: '<S1>:562' */
      motor_DWork.is_HY = motor_IN_XHHY_Wait;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'XHHY_Wait': '<S1>:178' */
      /* Open_Result=uint8(1);
         开机状态位成功 */
      motor_DWork.In_State = 2U;
      motor_Y.PWMOUT = 2500U;

      /* during:
         [PWMOUT,JD_Error,JD_Out] = Motor_HYDG(JD_In,Encode_Pos,System_Order,Encode_Sp); */
    } else {
      if (motor_U.Motor_Num == 1) {
        /* Transition: '<S1>:555' */
        motor_DWork.is_Algorithm_l = motor_IN_XHZY;

        /* Entry Internal 'XHZY': '<S1>:172' */
        /* Transition: '<S1>:572' */
        motor_DWork.is_XHZY = motor_IN_XHZY_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'XHZY_Wait': '<S1>:177' */
        motor_DWork.In_State = 2U;
        motor_DWork.KG_En = 1U;
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;

        /* during:[PWMOUT,JD_Out,JD_Error,SGWY_Out] = Motor_XHZY(JD_In,Encode_Pos,YJ_In,Encode_Sp,System_Order); */
      }
    }

    /* End of Inport: '<Root>/Motor_Num' */
    break;

   case motor_IN_HY:
    motor_HY();
    break;

   case motor_IN_XHHY:
    motor_XHHY();
    break;

   default:
    /* Inport: '<Root>/System_Order' */
    /* During 'XHZY': '<S1>:172' */
    if (motor_U.System_Order == 3) {
      /* Transition: '<S1>:559' */
      /* Transition: '<S1>:557' */
      motor_exit_internal_Normal_Mode();
      motor_DWork.is_M_Run = motor_IN_Close;
      motor_DWork.is_Close = motor_IN_Close_Wait;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Close_Wait': '<S1>:241' */
      motor_Y.Open_Result = 4U;

      /* 正在关机 */
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.EN_extern = 0U;
    } else {
      switch (motor_DWork.is_XHZY) {
       case motor_IN_Sleeping_protect_1:
        /* During 'Sleeping_protect_1': '<S1>:235' */
        if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts))
        {
          /* Transition: '<S1>:575' */
          motor_DWork.is_XHZY = motor_IN_Sleeping_protect_2;

          /* Entry 'Sleeping_protect_2': '<S1>:236' */
          motor_Y.DCZD = true;

          /* 开电磁制动 */
        }
        break;

       case motor_IN_Sleeping_protect_2:
        /* During 'Sleeping_protect_2': '<S1>:236' */
        if (motor_U.System_Order == 5) {
          /* Transition: '<S1>:576' */
          /* Exit 'Sleeping_protect_2': '<S1>:236' */
          /* 关电磁制动 */
          motor_Y.DCZD = false;
          motor_DWork.is_XHZY = motor_IN_Sleeping_protect_3;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Sleeping_protect_3': '<S1>:234' */
          motor_Y.Motor_En = false;

          /* 开电机 */
        }
        break;

       case motor_IN_Sleeping_protect_3:
        /* During 'Sleeping_protect_3': '<S1>:234' */
        if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts))
        {
          /* Inport: '<Root>/Gyroscope_Choose' */
          /* Transition: '<S1>:579' */
          if (motor_U.Gyroscope_Choose == 0) {
            /* Transition: '<S1>:1196' */
            motor_DWork.is_XHZY = motor_IN_XHZY_Run;
            motor_enter_atomic_XHZY_Run();
          } else {
            if (motor_U.Gyroscope_Choose == 1) {
              /* Transition: '<S1>:1197' */
              motor_DWork.is_XHZY = motor_IN_XHZY_Run1;
              motor_enter_atomic_XHZY_Run1();
            }
          }
        }
        break;

       case motor_IN_XHZY_Error1:
        /* Inport: '<Root>/GXDY_State' */
        /* During 'XHZY_Error1': '<S1>:1142' */
        if (!motor_U.GXDY_State) {
          /* Transition: '<S1>:1143' */
          motor_Y.Motor_En = false;
          motor_DWork.is_XHZY = motor_IN_XHZY_Wait;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'XHZY_Wait': '<S1>:177' */
          motor_DWork.In_State = 2U;
          motor_DWork.KG_En = 1U;
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;

          /* during:[PWMOUT,JD_Out,JD_Error,SGWY_Out] = Motor_XHZY(JD_In,Encode_Pos,YJ_In,Encode_Sp,System_Order); */
        }
        break;

       case motor_IN_XHZY_Run:
        /* Inport: '<Root>/Gyroscope_Choose' */
        /* During 'XHZY_Run': '<S1>:150' */
        if (motor_U.System_Order == 4) {
          /* Transition: '<S1>:577' */
          /* Exit 'XHZY_Run': '<S1>:150' */
          motor_DWork.Runing_stable = 0U;
          motor_DWork.is_XHZY = motor_IN_Sleeping_protect_1;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Sleeping_protect_1': '<S1>:235' */
          motor_Y.Motor_En = true;

          /* 关电机 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        } else if (motor_U.Gyroscope_Choose != 0) {
          /* Transition: '<S1>:1185' */
          /* Transition: '<S1>:1191' */
          /* Transition: '<S1>:557' */
          motor_exit_internal_Normal_Mode();
          motor_DWork.is_M_Run = motor_IN_Close;
          motor_DWork.is_Close = motor_IN_Close_Wait;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Close_Wait': '<S1>:241' */
          motor_Y.Open_Result = 4U;

          /* 正在关机 */
          motor_Y.DCZD = false;

          /* 解除制动 */
          motor_Y.Motor_En = false;

          /* 电机使能 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          motor_DWork.EN_extern = 0U;
        } else {
          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Motor_XHZY': '<S1>:90' */
          motor_B.JD_In_d = motor_U.JD_In;
          motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

          /* Inport: '<Root>/YJ_In' */
          motor_B.YJ_In = motor_U.YJ_In;

          /* Inport: '<Root>/Encode_Sp' */
          motor_B.Encode_Sp_l = motor_U.Encode_Sp;
          motor_B.Slect_port_h = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
          motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                           motor_B.YJ_In, motor_B.Encode_Sp_l,
                           motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                           &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                           &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                           &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                           &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                           &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                           &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                           &motor_DWork.KG_clc, &motor_DWork.P_KP,
                           &motor_DWork.V_KI, &motor_DWork.V_KP,
                           &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                           &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
          tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
          if (tmp_1 < 65536.0) {
            if (tmp_1 >= 0.0) {
              tmp_0 = (uint16_T)tmp_1;
            } else {
              tmp_0 = 0U;
            }
          } else {
            tmp_0 = MAX_uint16_T;
          }

          motor_Y.PWMOUT = tmp_0;
          tmp_1 = motor_B.Motor_XHZY.KP_JD;
          if (tmp_1 < 2.147483648E+9) {
            if (tmp_1 >= -2.147483648E+9) {
              tmp = (int32_T)tmp_1;
            } else {
              tmp = MIN_int32_T;
            }
          } else {
            tmp = MAX_int32_T;
          }

          motor_Y.JD_Out = tmp;
          tmp_1 = motor_B.Motor_XHZY.KP_e;
          if (tmp_1 < 2.147483648E+9) {
            if (tmp_1 >= -2.147483648E+9) {
              tmp = (int32_T)tmp_1;
            } else {
              tmp = MIN_int32_T;
            }
          } else {
            tmp = MAX_int32_T;
          }

          motor_Y.JD_Error = tmp;
          motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
        }
        break;

       case motor_IN_XHZY_Run1:
        /* Inport: '<Root>/Gyroscope_Choose' */
        /* During 'XHZY_Run1': '<S1>:1182' */
        if (motor_U.Gyroscope_Choose != 1) {
          /* Transition: '<S1>:1187' */
          /* Transition: '<S1>:1191' */
          /* Transition: '<S1>:557' */
          motor_exit_internal_Normal_Mode();
          motor_DWork.is_M_Run = motor_IN_Close;
          motor_DWork.is_Close = motor_IN_Close_Wait;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Close_Wait': '<S1>:241' */
          motor_Y.Open_Result = 4U;

          /* 正在关机 */
          motor_Y.DCZD = false;

          /* 解除制动 */
          motor_Y.Motor_En = false;

          /* 电机使能 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          motor_DWork.EN_extern = 0U;
        } else if (motor_U.System_Order == 4) {
          /* Transition: '<S1>:1194' */
          /* Exit 'XHZY_Run1': '<S1>:1182' */
          motor_DWork.Runing_stable = 0U;
          motor_DWork.is_XHZY = motor_IN_Sleeping_protect_1;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Sleeping_protect_1': '<S1>:235' */
          motor_Y.Motor_En = true;

          /* 关电机 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        } else {
          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Waveform_Build': '<S1>:1223' */
          motor_B.JD_In_c = motor_U.JD_In;

          /* Outputs for Function Call SubSystem: '<S1>/Waveform_Build' */
          motor_Waveform_Build(motor_M, motor_B.JD_In_c, &motor_B.Waveform_Build,
                               &motor_DWork.Waveform_Build,
                               (rtP_Waveform_Build_motor *)
                               &motor_P.Waveform_Build, &motor_DWork.T,
                               &motor_DWork.T_Count, &motor_DWork.Temp1,
                               &motor_DWork.Temp2);

          /* End of Outputs for SubSystem: '<S1>/Waveform_Build' */

          /* Simulink Function 'Motor_XHZY': '<S1>:90' */
          motor_B.JD_In_d = motor_B.Waveform_Build.Gain2;
          motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

          /* Inport: '<Root>/YJ_In' */
          motor_B.YJ_In = motor_U.YJ_In;

          /* Inport: '<Root>/Encode_Sp' */
          motor_B.Encode_Sp_l = motor_U.Encode_Sp;
          motor_B.Slect_port_h = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
          motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                           motor_B.YJ_In, motor_B.Encode_Sp_l,
                           motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                           &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                           &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                           &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                           &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                           &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                           &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                           &motor_DWork.KG_clc, &motor_DWork.P_KP,
                           &motor_DWork.V_KI, &motor_DWork.V_KP,
                           &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                           &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
          tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
          if (tmp_1 < 65536.0) {
            if (tmp_1 >= 0.0) {
              tmp_0 = (uint16_T)tmp_1;
            } else {
              tmp_0 = 0U;
            }
          } else {
            tmp_0 = MAX_uint16_T;
          }

          motor_Y.PWMOUT = tmp_0;
          tmp_1 = motor_B.Motor_XHZY.KP_JD;
          if (tmp_1 < 2.147483648E+9) {
            if (tmp_1 >= -2.147483648E+9) {
              tmp = (int32_T)tmp_1;
            } else {
              tmp = MIN_int32_T;
            }
          } else {
            tmp = MAX_int32_T;
          }

          motor_Y.JD_Out = tmp;
          tmp_1 = motor_B.Motor_XHZY.KP_e;
          if (tmp_1 < 2.147483648E+9) {
            if (tmp_1 >= -2.147483648E+9) {
              tmp = (int32_T)tmp_1;
            } else {
              tmp = MIN_int32_T;
            }
          } else {
            tmp = MAX_int32_T;
          }

          motor_Y.JD_Error = tmp;
          motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
        }
        break;

       default:
        /* During 'XHZY_Wait': '<S1>:177' */
        if (motor_DWork.temporalCounter_i1 >= 500U) {
          /* Inport: '<Root>/Gyroscope_Choose' */
          /* Transition: '<S1>:578' */
          if (motor_U.Gyroscope_Choose == 0) {
            /* Inport: '<Root>/GXDY_State' */
            /* Transition: '<S1>:1183' */
            if (motor_U.GXDY_State) {
              /* Transition: '<S1>:985' */
              motor_DWork.is_XHZY = motor_IN_XHZY_Error1;

              /* Entry 'XHZY_Error1': '<S1>:1142' */
              motor_Y.Motor_En = true;

              /* 电机失能 */
              motor_Y.Open_Result = 2U;
            } else {
              /* Transition: '<S1>:580' */
              /* 惯性单元拉低 */
              motor_DWork.is_XHZY = motor_IN_XHZY_Run;
              motor_enter_atomic_XHZY_Run();
            }
          } else {
            guard1 = true;
          }
        }
        break;
      }
    }

    /* End of Inport: '<Root>/System_Order' */
    break;
  }

  /* Inport: '<Root>/Gyroscope_Choose' */
  if (guard1 && (motor_U.Gyroscope_Choose == 1)) {
    /* Transition: '<S1>:1184' */
    motor_DWork.is_XHZY = motor_IN_XHZY_Run1;
    motor_enter_atomic_XHZY_Run1();
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_RUN(void)
{
  uint32_T JD_Vary;
  int32_T saturatedUnaryMinus;
  uint16_T tmp;
  real_T tmp_0;

  /* During 'RUN': '<S1>:23' */
  /* During 'GXDY_COM_GZ': '<S1>:162' */
  switch (motor_DWork.is_GXDY_COM_GZ) {
   case motor_IN_Defult:
    /* Inport: '<Root>/GXDY_State' */
    /* During 'Defult': '<S1>:159' */
    if ((motor_Y.Open_Result == 1) && (!motor_U.GXDY_State)) {
      /* Transition: '<S1>:546' */
      /* 开机成功且惯性单元打开 */
      motor_DWork.is_GXDY_COM_GZ = motor_IN_p7;

      /* Entry 'p7': '<S1>:152' */
      motor_DWork.GXDY_i = 0U;

      /* 计数器置零 */
      motor_Y.Flag_GXDY_IT = 1U;

      /* 正常 */
    } else {
      if ((motor_DWork.temporalCounter_i3 >= (uint32_T)(8.0 / motor_DWork.Ts)) &&
          motor_U.GXDY_State) {
        /* Transition: '<S1>:547' */
        /* Transition: '<S1>:1084' */
        motor_DWork.is_GXDY_COM_GZ = motor_IN_r2;

        /* Entry 'r2': '<S1>:151' */
        motor_Y.Flag_GXDY_IT = 0U;

        /* 故障 */
      }
    }
    break;

   case motor_IN_Defult1:
    /* During 'Defult1': '<S1>:1258' */
    break;

   case motor_IN_Defult2:
    /* During 'Defult2': '<S1>:1282' */
    if (motor_DWork.temporalCounter_i3 >= (uint32_T)(3.0 / motor_DWork.Ts)) {
      /* Inport: '<Root>/Gyroscope_Choose' */
      /* Transition: '<S1>:1290' */
      if (motor_U.Gyroscope_Choose == 0) {
        /* Transition: '<S1>:1256' */
        motor_DWork.is_GXDY_COM_GZ = motor_IN_Defult;
        motor_DWork.temporalCounter_i3 = 0U;
      } else {
        if (motor_U.Gyroscope_Choose == 1) {
          /* Transition: '<S1>:1259' */
          motor_DWork.is_GXDY_COM_GZ = motor_IN_Defult1;

          /* Entry 'Defult1': '<S1>:1258' */
          motor_DWork.GXDY_i = 0U;
        }
      }
    }
    break;

   case motor_IN_p1_aq:
    /* During 'p1': '<S1>:1091' */
    if (motor_DWork.temporalCounter_i3 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1090' */
      motor_DWork.is_GXDY_COM_GZ = motor_IN_r2;

      /* Entry 'r2': '<S1>:151' */
      motor_Y.Flag_GXDY_IT = 0U;

      /* 故障 */
    } else {
      if (!motor_U.GXDY_State) {
        /* Transition: '<S1>:1092' */
        motor_DWork.is_GXDY_COM_GZ = motor_IN_p7;

        /* Entry 'p7': '<S1>:152' */
        motor_DWork.GXDY_i = 0U;

        /* 计数器置零 */
        motor_Y.Flag_GXDY_IT = 1U;

        /* 正常 */
      }
    }
    break;

   case motor_IN_p5:
    /* Inport: '<Root>/GXDY_IT_In' */
    /* During 'p5': '<S1>:145' */
    if (motor_U.GXDY_IT_In == 1) {
      /* Transition: '<S1>:549' */
      motor_DWork.is_GXDY_COM_GZ = motor_IN_p7;

      /* Entry 'p7': '<S1>:152' */
      motor_DWork.GXDY_i = 0U;

      /* 计数器置零 */
      motor_Y.Flag_GXDY_IT = 1U;

      /* 正常 */
    } else {
      tmp_0 = 3.0 / motor_DWork.Ts;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      if (motor_DWork.GXDY_i >= tmp) {
        /* Transition: '<S1>:550' */
        /* 3S */
        motor_DWork.is_GXDY_COM_GZ = motor_IN_p6;

        /* Entry 'p6': '<S1>:153' */
        /* 1代表正常，0代表错误 */
        motor_Y.Flag_GXDY_IT = 0U;

        /* 故障 */
        motor_Y.Motor_En = true;

        /* 电机失能 */
      } else {
        saturatedUnaryMinus = motor_DWork.GXDY_i + 1;
        if (saturatedUnaryMinus > 65535) {
          saturatedUnaryMinus = 65535;
        }

        motor_DWork.GXDY_i = (uint16_T)saturatedUnaryMinus;
      }
    }
    break;

   case motor_IN_p6:
    /* Inport: '<Root>/GXDY_IT_In' */
    /* During 'p6': '<S1>:153' */
    if (motor_U.GXDY_IT_In == 1) {
      /* Transition: '<S1>:1087' */
      motor_Y.Motor_En = false;
      motor_DWork.is_GXDY_COM_GZ = motor_IN_p7;

      /* Entry 'p7': '<S1>:152' */
      motor_DWork.GXDY_i = 0U;

      /* 计数器置零 */
      motor_Y.Flag_GXDY_IT = 1U;

      /* 正常 */
    }
    break;

   case motor_IN_p7:
    /* Inport: '<Root>/GXDY_State' incorporates:
     *  Inport: '<Root>/GXDY_IT_In'
     */
    /* During 'p7': '<S1>:152' */
    if (motor_U.GXDY_State) {
      /* Transition: '<S1>:1088' */
      motor_DWork.is_GXDY_COM_GZ = motor_IN_p1_aq;
      motor_DWork.temporalCounter_i3 = 0U;
    } else {
      if (motor_U.GXDY_IT_In == 0) {
        /* Transition: '<S1>:548' */
        motor_DWork.is_GXDY_COM_GZ = motor_IN_p5;

        /* Entry 'p5': '<S1>:145' */
        motor_DWork.GXDY_i = 1U;
      }
    }
    break;

   default:
    /* Inport: '<Root>/GXDY_State' */
    /* During 'r2': '<S1>:151' */
    if (!motor_U.GXDY_State) {
      /* Transition: '<S1>:1080' */
      motor_Y.Flag_GXDY_IT = 1U;
      motor_DWork.is_GXDY_COM_GZ = motor_IN_Defult;
      motor_DWork.temporalCounter_i3 = 0U;
    }
    break;
  }

  /* Inport: '<Root>/JD_In' incorporates:
   *  Inport: '<Root>/GXDY_State'
   */
  /* During 'GXDY_SJ_BJ': '<S1>:154' */
  /* Simulink Function 'COM_Error': '<S1>:110' */
  motor_B.In = motor_U.JD_In;

  /* Outputs for Function Call SubSystem: '<S1>/COM_Error' */
  /* UnitDelay: '<S6>/Unit Delay' */
  motor_B.UnitDelay = motor_DWork.UnitDelay_DSTATE;

  /* Sum: '<S6>/Add' */
  motor_B.Add = motor_B.In - motor_B.UnitDelay;

  /* Abs: '<S6>/Abs' */
  motor_B.Abs = fabs(motor_B.Add);

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  motor_DWork.UnitDelay_DSTATE = motor_B.In;

  /* End of Outputs for SubSystem: '<S1>/COM_Error' */
  tmp_0 = motor_B.Abs;
  if (tmp_0 < 4.294967296E+9) {
    if (tmp_0 >= 0.0) {
      JD_Vary = (uint32_T)tmp_0;
    } else {
      JD_Vary = 0U;
    }
  } else {
    JD_Vary = MAX_uint32_T;
  }

  switch (motor_DWork.is_GXDY_SJ_BJ) {
   case motor_IN_Defult:
    /* Inport: '<Root>/GXDY_State' */
    /* During 'Defult': '<S1>:155' */
    if ((motor_Y.Open_Result == 1) && (!motor_U.GXDY_State)) {
      /* Transition: '<S1>:536' */
      /* 开机成功且惯性单元打开 */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p1_aq;

      /* Entry 'p1': '<S1>:164' */
      motor_DWork.can1_i = 0U;
    }
    break;

   case motor_IN_Defult1:
    /* During 'Defult1': '<S1>:1278' */
    break;

   case motor_IN_Defult2:
    /* During 'Defult2': '<S1>:1283' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(3.0 / motor_DWork.Ts)) {
      /* Inport: '<Root>/Gyroscope_Choose' */
      /* Transition: '<S1>:1288' */
      if (motor_U.Gyroscope_Choose == 0) {
        /* Transition: '<S1>:1280' */
        motor_DWork.is_GXDY_SJ_BJ = motor_IN_Defult;
      } else {
        if (motor_U.Gyroscope_Choose == 1) {
          /* Transition: '<S1>:1277' */
          motor_DWork.is_GXDY_SJ_BJ = motor_IN_Defult1;

          /* Entry 'Defult1': '<S1>:1278' */
          motor_Y.Flag_GXDY_Error = 1U;
        }
      }
    }
    break;

   case motor_IN_p1_aq:
    /* Inport: '<Root>/JD_In' */
    /* During 'p1': '<S1>:164' */
    if (motor_U.JD_In < 0) {
      saturatedUnaryMinus = motor_U.JD_In;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.JD_In;
    }

    if ((JD_Vary > motor_DWork.JD_Max) || (saturatedUnaryMinus > 60000)) {
      /* Transition: '<S1>:540' */
      /* 速度大于最大值 */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p2_k;

      /* Entry 'p2': '<S1>:141' */
      motor_DWork.can1_i = 1U;
    } else {
      /* 计数器置零 */
      motor_Y.Flag_GXDY_Error = 1U;

      /* 惯性单元正常 */
    }
    break;

   case motor_IN_p2_k:
    /* Inport: '<Root>/JD_In' */
    /* Inport: '<Root>/GXDY_State' */
    /* During 'p2': '<S1>:141' */
    if (motor_U.JD_In < 0) {
      saturatedUnaryMinus = motor_U.JD_In;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.JD_In;
    }

    if ((JD_Vary <= motor_DWork.JD_Max) && (saturatedUnaryMinus <= 60000)) {
      /* Transition: '<S1>:541' */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p1_aq;

      /* Entry 'p1': '<S1>:164' */
      motor_DWork.can1_i = 0U;
    } else if (motor_DWork.can1_i >= 5.0 / motor_DWork.Ts) {
      /* Transition: '<S1>:542' */
      /* 5S */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p3_e;

      /* Entry 'p3': '<S1>:148' */
      /* 0代表正常，1代表错误 */
      motor_DWork.can1_i = 0U;
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.Flag_GXDY_Error = 0U;

      /* 惯性单元通讯故障 */
    } else if (motor_U.GXDY_State) {
      /* Transition: '<S1>:1163' */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_Defult;
    } else {
      saturatedUnaryMinus = motor_DWork.can1_i + 1;
      if (saturatedUnaryMinus > 65535) {
        saturatedUnaryMinus = 65535;
      }

      motor_DWork.can1_i = (uint16_T)saturatedUnaryMinus;
    }
    break;

   case motor_IN_p3_e:
    /* Inport: '<Root>/JD_In' */
    /* During 'p3': '<S1>:148' */
    if (motor_U.JD_In < 0) {
      saturatedUnaryMinus = motor_U.JD_In;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.JD_In;
    }

    if ((JD_Vary <= motor_DWork.JD_Max) && (saturatedUnaryMinus <= 60000)) {
      /* Transition: '<S1>:539' */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p4_n;

      /* Entry 'p4': '<S1>:144' */
      motor_DWork.can1_i = 1U;
    }
    break;

   default:
    /* Inport: '<Root>/JD_In' */
    /* Inport: '<Root>/GXDY_State' */
    /* During 'p4': '<S1>:144' */
    if (motor_U.JD_In < 0) {
      saturatedUnaryMinus = motor_U.JD_In;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.JD_In;
    }

    if ((JD_Vary > motor_DWork.JD_Max) || (saturatedUnaryMinus > 60000)) {
      /* Transition: '<S1>:538' */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p3_e;

      /* Entry 'p3': '<S1>:148' */
      /* 0代表正常，1代表错误 */
      motor_DWork.can1_i = 0U;
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.Flag_GXDY_Error = 0U;

      /* 惯性单元通讯故障 */
    } else if (motor_DWork.can1_i >= 2.0 / motor_DWork.Ts) {
      /* Transition: '<S1>:537' */
      motor_Y.Motor_En = false;
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_p1_aq;

      /* Entry 'p1': '<S1>:164' */
      motor_DWork.can1_i = 0U;
    } else if (motor_U.GXDY_State) {
      /* Transition: '<S1>:1162' */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_Defult;
    } else {
      saturatedUnaryMinus = motor_DWork.can1_i + 1;
      if (saturatedUnaryMinus > 65535) {
        saturatedUnaryMinus = 65535;
      }

      motor_DWork.can1_i = (uint16_T)saturatedUnaryMinus;
    }
    break;
  }

  /* During 'Limit_Check': '<S1>:176' */
  switch (motor_DWork.is_Limit_Check) {
   case motor_IN_defult_bq:
    /* During 'defult': '<S1>:161' */
    if (motor_DWork.temporalCounter_i4 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:583' */
      motor_DWork.is_Limit_Check = motor_IN_p1_aqc;

      /* Entry 'p1': '<S1>:171' */
      motor_Y.Flag_Down_limit = 1U;
      motor_Y.Flag_Up_limit = 1U;

      /* Flag_Up_GZ_limit=1;
         Flag_Down_GZ_limit=1; */
    }
    break;

   case motor_IN_p1_aqc:
    /* Inport: '<Root>/Up_Limit' incorporates:
     *  Inport: '<Root>/Down_Limit'
     */
    /* During 'p1': '<S1>:171' */
    if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:584' */
      motor_DWork.is_Limit_Check = motor_IN_p2_kb;

      /* Entry 'p2': '<S1>:156' */
      motor_Y.Flag_Up_limit = 0U;
    } else {
      if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:586' */
        motor_DWork.is_Limit_Check = motor_IN_p3_ex;

        /* Entry 'p3': '<S1>:160' */
        motor_Y.Flag_Down_limit = 0U;
      }
    }
    break;

   case motor_IN_p2_kb:
    /* Inport: '<Root>/Up_Limit' */
    /* During 'p2': '<S1>:156' */
    if (motor_U.Up_Limit == 1) {
      /* Transition: '<S1>:585' */
      motor_DWork.is_Limit_Check = motor_IN_p1_aqc;

      /* Entry 'p1': '<S1>:171' */
      motor_Y.Flag_Down_limit = 1U;
      motor_Y.Flag_Up_limit = 1U;

      /* Flag_Up_GZ_limit=1;
         Flag_Down_GZ_limit=1; */
    }
    break;

   default:
    /* Inport: '<Root>/Down_Limit' */
    /* During 'p3': '<S1>:160' */
    if (motor_U.Down_Limit == 1) {
      /* Transition: '<S1>:587' */
      motor_DWork.is_Limit_Check = motor_IN_p1_aqc;

      /* Entry 'p1': '<S1>:171' */
      motor_Y.Flag_Down_limit = 1U;
      motor_Y.Flag_Up_limit = 1U;

      /* Flag_Up_GZ_limit=1;
         Flag_Down_GZ_limit=1; */
    }
    break;
  }

  motor_Algorithm_a();
  if (motor_DWork.is_active_RUN != 0U) {
    /* During 'Error_Check': '<S1>:1294' */
    if (motor_DWork.is_Error_Check == motor_IN_Error_Check) {
      /* During 'Error_Check': '<S1>:1306' */
      if (motor_DWork.Runing_stable == 0) {
        /* Transition: '<S1>:1318' */
        /* Exit Internal 'Error_Check': '<S1>:1306' */
        motor_DWork.is_Error_Check_g = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Error_Check = motor_IN_defult_bqy;

        /* Entry 'defult': '<S1>:1302' */
        motor_Y.Flag_AngleError = 1U;
      } else {
        switch (motor_DWork.is_Error_Check_g) {
         case motor_IN_p1:
          /* During 'p1': '<S1>:1313' */
          if (motor_Y.JD_Error > 250) {
            /* Transition: '<S1>:1311' */
            motor_DWork.is_Error_Check_g = motor_IN_p3_exj;
            motor_DWork.temporalCounter_i9 = 0U;
          }
          break;

         case motor_IN_p3_exj:
          /* During 'p3': '<S1>:1316' */
          if (motor_Y.JD_Error >= 250) {
            /* Transition: '<S1>:1312' */
            motor_DWork.is_Error_Check_g = motor_IN_p1;

            /* Entry 'p1': '<S1>:1313' */
            motor_Y.Flag_AngleError = 1U;
          } else {
            if (motor_DWork.temporalCounter_i9 >= (uint32_T)(2.0 /
                 motor_DWork.Ts)) {
              /* Transition: '<S1>:1319' */
              motor_DWork.is_Error_Check_g = motor_IN_p4_nvu;
              motor_DWork.temporalCounter_i9 = 0U;

              /* Entry 'p4': '<S1>:1317' */
              motor_Y.Flag_AngleError = 0U;
            }
          }
          break;

         default:
          /* During 'p4': '<S1>:1317' */
          if (motor_DWork.temporalCounter_i9 >= (uint32_T)(5.0 / motor_DWork.Ts))
          {
            /* Transition: '<S1>:1321' */
            motor_DWork.is_Error_Check_g = motor_IN_p3_exj;
            motor_DWork.temporalCounter_i9 = 0U;
          }
          break;
        }
      }
    } else {
      /* During 'defult': '<S1>:1302' */
      if (motor_DWork.Runing_stable == 1) {
        /* Transition: '<S1>:1296' */
        motor_DWork.is_Error_Check = motor_IN_Error_Check;

        /* Entry Internal 'Error_Check': '<S1>:1306' */
        /* Transition: '<S1>:1307' */
        motor_DWork.is_Error_Check_g = motor_IN_p1;

        /* Entry 'p1': '<S1>:1313' */
        motor_Y.Flag_AngleError = 1U;
      }
    }
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Normal_Mode(void)
{
  uint32_T q0;
  uint32_T qY;
  int32_T saturatedUnaryMinus;
  int32_T saturatedUnaryMinus_0;
  int32_T saturatedUnaryMinus_1;

  /* During 'Normal_Mode': '<S1>:13' */
  switch (motor_DWork.is_Normal_Mode) {
   case motor_IN_defult1:
    /* During 'defult1': '<S1>:129' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:411' */
      motor_DWork.is_Normal_Mode = motor_IN_defult2;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'defult2': '<S1>:951' */
      motor_Y.Motor_En = false;
    }
    break;

   case motor_IN_defult2:
    /* During 'defult2': '<S1>:951' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:952' */
      motor_DWork.is_Normal_Mode = motor_IN_p1_a;

      /* Entry Internal 'p1': '<S1>:14' */
      motor_DWork.is_active_RUN = 1U;

      /* Entry Internal 'RUN': '<S1>:23' */
      /* Transition: '<S1>:421' */
      motor_DWork.is_active_GXDY_COM_GZ = 1U;

      /* Entry Internal 'GXDY_COM_GZ': '<S1>:162' */
      /* Transition: '<S1>:545' */
      motor_DWork.is_GXDY_COM_GZ = motor_IN_Defult2;
      motor_DWork.temporalCounter_i3 = 0U;
      motor_DWork.is_active_GXDY_SJ_BJ = 1U;

      /* Entry Internal 'GXDY_SJ_BJ': '<S1>:154' */
      /* Transition: '<S1>:535' */
      motor_DWork.is_GXDY_SJ_BJ = motor_IN_Defult2;
      motor_DWork.temporalCounter_i2 = 0U;
      motor_DWork.is_active_Limit_Check = 1U;

      /* Entry Internal 'Limit_Check': '<S1>:176' */
      /* Transition: '<S1>:582' */
      motor_DWork.is_Limit_Check = motor_IN_defult_bq;
      motor_DWork.temporalCounter_i4 = 0U;
      motor_DWork.is_active_Algorithm = 1U;

      /* Entry Internal 'Algorithm': '<S1>:165' */
      /* Transition: '<S1>:551' */
      motor_DWork.is_Algorithm_l = motor_IN_Defualt;

      /* Entry 'Defualt': '<S1>:147' */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 0U;
      motor_DWork.is_active_Error_Check = 1U;

      /* Entry Internal 'Error_Check': '<S1>:1294' */
      /* Transition: '<S1>:1295' */
      motor_DWork.is_Error_Check = motor_IN_defult_bqy;

      /* Entry 'defult': '<S1>:1302' */
      motor_Y.Flag_AngleError = 1U;
      motor_DWork.is_active_Enc_GZ = 1U;

      /* Entry 'Enc_GZ': '<S1>:15' */
      /* Entry Internal 'Enc_GZ': '<S1>:15' */
      motor_DWork.is_active_Enc1 = 1U;

      /* Entry Internal 'Enc1': '<S1>:20' */
      /* Transition: '<S1>:418' */
      motor_DWork.is_Enc1 = motor_IN_p1;

      /* Entry 'p1': '<S1>:21' */
      motor_Y.Flag_Enc_Error = 1U;
      motor_DWork.is_active_Enc2 = 1U;

      /* Entry Internal 'Enc2': '<S1>:16' */
      /* Transition: '<S1>:413' */
      motor_DWork.is_Enc2 = motor_IN_p2_kbn;
      motor_DWork.temporalCounter_i6 = 0U;

      /* Entry 'p2': '<S1>:17' */
      motor_DWork.Enc_i = 0U;
    }
    break;

   default:
    /* During 'p1': '<S1>:14' */
    motor_RUN();
    if (motor_DWork.is_Normal_Mode == motor_IN_p1_a) {
      /* During 'Enc_GZ': '<S1>:15' */
      /* During 'Enc1': '<S1>:20' */
      if (motor_DWork.is_Enc1 == motor_IN_p1) {
        /* Inport: '<Root>/Encode_Sp' */
        /* During 'p1': '<S1>:21' */
        if (motor_U.Encode_Sp < 0) {
          saturatedUnaryMinus_0 = motor_U.Encode_Sp;
          if (saturatedUnaryMinus_0 <= MIN_int32_T) {
            saturatedUnaryMinus_1 = MAX_int32_T;
          } else {
            saturatedUnaryMinus_1 = -saturatedUnaryMinus_0;
          }

          saturatedUnaryMinus_0 = motor_U.Encode_Sp;
          if (saturatedUnaryMinus_0 <= MIN_int32_T) {
            saturatedUnaryMinus_0 = MAX_int32_T;
          } else {
            saturatedUnaryMinus_0 = -saturatedUnaryMinus_0;
          }
        } else {
          saturatedUnaryMinus_1 = motor_U.Encode_Sp;
          saturatedUnaryMinus_0 = motor_U.Encode_Sp;
        }

        saturatedUnaryMinus = motor_Y.JD_Out;
        if (saturatedUnaryMinus < 0) {
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        }

        if (((uint32_T)saturatedUnaryMinus_1 > motor_DWork.Encode_Sp_Max) ||
            (((motor_Y.PWMOUT > 3500) || (motor_Y.PWMOUT < 1500)) &&
             (!motor_Y.Motor_En) && ((uint32_T)saturatedUnaryMinus_0 <=
              motor_DWork.Encode_Sp_Min) && (saturatedUnaryMinus < 18500))) {
          /* Transition: '<S1>:419' */
          motor_DWork.is_Enc1 = motor_IN_p4_nv;

          /* Entry 'p4': '<S1>:22' */
          q0 = motor_DWork.Enc_i;
          qY = q0 + 1U;
          if (qY < q0) {
            qY = MAX_uint32_T;
          }

          motor_DWork.Enc_i = qY;
        }
      } else {
        /* Inport: '<Root>/Encode_Sp' */
        /* During 'p4': '<S1>:22' */
        if (motor_U.Encode_Sp < 0) {
          saturatedUnaryMinus_0 = motor_U.Encode_Sp;
          if (saturatedUnaryMinus_0 <= MIN_int32_T) {
            saturatedUnaryMinus_1 = MAX_int32_T;
          } else {
            saturatedUnaryMinus_1 = -saturatedUnaryMinus_0;
          }

          saturatedUnaryMinus_0 = motor_U.Encode_Sp;
          if (saturatedUnaryMinus_0 <= MIN_int32_T) {
            saturatedUnaryMinus_0 = MAX_int32_T;
          } else {
            saturatedUnaryMinus_0 = -saturatedUnaryMinus_0;
          }
        } else {
          saturatedUnaryMinus_1 = motor_U.Encode_Sp;
          saturatedUnaryMinus_0 = motor_U.Encode_Sp;
        }

        saturatedUnaryMinus = motor_Y.JD_Out;
        if (saturatedUnaryMinus < 0) {
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        }

        if (((uint32_T)saturatedUnaryMinus_1 <= motor_DWork.Encode_Sp_Max) &&
            (((motor_Y.PWMOUT < 3500) && (motor_Y.PWMOUT > 1500)) ||
             motor_Y.Motor_En || ((uint32_T)saturatedUnaryMinus_0 >
              motor_DWork.Encode_Sp_Min) || (saturatedUnaryMinus > 18500))) {
          /* Transition: '<S1>:420' */
          motor_DWork.is_Enc1 = motor_IN_p1;

          /* Entry 'p1': '<S1>:21' */
          motor_Y.Flag_Enc_Error = 1U;
        } else {
          q0 = motor_DWork.Enc_i;
          qY = q0 + 1U;
          if (qY < q0) {
            qY = MAX_uint32_T;
          }

          motor_DWork.Enc_i = qY;
        }
      }

      /* During 'Enc2': '<S1>:16' */
      switch (motor_DWork.is_Enc2) {
       case motor_IN_p2_kbn:
        /* During 'p2': '<S1>:17' */
        if ((uint32_T)(5.0 / motor_DWork.Ts) == motor_DWork.temporalCounter_i6)
        {
          /* Transition: '<S1>:415' */
          /* 5秒钟 */
          if (motor_DWork.Enc_i >= 100U) {
            /* Transition: '<S1>:417' */
            motor_DWork.is_Enc2 = motor_IN_p3_exj;
            motor_DWork.temporalCounter_i5 = 0U;
          } else {
            if (motor_DWork.Enc_i < 100U) {
              /* Transition: '<S1>:416' */
              motor_DWork.is_Enc2 = motor_IN_p5_m;

              /* Entry 'p5': '<S1>:18' */
              motor_Y.Flag_Enc_Error = 1U;
            }
          }
        }
        break;

       case motor_IN_p3_exj:
        /* During 'p3': '<S1>:19' */
        if (motor_DWork.temporalCounter_i5 >= (uint32_T)(20.0 / motor_DWork.Ts))
        {
          /* Transition: '<S1>:1093' */
          motor_DWork.is_Enc2 = motor_IN_p2_kbn;
          motor_DWork.temporalCounter_i6 = 0U;

          /* Entry 'p2': '<S1>:17' */
          motor_DWork.Enc_i = 0U;
        } else {
          motor_Y.Flag_Enc_Error = 0U;

          /* Motor_En=1; */
        }
        break;

       default:
        /* During 'p5': '<S1>:18' */
        /* Transition: '<S1>:414' */
        motor_DWork.is_Enc2 = motor_IN_p2_kbn;
        motor_DWork.temporalCounter_i6 = 0U;

        /* Entry 'p2': '<S1>:17' */
        motor_DWork.Enc_i = 0U;
        break;
      }
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void moto_exit_internal_Showing_Mode(void)
{
  /* Exit Internal 'Showing_Mode': '<S1>:51' */
  if (motor_DWork.is_Showing_Mode == motor_IN_RUN) {
    /* Exit Internal 'RUN': '<S1>:186' */
    /* Exit Internal 'Limit_Check': '<S1>:200' */
    motor_DWork.is_Limit_Check_j = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Limit_Check_o = 0U;

    /* Exit Internal 'Algorithm': '<S1>:205' */
    switch (motor_DWork.is_Algorithm_e) {
     case motor_IN_HY:
      /* Exit Internal 'HY': '<S1>:214' */
      if (motor_DWork.is_HY_e == motor_IN_Sleeping_protect_2_m) {
        /* Exit 'Sleeping_protect_2': '<S1>:179' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
      } else {
        motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
      }

      motor_DWork.is_Algorithm_e = motor_IN_NO_ACTIVE_CHILD;
      break;

     case motor_IN_XHHY_m:
      /* Exit Internal 'XHHY': '<S1>:207' */
      if (motor_DWork.is_XHHY_n == motor_IN_Sleeping_protect_2_m) {
        /* Exit 'Sleeping_protect_2': '<S1>:209' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
      } else {
        motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
      }

      motor_DWork.is_Algorithm_e = motor_IN_NO_ACTIVE_CHILD;
      break;

     case motor_IN_XHZY_p:
      /* Exit Internal 'XHZY': '<S1>:220' */
      if (motor_DWork.is_XHZY_h == motor_IN_Sleeping_protect_2_m) {
        /* Exit 'Sleeping_protect_2': '<S1>:228' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
      } else {
        motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
      }

      motor_DWork.is_Algorithm_e = motor_IN_NO_ACTIVE_CHILD;
      break;

     default:
      motor_DWork.is_Algorithm_e = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'Limit_Down_Test': '<S1>:315' */
      /* Exit Internal 'HY': '<S1>:324' */
      motor_DWork.is_HY_aj = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Down_Test_i = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'XHHY': '<S1>:332' */
      motor_DWork.is_XHHY_fs = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'XHZY': '<S1>:316' */
      motor_DWork.is_XHZY_m = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'Limit_Up_Test': '<S1>:340' */
      /* Exit Internal 'HY': '<S1>:349' */
      motor_DWork.is_HY_l = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Up_Test_j = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'XHHY': '<S1>:357' */
      motor_DWork.is_XHHY_nb = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'XHZY': '<S1>:341' */
      motor_DWork.is_XHZY_d = motor_IN_NO_ACTIVE_CHILD;
      break;
    }

    motor_DWork.is_active_Algorithm_b = 0U;
    motor_DWork.is_Showing_Mode = motor_IN_NO_ACTIVE_CHILD;
  } else {
    motor_DWork.is_Showing_Mode = motor_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void enter_internal_Limit_Down_Test(void)
{
  /* Inport: '<Root>/Motor_Num' */
  /* Entry Internal 'Limit_Down_Test': '<S1>:315' */
  /* Transition: '<S1>:739' */
  if (motor_U.Motor_Num == 1) {
    /* Transition: '<S1>:741' */
    motor_DWork.is_Limit_Down_Test_i = motor_IN_XHZY_pv;

    /* Entry 'XHZY': '<S1>:316' */
    /* 下滑纵摇电子下限位测试 */
    /* Entry Internal 'XHZY': '<S1>:316' */
    /* Transition: '<S1>:749' */
    motor_DWork.is_XHZY_m = motor_IN_Int;
    motor_DWork.temporalCounter_i2 = 0U;

    /* Entry 'Int': '<S1>:317' */
    /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
    motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

    /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
    /* DataTypeConversion: '<S4>/Data Type Conversion2' */
    motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

    /* Gain: '<S4>/GXZ6' */
    motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

    /* Gain: '<S4>/GXZ1' */
    motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

    /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
    motor_DWork.chu_jd = motor_B.GXZ1;
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.KG = 1U;
    motor_DWork.KG_JD = 0U;
    motor_DWork.KG_YJ = 0U;
    motor_DWork.KG_En = 1U;
    motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  } else if (motor_U.Motor_Num == 3) {
    /* Transition: '<S1>:740' */
    motor_DWork.is_Limit_Down_Test_i = motor_IN_XHHY_m1;

    /* Entry 'XHHY': '<S1>:332' */
    /* 下滑横摇电子下限位测试 */
    /* Entry Internal 'XHHY': '<S1>:332' */
    /* Transition: '<S1>:765' */
    motor_DWork.is_XHHY_fs = motor_IN_Int;
    motor_DWork.temporalCounter_i2 = 0U;

    /* Entry 'Int': '<S1>:333' */
    /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
    motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

    /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
    /* DataTypeConversion: '<S4>/Data Type Conversion2' */
    motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

    /* Gain: '<S4>/GXZ6' */
    motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

    /* Gain: '<S4>/GXZ1' */
    motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

    /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
    motor_DWork.chu_jd = motor_B.GXZ1;
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.KG = 1U;
    motor_DWork.KG_JD = 0U;
    motor_DWork.KG_En = 1U;
    motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  } else {
    if (motor_U.Motor_Num == 2) {
      /* Transition: '<S1>:742' */
      motor_DWork.is_Limit_Down_Test_i = motor_IN_HY_f;

      /* Entry 'HY': '<S1>:324' */
      /* 横摇灯杆电子下限位测试 */
      /* Entry Internal 'HY': '<S1>:324' */
      /* Transition: '<S1>:757' */
      motor_DWork.is_HY_aj = motor_IN_Int;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int': '<S1>:325' */
      /* Simulink Function 'Angle_Calculation_HY': '<S1>:253' */
      motor_B.Encode_Pos_dc = motor_Y.Encode_Pos;

      /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_HY' */
      motor_Angle_Calculation_HY(motor_B.Encode_Pos_dc,
        &motor_B.Angle_Calculation_HY, (rtP_Angle_Calculation_HY_motor *)
        &motor_P.Angle_Calculation_HY);

      /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_HY' */
      motor_DWork.chu_jd = motor_B.Angle_Calculation_HY.GHDG9;
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    }
  }

  /* End of Inport: '<Root>/Motor_Num' */
}

/* Function for Chart: '<Root>/Chart' */
static void mo_enter_internal_Limit_Up_Test(void)
{
  /* Inport: '<Root>/Motor_Num' */
  /* Entry Internal 'Limit_Up_Test': '<S1>:340' */
  /* Transition: '<S1>:774' */
  if (motor_U.Motor_Num == 1) {
    /* Transition: '<S1>:776' */
    motor_DWork.is_Limit_Up_Test_j = motor_IN_XHZY_pv;

    /* Entry 'XHZY': '<S1>:341' */
    /* 下滑纵摇电子上限位测试 */
    /* Entry Internal 'XHZY': '<S1>:341' */
    /* Transition: '<S1>:784' */
    motor_DWork.is_XHZY_d = motor_IN_Int;
    motor_DWork.temporalCounter_i2 = 0U;

    /* Entry 'Int': '<S1>:342' */
    /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
    motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

    /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
    /* DataTypeConversion: '<S4>/Data Type Conversion2' */
    motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

    /* Gain: '<S4>/GXZ6' */
    motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

    /* Gain: '<S4>/GXZ1' */
    motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

    /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
    motor_DWork.chu_jd = motor_B.GXZ1;
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.KG = 1U;
    motor_DWork.KG_JD = 0U;
    motor_DWork.KG_YJ = 0U;
    motor_DWork.KG_En = 1U;
    motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  } else if (motor_U.Motor_Num == 3) {
    /* Transition: '<S1>:775' */
    motor_DWork.is_Limit_Up_Test_j = motor_IN_XHHY_m1;

    /* Entry 'XHHY': '<S1>:357' */
    /* 下滑横摇电子上限位测试 */
    /* Entry Internal 'XHHY': '<S1>:357' */
    /* Transition: '<S1>:800' */
    motor_DWork.is_XHHY_nb = motor_IN_Int;
    motor_DWork.temporalCounter_i2 = 0U;

    /* Entry 'Int': '<S1>:358' */
    /* Simulink Function 'Angle_Calculation_XH': '<S1>:250' */
    motor_B.Encode_Pos_d = motor_Y.Encode_Pos;

    /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_XH' */
    /* DataTypeConversion: '<S4>/Data Type Conversion2' */
    motor_B.DataTypeConversion2 = motor_B.Encode_Pos_d;

    /* Gain: '<S4>/GXZ6' */
    motor_B.GXZ6 = motor_P.GXZ6_Gain * motor_B.DataTypeConversion2;

    /* Gain: '<S4>/GXZ1' */
    motor_B.GXZ1 = motor_P.GXZ1_Gain * motor_B.GXZ6;

    /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_XH' */
    motor_DWork.chu_jd = motor_B.GXZ1;
    motor_Y.DCZD = false;

    /* 解除制动 */
    motor_Y.Motor_En = false;

    /* 电机使能 */
    motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    motor_DWork.KG = 1U;
    motor_DWork.KG_JD = 0U;
    motor_DWork.KG_En = 1U;
    motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
  } else {
    if (motor_U.Motor_Num == 2) {
      /* Transition: '<S1>:777' */
      motor_DWork.is_Limit_Up_Test_j = motor_IN_HY_f;

      /* Entry 'HY': '<S1>:349' */
      /* 调试模式 */
      /* Entry Internal 'HY': '<S1>:349' */
      /* Transition: '<S1>:792' */
      motor_DWork.is_HY_l = motor_IN_Int;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int': '<S1>:350' */
      /* Simulink Function 'Angle_Calculation_HY': '<S1>:253' */
      motor_B.Encode_Pos_dc = motor_Y.Encode_Pos;

      /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_HY' */
      motor_Angle_Calculation_HY(motor_B.Encode_Pos_dc,
        &motor_B.Angle_Calculation_HY, (rtP_Angle_Calculation_HY_motor *)
        &motor_P.Angle_Calculation_HY);

      /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_HY' */
      motor_DWork.chu_jd = motor_B.Angle_Calculation_HY.GHDG9;
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.KG = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
    }
  }

  /* End of Inport: '<Root>/Motor_Num' */
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHZY(void)
{
  uint16_T tmp;
  real_T tmp_0;
  int32_T saturatedUnaryMinus;

  /* Inport: '<Root>/Test_Mode' */
  /* During 'XHZY': '<S1>:220' */
  if (motor_U.Test_Mode == 2) {
    /* Transition: '<S1>:629' */
    /* Transition: '<S1>:631' */
    motor_DWork.XiaoDaShen = 1.0;

    /* Exit Internal 'XHZY': '<S1>:220' */
    if (motor_DWork.is_XHZY_h == motor_IN_Sleeping_protect_2_m) {
      /* Exit 'Sleeping_protect_2': '<S1>:228' */
      /* 关电磁制动 */
      motor_Y.DCZD = false;
      motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
    } else {
      motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
    }

    motor_DWork.is_Algorithm_e = motor_IN_Limit_Up_Test_k;

    /* Entry 'Limit_Up_Test': '<S1>:340' */
    /* 测试电子上限位 */
    mo_enter_internal_Limit_Up_Test();
  } else if (motor_U.Test_Mode == 3) {
    /* Transition: '<S1>:630' */
    /* Transition: '<S1>:634' */
    motor_DWork.XiaoDaShen = 1.0;

    /* Exit Internal 'XHZY': '<S1>:220' */
    if (motor_DWork.is_XHZY_h == motor_IN_Sleeping_protect_2_m) {
      /* Exit 'Sleeping_protect_2': '<S1>:228' */
      /* 关电磁制动 */
      motor_Y.DCZD = false;
      motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
    } else {
      motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
    }

    motor_DWork.is_Algorithm_e = motor_IN_Limit_Down_Test_f;

    /* Entry 'Limit_Down_Test': '<S1>:315' */
    /* 电子下限位检测 */
    enter_internal_Limit_Down_Test();
  } else {
    switch (motor_DWork.is_XHZY_h) {
     case motor_IN_Defualt:
      /* During 'Defualt': '<S1>:221' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(15.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:656' */
        /* 等待15s */
        motor_DWork.is_XHZY_h = motor_IN_XHZY_Error_fb;

        /* Entry 'XHZY_Error': '<S1>:222' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.Open_Result = 2U;
      } else {
        saturatedUnaryMinus = motor_Y.Encode_Pos;
        if (saturatedUnaryMinus < 0) {
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        }

        if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Pos_Zero) {
          /* Transition: '<S1>:655' */
          motor_DWork.is_XHZY_h = motor_IN_XHZY_Wait_l;
          motor_DWork.temporalCounter_i2 = 0U;

          /* Entry 'XHZY_Wait': '<S1>:224' */
          motor_Y.Open_Result = 1U;

          /* 开机状态位成功 */
          motor_DWork.In_State = 2U;
          motor_DWork.KG_En = 1U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
        } else {
          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Motor_XHZY': '<S1>:90' */
          motor_B.JD_In_d = motor_U.JD_In;
          motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

          /* Inport: '<Root>/YJ_In' */
          motor_B.YJ_In = motor_U.YJ_In;

          /* Inport: '<Root>/Encode_Sp' */
          motor_B.Encode_Sp_l = motor_U.Encode_Sp;

          /* Inport: '<Root>/System_Order' */
          motor_B.Slect_port_h = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
          motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                           motor_B.YJ_In, motor_B.Encode_Sp_l,
                           motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                           &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                           &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                           &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                           &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                           &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                           &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                           &motor_DWork.KG_clc, &motor_DWork.P_KP,
                           &motor_DWork.V_KI, &motor_DWork.V_KP,
                           &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                           &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
          tmp_0 = motor_B.Motor_XHZY.ZXF_PWM;
          if (tmp_0 < 65536.0) {
            if (tmp_0 >= 0.0) {
              tmp = (uint16_T)tmp_0;
            } else {
              tmp = 0U;
            }
          } else {
            tmp = MAX_uint16_T;
          }

          motor_Y.PWMOUT = tmp;
          tmp_0 = motor_B.Motor_XHZY.KP_JD;
          if (tmp_0 < 2.147483648E+9) {
            if (tmp_0 >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp_0;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Out = saturatedUnaryMinus;
          tmp_0 = motor_B.Motor_XHZY.KP_e;
          if (tmp_0 < 2.147483648E+9) {
            if (tmp_0 >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp_0;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Error = saturatedUnaryMinus;
          motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
        }
      }
      break;

     case motor_IN_Sleeping_protect_1_h:
      /* During 'Sleeping_protect_1': '<S1>:227' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:657' */
        motor_DWork.is_XHZY_h = motor_IN_Sleeping_protect_2_m;

        /* Entry 'Sleeping_protect_2': '<S1>:228' */
        motor_Y.DCZD = true;

        /* 开电磁制动 */
      }
      break;

     case motor_IN_Sleeping_protect_2_m:
      /* Inport: '<Root>/System_Order' */
      /* During 'Sleeping_protect_2': '<S1>:228' */
      if (motor_U.System_Order == 5) {
        /* Transition: '<S1>:658' */
        /* Exit 'Sleeping_protect_2': '<S1>:228' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHZY_h = motor_IN_Sleeping_protect_3_f;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Sleeping_protect_3': '<S1>:216' */
        motor_Y.Motor_En = false;

        /* 开电机 */
      }
      break;

     case motor_IN_Sleeping_protect_3_f:
      /* During 'Sleeping_protect_3': '<S1>:216' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:661' */
        motor_DWork.is_XHZY_h = motor_IN_XHZY_Run_i;

        /* Entry 'XHZY_Run': '<S1>:225' */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_YJ = 1U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);

        /* Inport: '<Root>/Showing_Angle' */
        /* KG_YJ=uint8(1);%接入外部接口 */
        motor_DWork.Showing_Angle_Last = motor_U.Showing_Angle;

        /* Inport: '<Root>/Showing_T' */
        motor_DWork.Showing_T_Last = motor_U.Showing_T;
      }
      break;

     case motor_IN_XHZY_Error_fb:
      /* During 'XHZY_Error': '<S1>:222' */
      break;

     case motor_IN_XHZY_Run_i:
      /* Inport: '<Root>/System_Order' incorporates:
       *  Inport: '<Root>/Showing_Angle'
       *  Inport: '<Root>/Showing_T'
       */
      /* During 'XHZY_Run': '<S1>:225' */
      if (motor_U.System_Order == 4) {
        /* Transition: '<S1>:659' */
        motor_DWork.is_XHZY_h = motor_IN_Sleeping_protect_1_h;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Sleeping_protect_1': '<S1>:227' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if (motor_U.System_Order == 3) {
        /* Transition: '<S1>:662' */
        /* Transition: '<S1>:625' */
        moto_exit_internal_Showing_Mode();
        motor_DWork.is_M_Run = motor_IN_Close;
        motor_DWork.is_Close = motor_IN_Close_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Close_Wait': '<S1>:241' */
        motor_Y.Open_Result = 4U;

        /* 正在关机 */
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.EN_extern = 0U;
      } else if ((motor_DWork.Showing_Angle_Last != motor_U.Showing_Angle) ||
                 (motor_DWork.Showing_T_Last != motor_U.Showing_T)) {
        /* Transition: '<S1>:950' */
        motor_DWork.is_XHZY_h = motor_IN_Defualt;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Defualt': '<S1>:221' */
        /* en:KG_En=uint8(0);KG_JD=uint8(1);KG_YJ=uint8(1); */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_YJ = 0U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
        motor_DWork.chu_jd = 0.0;
      } else {
        /* Inport: '<Root>/Showing_Angle' */
        /* Simulink Function 'Showing': '<S1>:180' */
        motor_B.Showing_Angle = motor_U.Showing_Angle;

        /* Inport: '<Root>/Showing_T' */
        motor_B.Showing_T = motor_U.Showing_T;

        /* Outputs for Function Call SubSystem: '<S1>/Showing' */
        motor_Showing(motor_M, motor_B.Showing_Angle, motor_B.Showing_T,
                      &motor_B.Showing, (rtP_Showing_motor *)&motor_P.Showing,
                      &motor_DWork.Angle_S);

        /* End of Outputs for SubSystem: '<S1>/Showing' */
        motor_DWork.chu_jd = motor_B.Showing.DataTypeConversion1;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHZY': '<S1>:90' */
        motor_B.JD_In_d = motor_U.JD_In;
        motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

        /* Inport: '<Root>/YJ_In' */
        motor_B.YJ_In = motor_U.YJ_In;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_l = motor_U.Encode_Sp;
        motor_B.Slect_port_h = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
        motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                         motor_B.YJ_In, motor_B.Encode_Sp_l,
                         motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                         &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                         &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                         &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                         &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                         &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                         &motor_DWork.KG_clc, &motor_DWork.P_KP,
                         &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
        tmp_0 = motor_B.Motor_XHZY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHZY.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHZY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
      }
      break;

     case motor_IN_XHZY_Run1_a:
      /* Inport: '<Root>/Showing_Angle' */
      /* During 'XHZY_Run1': '<S1>:944' */
      if (motor_DWork.Showing_Angle0 >= motor_U.Showing_Angle) {
        /* Transition: '<S1>:949' */
        motor_DWork.is_XHZY_h = motor_IN_XHZY_Run_i;

        /* Entry 'XHZY_Run': '<S1>:225' */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_YJ = 1U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);

        /* KG_YJ=uint8(1);%接入外部接口 */
        motor_DWork.Showing_Angle_Last = motor_U.Showing_Angle;

        /* Inport: '<Root>/Showing_T' */
        motor_DWork.Showing_T_Last = motor_U.Showing_T;
      } else {
        motor_DWork.Showing_Angle0 += 0.01;

        /* Simulink Function 'Showing': '<S1>:180' */
        motor_B.Showing_Angle = motor_DWork.Showing_Angle0;

        /* Inport: '<Root>/Showing_T' */
        motor_B.Showing_T = motor_U.Showing_T;

        /* Outputs for Function Call SubSystem: '<S1>/Showing' */
        motor_Showing(motor_M, motor_B.Showing_Angle, motor_B.Showing_T,
                      &motor_B.Showing, (rtP_Showing_motor *)&motor_P.Showing,
                      &motor_DWork.Angle_S);

        /* End of Outputs for SubSystem: '<S1>/Showing' */
        motor_DWork.chu_jd = motor_B.Showing.DataTypeConversion1;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHZY': '<S1>:90' */
        motor_B.JD_In_d = motor_U.JD_In;
        motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

        /* Inport: '<Root>/YJ_In' */
        motor_B.YJ_In = motor_U.YJ_In;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_l = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_h = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
        motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                         motor_B.YJ_In, motor_B.Encode_Sp_l,
                         motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                         &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                         &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                         &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                         &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                         &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                         &motor_DWork.KG_clc, &motor_DWork.P_KP,
                         &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
        tmp_0 = motor_B.Motor_XHZY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHZY.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHZY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
      }
      break;

     default:
      /* During 'XHZY_Wait': '<S1>:224' */
      if (motor_DWork.temporalCounter_i2 >= 100U) {
        /* Transition: '<S1>:660' */
        motor_DWork.is_XHZY_h = motor_IN_XHZY_Run1_a;

        /* Entry 'XHZY_Run1': '<S1>:944' */
        motor_DWork.KG_JD = 0U;
        motor_DWork.Showing_Angle0 = 0.0;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHZY': '<S1>:90' */
        motor_B.JD_In_d = motor_U.JD_In;
        motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

        /* Inport: '<Root>/YJ_In' */
        motor_B.YJ_In = motor_U.YJ_In;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_l = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_h = motor_U.System_Order;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
        motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                         motor_B.YJ_In, motor_B.Encode_Sp_l,
                         motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                         &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                         &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                         &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                         &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                         &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                         &motor_DWork.KG_clc, &motor_DWork.P_KP,
                         &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
        tmp_0 = motor_B.Motor_XHZY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHZY.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHZY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;

        /* PWMOUT=2500; */
      }
      break;
    }
  }

  /* End of Inport: '<Root>/Test_Mode' */
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHZY_asn(void)
{
  int32_T tmp;
  uint16_T tmp_0;
  real_T tmp_1;

  /* During 'XHZY': '<S1>:316' */
  switch (motor_DWork.is_XHZY_m) {
   case motor_IN_Int:
    /* During 'Int': '<S1>:317' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1018' */
      motor_DWork.is_XHZY_m = motor_IN_Int8;
    }
    break;

   case motor_IN_Int1:
    /* Inport: '<Root>/Down_Limit' */
    /* During 'Int1': '<S1>:318' */
    if (motor_U.Down_Limit == 0) {
      /* Transition: '<S1>:751' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_XHZY_m = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int2': '<S1>:319' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(5.0 / motor_DWork.Ts))
    {
      /* Transition: '<S1>:1071' */
      motor_Y.Flag_Down_GZ_limit = 0U;

      /* 下限位开关故障$/ */
      motor_DWork.is_XHZY_m = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int2': '<S1>:319' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }

    /* End of Inport: '<Root>/Down_Limit' */
    break;

   case motor_IN_Int2_i:
    /* During 'Int2': '<S1>:319' */
    if (motor_DWork.temporalCounter_i2 >= 50U) {
      /* Transition: '<S1>:753' */
      motor_DWork.is_XHZY_m = motor_IN_Int7;
      motor_DWork.temporalCounter_i2 = 0U;
    } else {
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int3_l:
    /* During 'Int3': '<S1>:320' */
    if (fabs(motor_DWork.chu_jd) < 0.1) {
      /* Transition: '<S1>:755' */
      motor_DWork.is_XHZY_m = motor_IN_Int4_b;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int4': '<S1>:322' */
      motor_DWork.chu_jd = 0.0;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int4_b:
    /* During 'Int4': '<S1>:322' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:756' */
      motor_DWork.is_XHZY_m = motor_IN_Int5_a;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int5': '<S1>:323' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int5_a:
    /* During 'Int5': '<S1>:323' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:754' */
      motor_DWork.is_XHZY_m = motor_IN_Int6_m;

      /* Entry 'Int6': '<S1>:321' */
      motor_Y.DCZD = true;

      /* 开启制动 */
    }
    break;

   case motor_IN_Int6_m:
    /* During 'Int6': '<S1>:321' */
    /* Transition: '<S1>:752' */
    /* Transition: '<S1>:738' */
    /* Transition: '<S1>:620' */
    motor_DWork.XiaoDaShen = 0.0;
    motor_DWork.is_XHZY_m = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Down_Test_i = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Algorithm_e = motor_IN_Defualt;

    /* Entry 'Defualt': '<S1>:206' */
    motor_DWork.chu_jd = 0.0;
    motor_DWork.KG = 0U;
    motor_Y.Motor_En = false;
    motor_Y.DCZD = false;

    /* 开电磁制动，低有效 */
    break;

   case motor_IN_Int7:
    /* During 'Int7': '<S1>:961' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:962' */
      motor_DWork.is_XHZY_m = motor_IN_Int3_l;

      /* Entry 'Int3': '<S1>:320' */
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   default:
    /* During 'Int8': '<S1>:1020' */
    if (motor_DWork.chu_jd < -16.0) {
      /* Transition: '<S1>:1019' */
      motor_DWork.is_XHZY_m = motor_IN_Int1;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int1': '<S1>:318' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_U.Down_Limit == 0) {
      /* Transition: '<S1>:1017' */
      /* 下限位开关低电平有效 */
      motor_DWork.is_XHZY_m = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int2': '<S1>:319' */
      motor_DWork.chu_jd -= 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Limit_Down_Test_b(void)
{
  int32_T tmp;
  real_T tmp_0;
  uint16_T tmp_1;

  /* During 'Limit_Down_Test': '<S1>:315' */
  switch (motor_DWork.is_Limit_Down_Test_i) {
   case motor_IN_HY_f:
    /* During 'HY': '<S1>:324' */
    switch (motor_DWork.is_HY_aj) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:325' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:1023' */
        motor_DWork.is_HY_aj = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Down_Limit' */
      /* During 'Int1': '<S1>:326' */
      if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:759' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_HY_aj = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:327' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(7.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1072' */
        motor_Y.Flag_Down_GZ_limit = 0U;

        /* 下限位开关故障$/ */
        motor_DWork.is_HY_aj = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:327' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:327' */
      if (motor_DWork.temporalCounter_i2 >= 50U) {
        /* Transition: '<S1>:761' */
        motor_DWork.is_HY_aj = motor_IN_Int7;
        motor_DWork.temporalCounter_i2 = 0U;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:328' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:762' */
        motor_DWork.is_HY_aj = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int4': '<S1>:330' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:330' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:764' */
        motor_DWork.is_HY_aj = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int5': '<S1>:331' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:331' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:763' */
        motor_DWork.is_HY_aj = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:329' */
        motor_Y.DCZD = false;

        /* 解除制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:329' */
      /* Transition: '<S1>:760' */
      /* Transition: '<S1>:738' */
      /* Transition: '<S1>:620' */
      motor_DWork.XiaoDaShen = 0.0;
      motor_DWork.is_HY_aj = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Down_Test_i = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Algorithm_e = motor_IN_Defualt;

      /* Entry 'Defualt': '<S1>:206' */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 0U;
      motor_Y.Motor_En = false;
      motor_Y.DCZD = false;

      /* 开电磁制动，低有效 */
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:963' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:964' */
        motor_DWork.is_HY_aj = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:328' */
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:1022' */
      if (motor_DWork.chu_jd < -14.0) {
        /* Transition: '<S1>:1024' */
        motor_DWork.is_HY_aj = motor_IN_Int1;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int1': '<S1>:326' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:1021' */
        /* 下限位开关低电平有效 */
        motor_DWork.is_HY_aj = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:327' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;
    }
    break;

   case motor_IN_XHHY_m1:
    /* During 'XHHY': '<S1>:332' */
    switch (motor_DWork.is_XHHY_fs) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:333' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:1025' */
        motor_DWork.is_XHHY_fs = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Down_Limit' */
      /* During 'Int1': '<S1>:334' */
      if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:767' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_XHHY_fs = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:335' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(5.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1073' */
        motor_Y.Flag_Down_GZ_limit = 0U;

        /* 下限位开关故障$/ */
        motor_DWork.is_XHHY_fs = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:335' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:335' */
      if (motor_DWork.temporalCounter_i2 >= 50U) {
        /* Transition: '<S1>:769' */
        motor_DWork.is_XHHY_fs = motor_IN_Int7;
        motor_DWork.temporalCounter_i2 = 0U;
      } else {
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:336' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:770' */
        motor_DWork.is_XHHY_fs = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int4': '<S1>:338' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:338' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:772' */
        motor_DWork.is_XHHY_fs = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int5': '<S1>:339' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:339' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:771' */
        motor_DWork.is_XHHY_fs = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:337' */
        motor_Y.DCZD = true;

        /* 开启制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:337' */
      /* Transition: '<S1>:768' */
      /* Transition: '<S1>:738' */
      /* Transition: '<S1>:620' */
      motor_DWork.XiaoDaShen = 0.0;
      motor_DWork.is_XHHY_fs = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Down_Test_i = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Algorithm_e = motor_IN_Defualt;

      /* Entry 'Defualt': '<S1>:206' */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 0U;
      motor_Y.Motor_En = false;
      motor_Y.DCZD = false;

      /* 开电磁制动，低有效 */
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:965' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:966' */
        motor_DWork.is_XHHY_fs = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:336' */
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:1026' */
      if (motor_DWork.chu_jd < -16.0) {
        /* Transition: '<S1>:1027' */
        motor_DWork.is_XHHY_fs = motor_IN_Int1;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int1': '<S1>:334' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_U.Down_Limit == 0) {
        /* Transition: '<S1>:1028' */
        /* 下限位开关低电平有效 */
        motor_DWork.is_XHHY_fs = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:335' */
        motor_DWork.chu_jd -= 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;
    }
    break;

   default:
    motor_XHZY_asn();
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHZY_asnq(void)
{
  int32_T tmp;
  uint16_T tmp_0;
  real_T tmp_1;

  /* During 'XHZY': '<S1>:341' */
  switch (motor_DWork.is_XHZY_d) {
   case motor_IN_Int:
    /* During 'Int': '<S1>:342' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1005' */
      motor_DWork.is_XHZY_d = motor_IN_Int8;
    }
    break;

   case motor_IN_Int1:
    /* Inport: '<Root>/Up_Limit' */
    /* During 'Int1': '<S1>:343' */
    if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:786' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_XHZY_d = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int2': '<S1>:344' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(5.0 / motor_DWork.Ts))
    {
      /* Transition: '<S1>:1042' */
      motor_Y.Flag_Up_GZ_limit = 0U;

      /* 上限位开关故障$/ */
      motor_DWork.is_XHZY_d = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int2': '<S1>:344' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }

    /* End of Inport: '<Root>/Up_Limit' */
    break;

   case motor_IN_Int2_i:
    /* During 'Int2': '<S1>:344' */
    if (motor_DWork.temporalCounter_i2 >= 50U) {
      /* Transition: '<S1>:788' */
      motor_DWork.is_XHZY_d = motor_IN_Int7;
      motor_DWork.temporalCounter_i2 = 0U;
    } else {
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int3_l:
    /* During 'Int3': '<S1>:345' */
    if (fabs(motor_DWork.chu_jd) < 0.1) {
      /* Transition: '<S1>:789' */
      motor_DWork.is_XHZY_d = motor_IN_Int4_b;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int4': '<S1>:347' */
      motor_DWork.chu_jd = 0.0;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int4_b:
    /* During 'Int4': '<S1>:347' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:791' */
      motor_DWork.is_XHZY_d = motor_IN_Int5_a;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int5': '<S1>:348' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   case motor_IN_Int5_a:
    /* During 'Int5': '<S1>:348' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
      /* Transition: '<S1>:790' */
      motor_DWork.is_XHZY_d = motor_IN_Int6_m;

      /* Entry 'Int6': '<S1>:346' */
      motor_Y.DCZD = true;

      /* 开启制动 */
    }
    break;

   case motor_IN_Int6_m:
    /* During 'Int6': '<S1>:346' */
    /* Transition: '<S1>:787' */
    /* Transition: '<S1>:773' */
    /* Transition: '<S1>:620' */
    motor_DWork.XiaoDaShen = 0.0;
    motor_DWork.is_XHZY_d = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Up_Test_j = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Algorithm_e = motor_IN_Defualt;

    /* Entry 'Defualt': '<S1>:206' */
    motor_DWork.chu_jd = 0.0;
    motor_DWork.KG = 0U;
    motor_Y.Motor_En = false;
    motor_Y.DCZD = false;

    /* 开电磁制动，低有效 */
    break;

   case motor_IN_Int7:
    /* During 'Int7': '<S1>:955' */
    if (motor_DWork.temporalCounter_i2 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:956' */
      motor_DWork.is_XHZY_d = motor_IN_Int3_l;

      /* Entry 'Int3': '<S1>:345' */
      motor_DWork.chu_jd -= 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;

   default:
    /* During 'Int8': '<S1>:1007' */
    if (motor_DWork.chu_jd > 16.0) {
      /* Transition: '<S1>:1008' */
      motor_DWork.is_XHZY_d = motor_IN_Int1;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int1': '<S1>:343' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else if (motor_U.Up_Limit == 0) {
      /* Transition: '<S1>:1006' */
      /* 上限位开关低电平有效 */
      motor_DWork.is_XHZY_d = motor_IN_Int2_i;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Int2': '<S1>:344' */
      motor_DWork.chu_jd += 0.002;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    } else {
      motor_DWork.chu_jd += 0.01;

      /* Inport: '<Root>/JD_In' */
      /* Simulink Function 'Motor_XHZY': '<S1>:90' */
      motor_B.JD_In_d = motor_U.JD_In;
      motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

      /* Inport: '<Root>/YJ_In' */
      motor_B.YJ_In = motor_U.YJ_In;

      /* Inport: '<Root>/Encode_Sp' */
      motor_B.Encode_Sp_l = motor_U.Encode_Sp;

      /* Inport: '<Root>/System_Order' */
      motor_B.Slect_port_h = motor_U.System_Order;

      /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
      motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                       motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                       &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                       (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                       &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                       &motor_DWork.EN_extern, &motor_DWork.Forword,
                       &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                       &motor_DWork.KG_En, &motor_DWork.KG_JD,
                       &motor_DWork.KG_YJ, &motor_DWork.KG_clc,
                       &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                       &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                       &motor_DWork.chu_jd);

      /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
      tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
      if (tmp_1 < 65536.0) {
        if (tmp_1 >= 0.0) {
          tmp_0 = (uint16_T)tmp_1;
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint16_T;
      }

      motor_Y.PWMOUT = tmp_0;
      tmp_1 = motor_B.Motor_XHZY.KP_JD;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Out = tmp;
      tmp_1 = motor_B.Motor_XHZY.KP_e;
      if (tmp_1 < 2.147483648E+9) {
        if (tmp_1 >= -2.147483648E+9) {
          tmp = (int32_T)tmp_1;
        } else {
          tmp = MIN_int32_T;
        }
      } else {
        tmp = MAX_int32_T;
      }

      motor_Y.JD_Error = tmp;
      motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Limit_Up_Test_a(void)
{
  int32_T tmp;
  real_T tmp_0;
  uint16_T tmp_1;

  /* During 'Limit_Up_Test': '<S1>:340' */
  switch (motor_DWork.is_Limit_Up_Test_j) {
   case motor_IN_HY_f:
    /* During 'HY': '<S1>:349' */
    switch (motor_DWork.is_HY_l) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:350' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:1012' */
        motor_DWork.is_HY_l = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Up_Limit' */
      /* During 'Int1': '<S1>:351' */
      if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:794' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_HY_l = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:352' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(7.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1043' */
        motor_Y.Flag_Up_GZ_limit = 0U;

        /* 上限位开关故障$/ */
        motor_DWork.is_HY_l = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:352' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:352' */
      if (motor_DWork.temporalCounter_i2 >= 50U) {
        /* Transition: '<S1>:796' */
        motor_DWork.is_HY_l = motor_IN_Int7;
        motor_DWork.temporalCounter_i2 = 0U;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:353' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:797' */
        motor_DWork.is_HY_l = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int4': '<S1>:355' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:355' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:799' */
        motor_DWork.is_HY_l = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int5': '<S1>:356' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:356' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:798' */
        motor_DWork.is_HY_l = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:354' */
        motor_Y.DCZD = false;

        /* 解除制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:354' */
      /* Transition: '<S1>:795' */
      /* Transition: '<S1>:773' */
      /* Transition: '<S1>:620' */
      motor_DWork.XiaoDaShen = 0.0;
      motor_DWork.is_HY_l = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Up_Test_j = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Algorithm_e = motor_IN_Defualt;

      /* Entry 'Defualt': '<S1>:206' */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 0U;
      motor_Y.Motor_En = false;
      motor_Y.DCZD = false;

      /* 开电磁制动，低有效 */
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:957' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:958' */
        motor_DWork.is_HY_l = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:353' */
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:1011' */
      if (motor_DWork.chu_jd > 14.0) {
        /* Transition: '<S1>:1010' */
        motor_DWork.is_HY_l = motor_IN_Int1;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int1': '<S1>:351' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:1009' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_HY_l = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:352' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
      }
      break;
    }
    break;

   case motor_IN_XHHY_m1:
    /* During 'XHHY': '<S1>:357' */
    switch (motor_DWork.is_XHHY_nb) {
     case motor_IN_Int:
      /* During 'Int': '<S1>:358' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:1014' */
        motor_DWork.is_XHHY_nb = motor_IN_Int8;
      }
      break;

     case motor_IN_Int1:
      /* Inport: '<Root>/Up_Limit' */
      /* During 'Int1': '<S1>:359' */
      if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:802' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_XHHY_nb = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:360' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(5.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:1044' */
        motor_Y.Flag_Up_GZ_limit = 0U;

        /* 上限位开关故障$/ */
        motor_DWork.is_XHHY_nb = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:360' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int2_i:
      /* During 'Int2': '<S1>:360' */
      if (motor_DWork.temporalCounter_i2 >= 50U) {
        /* Transition: '<S1>:804' */
        motor_DWork.is_XHHY_nb = motor_IN_Int7;
        motor_DWork.temporalCounter_i2 = 0U;
      } else {
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int3_l:
      /* During 'Int3': '<S1>:361' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:805' */
        motor_DWork.is_XHHY_nb = motor_IN_Int4_b;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int4': '<S1>:363' */
        motor_DWork.chu_jd = 0.0;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int4_b:
      /* During 'Int4': '<S1>:363' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:560' */
        motor_DWork.is_XHHY_nb = motor_IN_Int5_a;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int5': '<S1>:143' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     case motor_IN_Int5_a:
      /* During 'Int5': '<S1>:143' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:534' */
        motor_DWork.is_XHHY_nb = motor_IN_Int6_m;

        /* Entry 'Int6': '<S1>:362' */
        motor_Y.DCZD = true;

        /* 开启制动 */
      }
      break;

     case motor_IN_Int6_m:
      /* During 'Int6': '<S1>:362' */
      /* Transition: '<S1>:803' */
      /* Transition: '<S1>:773' */
      /* Transition: '<S1>:620' */
      motor_DWork.XiaoDaShen = 0.0;
      motor_DWork.is_XHHY_nb = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Limit_Up_Test_j = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Algorithm_e = motor_IN_Defualt;

      /* Entry 'Defualt': '<S1>:206' */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 0U;
      motor_Y.Motor_En = false;
      motor_Y.DCZD = false;

      /* 开电磁制动，低有效 */
      break;

     case motor_IN_Int7:
      /* During 'Int7': '<S1>:959' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:960' */
        motor_DWork.is_XHHY_nb = motor_IN_Int3_l;

        /* Entry 'Int3': '<S1>:361' */
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;

     default:
      /* During 'Int8': '<S1>:1016' */
      if (motor_DWork.chu_jd > 16.0) {
        /* Transition: '<S1>:1015' */
        motor_DWork.is_XHHY_nb = motor_IN_Int1;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int1': '<S1>:359' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else if (motor_U.Up_Limit == 0) {
        /* Transition: '<S1>:1013' */
        /* 上限位开关低电平有效 */
        motor_DWork.is_XHHY_nb = motor_IN_Int2_i;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Int2': '<S1>:360' */
        motor_DWork.chu_jd += 0.002;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp_1 = (uint16_T)tmp_0;
          } else {
            tmp_1 = 0U;
          }
        } else {
          tmp_1 = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp_1;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Out = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            tmp = (int32_T)tmp_0;
          } else {
            tmp = MIN_int32_T;
          }
        } else {
          tmp = MAX_int32_T;
        }

        motor_Y.JD_Error = tmp;
      }
      break;
    }
    break;

   default:
    motor_XHZY_asnq();
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_XHHY_n(void)
{
  uint16_T tmp;
  real_T tmp_0;
  int32_T saturatedUnaryMinus;

  /* Inport: '<Root>/Test_Mode' */
  /* During 'XHHY': '<S1>:207' */
  if (motor_U.Test_Mode == 2) {
    /* Transition: '<S1>:616' */
    /* Transition: '<S1>:631' */
    motor_DWork.XiaoDaShen = 1.0;

    /* Exit Internal 'XHHY': '<S1>:207' */
    if (motor_DWork.is_XHHY_n == motor_IN_Sleeping_protect_2_m) {
      /* Exit 'Sleeping_protect_2': '<S1>:209' */
      /* 关电磁制动 */
      motor_Y.DCZD = false;
      motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
    } else {
      motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
    }

    motor_DWork.is_Algorithm_e = motor_IN_Limit_Up_Test_k;

    /* Entry 'Limit_Up_Test': '<S1>:340' */
    /* 测试电子上限位 */
    mo_enter_internal_Limit_Up_Test();
  } else if (motor_U.Test_Mode == 3) {
    /* Transition: '<S1>:617' */
    /* Transition: '<S1>:634' */
    motor_DWork.XiaoDaShen = 1.0;

    /* Exit Internal 'XHHY': '<S1>:207' */
    if (motor_DWork.is_XHHY_n == motor_IN_Sleeping_protect_2_m) {
      /* Exit 'Sleeping_protect_2': '<S1>:209' */
      /* 关电磁制动 */
      motor_Y.DCZD = false;
      motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
    } else {
      motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
    }

    motor_DWork.is_Algorithm_e = motor_IN_Limit_Down_Test_f;

    /* Entry 'Limit_Down_Test': '<S1>:315' */
    /* 电子下限位检测 */
    enter_internal_Limit_Down_Test();
  } else {
    switch (motor_DWork.is_XHHY_n) {
     case motor_IN_Defualt:
      /* During 'Defualt': '<S1>:208' */
      saturatedUnaryMinus = motor_Y.Encode_Pos;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Pos_Zero) {
        /* Transition: '<S1>:637' */
        motor_DWork.is_XHHY_n = motor_IN_XHHY_Wait_g;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'XHHY_Wait': '<S1>:212' */
        motor_Y.Open_Result = 1U;

        /* 开机状态位成功 */
        motor_DWork.In_State = 2U;
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(15.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:638' */
        motor_DWork.is_XHHY_n = motor_IN_XHHY_Error;

        /* Entry 'XHHY_Error': '<S1>:210' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.Open_Result = 2U;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      }
      break;

     case motor_IN_Sleeping_protect_1_h:
      /* During 'Sleeping_protect_1': '<S1>:211' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:639' */
        motor_DWork.is_XHHY_n = motor_IN_Sleeping_protect_2_m;

        /* Entry 'Sleeping_protect_2': '<S1>:209' */
        motor_Y.DCZD = true;

        /* 开电磁制动 */
      }
      break;

     case motor_IN_Sleeping_protect_2_m:
      /* Inport: '<Root>/System_Order' */
      /* During 'Sleeping_protect_2': '<S1>:209' */
      if (motor_U.System_Order == 5) {
        /* Transition: '<S1>:640' */
        /* Exit 'Sleeping_protect_2': '<S1>:209' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_XHHY_n = motor_IN_Sleeping_protect_3_f;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Sleeping_protect_3': '<S1>:223' */
        motor_Y.Motor_En = false;

        /* 开电机 */
      }
      break;

     case motor_IN_Sleeping_protect_3_f:
      /* During 'Sleeping_protect_3': '<S1>:223' */
      if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:642' */
        motor_DWork.is_XHHY_n = motor_IN_XHHY_Run_e;

        /* Entry 'XHHY_Run': '<S1>:213' */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;

        /* Inport: '<Root>/Showing_Angle' */
        motor_DWork.Showing_Angle_Last = motor_U.Showing_Angle;

        /* Inport: '<Root>/Showing_T' */
        motor_DWork.Showing_T_Last = motor_U.Showing_T;
      }
      break;

     case motor_IN_XHHY_Error:
      /* During 'XHHY_Error': '<S1>:210' */
      break;

     case motor_IN_XHHY_Run_e:
      /* Inport: '<Root>/System_Order' incorporates:
       *  Inport: '<Root>/Showing_Angle'
       *  Inport: '<Root>/Showing_T'
       */
      /* During 'XHHY_Run': '<S1>:213' */
      if (motor_U.System_Order == 3) {
        /* Transition: '<S1>:644' */
        /* Transition: '<S1>:625' */
        moto_exit_internal_Showing_Mode();
        motor_DWork.is_M_Run = motor_IN_Close;
        motor_DWork.is_Close = motor_IN_Close_Wait;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Close_Wait': '<S1>:241' */
        motor_Y.Open_Result = 4U;

        /* 正在关机 */
        motor_Y.DCZD = false;

        /* 解除制动 */
        motor_Y.Motor_En = false;

        /* 电机使能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.EN_extern = 0U;
      } else if (motor_U.System_Order == 4) {
        /* Transition: '<S1>:641' */
        motor_DWork.is_XHHY_n = motor_IN_Sleeping_protect_1_h;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Sleeping_protect_1': '<S1>:211' */
        motor_Y.Motor_En = true;

        /* 关电机 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if ((motor_DWork.Showing_Angle_Last != motor_U.Showing_Angle) ||
                 (motor_DWork.Showing_T_Last != motor_U.Showing_T)) {
        /* Transition: '<S1>:947' */
        motor_DWork.is_XHHY_n = motor_IN_Defualt;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Defualt': '<S1>:208' */
        /* en:KG_En=uint8(0);KG_JD=uint8(1);KG_YJ=uint8(1); */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
        motor_DWork.chu_jd = 0.0;
      } else {
        /* Inport: '<Root>/Showing_Angle' */
        /* Simulink Function 'Showing_XHHY': '<S1>:1050' */
        motor_B.Showing_Angle_p = motor_U.Showing_Angle;

        /* Inport: '<Root>/Showing_T' */
        motor_B.Showing_T_a = motor_U.Showing_T;

        /* Outputs for Function Call SubSystem: '<S1>/Showing_XHHY' */
        motor_Showing_XHHY(motor_M, motor_B.Showing_Angle_p, motor_B.Showing_T_a,
                           &motor_B.Showing_XHHY, (rtP_Showing_XHHY_motor *)
                           &motor_P.Showing_XHHY, &motor_DWork.Angle_S);

        /* End of Outputs for SubSystem: '<S1>/Showing_XHHY' */
        motor_DWork.chu_jd = motor_B.Showing_XHHY.DataTypeConversion1;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      }
      break;

     case motor_IN_XHHY_Run1_d:
      /* Inport: '<Root>/Showing_Angle' */
      /* During 'XHHY_Run1': '<S1>:941' */
      if (motor_DWork.Showing_Angle0 >= motor_U.Showing_Angle) {
        /* Transition: '<S1>:948' */
        motor_DWork.is_XHHY_n = motor_IN_XHHY_Run_e;

        /* Entry 'XHHY_Run': '<S1>:213' */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.Showing_Angle_Last = motor_U.Showing_Angle;

        /* Inport: '<Root>/Showing_T' */
        motor_DWork.Showing_T_Last = motor_U.Showing_T;
      } else {
        motor_DWork.Showing_Angle0 += 0.01;

        /* Simulink Function 'Showing_XHHY': '<S1>:1050' */
        motor_B.Showing_Angle_p = motor_DWork.Showing_Angle0;

        /* Inport: '<Root>/Showing_T' */
        motor_B.Showing_T_a = motor_U.Showing_T;

        /* Outputs for Function Call SubSystem: '<S1>/Showing_XHHY' */
        motor_Showing_XHHY(motor_M, motor_B.Showing_Angle_p, motor_B.Showing_T_a,
                           &motor_B.Showing_XHHY, (rtP_Showing_XHHY_motor *)
                           &motor_P.Showing_XHHY, &motor_DWork.Angle_S);

        /* End of Outputs for SubSystem: '<S1>/Showing_XHHY' */
        motor_DWork.chu_jd = motor_B.Showing_XHHY.DataTypeConversion1;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
      }
      break;

     default:
      /* During 'XHHY_Wait': '<S1>:212' */
      if (motor_DWork.temporalCounter_i2 >= 100U) {
        /* Transition: '<S1>:643' */
        motor_DWork.is_XHHY_n = motor_IN_XHHY_Run1_d;

        /* Entry 'XHHY_Run1': '<S1>:941' */
        motor_DWork.KG_JD = 0U;
        motor_DWork.Showing_Angle0 = 0.0;
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_XHHY': '<S1>:42' */
        motor_B.JD_In = motor_U.JD_In;
        motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp = motor_U.Encode_Sp;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port = motor_U.System_Order;

        /* Inport: '<Root>/SGWY_In' */
        motor_B.SGWY_In = motor_U.SGWY_In;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
        motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                         motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                         &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                         (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                         &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                         &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                         &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.P_KP, &motor_DWork.V_KI, &motor_DWork.V_KP,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
        tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        motor_Y.PWMOUT = tmp;
        tmp_0 = motor_B.Motor_XHHY.KP_JD1;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_XHHY.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;

        /* PWMOUT=2500; */
      }
      break;
    }
  }

  /* End of Inport: '<Root>/Test_Mode' */
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Algorithm_ac(void)
{
  real_T tmp;
  int32_T saturatedUnaryMinus;

  /* During 'Algorithm': '<S1>:205' */
  switch (motor_DWork.is_Algorithm_e) {
   case motor_IN_Defualt:
    /* Inport: '<Root>/Motor_Num' */
    /* During 'Defualt': '<S1>:206' */
    if (motor_U.Motor_Num == 3) {
      /* Transition: '<S1>:615' */
      motor_DWork.is_Algorithm_e = motor_IN_XHHY_m;

      /* Entry Internal 'XHHY': '<S1>:207' */
      /* Transition: '<S1>:636' */
      motor_DWork.is_XHHY_n = motor_IN_Defualt;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Defualt': '<S1>:208' */
      /* en:KG_En=uint8(0);KG_JD=uint8(1);KG_YJ=uint8(1); */
      motor_DWork.KG_En = 1U;
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      motor_DWork.chu_jd = 0.0;
    } else if (motor_U.Motor_Num == 2) {
      /* Transition: '<S1>:619' */
      motor_DWork.is_Algorithm_e = motor_IN_HY;

      /* Entry Internal 'HY': '<S1>:214' */
      /* Transition: '<S1>:645' */
      motor_DWork.is_HY_e = motor_IN_Defualt1;
      motor_DWork.temporalCounter_i2 = 0U;

      /* Entry 'Defualt1': '<S1>:215' */
      motor_DWork.KG_JD = 0U;
      motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
      motor_DWork.chu_jd = 0.0;
      motor_DWork.Saturation_limit_speed = 5000.0;
    } else {
      if (motor_U.Motor_Num == 1) {
        /* Transition: '<S1>:621' */
        motor_DWork.is_Algorithm_e = motor_IN_XHZY_p;

        /* Entry Internal 'XHZY': '<S1>:220' */
        /* Transition: '<S1>:654' */
        motor_DWork.is_XHZY_h = motor_IN_Defualt;
        motor_DWork.temporalCounter_i2 = 0U;

        /* Entry 'Defualt': '<S1>:221' */
        /* en:KG_En=uint8(0);KG_JD=uint8(1);KG_YJ=uint8(1); */
        motor_DWork.KG_En = 1U;
        motor_DWork.KG_JD = 0U;
        motor_DWork.KG_YJ = 0U;
        motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
        motor_DWork.chu_jd = 0.0;
      }
    }

    /* End of Inport: '<Root>/Motor_Num' */
    break;

   case motor_IN_HY:
    /* Inport: '<Root>/Test_Mode' */
    /* During 'HY': '<S1>:214' */
    if (motor_U.Test_Mode == 2) {
      /* Transition: '<S1>:622' */
      /* Transition: '<S1>:631' */
      motor_DWork.XiaoDaShen = 1.0;

      /* Exit Internal 'HY': '<S1>:214' */
      if (motor_DWork.is_HY_e == motor_IN_Sleeping_protect_2_m) {
        /* Exit 'Sleeping_protect_2': '<S1>:179' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
      } else {
        motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
      }

      motor_DWork.is_Algorithm_e = motor_IN_Limit_Up_Test_k;

      /* Entry 'Limit_Up_Test': '<S1>:340' */
      /* 测试电子上限位 */
      mo_enter_internal_Limit_Up_Test();
    } else if (motor_U.Test_Mode == 3) {
      /* Transition: '<S1>:624' */
      /* Transition: '<S1>:634' */
      motor_DWork.XiaoDaShen = 1.0;

      /* Exit Internal 'HY': '<S1>:214' */
      if (motor_DWork.is_HY_e == motor_IN_Sleeping_protect_2_m) {
        /* Exit 'Sleeping_protect_2': '<S1>:179' */
        /* 关电磁制动 */
        motor_Y.DCZD = false;
        motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
      } else {
        motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
      }

      motor_DWork.is_Algorithm_e = motor_IN_Limit_Down_Test_f;

      /* Entry 'Limit_Down_Test': '<S1>:315' */
      /* 电子下限位检测 */
      enter_internal_Limit_Down_Test();
    } else {
      switch (motor_DWork.is_HY_e) {
       case motor_IN_Defualt1:
        /* During 'Defualt1': '<S1>:215' */
        saturatedUnaryMinus = motor_Y.Encode_Pos;
        if (saturatedUnaryMinus < 0) {
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        }

        if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Pos_Zero) {
          /* Transition: '<S1>:647' */
          motor_DWork.is_HY_e = motor_IN_XHHY_Wait_g;
          motor_DWork.temporalCounter_i2 = 0U;

          /* Entry 'XHHY_Wait': '<S1>:218' */
          motor_Y.Open_Result = 1U;

          /* 开机状态位成功 */
          motor_DWork.In_State = 2U;
        } else if (motor_DWork.temporalCounter_i2 >= (uint32_T)(15.0 /
                    motor_DWork.Ts)) {
          /* Transition: '<S1>:648' */
          motor_DWork.is_HY_e = motor_IN_XHHY_Error;

          /* Entry 'XHHY_Error': '<S1>:217' */
          motor_Y.Motor_En = true;

          /* 关电机 */
          motor_Y.Open_Result = 2U;
        } else {
          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
          motor_B.JD_In_n = motor_U.JD_In;
          motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;

          /* Inport: '<Root>/System_Order' */
          motor_B.Slect_port_e = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
          motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                            motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                            &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                            &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                            &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                            &motor_DWork.KG_clc, &motor_DWork.P_KP,
                            &motor_DWork.Saturation_limit_speed,
                            &motor_DWork.V_KI, &motor_DWork.V_KP,
                            &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
          motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
          tmp = motor_B.Motor_HYDG1.KP_e;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Error = saturatedUnaryMinus;
          tmp = motor_B.Motor_HYDG1.KP_JD;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Out = saturatedUnaryMinus;
        }
        break;

       case motor_IN_Sleeping_protect_1_h:
        /* During 'Sleeping_protect_1': '<S1>:229' */
        if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts))
        {
          /* Transition: '<S1>:646' */
          motor_DWork.is_HY_e = motor_IN_Sleeping_protect_2_m;

          /* Entry 'Sleeping_protect_2': '<S1>:179' */
          motor_Y.DCZD = true;

          /* 开电磁制动 */
        }
        break;

       case motor_IN_Sleeping_protect_2_m:
        /* Inport: '<Root>/System_Order' */
        /* During 'Sleeping_protect_2': '<S1>:179' */
        if (motor_U.System_Order == 5) {
          /* Transition: '<S1>:649' */
          /* Exit 'Sleeping_protect_2': '<S1>:179' */
          /* 关电磁制动 */
          motor_Y.DCZD = false;
          motor_DWork.is_HY_e = motor_IN_Sleeping_protect_3_f;
          motor_DWork.temporalCounter_i2 = 0U;

          /* Entry 'Sleeping_protect_3': '<S1>:158' */
          motor_Y.Motor_En = false;

          /* 开电机 */
        }
        break;

       case motor_IN_Sleeping_protect_3_f:
        /* During 'Sleeping_protect_3': '<S1>:158' */
        if (motor_DWork.temporalCounter_i2 >= (uint32_T)(0.5 / motor_DWork.Ts))
        {
          /* Transition: '<S1>:652' */
          motor_DWork.is_HY_e = motor_IN_Defualt1;
          motor_DWork.temporalCounter_i2 = 0U;

          /* Entry 'Defualt1': '<S1>:215' */
          motor_DWork.KG_JD = 0U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_DWork.chu_jd = 0.0;
          motor_DWork.Saturation_limit_speed = 5000.0;
        }
        break;

       case motor_IN_XHHY_Error:
        /* During 'XHHY_Error': '<S1>:217' */
        break;

       case motor_IN_XHHY_Run_e:
        /* Inport: '<Root>/System_Order' incorporates:
         *  Inport: '<Root>/Showing_Angle'
         *  Inport: '<Root>/Showing_T'
         */
        /* During 'XHHY_Run': '<S1>:219' */
        if (motor_U.System_Order == 3) {
          /* Transition: '<S1>:651' */
          /* Transition: '<S1>:625' */
          moto_exit_internal_Showing_Mode();
          motor_DWork.is_M_Run = motor_IN_Close;
          motor_DWork.is_Close = motor_IN_Close_Wait;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Close_Wait': '<S1>:241' */
          motor_Y.Open_Result = 4U;

          /* 正在关机 */
          motor_Y.DCZD = false;

          /* 解除制动 */
          motor_Y.Motor_En = false;

          /* 电机使能 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          motor_DWork.EN_extern = 0U;
        } else if (motor_U.System_Order == 4) {
          /* Transition: '<S1>:650' */
          motor_DWork.is_HY_e = motor_IN_Sleeping_protect_1_h;
          motor_DWork.temporalCounter_i2 = 0U;

          /* Entry 'Sleeping_protect_1': '<S1>:229' */
          motor_Y.Motor_En = true;

          /* 关电机 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        } else if ((motor_DWork.Showing_Angle_Last != motor_U.Showing_Angle) ||
                   (motor_DWork.Showing_T_Last != motor_U.Showing_T)) {
          /* Transition: '<S1>:937' */
          motor_DWork.is_HY_e = motor_IN_Defualt1;
          motor_DWork.temporalCounter_i2 = 0U;

          /* Entry 'Defualt1': '<S1>:215' */
          motor_DWork.KG_JD = 0U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_DWork.chu_jd = 0.0;
          motor_DWork.Saturation_limit_speed = 5000.0;
        } else {
          /* Inport: '<Root>/Showing_Angle' */
          /* [PWMOUT,JD_Error,JD_Out] = Motor_HYDG1(JD_In,Encode_Pos,System_Order): */
          /* Simulink Function 'Showing': '<S1>:180' */
          motor_B.Showing_Angle = motor_U.Showing_Angle;

          /* Inport: '<Root>/Showing_T' */
          motor_B.Showing_T = motor_U.Showing_T;

          /* Outputs for Function Call SubSystem: '<S1>/Showing' */
          motor_Showing(motor_M, motor_B.Showing_Angle, motor_B.Showing_T,
                        &motor_B.Showing, (rtP_Showing_motor *)&motor_P.Showing,
                        &motor_DWork.Angle_S);

          /* End of Outputs for SubSystem: '<S1>/Showing' */
          motor_DWork.chu_jd = motor_B.Showing.DataTypeConversion1;

          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
          motor_B.JD_In_n = motor_U.JD_In;
          motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;
          motor_B.Slect_port_e = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
          motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                            motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                            &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                            &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                            &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                            &motor_DWork.KG_clc, &motor_DWork.P_KP,
                            &motor_DWork.Saturation_limit_speed,
                            &motor_DWork.V_KI, &motor_DWork.V_KP,
                            &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
          motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
          tmp = motor_B.Motor_HYDG1.KP_e;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Error = saturatedUnaryMinus;
          tmp = motor_B.Motor_HYDG1.KP_JD;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Out = saturatedUnaryMinus;
        }
        break;

       case motor_IN_XHHY_Run1_d:
        /* Inport: '<Root>/Showing_Angle' */
        /* During 'XHHY_Run1': '<S1>:935' */
        if (motor_DWork.Showing_Angle0 >= motor_U.Showing_Angle) {
          /* Transition: '<S1>:936' */
          motor_DWork.is_HY_e = motor_IN_XHHY_Run_e;

          /* Entry 'XHHY_Run': '<S1>:219' */
          motor_DWork.Showing_Angle_Last = motor_U.Showing_Angle;

          /* Inport: '<Root>/Showing_T' */
          motor_DWork.Showing_T_Last = motor_U.Showing_T;
        } else {
          motor_DWork.Showing_Angle0 += 0.01;

          /* Simulink Function 'Showing': '<S1>:180' */
          motor_B.Showing_Angle = motor_DWork.Showing_Angle0;

          /* Inport: '<Root>/Showing_T' */
          motor_B.Showing_T = motor_U.Showing_T;

          /* Outputs for Function Call SubSystem: '<S1>/Showing' */
          motor_Showing(motor_M, motor_B.Showing_Angle, motor_B.Showing_T,
                        &motor_B.Showing, (rtP_Showing_motor *)&motor_P.Showing,
                        &motor_DWork.Angle_S);

          /* End of Outputs for SubSystem: '<S1>/Showing' */
          motor_DWork.chu_jd = motor_B.Showing.DataTypeConversion1;

          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
          motor_B.JD_In_n = motor_U.JD_In;
          motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;

          /* Inport: '<Root>/System_Order' */
          motor_B.Slect_port_e = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
          motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                            motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                            &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                            &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                            &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                            &motor_DWork.KG_clc, &motor_DWork.P_KP,
                            &motor_DWork.Saturation_limit_speed,
                            &motor_DWork.V_KI, &motor_DWork.V_KP,
                            &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
          motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
          tmp = motor_B.Motor_HYDG1.KP_e;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Error = saturatedUnaryMinus;
          tmp = motor_B.Motor_HYDG1.KP_JD;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Out = saturatedUnaryMinus;
        }
        break;

       default:
        /* During 'XHHY_Wait': '<S1>:218' */
        if (motor_DWork.temporalCounter_i2 >= 100U) {
          /* Transition: '<S1>:653' */
          motor_DWork.is_HY_e = motor_IN_XHHY_Run1_d;

          /* Entry 'XHHY_Run1': '<S1>:935' */
          motor_DWork.KG_JD = 0U;
          motor_DWork.Showing_Angle0 = 0.0;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_DWork.Rate_limit_speed = 50000.0;
          motor_DWork.Saturation_limit_speed = 16000.0;
        } else {
          /* Inport: '<Root>/JD_In' */
          /* Simulink Function 'Motor_HYDG1': '<S1>:115' */
          motor_B.JD_In_n = motor_U.JD_In;
          motor_B.Encode_Pos_cm = motor_Y.Encode_Pos;

          /* Inport: '<Root>/System_Order' */
          motor_B.Slect_port_e = motor_U.System_Order;

          /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG1' */
          motor_Motor_HYDG1(motor_M, motor_B.JD_In_n, motor_B.Encode_Pos_cm,
                            motor_B.Slect_port_e, &motor_B.Motor_HYDG1,
                            &motor_DWork.Motor_HYDG1, (rtP_Motor_HYDG1_motor *)
                            &motor_P.Motor_HYDG1, &motor_DWork.JD_HYDG,
                            &motor_DWork.JD_HYDG_HC, &motor_DWork.KG_JD,
                            &motor_DWork.KG_clc, &motor_DWork.P_KP,
                            &motor_DWork.Saturation_limit_speed,
                            &motor_DWork.V_KI, &motor_DWork.V_KP,
                            &motor_DWork.chu_jd);

          /* End of Outputs for SubSystem: '<S1>/Motor_HYDG1' */
          motor_Y.PWMOUT = motor_B.Motor_HYDG1.DataTypeConversion3;
          tmp = motor_B.Motor_HYDG1.KP_e;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Error = saturatedUnaryMinus;
          tmp = motor_B.Motor_HYDG1.KP_JD;
          if (tmp < 2.147483648E+9) {
            if (tmp >= -2.147483648E+9) {
              saturatedUnaryMinus = (int32_T)tmp;
            } else {
              saturatedUnaryMinus = MIN_int32_T;
            }
          } else {
            saturatedUnaryMinus = MAX_int32_T;
          }

          motor_Y.JD_Out = saturatedUnaryMinus;

          /* PWMOUT=2500; */
        }
        break;
      }
    }

    /* End of Inport: '<Root>/Test_Mode' */
    break;

   case motor_IN_Limit_Down_Test_f:
    motor_Limit_Down_Test_b();
    break;

   case motor_IN_Limit_Up_Test_k:
    motor_Limit_Up_Test_a();
    break;

   case motor_IN_XHHY_m:
    motor_XHHY_n();
    break;

   default:
    motor_XHZY();
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Showing_Mode(void)
{
  /* During 'Showing_Mode': '<S1>:51' */
  if (motor_DWork.is_Showing_Mode == motor_IN_RUN) {
    /* During 'RUN': '<S1>:186' */
    motor_Algorithm_ac();
    if (motor_DWork.is_Showing_Mode == motor_IN_RUN) {
      /* During 'Limit_Check': '<S1>:200' */
      switch (motor_DWork.is_Limit_Check_j) {
       case motor_IN_defult_bq:
        /* During 'defult': '<S1>:202' */
        if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts))
        {
          /* Transition: '<S1>:607' */
          motor_DWork.is_Limit_Check_j = motor_IN_p1_aqc;

          /* Entry 'p1': '<S1>:201' */
          motor_Y.Flag_Down_limit = 1U;
          motor_Y.Flag_Up_limit = 1U;

          /* Flag_Up_GZ_limit=1;
             Flag_Down_GZ_limit=1; */
        }
        break;

       case motor_IN_p1_aqc:
        /* Inport: '<Root>/Up_Limit' incorporates:
         *  Inport: '<Root>/Down_Limit'
         */
        /* During 'p1': '<S1>:201' */
        if ((motor_U.Up_Limit == 0) && (motor_DWork.XiaoDaShen == 0.0)) {
          /* Transition: '<S1>:608' */
          motor_DWork.is_Limit_Check_j = motor_IN_p2_kb;

          /* Entry 'p2': '<S1>:203' */
          motor_Y.Flag_Up_limit = 0U;
        } else {
          if ((motor_U.Down_Limit == 0) && (motor_DWork.XiaoDaShen == 0.0)) {
            /* Transition: '<S1>:610' */
            motor_DWork.is_Limit_Check_j = motor_IN_p3_ex;

            /* Entry 'p3': '<S1>:204' */
            motor_Y.Flag_Down_limit = 0U;
          }
        }
        break;

       case motor_IN_p2_kb:
        /* Inport: '<Root>/Up_Limit' */
        /* During 'p2': '<S1>:203' */
        if (motor_U.Up_Limit == 1) {
          /* Transition: '<S1>:609' */
          motor_DWork.is_Limit_Check_j = motor_IN_p1_aqc;

          /* Entry 'p1': '<S1>:201' */
          motor_Y.Flag_Down_limit = 1U;
          motor_Y.Flag_Up_limit = 1U;

          /* Flag_Up_GZ_limit=1;
             Flag_Down_GZ_limit=1; */
        }
        break;

       default:
        /* Inport: '<Root>/Down_Limit' */
        /* During 'p3': '<S1>:204' */
        if (motor_U.Down_Limit == 1) {
          /* Transition: '<S1>:611' */
          motor_DWork.is_Limit_Check_j = motor_IN_p1_aqc;

          /* Entry 'p1': '<S1>:201' */
          motor_Y.Flag_Down_limit = 1U;
          motor_Y.Flag_Up_limit = 1U;

          /* Flag_Up_GZ_limit=1;
             Flag_Down_GZ_limit=1; */
        }
        break;
      }
    }
  } else {
    /* During 'Start': '<S1>:226' */
    if (motor_DWork.temporalCounter_i1 >= (uint32_T)(1.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:438' */
      motor_DWork.is_Showing_Mode = motor_IN_RUN;

      /* Entry Internal 'RUN': '<S1>:186' */
      /* Transition: '<S1>:588' */
      motor_DWork.is_active_Algorithm_b = 1U;

      /* Entry Internal 'Algorithm': '<S1>:205' */
      /* Transition: '<S1>:614' */
      motor_DWork.is_Algorithm_e = motor_IN_Defualt;

      /* Entry 'Defualt': '<S1>:206' */
      motor_DWork.chu_jd = 0.0;
      motor_DWork.KG = 0U;
      motor_Y.Motor_En = false;
      motor_Y.DCZD = false;

      /* 开电磁制动，低有效 */
      motor_DWork.is_active_Limit_Check_o = 1U;

      /* Entry Internal 'Limit_Check': '<S1>:200' */
      /* Transition: '<S1>:606' */
      motor_DWork.is_Limit_Check_j = motor_IN_defult_bq;
      motor_DWork.temporalCounter_i1 = 0U;
    }
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Algorithm(void)
{
  uint16_T tmp;
  real_T tmp_0;
  int32_T saturatedUnaryMinus;

  /* During 'Algorithm': '<S1>:131' */
  switch (motor_DWork.is_Algorithm) {
   case motor_IN_HYDG_Close:
    /* During 'HYDG_Close': '<S1>:132' */
    switch (motor_DWork.is_HYDG_Close) {
     case motor_IN_Defualt:
      /* During 'Defualt': '<S1>:134' */
      saturatedUnaryMinus = motor_Y.Encode_Pos;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Pos_Zero) {
        /* Transition: '<S1>:512' */
        motor_DWork.is_HYDG_Close = motor_IN_XHZY_Close1;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'XHZY_Close1': '<S1>:310' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else if (motor_DWork.temporalCounter_i1 >= (uint32_T)(2.0 /
                  motor_DWork.Ts)) {
        /* Transition: '<S1>:513' */
        /* 等待2s，查看关机是否成功 */
        motor_DWork.is_HYDG_Close = motor_IN_XHZY_Error;

        /* Entry 'XHZY_Error': '<S1>:133' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
      } else {
        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
      }
      break;

     case motor_IN_Int_k:
      /* During 'Int': '<S1>:312' */
      if (motor_DWork.chu_jd < 0.0) {
        /* Transition: '<S1>:507' */
        motor_DWork.is_HYDG_Close = motor_IN_Int1_d;

        /* Entry 'Int1': '<S1>:313' */
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
      } else if (motor_DWork.chu_jd > 0.0) {
        /* Transition: '<S1>:508' */
        motor_DWork.is_HYDG_Close = motor_IN_Int2;

        /* Entry 'Int2': '<S1>:314' */
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
      } else {
        if (motor_DWork.chu_jd == 0.0) {
          /* Transition: '<S1>:509' */
          motor_DWork.is_HYDG_Close = motor_IN_Defualt;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'Defualt': '<S1>:134' */
          motor_DWork.chu_jd = 0.0;
        }
      }
      break;

     case motor_IN_Int1_d:
      /* During 'Int1': '<S1>:313' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:510' */
        motor_DWork.is_HYDG_Close = motor_IN_Defualt;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Defualt': '<S1>:134' */
        motor_DWork.chu_jd = 0.0;
      } else {
        motor_DWork.chu_jd += 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
      }
      break;

     case motor_IN_Int2:
      /* During 'Int2': '<S1>:314' */
      if (fabs(motor_DWork.chu_jd) < 0.1) {
        /* Transition: '<S1>:511' */
        motor_DWork.is_HYDG_Close = motor_IN_Defualt;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Defualt': '<S1>:134' */
        motor_DWork.chu_jd = 0.0;
      } else {
        motor_DWork.chu_jd -= 0.01;

        /* Inport: '<Root>/JD_In' */
        /* Simulink Function 'Motor_HYDG': '<S1>:77' */
        motor_B.JD_In_f = motor_U.JD_In;
        motor_B.Encode_Pos_i = motor_Y.Encode_Pos;

        /* Inport: '<Root>/System_Order' */
        motor_B.Slect_port_c = motor_U.System_Order;

        /* Inport: '<Root>/Encode_Sp' */
        motor_B.Encode_Sp_n = motor_U.Encode_Sp;

        /* Outputs for Function Call SubSystem: '<S1>/Motor_HYDG' */
        motor_Motor_HYDG(motor_M, motor_B.JD_In_f, motor_B.Encode_Pos_i,
                         motor_B.Slect_port_c, motor_B.Encode_Sp_n,
                         &motor_B.Motor_HYDG, &motor_DWork.Motor_HYDG,
                         (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG,
                         &motor_DWork.JD_HYDG, &motor_DWork.JD_HYDG_HC,
                         &motor_DWork.KG_JD, &motor_DWork.KG_clc,
                         &motor_DWork.chu_jd);

        /* End of Outputs for SubSystem: '<S1>/Motor_HYDG' */
        motor_Y.PWMOUT = motor_B.Motor_HYDG.DataTypeConversion3;
        tmp_0 = motor_B.Motor_HYDG.KP_e;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Error = saturatedUnaryMinus;
        tmp_0 = motor_B.Motor_HYDG.KP_JD;
        if (tmp_0 < 2.147483648E+9) {
          if (tmp_0 >= -2.147483648E+9) {
            saturatedUnaryMinus = (int32_T)tmp_0;
          } else {
            saturatedUnaryMinus = MIN_int32_T;
          }
        } else {
          saturatedUnaryMinus = MAX_int32_T;
        }

        motor_Y.JD_Out = saturatedUnaryMinus;
      }
      break;

     case motor_IN_XHZY_Close_c:
      /* During 'XHZY_Close': '<S1>:135' */
      break;

     case motor_IN_XHZY_Close1:
      /* During 'XHZY_Close1': '<S1>:310' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:515' */
        motor_DWork.is_HYDG_Close = motor_IN_XHZY_Close_c;

        /* Entry 'XHZY_Close': '<S1>:135' */
        motor_Y.Open_Result = 2U;

        /* 关机成功 */
        motor_DWork.In_State = 3U;
        motor_Y.DCZD = true;

        /* 电池只懂引脚拉高，关电磁制动，低有效 */
      }
      break;

     default:
      /* During 'XHZY_Error': '<S1>:133' */
      /* Transition: '<S1>:514' */
      motor_DWork.is_HYDG_Close = motor_IN_XHZY_Close1;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'XHZY_Close1': '<S1>:310' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      break;
    }
    break;

   case motor_IN_XHHY_Close:
    /* Inport: '<Root>/JD_In' */
    /* During 'XHHY_Close': '<S1>:136' */
    /* Simulink Function 'Motor_XHHY': '<S1>:42' */
    motor_B.JD_In = motor_U.JD_In;
    motor_B.Encode_Pos_c = motor_Y.Encode_Pos;

    /* Inport: '<Root>/Encode_Sp' */
    motor_B.Encode_Sp = motor_U.Encode_Sp;

    /* Inport: '<Root>/System_Order' */
    motor_B.Slect_port = motor_U.System_Order;

    /* Inport: '<Root>/SGWY_In' */
    motor_B.SGWY_In = motor_U.SGWY_In;

    /* Outputs for Function Call SubSystem: '<S1>/Motor_XHHY' */
    motor_Motor_XHHY(motor_M, motor_B.JD_In, motor_B.Encode_Pos_c,
                     motor_B.Encode_Sp, motor_B.Slect_port, motor_B.SGWY_In,
                     &motor_B.Motor_XHHY, &motor_DWork.Motor_XHHY,
                     (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY,
                     &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                     &motor_DWork.EN_extern, &motor_DWork.JD_XHHY,
                     &motor_DWork.JD_XHHY_HC, &motor_DWork.KG_En,
                     &motor_DWork.KG_JD, &motor_DWork.KG_clc, &motor_DWork.P_KP,
                     &motor_DWork.V_KI, &motor_DWork.V_KP, &motor_DWork.chu_jd);

    /* End of Outputs for SubSystem: '<S1>/Motor_XHHY' */
    tmp_0 = motor_B.Motor_XHHY.ZXF_PWM;
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint16_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint16_T;
    }

    motor_Y.PWMOUT = tmp;
    tmp_0 = motor_B.Motor_XHHY.KP_JD1;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Out = saturatedUnaryMinus;
    tmp_0 = motor_B.Motor_XHHY.KP_e;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Error = saturatedUnaryMinus;
    switch (motor_DWork.is_XHHY_Close) {
     case motor_IN_Defualt:
      /* During 'Defualt': '<S1>:138' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(10.0 / motor_DWork.Ts)) {
        /* Transition: '<S1>:517' */
        /* 等待10s，查看关机是否成功 */
        motor_DWork.is_XHHY_Close = motor_IN_XHZY_Error_f;

        /* Entry 'XHZY_Error': '<S1>:137' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.Open_Result = 1U;
      } else {
        saturatedUnaryMinus = motor_Y.Encode_Pos;
        if (saturatedUnaryMinus < 0) {
          if (saturatedUnaryMinus <= MIN_int32_T) {
            saturatedUnaryMinus = MAX_int32_T;
          } else {
            saturatedUnaryMinus = -saturatedUnaryMinus;
          }
        }

        if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Pos_Zero) {
          /* Transition: '<S1>:518' */
          motor_DWork.is_XHHY_Close = motor_IN_XHZY_Close1_f;
          motor_DWork.temporalCounter_i1 = 0U;

          /* Entry 'XHZY_Close1': '<S1>:311' */
          motor_Y.Motor_En = true;

          /* 电机失能 */
          motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        }
      }
      break;

     case motor_IN_XHZY_Close_cm:
      /* During 'XHZY_Close': '<S1>:139' */
      break;

     case motor_IN_XHZY_Close1_f:
      /* During 'XHZY_Close1': '<S1>:311' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:520' */
        motor_DWork.is_XHHY_Close = motor_IN_XHZY_Close_cm;

        /* Entry 'XHZY_Close': '<S1>:139' */
        motor_Y.Open_Result = 2U;

        /* 关机成功 */
        motor_DWork.In_State = 3U;
        motor_Y.DCZD = true;

        /* 电池只懂引脚拉高，关电磁制动，低有效 */
      }
      break;

     default:
      /* During 'XHZY_Error': '<S1>:137' */
      /* Transition: '<S1>:519' */
      motor_DWork.is_XHHY_Close = motor_IN_XHZY_Close1_f;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'XHZY_Close1': '<S1>:311' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      break;
    }
    break;

   default:
    /* Inport: '<Root>/JD_In' */
    /* During 'XHZY_Close': '<S1>:140' */
    /* Simulink Function 'Motor_XHZY': '<S1>:90' */
    motor_B.JD_In_d = motor_U.JD_In;
    motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

    /* Inport: '<Root>/YJ_In' */
    motor_B.YJ_In = motor_U.YJ_In;

    /* Inport: '<Root>/Encode_Sp' */
    motor_B.Encode_Sp_l = motor_U.Encode_Sp;

    /* Inport: '<Root>/System_Order' */
    motor_B.Slect_port_h = motor_U.System_Order;

    /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
    motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                     motor_B.YJ_In, motor_B.Encode_Sp_l, motor_B.Slect_port_h,
                     &motor_B.Motor_XHZY, &motor_DWork.Motor_XHZY,
                     (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY,
                     &motor_DWork.Angle_extern, &motor_DWork.Angle_internal,
                     &motor_DWork.EN_extern, &motor_DWork.Forword,
                     &motor_DWork.JD_XHZY, &motor_DWork.JD_XHZY_HC,
                     &motor_DWork.KG_En, &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                     &motor_DWork.KG_clc, &motor_DWork.P_KP, &motor_DWork.V_KI,
                     &motor_DWork.V_KP, &motor_DWork.YJ_XHZY,
                     &motor_DWork.YJ_XHZY_HC, &motor_DWork.chu_jd);

    /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
    tmp_0 = motor_B.Motor_XHZY.ZXF_PWM;
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint16_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint16_T;
    }

    motor_Y.PWMOUT = tmp;
    tmp_0 = motor_B.Motor_XHZY.KP_JD;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Out = saturatedUnaryMinus;
    tmp_0 = motor_B.Motor_XHZY.KP_e;
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        saturatedUnaryMinus = (int32_T)tmp_0;
      } else {
        saturatedUnaryMinus = MIN_int32_T;
      }
    } else {
      saturatedUnaryMinus = MAX_int32_T;
    }

    motor_Y.JD_Error = saturatedUnaryMinus;
    motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
    switch (motor_DWork.is_XHZY_Close) {
     case motor_IN_Defualt:
      /* During 'Defualt': '<S1>:75' */
      saturatedUnaryMinus = motor_Y.Encode_Pos;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      if ((uint32_T)saturatedUnaryMinus <= motor_DWork.Encode_Pos_Zero) {
        /* Transition: '<S1>:524' */
        motor_DWork.is_XHZY_Close = motor_IN_XHZY_Close_cm;
        motor_DWork.temporalCounter_i1 = 0U;

        /* Entry 'XHZY_Close': '<S1>:36' */
        motor_Y.Motor_En = true;

        /* 电机失能 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      } else {
        if (motor_DWork.temporalCounter_i1 >= (uint32_T)(10.0 / motor_DWork.Ts))
        {
          /* Transition: '<S1>:521' */
          /* 等待10s，查看关机是否成功 */
          motor_DWork.is_XHZY_Close = motor_IN_XHZY_Error_f;

          /* Entry 'XHZY_Error': '<S1>:74' */
          motor_Y.Motor_En = true;

          /* 电机失能 */
          motor_Y.Open_Result = 1U;
        }
      }
      break;

     case motor_IN_XHZY_Close_cm:
      /* During 'XHZY_Close': '<S1>:36' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Transition: '<S1>:525' */
        motor_DWork.is_XHZY_Close = motor_IN_XHZY_Close1_f;

        /* Entry 'XHZY_Close1': '<S1>:309' */
        motor_Y.Open_Result = 2U;

        /* 关机成功 */
        motor_DWork.In_State = 3U;
        motor_Y.DCZD = true;

        /* 电池只懂引脚拉高，关电磁制动，低有效 */
      }
      break;

     case motor_IN_XHZY_Close1_f:
      /* During 'XHZY_Close1': '<S1>:309' */
      break;

     default:
      /* During 'XHZY_Error': '<S1>:74' */
      /* Transition: '<S1>:522' */
      motor_DWork.is_XHZY_Close = motor_IN_XHZY_Close_cm;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'XHZY_Close': '<S1>:36' */
      motor_Y.Motor_En = true;

      /* 电机失能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      break;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_M_Run(void)
{
  boolean_T guard1 = false;
  uint16_T tmp;
  int32_T tmp_0;
  real_T tmp_1;

  /* Inport: '<Root>/Encode_Sp' */
  /* During 'M_Run': '<S1>:11' */
  motor_DWork.Encode_Pos0 += (real_T)motor_U.Encode_Sp;

  /* Inport: '<Root>/Encode_Pos_Zero_Average' */
  tmp_1 = motor_DWork.Encode_Pos0 - (real_T)motor_U.Encode_Pos_Zero_Average *
    motor_DWork.Average_En;
  if (tmp_1 < 2.147483648E+9) {
    if (tmp_1 >= -2.147483648E+9) {
      tmp_0 = (int32_T)tmp_1;
    } else {
      tmp_0 = MIN_int32_T;
    }
  } else {
    tmp_0 = MAX_int32_T;
  }

  motor_Y.Encode_Pos = tmp_0;
  switch (motor_DWork.is_M_Run) {
   case motor_IN_Close:
    /* Inport: '<Root>/System_Order' */
    /* During 'Close': '<S1>:130' */
    if (motor_U.System_Order == 2) {
      /* Inport: '<Root>/Working_Mode' */
      /* Transition: '<S1>:386' */
      if (motor_U.Working_Mode == 3) {
        /* Transition: '<S1>:387' */
        /* Exit Internal 'Close': '<S1>:130' */
        /* Exit Internal 'Algorithm': '<S1>:131' */
        /* Exit Internal 'HYDG_Close': '<S1>:132' */
        motor_DWork.is_HYDG_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Algorithm = motor_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'XHHY_Close': '<S1>:136' */
        motor_DWork.is_XHHY_Close = motor_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'XHZY_Close': '<S1>:140' */
        motor_DWork.is_XHZY_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_M_Run = motor_IN_Normal_Mode;

        /* Entry 'Normal_Mode': '<S1>:13' */
        /* 正常模式 */
        motor_Y.DCZD = false;

        /* 开电磁制动，低有效 */
        motor_Y.Open_Result = 3U;

        /* 开机未完成状态位 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;

        /* Entry Internal 'Normal_Mode': '<S1>:13' */
        /* Transition: '<S1>:410' */
        motor_DWork.is_Normal_Mode = motor_IN_defult1;
        motor_DWork.temporalCounter_i1 = 0U;
      } else if (motor_U.Working_Mode == 2) {
        /* Transition: '<S1>:385' */
        /* Exit Internal 'Close': '<S1>:130' */
        /* Exit Internal 'Algorithm': '<S1>:131' */
        /* Exit Internal 'HYDG_Close': '<S1>:132' */
        motor_DWork.is_HYDG_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Algorithm = motor_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'XHHY_Close': '<S1>:136' */
        motor_DWork.is_XHHY_Close = motor_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'XHZY_Close': '<S1>:140' */
        motor_DWork.is_XHZY_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_M_Run = motor_IN_Showing_Mode;

        /* Entry 'Showing_Mode': '<S1>:51' */
        /* 检视模式 */
        motor_Y.DCZD = false;

        /* 开电磁制动，低有效 */
        motor_Y.Open_Result = 3U;

        /* 开机未完成状态位 */
        motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
        motor_DWork.KG = 0U;

        /* Entry Internal 'Showing_Mode': '<S1>:51' */
        /* Transition: '<S1>:437' */
        motor_DWork.is_Showing_Mode = motor_IN_Start;
        motor_DWork.temporalCounter_i1 = 0U;
      } else if (motor_U.Working_Mode == 1) {
        /* Transition: '<S1>:382' */
        /* Exit Internal 'Close': '<S1>:130' */
        /* Exit Internal 'Algorithm': '<S1>:131' */
        /* Exit Internal 'HYDG_Close': '<S1>:132' */
        motor_DWork.is_HYDG_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Algorithm = motor_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'XHHY_Close': '<S1>:136' */
        motor_DWork.is_XHHY_Close = motor_IN_NO_ACTIVE_CHILD;

        /* Exit Internal 'XHZY_Close': '<S1>:140' */
        motor_DWork.is_XHZY_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_Close = motor_IN_NO_ACTIVE_CHILD;
        motor_DWork.is_M_Run = motor_IN_Test_Mode;

        /* Entry 'Test_Mode': '<S1>:35' */
        /* 调试模式 */
        /* Entry Internal 'Test_Mode': '<S1>:35' */
        /* Transition: '<S1>:424' */
        motor_DWork.is_Test_Mode = motor_IN_defult;

        /* Entry 'defult': '<S1>:239' */
        motor_Y.Open_Result = 1U;

        /* 开机状态位成功 */
        motor_DWork.In_State = 2U;
      } else {
        guard1 = true;
      }

      /* End of Inport: '<Root>/Working_Mode' */
    } else {
      guard1 = true;
    }
    break;

   case motor_IN_Initialize:
    motor_Initialize();
    break;

   case motor_IN_Normal_Mode:
    motor_Normal_Mode();
    break;

   case motor_IN_Showing_Mode:
    motor_Showing_Mode();
    break;

   default:
    /* Inport: '<Root>/System_Order' */
    /* During 'Test_Mode': '<S1>:35' */
    if (motor_U.System_Order == 3) {
      /* Transition: '<S1>:393' */
      motor_exit_internal_Test_Mode();
      motor_DWork.is_M_Run = motor_IN_Close;
      motor_DWork.is_Close = motor_IN_Close_Wait;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Close_Wait': '<S1>:241' */
      motor_Y.Open_Result = 4U;

      /* 正在关机 */
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_Y.Motor_En = false;

      /* 电机使能 */
      motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
      motor_DWork.EN_extern = 0U;
    } else {
      switch (motor_DWork.is_Test_Mode) {
       case motor_IN_Calibration:
        /* Inport: '<Root>/Test_Mode' */
        /* During 'Calibration': '<S1>:237' */
        if (motor_U.Test_Mode != 1) {
          /* Transition: '<S1>:426' */
          motor_Y.DCZD = true;
          motor_DWork.is_Test_Mode = motor_IN_defult;

          /* Entry 'defult': '<S1>:239' */
          motor_Y.Open_Result = 1U;

          /* 开机状态位成功 */
          motor_DWork.In_State = 2U;
        }
        break;

       case motor_IN_Dspace_Test:
        /* During 'Dspace_Test': '<S1>:1051' */
        switch (motor_DWork.is_Dspace_Test) {
         case motor_IN_Int:
          /* During 'Int': '<S1>:1058' */
          if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts))
          {
            /* Transition: '<S1>:1056' */
            motor_DWork.is_Dspace_Test = motor_IN_Int1;
            motor_DWork.temporalCounter_i1 = 0U;
          }
          break;

         case motor_IN_Int1:
          /* During 'Int1': '<S1>:1060' */
          if (motor_DWork.temporalCounter_i1 >= (uint32_T)(3.0 / motor_DWork.Ts))
          {
            /* Transition: '<S1>:1057' */
            motor_DWork.is_Dspace_Test = motor_IN_Int4;
            motor_DWork.temporalCounter_i1 = 0U;

            /* Entry 'Int4': '<S1>:1061' */
            motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          } else {
            /* Inport: '<Root>/JD_In' */
            /* Simulink Function 'Motor_XHZY': '<S1>:90' */
            motor_B.JD_In_d = motor_U.JD_In;
            motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

            /* Inport: '<Root>/YJ_In' */
            motor_B.YJ_In = motor_U.YJ_In;

            /* Inport: '<Root>/Encode_Sp' */
            motor_B.Encode_Sp_l = motor_U.Encode_Sp;
            motor_B.Slect_port_h = motor_U.System_Order;

            /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
            motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                             motor_B.YJ_In, motor_B.Encode_Sp_l,
                             motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                             &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                             &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                             &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                             &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                             &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                             &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                             &motor_DWork.KG_clc, &motor_DWork.P_KP,
                             &motor_DWork.V_KI, &motor_DWork.V_KP,
                             &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                             &motor_DWork.chu_jd);

            /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
            tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
            if (tmp_1 < 65536.0) {
              if (tmp_1 >= 0.0) {
                tmp = (uint16_T)tmp_1;
              } else {
                tmp = 0U;
              }
            } else {
              tmp = MAX_uint16_T;
            }

            motor_Y.PWMOUT = tmp;
            tmp_1 = motor_B.Motor_XHZY.KP_JD;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Out = tmp_0;
            tmp_1 = motor_B.Motor_XHZY.KP_e;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Error = tmp_0;
            motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
          }
          break;

         case motor_IN_Int3:
          /* During 'Int3': '<S1>:1059' */
          /* Transition: '<S1>:1053' */
          motor_DWork.is_Dspace_Test = motor_IN_NO_ACTIVE_CHILD;
          motor_DWork.is_Test_Mode = motor_IN_defult;

          /* Entry 'defult': '<S1>:239' */
          motor_Y.Open_Result = 1U;

          /* 开机状态位成功 */
          motor_DWork.In_State = 2U;
          break;

         case motor_IN_Int4:
          /* During 'Int4': '<S1>:1061' */
          if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts))
          {
            /* Transition: '<S1>:1066' */
            motor_DWork.is_Dspace_Test = motor_IN_Int5;

            /* Entry 'Int5': '<S1>:1065' */
            motor_Y.dSpace_Init = 1U;
          }
          break;

         case motor_IN_Int5:
          /* Inport: '<Root>/Test_Mode' */
          /* During 'Int5': '<S1>:1065' */
          if (motor_U.Test_Mode != 5) {
            /* Transition: '<S1>:1055' */
            motor_DWork.is_Dspace_Test = motor_IN_Int6;
            motor_DWork.temporalCounter_i1 = 0U;

            /* Entry 'Int6': '<S1>:1067' */
            motor_Y.dSpace_Init = 0U;
          }
          break;

         default:
          /* During 'Int6': '<S1>:1067' */
          if (motor_DWork.temporalCounter_i1 >= (uint32_T)(3.0 / motor_DWork.Ts))
          {
            /* Transition: '<S1>:1068' */
            motor_DWork.is_Dspace_Test = motor_IN_Int3;

            /* Entry 'Int3': '<S1>:1059' */
            motor_Y.Motor_En = true;

            /* 电机失能 */
            motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          } else {
            /* Inport: '<Root>/JD_In' */
            /* Simulink Function 'Motor_XHZY': '<S1>:90' */
            motor_B.JD_In_d = motor_U.JD_In;
            motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

            /* Inport: '<Root>/YJ_In' */
            motor_B.YJ_In = motor_U.YJ_In;

            /* Inport: '<Root>/Encode_Sp' */
            motor_B.Encode_Sp_l = motor_U.Encode_Sp;
            motor_B.Slect_port_h = motor_U.System_Order;

            /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
            motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                             motor_B.YJ_In, motor_B.Encode_Sp_l,
                             motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                             &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                             &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                             &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                             &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                             &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                             &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                             &motor_DWork.KG_clc, &motor_DWork.P_KP,
                             &motor_DWork.V_KI, &motor_DWork.V_KP,
                             &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                             &motor_DWork.chu_jd);

            /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
            tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
            if (tmp_1 < 65536.0) {
              if (tmp_1 >= 0.0) {
                tmp = (uint16_T)tmp_1;
              } else {
                tmp = 0U;
              }
            } else {
              tmp = MAX_uint16_T;
            }

            motor_Y.PWMOUT = tmp;
            tmp_1 = motor_B.Motor_XHZY.KP_JD;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Out = tmp_0;
            tmp_1 = motor_B.Motor_XHZY.KP_e;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Error = tmp_0;
            motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
          }
          break;
        }
        break;

       case motor_IN_Elevation_Test:
        /* During 'Elevation_Test': '<S1>:304' */
        switch (motor_DWork.is_Elevation_Test) {
         case motor_IN_Int:
          /* During 'Int': '<S1>:305' */
          if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts))
          {
            /* Transition: '<S1>:736' */
            motor_DWork.is_Elevation_Test = motor_IN_Int1;

            /* Inport: '<Root>/JD_In' */
            /* Entry 'Int1': '<S1>:306' */
            /* Simulink Function 'Motor_XHZY': '<S1>:90' */
            motor_B.JD_In_d = motor_U.JD_In;
            motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

            /* Inport: '<Root>/YJ_In' */
            motor_B.YJ_In = motor_U.YJ_In;

            /* Inport: '<Root>/Encode_Sp' */
            motor_B.Encode_Sp_l = motor_U.Encode_Sp;
            motor_B.Slect_port_h = motor_U.System_Order;

            /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
            motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                             motor_B.YJ_In, motor_B.Encode_Sp_l,
                             motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                             &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                             &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                             &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                             &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                             &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                             &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                             &motor_DWork.KG_clc, &motor_DWork.P_KP,
                             &motor_DWork.V_KI, &motor_DWork.V_KP,
                             &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                             &motor_DWork.chu_jd);

            /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
            tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
            if (tmp_1 < 65536.0) {
              if (tmp_1 >= 0.0) {
                tmp = (uint16_T)tmp_1;
              } else {
                tmp = 0U;
              }
            } else {
              tmp = MAX_uint16_T;
            }

            motor_Y.PWMOUT = tmp;
            tmp_1 = motor_B.Motor_XHZY.KP_JD;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Out = tmp_0;
            tmp_1 = motor_B.Motor_XHZY.KP_e;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Error = tmp_0;
            motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
          }
          break;

         case motor_IN_Int1:
          /* Inport: '<Root>/Test_Mode' */
          /* During 'Int1': '<S1>:306' */
          if (motor_U.Test_Mode != 4) {
            /* Transition: '<S1>:737' */
            motor_DWork.is_Elevation_Test = motor_IN_Int4;

            /* Entry 'Int4': '<S1>:308' */
            motor_DWork.KG_YJ = 0U;

            /* Inport: '<Root>/JD_In' */
            /* Simulink Function 'Motor_XHZY': '<S1>:90' */
            motor_B.JD_In_d = motor_U.JD_In;
            motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

            /* Inport: '<Root>/YJ_In' */
            motor_B.YJ_In = motor_U.YJ_In;

            /* Inport: '<Root>/Encode_Sp' */
            motor_B.Encode_Sp_l = motor_U.Encode_Sp;
            motor_B.Slect_port_h = motor_U.System_Order;

            /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
            motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                             motor_B.YJ_In, motor_B.Encode_Sp_l,
                             motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                             &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                             &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                             &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                             &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                             &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                             &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                             &motor_DWork.KG_clc, &motor_DWork.P_KP,
                             &motor_DWork.V_KI, &motor_DWork.V_KP,
                             &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                             &motor_DWork.chu_jd);

            /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
            tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
            if (tmp_1 < 65536.0) {
              if (tmp_1 >= 0.0) {
                tmp = (uint16_T)tmp_1;
              } else {
                tmp = 0U;
              }
            } else {
              tmp = MAX_uint16_T;
            }

            motor_Y.PWMOUT = tmp;
            tmp_1 = motor_B.Motor_XHZY.KP_JD;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Out = tmp_0;
            tmp_1 = motor_B.Motor_XHZY.KP_e;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Error = tmp_0;
            motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
          } else {
            /* Inport: '<Root>/JD_In' */
            /* Simulink Function 'Motor_XHZY': '<S1>:90' */
            motor_B.JD_In_d = motor_U.JD_In;
            motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

            /* Inport: '<Root>/YJ_In' */
            motor_B.YJ_In = motor_U.YJ_In;

            /* Inport: '<Root>/Encode_Sp' */
            motor_B.Encode_Sp_l = motor_U.Encode_Sp;
            motor_B.Slect_port_h = motor_U.System_Order;

            /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
            motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                             motor_B.YJ_In, motor_B.Encode_Sp_l,
                             motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                             &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                             &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                             &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                             &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                             &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                             &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                             &motor_DWork.KG_clc, &motor_DWork.P_KP,
                             &motor_DWork.V_KI, &motor_DWork.V_KP,
                             &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                             &motor_DWork.chu_jd);

            /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
            tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
            if (tmp_1 < 65536.0) {
              if (tmp_1 >= 0.0) {
                tmp = (uint16_T)tmp_1;
              } else {
                tmp = 0U;
              }
            } else {
              tmp = MAX_uint16_T;
            }

            motor_Y.PWMOUT = tmp;
            tmp_1 = motor_B.Motor_XHZY.KP_JD;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Out = tmp_0;
            tmp_1 = motor_B.Motor_XHZY.KP_e;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Error = tmp_0;
            motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
          }
          break;

         case motor_IN_Int3:
          /* During 'Int3': '<S1>:307' */
          /* Transition: '<S1>:733' */
          motor_DWork.is_Elevation_Test = motor_IN_NO_ACTIVE_CHILD;
          motor_DWork.is_Test_Mode = motor_IN_defult;

          /* Entry 'defult': '<S1>:239' */
          motor_Y.Open_Result = 1U;

          /* 开机状态位成功 */
          motor_DWork.In_State = 2U;
          break;

         default:
          /* During 'Int4': '<S1>:308' */
          if (motor_Y.JD_Error < 0.1) {
            /* Transition: '<S1>:735' */
            motor_DWork.is_Elevation_Test = motor_IN_Int3;

            /* Entry 'Int3': '<S1>:307' */
            motor_Y.Motor_En = true;

            /* 电机失能 */
            motor_Y.PWMOUT = motor_DWork.PWM_Value_Mid;
          } else {
            /* Inport: '<Root>/JD_In' */
            /* Simulink Function 'Motor_XHZY': '<S1>:90' */
            motor_B.JD_In_d = motor_U.JD_In;
            motor_B.Encode_Pos_f = motor_Y.Encode_Pos;

            /* Inport: '<Root>/YJ_In' */
            motor_B.YJ_In = motor_U.YJ_In;

            /* Inport: '<Root>/Encode_Sp' */
            motor_B.Encode_Sp_l = motor_U.Encode_Sp;
            motor_B.Slect_port_h = motor_U.System_Order;

            /* Outputs for Function Call SubSystem: '<S1>/Motor_XHZY' */
            motor_Motor_XHZY(motor_M, motor_B.JD_In_d, motor_B.Encode_Pos_f,
                             motor_B.YJ_In, motor_B.Encode_Sp_l,
                             motor_B.Slect_port_h, &motor_B.Motor_XHZY,
                             &motor_DWork.Motor_XHZY, (rtP_Motor_XHZY_motor *)
                             &motor_P.Motor_XHZY, &motor_DWork.Angle_extern,
                             &motor_DWork.Angle_internal, &motor_DWork.EN_extern,
                             &motor_DWork.Forword, &motor_DWork.JD_XHZY,
                             &motor_DWork.JD_XHZY_HC, &motor_DWork.KG_En,
                             &motor_DWork.KG_JD, &motor_DWork.KG_YJ,
                             &motor_DWork.KG_clc, &motor_DWork.P_KP,
                             &motor_DWork.V_KI, &motor_DWork.V_KP,
                             &motor_DWork.YJ_XHZY, &motor_DWork.YJ_XHZY_HC,
                             &motor_DWork.chu_jd);

            /* End of Outputs for SubSystem: '<S1>/Motor_XHZY' */
            tmp_1 = motor_B.Motor_XHZY.ZXF_PWM;
            if (tmp_1 < 65536.0) {
              if (tmp_1 >= 0.0) {
                tmp = (uint16_T)tmp_1;
              } else {
                tmp = 0U;
              }
            } else {
              tmp = MAX_uint16_T;
            }

            motor_Y.PWMOUT = tmp;
            tmp_1 = motor_B.Motor_XHZY.KP_JD;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Out = tmp_0;
            tmp_1 = motor_B.Motor_XHZY.KP_e;
            if (tmp_1 < 2.147483648E+9) {
              if (tmp_1 >= -2.147483648E+9) {
                tmp_0 = (int32_T)tmp_1;
              } else {
                tmp_0 = MIN_int32_T;
              }
            } else {
              tmp_0 = MAX_int32_T;
            }

            motor_Y.JD_Error = tmp_0;
            motor_Y.SGWY_Out = motor_B.Motor_XHZY.DataTypeConversion4;
          }
          break;
        }
        break;

       case motor_IN_Limit_Down_Test:
        motor_Limit_Down_Test();
        break;

       case motor_IN_Limit_Up_Test:
        motor_Limit_Up_Test();
        break;

       default:
        motor_defult();
        break;
      }
    }
    break;
  }

  if (guard1) {
    /* Inport: '<Root>/System_Order' */
    if (motor_U.System_Order == 1) {
      /* Transition: '<S1>:388' */
      /* Exit Internal 'Close': '<S1>:130' */
      /* Exit Internal 'Algorithm': '<S1>:131' */
      /* Exit Internal 'HYDG_Close': '<S1>:132' */
      motor_DWork.is_HYDG_Close = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Algorithm = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'XHHY_Close': '<S1>:136' */
      motor_DWork.is_XHHY_Close = motor_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'XHZY_Close': '<S1>:140' */
      motor_DWork.is_XHZY_Close = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_Close = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_M_Run = motor_IN_Initialize;

      /* Entry 'Initialize': '<S1>:12' */
      motor_Y.Ini_Result = 2U;

      /* 初始化未完成 */
      motor_DWork.In_State = 1U;

      /* Entry Internal 'Initialize': '<S1>:12' */
      /* Transition: '<S1>:396' */
      motor_DWork.is_Initialize = motor_IN_Parameters_Reset0;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Entry 'Parameters_Reset0': '<S1>:89' */
      motor_Y.DCZD = false;

      /* 解除制动 */
    } else if (motor_DWork.is_Close == motor_IN_Algorithm) {
      motor_Algorithm();
    } else {
      /* During 'Close_Wait': '<S1>:241' */
      if (motor_DWork.temporalCounter_i1 >= (uint32_T)(0.5 / motor_DWork.Ts)) {
        /* Inport: '<Root>/Motor_Num' */
        /* Transition: '<S1>:497' */
        if (motor_U.Motor_Num == 1) {
          /* Transition: '<S1>:502' */
          motor_DWork.is_Close = motor_IN_Algorithm;
          motor_DWork.is_Algorithm = motor_IN_XHZY_Close;

          /* Entry 'XHZY_Close': '<S1>:140' */
          motor_DWork.KG_En = 1U;
          motor_DWork.KG_JD = 0U;
          motor_DWork.KG_YJ = 0U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_DWork.chu_jd = 0.0;

          /* Entry Internal 'XHZY_Close': '<S1>:140' */
          /* Transition: '<S1>:523' */
          motor_DWork.is_XHZY_Close = motor_IN_Defualt;
          motor_DWork.temporalCounter_i1 = 0U;
        } else if (motor_U.Motor_Num == 2) {
          /* Transition: '<S1>:503' */
          motor_DWork.is_Close = motor_IN_Algorithm;
          motor_DWork.is_Algorithm = motor_IN_HYDG_Close;

          /* Entry 'HYDG_Close': '<S1>:132' */
          motor_DWork.KG_JD = 0U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);

          /* Entry Internal 'HYDG_Close': '<S1>:132' */
          /* Transition: '<S1>:506' */
          motor_DWork.is_HYDG_Close = motor_IN_Int_k;

          /* Entry 'Int': '<S1>:312' */
          /* Simulink Function 'Angle_Calculation_HY': '<S1>:253' */
          motor_B.Encode_Pos_dc = motor_Y.Encode_Pos;

          /* Outputs for Function Call SubSystem: '<S1>/Angle_Calculation_HY' */
          motor_Angle_Calculation_HY(motor_B.Encode_Pos_dc,
            &motor_B.Angle_Calculation_HY, (rtP_Angle_Calculation_HY_motor *)
            &motor_P.Angle_Calculation_HY);

          /* End of Outputs for SubSystem: '<S1>/Angle_Calculation_HY' */
          motor_DWork.chu_jd = motor_B.Angle_Calculation_HY.GHDG9;
          motor_DWork.KG = 1U;
          motor_DWork.KG_JD = 0U;
          motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
          motor_DWork.Saturation_limit_speed = 16000.0;
          motor_DWork.Rate_limit_speed = 50000.0;
        } else {
          if (motor_U.Motor_Num == 3) {
            /* Transition: '<S1>:504' */
            motor_DWork.is_Close = motor_IN_Algorithm;
            motor_DWork.is_Algorithm = motor_IN_XHHY_Close;

            /* Entry 'XHHY_Close': '<S1>:136' */
            motor_DWork.KG_En = 1U;
            motor_DWork.KG_JD = 0U;
            motor_DWork.KG_clc = (uint8_T)!(motor_DWork.KG_clc != 0);
            motor_DWork.chu_jd = 0.0;

            /* Entry Internal 'XHHY_Close': '<S1>:136' */
            /* Transition: '<S1>:516' */
            motor_DWork.is_XHHY_Close = motor_IN_Defualt;
            motor_DWork.temporalCounter_i1 = 0U;
          }
        }

        /* End of Inport: '<Root>/Motor_Num' */
      }
    }
  }
}

/* Function for Chart: '<Root>/Chart' */
static void motor_Ready_Run(void)
{
  uint32_T q0;
  uint32_T qY;
  int32_T saturatedUnaryMinus;
  uint16_T tmp;
  real_T tmp_0;

  /* During 'Ready_Run': '<S1>:2' */
  /* During 'Current_check': '<S1>:3' */
  switch (motor_DWork.is_Current_check) {
   case motor_IN_p1:
    /* Inport: '<Root>/Cur_In' */
    /* During 'p1': '<S1>:4' */
    if ((motor_U.Cur_In >= motor_DWork.Cur_Limit) || (motor_U.Cur_In <=
         motor_DWork.Cur_Limit_Down)) {
      /* Transition: '<S1>:371' */
      motor_DWork.is_Current_check = motor_IN_p2;

      /* Entry 'p2': '<S1>:7' */
      motor_DWork.cur_i = 1U;
    }
    break;

   case motor_IN_p2:
    /* Inport: '<Root>/Cur_In' */
    /* During 'p2': '<S1>:7' */
    if ((motor_U.Cur_In < motor_DWork.Cur_Limit) && (motor_U.Cur_In >
         motor_DWork.Cur_Limit_Down)) {
      /* Transition: '<S1>:372' */
      motor_DWork.is_Current_check = motor_IN_p1;

      /* Entry 'p1': '<S1>:4' */
      motor_DWork.cur_i = 0U;

      /* 计数器置零 */
      motor_Y.Flag_Cur = 1U;

      /* 电流正常 */
    } else {
      tmp_0 = 2.0 / motor_DWork.Ts;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      if (motor_DWork.cur_i >= tmp) {
        /* Transition: '<S1>:376' */
        /* 2S */
        motor_DWork.is_Current_check = motor_IN_p3;

        /* Entry 'p3': '<S1>:6' */
        /* 0代表正常，1代表错误 */
        motor_DWork.cur_i = 0U;
        motor_Y.Flag_Cur = 0U;

        /* 电机过流 */
        motor_Y.Flag_GZ_Cur = 1U;

        /* 电机未严重过流 */
      } else {
        saturatedUnaryMinus = motor_DWork.cur_i + 1;
        if (saturatedUnaryMinus > 65535) {
          saturatedUnaryMinus = 65535;
        }

        motor_DWork.cur_i = (uint16_T)saturatedUnaryMinus;
      }
    }
    break;

   case motor_IN_p3:
    /* Inport: '<Root>/Cur_In' */
    /* During 'p3': '<S1>:6' */
    if ((motor_U.Cur_In < motor_DWork.Cur_Limit) && (motor_U.Cur_In >
         motor_DWork.Cur_Limit_Down)) {
      /* Transition: '<S1>:374' */
      motor_DWork.is_Current_check = motor_IN_p4;

      /* Entry 'p4': '<S1>:5' */
      motor_DWork.cur_i = 1U;
    } else {
      if ((motor_U.Cur_In >= motor_DWork.Cur_GZ_Limit) || (motor_U.Cur_In <=
           motor_DWork.Cur_GZ_Limit_Down)) {
        /* Transition: '<S1>:377' */
        motor_DWork.is_Current_check = motor_IN_p5;

        /* Entry 'p5': '<S1>:8' */
        motor_DWork.cur_i = 1U;
      }
    }
    break;

   case motor_IN_p4:
    /* Inport: '<Root>/Cur_In' */
    /* During 'p4': '<S1>:5' */
    if ((motor_U.Cur_In >= motor_DWork.Cur_Limit) || (motor_U.Cur_In <=
         motor_DWork.Cur_Limit_Down)) {
      /* Transition: '<S1>:373' */
      motor_DWork.is_Current_check = motor_IN_p3;

      /* Entry 'p3': '<S1>:6' */
      /* 0代表正常，1代表错误 */
      motor_DWork.cur_i = 0U;
      motor_Y.Flag_Cur = 0U;

      /* 电机过流 */
      motor_Y.Flag_GZ_Cur = 1U;

      /* 电机未严重过流 */
    } else {
      tmp_0 = 2.0 / motor_DWork.Ts;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      if (motor_DWork.cur_i >= tmp) {
        /* Transition: '<S1>:370' */
        motor_DWork.is_Current_check = motor_IN_p1;

        /* Entry 'p1': '<S1>:4' */
        motor_DWork.cur_i = 0U;

        /* 计数器置零 */
        motor_Y.Flag_Cur = 1U;

        /* 电流正常 */
      } else {
        saturatedUnaryMinus = motor_DWork.cur_i + 1;
        if (saturatedUnaryMinus > 65535) {
          saturatedUnaryMinus = 65535;
        }

        motor_DWork.cur_i = (uint16_T)saturatedUnaryMinus;
      }
    }
    break;

   case motor_IN_p5:
    /* During 'p5': '<S1>:8' */
    tmp_0 = 2.0 / motor_DWork.Ts;
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint16_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint16_T;
    }

    if (motor_DWork.cur_i >= tmp) {
      /* Transition: '<S1>:379' */
      /* 2S */
      motor_DWork.is_Current_check = motor_IN_p6;

      /* Entry 'p6': '<S1>:10' */
      /* Motor_En=1;%电机失能 */
      motor_Y.Flag_GZ_Cur = 0U;

      /* 电机严重过流 */
    } else if ((motor_U.Cur_In < motor_DWork.Cur_GZ_Limit) && (motor_U.Cur_In >
                motor_DWork.Cur_GZ_Limit_Down)) {
      /* Transition: '<S1>:378' */
      motor_DWork.is_Current_check = motor_IN_p3;

      /* Entry 'p3': '<S1>:6' */
      /* 0代表正常，1代表错误 */
      motor_DWork.cur_i = 0U;
      motor_Y.Flag_Cur = 0U;

      /* 电机过流 */
      motor_Y.Flag_GZ_Cur = 1U;

      /* 电机未严重过流 */
    } else {
      saturatedUnaryMinus = motor_DWork.cur_i + 1;
      if (saturatedUnaryMinus > 65535) {
        saturatedUnaryMinus = 65535;
      }

      motor_DWork.cur_i = (uint16_T)saturatedUnaryMinus;
    }
    break;

   case motor_IN_p6:
    /* Inport: '<Root>/Cur_In' */
    /* During 'p6': '<S1>:10' */
    if ((motor_U.Cur_In < motor_DWork.Cur_GZ_Limit) && (motor_U.Cur_In >
         motor_DWork.Cur_GZ_Limit_Down)) {
      /* Transition: '<S1>:380' */
      motor_DWork.is_Current_check = motor_IN_p7;

      /* Entry 'p7': '<S1>:9' */
      motor_DWork.cur_i = 1U;
    }
    break;

   default:
    /* Inport: '<Root>/Cur_In' */
    /* During 'p7': '<S1>:9' */
    if ((motor_U.Cur_In >= motor_DWork.Cur_GZ_Limit) || (motor_U.Cur_In <=
         motor_DWork.Cur_GZ_Limit_Down)) {
      /* Transition: '<S1>:381' */
      motor_DWork.is_Current_check = motor_IN_p6;

      /* Entry 'p6': '<S1>:10' */
      /* Motor_En=1;%电机失能 */
      motor_Y.Flag_GZ_Cur = 0U;

      /* 电机严重过流 */
    } else {
      tmp_0 = 2.0 / motor_DWork.Ts;
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      if (motor_DWork.cur_i >= tmp) {
        /* Transition: '<S1>:375' */
        motor_DWork.is_Current_check = motor_IN_p3;

        /* Entry 'p3': '<S1>:6' */
        /* 0代表正常，1代表错误 */
        motor_DWork.cur_i = 0U;
        motor_Y.Flag_Cur = 0U;

        /* 电机过流 */
        motor_Y.Flag_GZ_Cur = 1U;

        /* 电机未严重过流 */
      } else {
        saturatedUnaryMinus = motor_DWork.cur_i + 1;
        if (saturatedUnaryMinus > 65535) {
          saturatedUnaryMinus = 65535;
        }

        motor_DWork.cur_i = (uint16_T)saturatedUnaryMinus;
      }
    }
    break;
  }

  /* Inport: '<Root>/Temp_In' incorporates:
   *  Inport: '<Root>/Cur_In'
   */
  /* During 'Temp_check': '<S1>:56' */
  q0 = motor_U.Temp_In;
  if (q0 > 65535U) {
    q0 = 65535U;
  }

  qY = motor_DWork.Temp_Up_Limit;
  if (qY > 65535U) {
    qY = 65535U;
  }

  motor_Y.Flag_Temp_Up = motor_Temp_Up_Check((uint16_T)q0, (uint16_T)qY);

  /* Inport: '<Root>/Temp_In' */
  q0 = motor_U.Temp_In;
  if (q0 > 65535U) {
    q0 = 65535U;
  }

  qY = motor_DWork.Temp_Down_Limit;
  if (qY > 65535U) {
    qY = 65535U;
  }

  motor_Y.Flag_Temp_Down = motor_Temp_Down_Check((uint16_T)q0, (uint16_T)qY);
  motor_M_Run();

  /* During 'ZHI_S_D': '<S1>:60' */
  /* 指示灯 */
  /* Simulink Function 'BJ': '<S1>:100' */
  motor_B.x = motor_DWork.In_State;
  motor_B.y = motor_Y.QDQ_BJ;

  /* Outputs for Function Call SubSystem: '<S1>/BJ' */
  /* DataStoreRead: '<S5>/Data Store Read1' */
  motor_B.DataStoreRead1 = motor_DWork.PC1;

  /* DataStoreRead: '<S5>/Data Store Read' */
  motor_B.DataStoreRead = motor_DWork.PC2;

  /* SwitchCase: '<S5>/Switch Case' */
  switch (motor_B.x) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    motor_IfActionSubsystem_n(motor_B.y, &motor_B.IfActionSubsystem,
      &motor_DWork.IfActionSubsystem, (rtP_IfActionSubsystem_motor *)
      &motor_P.IfActionSubsystem, &motor_DWork.PC1, &motor_DWork.PC2);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* If: '<S24>/If' */
    if (motor_B.y == 2.0) {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      motor_IfActionSubsystem(&motor_B.IfActionSubsystem_f,
        &motor_DWork.IfActionSubsystem_f, (rtP_IfActionSubsystem_motor_m *)
        &motor_P.IfActionSubsystem_f, &motor_DWork.PC1, &motor_DWork.PC2);

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    } else if (motor_B.y == 3.0) {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      motor_IfActionSubsystem1(&motor_B.IfActionSubsystem1_m,
        &motor_DWork.IfActionSubsystem1_m, (rtP_IfActionSubsystem1_motor *)
        &motor_P.IfActionSubsystem1_m, &motor_DWork.PC1, &motor_DWork.PC2);

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    } else {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      /* DataStoreWrite: '<S31>/Data Store Write1' incorporates:
       *  Constant: '<S31>/Constant'
       */
      motor_DWork.PC1 = motor_P.Constant_Value;

      /* DiscretePulseGenerator: '<S31>/Pulse Generator' */
      motor_B.PulseGenerator = (motor_DWork.clockTickCounter <
        motor_P.PulseGenerator_Duty) && (motor_DWork.clockTickCounter >= 0) ?
        motor_P.PulseGenerator_Amp : 0.0;
      if (motor_DWork.clockTickCounter >= motor_P.PulseGenerator_Period - 1.0) {
        motor_DWork.clockTickCounter = 0;
      } else {
        motor_DWork.clockTickCounter++;
      }

      /* End of DiscretePulseGenerator: '<S31>/Pulse Generator' */

      /* DataTypeConversion: '<S31>/Data Type Conversion' */
      motor_B.DataTypeConversion = (motor_B.PulseGenerator != 0.0);

      /* DataStoreWrite: '<S31>/Data Store Write' */
      motor_DWork.PC2 = motor_B.DataTypeConversion;

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem2' */
    }

    /* End of If: '<S24>/If' */
    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    motor_IfActionSubsystem_n(motor_B.y, &motor_B.IfActionSubsystem2,
      &motor_DWork.IfActionSubsystem2, (rtP_IfActionSubsystem_motor *)
      &motor_P.IfActionSubsystem2, &motor_DWork.PC1, &motor_DWork.PC2);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem2' */
    break;
  }

  /* End of SwitchCase: '<S5>/Switch Case' */
  /* End of Outputs for SubSystem: '<S1>/BJ' */
  motor_Y.QDQ_HY = motor_B.DataStoreRead1;
  motor_Y.QDQ_XH = motor_B.DataStoreRead;
  switch (motor_DWork.is_ZHI_S_D) {
   case motor_IN_QDQ_BJ:
    /* During 'QDQ_BJ': '<S1>:123' */
    if ((motor_Y.Flag_Up_GZ_limit == 0) || (motor_Y.Flag_Down_GZ_limit == 0) ||
        (motor_Y.Flag_GZ_Cur == 0) || (motor_Y.Flag_Motor_Error == 0) ||
        (motor_Y.Flag_Temp_Down == 0) || (motor_Y.Flag_Enc_Error == 0) ||
        (motor_Y.Flag_GXDY_IT == 0)) {
      /* Transition: '<S1>:450' */
      motor_DWork.is_ZHI_S_D = motor_IN_QDQ_GZ;

      /* Entry 'QDQ_GZ': '<S1>:122' */
      motor_Y.QDQ_BJ = 3U;
      motor_Y.Alarm_Cunt = 3U;
      motor_Y.Motor_En = true;
    } else if ((motor_Y.Flag_Cur == 1) && (motor_Y.Flag_Temp_Up == 1) &&
               (motor_Y.Flag_Up_limit == 1) && (motor_Y.Flag_Down_limit == 1) &&
               (motor_Y.Flag_GXDY_Error == 1) && (motor_Y.Flag_AngleError == 0))
    {
      /* Transition: '<S1>:448' */
      motor_DWork.is_ZHI_S_D = motor_IN_defult_b;

      /* Entry 'defult': '<S1>:70' */
      motor_Y.QDQ_BJ = 1U;
      motor_Y.Alarm_Cunt = 1U;
    } else {
      motor_Y.Alarm_Cunt = 1U;
    }
    break;

   case motor_IN_QDQ_GZ:
    /* During 'QDQ_GZ': '<S1>:122' */
    if ((motor_Y.Flag_GZ_Cur == 1) && (motor_Y.Flag_Motor_Error == 1) &&
        (motor_Y.Flag_Temp_Down == 1) && (motor_Y.Flag_Enc_Error == 1) &&
        (motor_Y.Flag_GXDY_IT == 1)) {
      /* Transition: '<S1>:1137' */
      motor_DWork.is_ZHI_S_D = motor_IN_defult_b;

      /* Entry 'defult': '<S1>:70' */
      motor_Y.QDQ_BJ = 1U;
      motor_Y.Alarm_Cunt = 1U;
    } else {
      motor_Y.Alarm_Cunt = 1U;
    }
    break;

   default:
    /* During 'defult': '<S1>:70' */
    if ((motor_Y.Flag_Cur == 0) || (motor_Y.Flag_Temp_Up == 0) ||
        (motor_Y.Flag_Up_limit == 0) || (motor_Y.Flag_Down_limit == 0) ||
        (motor_Y.Flag_GXDY_Error == 0) || (motor_Y.Flag_AngleError == 0)) {
      /* Transition: '<S1>:447' */
      motor_DWork.is_ZHI_S_D = motor_IN_QDQ_BJ;

      /* Entry 'QDQ_BJ': '<S1>:123' */
      motor_Y.QDQ_BJ = 2U;
      motor_Y.Alarm_Cunt = 2U;
    } else {
      if ((motor_Y.Flag_GZ_Cur == 0) || (motor_Y.Flag_Motor_Error == 0) ||
          (motor_Y.Flag_Temp_Down == 0) || (motor_Y.Flag_Enc_Error == 0) ||
          (motor_Y.Flag_GXDY_IT == 0)) {
        /* Transition: '<S1>:449' */
        motor_DWork.is_ZHI_S_D = motor_IN_QDQ_GZ;

        /* Entry 'QDQ_GZ': '<S1>:122' */
        motor_Y.QDQ_BJ = 3U;
        motor_Y.Alarm_Cunt = 3U;
        motor_Y.Motor_En = true;
      }
    }
    break;
  }

  /* During 'Fault_Exit': '<S1>:1100' */
  /* During 'Limit_Fault_Exit': '<S1>:1128' */
  switch (motor_DWork.is_Limit_Fault_Exit) {
   case motor_IN_defult_bq:
    /* During 'defult': '<S1>:1107' */
    saturatedUnaryMinus = motor_Y.JD_Out;
    if (saturatedUnaryMinus < 0) {
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    }

    /* Inport: '<Root>/Up_Limit' */
    if ((motor_U.Up_Limit == 0) && (saturatedUnaryMinus > 10000)) {
      /* Transition: '<S1>:1130' */
      motor_DWork.is_Limit_Fault_Exit = motor_IN_defult1_k;
      motor_DWork.temporalCounter_i7 = 0U;

      /* Entry 'defult1': '<S1>:1129' */
      motor_Y.Flag_Up_GZ_limit = 1U;
    } else {
      saturatedUnaryMinus = motor_Y.JD_Out;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      /* Inport: '<Root>/Down_Limit' */
      if ((motor_U.Down_Limit == 0) && (saturatedUnaryMinus > 10000)) {
        /* Transition: '<S1>:1133' */
        motor_DWork.is_Limit_Fault_Exit = motor_IN_defult2_e;
        motor_DWork.temporalCounter_i7 = 0U;

        /* Entry 'defult2': '<S1>:1132' */
        motor_Y.Flag_Down_GZ_limit = 1U;
      }

      /* End of Inport: '<Root>/Down_Limit' */
    }

    /* End of Inport: '<Root>/Up_Limit' */
    break;

   case motor_IN_defult1_k:
    /* During 'defult1': '<S1>:1129' */
    if (motor_DWork.temporalCounter_i7 >= (uint32_T)(10.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1131' */
      motor_DWork.is_Limit_Fault_Exit = motor_IN_defult_bq;
    }
    break;

   default:
    /* During 'defult2': '<S1>:1132' */
    if (motor_DWork.temporalCounter_i7 >= (uint32_T)(10.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1134' */
      motor_DWork.is_Limit_Fault_Exit = motor_IN_defult_bq;
    }
    break;
  }

  /* During 'Motor_check': '<S1>:1144' */
  switch (motor_DWork.is_Motor_check) {
   case motor_IN_defult_bq:
    /* Inport: '<Root>/Encode_Sp' */
    /* During 'defult': '<S1>:1151' */
    if (motor_U.Encode_Sp < 0) {
      saturatedUnaryMinus = motor_U.Encode_Sp;
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    } else {
      saturatedUnaryMinus = motor_U.Encode_Sp;
    }

    /* End of Inport: '<Root>/Encode_Sp' */

    /* Inport: '<Root>/Cur_In' */
    q0 = motor_U.Cur_In;
    qY = q0 - 1925U;
    if (qY > q0) {
      qY = 0U;
    }

    if (((motor_Y.PWMOUT > 4000) || (motor_Y.PWMOUT < 1000)) &&
        (!motor_Y.Motor_En) && (qY < 10U) && (saturatedUnaryMinus < 3)) {
      /* Transition: '<S1>:1155' */
      motor_DWork.is_Motor_check = motor_IN_defult1_k;
      motor_DWork.temporalCounter_i8 = 0U;
    } else {
      saturatedUnaryMinus = motor_Y.JD_Error;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      if ((!motor_Y.Motor_En) && (motor_DWork.Runing_stable == 1) &&
          (saturatedUnaryMinus > 1500)) {
        /* Transition: '<S1>:1292' */
        motor_DWork.is_Motor_check = motor_IN_defult1_k;
        motor_DWork.temporalCounter_i8 = 0U;
      }
    }
    break;

   case motor_IN_defult1_k:
    /* During 'defult1': '<S1>:1154' */
    if (motor_DWork.temporalCounter_i8 >= (uint32_T)(2.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1157' */
      motor_DWork.is_Motor_check = motor_IN_defult2_e;
      motor_DWork.temporalCounter_i8 = 0U;

      /* Entry 'defult2': '<S1>:1156' */
      motor_Y.Flag_Motor_Error = 0U;
    } else {
      saturatedUnaryMinus = motor_Y.JD_Error;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      if (motor_Y.Motor_En || (motor_DWork.Runing_stable == 0) ||
          (saturatedUnaryMinus <= 1500)) {
        /* Transition: '<S1>:1293' */
        motor_DWork.is_Motor_check = motor_IN_defult_bq;

        /* Entry 'defult': '<S1>:1151' */
        motor_Y.Flag_Motor_Error = 1U;
      }
    }
    break;

   case motor_IN_defult2_e:
    /* During 'defult2': '<S1>:1156' */
    if (motor_DWork.temporalCounter_i8 >= (uint32_T)(5.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1160' */
      motor_DWork.is_Motor_check = motor_IN_defult3;
    }
    break;

   case motor_IN_defult3:
    /* During 'defult3': '<S1>:1159' */
    saturatedUnaryMinus = motor_Y.JD_Error;
    if (saturatedUnaryMinus < 0) {
      if (saturatedUnaryMinus <= MIN_int32_T) {
        saturatedUnaryMinus = MAX_int32_T;
      } else {
        saturatedUnaryMinus = -saturatedUnaryMinus;
      }
    }

    if (saturatedUnaryMinus <= 200) {
      /* Transition: '<S1>:1161' */
      motor_DWork.is_Motor_check = motor_IN_defult4;
      motor_DWork.temporalCounter_i8 = 0U;
    }
    break;

   default:
    /* During 'defult4': '<S1>:1324' */
    if (motor_DWork.temporalCounter_i8 >= (uint32_T)(5.0 / motor_DWork.Ts)) {
      /* Transition: '<S1>:1325' */
      motor_DWork.is_Motor_check = motor_IN_defult_bq;

      /* Entry 'defult': '<S1>:1151' */
      motor_Y.Flag_Motor_Error = 1U;
    } else {
      saturatedUnaryMinus = motor_Y.JD_Error;
      if (saturatedUnaryMinus < 0) {
        if (saturatedUnaryMinus <= MIN_int32_T) {
          saturatedUnaryMinus = MAX_int32_T;
        } else {
          saturatedUnaryMinus = -saturatedUnaryMinus;
        }
      }

      if (saturatedUnaryMinus > 200) {
        /* Transition: '<S1>:1326' */
        motor_DWork.is_Motor_check = motor_IN_defult3;
      }
    }
    break;
  }
}

/* Model step function */
void motor_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Encode_Sp'
   *  Inport: '<Root>/Motor_Num'
   *  Inport: '<Root>/System_Order'
   */
  /* Gateway: Chart */
  if (motor_DWork.temporalCounter_i1 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i1++;
  }

  if (motor_DWork.temporalCounter_i2 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i2++;
  }

  if (motor_DWork.temporalCounter_i3 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i3++;
  }

  if (motor_DWork.temporalCounter_i4 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i4++;
  }

  if (motor_DWork.temporalCounter_i5 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i5++;
  }

  if (motor_DWork.temporalCounter_i6 < 5.0 / motor_DWork.Ts) {
    motor_DWork.temporalCounter_i6++;
  }

  if (motor_DWork.temporalCounter_i7 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i7++;
  }

  if (motor_DWork.temporalCounter_i8 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i8++;
  }

  if (motor_DWork.temporalCounter_i9 < MAX_uint32_T) {
    motor_DWork.temporalCounter_i9++;
  }

  /* During: Chart */
  if (motor_DWork.is_active_c3_motor == 0U) {
    /* Entry: Chart */
    motor_DWork.is_active_c3_motor = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:561' */
    motor_DWork.is_c3_motor = motor_IN_Ready;

    /* Entry 'Ready': '<S1>:1' */
    motor_DWork.Cur_Limit = 2250U;

    /* 电流报警阈值 */
    motor_DWork.Cur_GZ_Limit = 2450U;

    /* 电流故障阈值 */
    motor_DWork.Cur_Limit_Down = 1650.0;

    /* 电流报警阈值 */
    motor_DWork.Cur_GZ_Limit_Down = 1450.0;

    /* 电流故障阈值 */
    motor_DWork.Temp_Up_Limit = 2130U;

    /* 温度上限阈值80°C */
    motor_DWork.Temp_Down_Limit = 80U;

    /* Outport: '<Root>/Open_Result' */
    /* 温度下限阈值-45°C */
    motor_Y.Open_Result = 2U;

    /* Outport: '<Root>/Ini_Result' */
    /* 开机结果失败 */
    motor_Y.Ini_Result = 2U;

    /* Outport: '<Root>/dSpace_Init' */
    /* 初始化结果 0失败 1成功 2未完成 */
    motor_Y.dSpace_Init = 0U;

    /* Outport: '<Root>/QDQ_BJ' */
    motor_Y.QDQ_BJ = 1U;

    /* 默认驱动器正常，1正常，2报警，3故障 */
    motor_DWork.In_State = 0U;

    /* Outport: '<Root>/QDQ_XH' */
    /* 状态标识，1表示初始化状态，2开机状态，3关机状态 */
    motor_Y.QDQ_XH = false;

    /* Outport: '<Root>/QDQ_HY' */
    /* QDQ_XH引脚状态，低 */
    motor_Y.QDQ_HY = true;

    /* Outport: '<Root>/Motor_En' */
    /* QDQ_HY引脚状态，高 */
    motor_Y.Motor_En = true;

    /* Outport: '<Root>/DCZD' */
    /* 电机使能引脚置高 */
    motor_Y.DCZD = true;

    /* 电磁制动引脚拉高，关电制动，低有效 */
    motor_DWork.KG_clc = 0U;
    motor_DWork.XiaoDaShen = 0.0;

    /* Outport: '<Root>/Alarm_Cunt' */
    /* 限位测试不处理过限位报警 */
    motor_Y.Alarm_Cunt = 1U;

    /* Outport: '<Root>/Flag_Up_limit' */
    /* 实现程序中主动上报只执行发送一次 */
    motor_Y.Flag_Up_limit = 1U;

    /* Outport: '<Root>/Flag_Down_limit' */
    /* 上限位标识，1正常，0报警 */
    motor_Y.Flag_Down_limit = 1U;

    /* Outport: '<Root>/Flag_Cur' */
    /* 下限位标识，1正常，0报警 */
    motor_Y.Flag_Cur = 1U;

    /* Outport: '<Root>/Flag_Temp_Up' */
    /* 电流报警 */
    motor_Y.Flag_Temp_Up = 1U;

    /* Outport: '<Root>/Flag_GXDY_Error' */
    /* 温度过高标识 */
    motor_Y.Flag_GXDY_Error = 1U;

    /* Outport: '<Root>/Flag_Enc_Error' */
    /* 惯性单元数据异常标识 */
    motor_Y.Flag_Enc_Error = 1U;

    /* Outport: '<Root>/Flag_Motor_Error' */
    /* 编码器标识，1正常，0故障 */
    motor_Y.Flag_Motor_Error = 1U;

    /* Outport: '<Root>/Flag_GZ_Cur' */
    /* 电机正反转标识，1正常，0故障 */
    motor_Y.Flag_GZ_Cur = 1U;

    /* Outport: '<Root>/Flag_Down_GZ_limit' */
    /* 电流过高故障 */
    motor_Y.Flag_Down_GZ_limit = 1U;

    /* Outport: '<Root>/Flag_Up_GZ_limit' */
    /* 下限位开关故障标识，1正常，0故障 */
    motor_Y.Flag_Up_GZ_limit = 1U;

    /* Outport: '<Root>/Flag_Temp_Down' */
    /* 上限位开关故障标识，1正常，0故障 */
    motor_Y.Flag_Temp_Down = 1U;

    /* Outport: '<Root>/Flag_GXDY_IT' */
    /* 温度过低标识，1正常，0故障 */
    motor_Y.Flag_GXDY_IT = 1U;

    /* 惯性单元通讯中断标识 */
    motor_DWork.EN_extern = 0U;
    motor_DWork.Forword = 1U;

    /* 电机初始化上行PWM值 */
    /* 电机初始化下行PWM值 */
    motor_DWork.PWM_Value_Mid = 2500U;

    /* PWM中值 */
    motor_DWork.Encode_Sp_Max = 3000U;

    /* 换算编码器测速最大值 */
    motor_DWork.Encode_Sp_Min = 2U;

    /* 编码器测速最小值 */
    motor_DWork.Encode_Pos1 = -1161718;

    /* 下滑纵摇XHZY下机械限位位置 */
    motor_DWork.Encode_Pos2 = -1155272;

    /* 下滑横摇XHHY下机械限位位置 */
    motor_DWork.Encode_Pos3 = -1173043;

    /* 横摇灯杆XYDG下机械限位位置 */
    motor_DWork.Encode_Pos_Zero = 1000U;

    /* 零点检测，回到零点时的范围 */
    /* 最小行程，检测电机是否正常运转 */
    motor_DWork.JD_Max = 20000U;

    /* 角度变化最大值, */
    motor_DWork.Ts = 0.002;

    /* 采样时间 */
    /* Entry Internal 'Ready': '<S1>:1' */
    /* Transition: '<S1>:1246' */
    if (motor_U.Motor_Num == 1) {
      /* Transition: '<S1>:1247' */
      motor_DWork.is_Ready = motor_IN_PID_parameters1;

      /* Entry 'PID_parameters1': '<S1>:1242' */
      motor_DWork.P_KP = 380.0;
      motor_DWork.V_KP = 1.0;
      motor_DWork.V_KI = 10.0;
    } else if (motor_U.Motor_Num == 3) {
      /* Transition: '<S1>:1248' */
      motor_DWork.is_Ready = motor_IN_PID_parameters2;

      /* Entry 'PID_parameters2': '<S1>:1243' */
      motor_DWork.P_KP = 330.0;
      motor_DWork.V_KP = 1.0;
      motor_DWork.V_KI = 10.0;
    } else {
      if (motor_U.Motor_Num == 2) {
        /* Transition: '<S1>:1249' */
        motor_DWork.is_Ready = motor_IN_PID_parameters3;

        /* Entry 'PID_parameters3': '<S1>:1244' */
        motor_DWork.P_KP = 1200.0;
        motor_DWork.V_KP = 0.08;
        motor_DWork.V_KI = 0.8;
      }
    }
  } else if (motor_DWork.is_c3_motor == motor_IN_Ready) {
    /* During 'Ready': '<S1>:1' */
    if (motor_U.System_Order == 1) {
      /* Transition: '<S1>:568' */
      /* Exit Internal 'Ready': '<S1>:1' */
      motor_DWork.is_Ready = motor_IN_NO_ACTIVE_CHILD;
      motor_DWork.is_c3_motor = motor_IN_Ready_Run;

      /* Entry Internal 'Ready_Run': '<S1>:2' */
      motor_DWork.is_active_Current_check = 1U;

      /* Entry Internal 'Current_check': '<S1>:3' */
      /* Transition: '<S1>:369' */
      motor_DWork.is_Current_check = motor_IN_p1;

      /* Entry 'p1': '<S1>:4' */
      motor_DWork.cur_i = 0U;

      /* Outport: '<Root>/Flag_Cur' */
      /* 计数器置零 */
      motor_Y.Flag_Cur = 1U;

      /* 电流正常 */
      motor_DWork.is_active_Temp_check = 1U;
      motor_DWork.is_active_M_Run = 1U;

      /* Entry 'M_Run': '<S1>:11' */
      motor_DWork.Encode_Pos0 += (real_T)motor_U.Encode_Sp;

      /* Entry Internal 'M_Run': '<S1>:11' */
      /* Transition: '<S1>:384' */
      motor_DWork.is_M_Run = motor_IN_Initialize;

      /* Outport: '<Root>/Ini_Result' incorporates:
       *  Inport: '<Root>/Encode_Sp'
       */
      /* Entry 'Initialize': '<S1>:12' */
      motor_Y.Ini_Result = 2U;

      /* 初始化未完成 */
      motor_DWork.In_State = 1U;

      /* Entry Internal 'Initialize': '<S1>:12' */
      /* Transition: '<S1>:396' */
      motor_DWork.is_Initialize = motor_IN_Parameters_Reset0;
      motor_DWork.temporalCounter_i1 = 0U;

      /* Outport: '<Root>/DCZD' */
      /* Entry 'Parameters_Reset0': '<S1>:89' */
      motor_Y.DCZD = false;

      /* 解除制动 */
      motor_DWork.is_active_ZHI_S_D = 1U;

      /* Entry Internal 'ZHI_S_D': '<S1>:60' */
      /* Transition: '<S1>:446' */
      motor_DWork.is_ZHI_S_D = motor_IN_defult_b;

      /* Outport: '<Root>/QDQ_BJ' */
      /* Entry 'defult': '<S1>:70' */
      motor_Y.QDQ_BJ = 1U;

      /* Outport: '<Root>/Alarm_Cunt' */
      motor_Y.Alarm_Cunt = 1U;
      motor_DWork.is_active_Fault_Exit = 1U;

      /* Entry 'Fault_Exit': '<S1>:1100' */
      /* 解除故障 */
      /* Entry Internal 'Fault_Exit': '<S1>:1100' */
      motor_DWork.is_active_Limit_Fault_Exit = 1U;

      /* Entry Internal 'Limit_Fault_Exit': '<S1>:1128' */
      /* Transition: '<S1>:1101' */
      motor_DWork.is_Limit_Fault_Exit = motor_IN_defult_bq;
      motor_DWork.is_active_Motor_check = 1U;

      /* Entry 'Motor_check': '<S1>:1144' */
      /* 电机故障诊断 */
      /* Entry Internal 'Motor_check': '<S1>:1144' */
      /* Transition: '<S1>:1146' */
      motor_DWork.is_Motor_check = motor_IN_defult_bq;

      /* Outport: '<Root>/Flag_Motor_Error' */
      /* Entry 'defult': '<S1>:1151' */
      motor_Y.Flag_Motor_Error = 1U;
    }
  } else {
    motor_Ready_Run();
  }

  if (5.0 / motor_DWork.Ts == motor_DWork.temporalCounter_i6) {
    motor_DWork.temporalCounter_i6 = 0U;
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  motor_M->Timing.clockTick0++;
  if (!motor_M->Timing.clockTick0) {
    motor_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void motor_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)motor_M, 0,
                sizeof(RT_MODEL_motor));

  /* block I/O */
  (void) memset(((void *) &motor_B), 0,
                sizeof(BlockIO_motor));

  {
    motor_B.y = 0.0;
    motor_B.In = 0.0;
    motor_B.Showing_Angle = 0.0;
    motor_B.Showing_T = 0.0;
    motor_B.SFunction_o52 = 0.0;
    motor_B.SFunction_o53 = 0.0;
    motor_B.SFunction_o54 = 0.0;
    motor_B.SFunction_o55 = 0.0;
    motor_B.Showing_Angle_p = 0.0;
    motor_B.Showing_T_a = 0.0;
    motor_B.DataTypeConversion2 = 0.0;
    motor_B.GXZ6 = 0.0;
    motor_B.GXZ1 = 0.0;
    motor_B.UnitDelay = 0.0;
    motor_B.Add = 0.0;
    motor_B.Abs = 0.0;
    motor_B.PulseGenerator = 0.0;
    motor_B.Product = 0.0;
    motor_B.DiscreteTimeIntegrator = 0.0;
    motor_B.Sum1 = 0.0;
    motor_B.ZV_Kp = 0.0;
    motor_B.ZV_Kpt = 0.0;
    motor_B.ZV_Kp1 = 0.0;
    motor_B.ZV_KD = 0.0;
    motor_B.DiscreteTimeIntegrator1 = 0.0;
    motor_B.Sum = 0.0;
    motor_B.ZV_KN = 0.0;
    motor_B.Saturation = 0.0;
    motor_B.KD_KG = 0.0;
    motor_B.Sum2 = 0.0;
    motor_B.ZXF_PID = 0.0;
    motor_B.Subtract = 0.0;
    motor_B.ZXF_PWM = 0.0;
    motor_B.ZV_Ki = 0.0;
    motor_B.Showing_XHHY.MultiportSwitch = 0.0;
    motor_B.Showing_XHHY.DataStoreRead = 0.0;
    motor_B.Showing_XHHY.Product = 0.0;
    motor_B.Showing_XHHY.Gain = 0.0;
    motor_B.Showing_XHHY.DataTypeConversion1 = 0.0;
    motor_B.Showing_XHHY.SineWave1 = 0.0;
    motor_B.Showing_XHHY.SineWave2 = 0.0;
    motor_B.Showing_XHHY.SineWave3 = 0.0;
    motor_B.Showing_XHHY.SineWave4 = 0.0;
    motor_B.Showing_XHHY.SineWave5 = 0.0;
    motor_B.Showing_XHHY.SineWave6 = 0.0;
    motor_B.Showing_XHHY.SineWave7 = 0.0;
    motor_B.Showing_XHHY.SineWave8 = 0.0;
    motor_B.Waveform_Build.Delay5 = 0.0;
    motor_B.Waveform_Build.DataTypeConversion4 = 0.0;
    motor_B.Waveform_Build.Gain1 = 0.0;
    motor_B.Waveform_Build.XF_XHZY = 0.0;
    motor_B.Waveform_Build.Add16 = 0.0;
    motor_B.Waveform_Build.Delay7 = 0.0;
    motor_B.Waveform_Build.DataStoreRead1 = 0.0;
    motor_B.Waveform_Build.Delay6 = 0.0;
    motor_B.Waveform_Build.DataStoreRead4 = 0.0;
    motor_B.Waveform_Build.Add21 = 0.0;
    motor_B.Waveform_Build.Switch = 0.0;
    motor_B.Waveform_Build.Add20 = 0.0;
    motor_B.Waveform_Build.Abs2 = 0.0;
    motor_B.Waveform_Build.DataStoreRead5 = 0.0;
    motor_B.Waveform_Build.Divide1 = 0.0;
    motor_B.Waveform_Build.Saturation2 = 0.0;
    motor_B.Waveform_Build.Add13 = 0.0;
    motor_B.Waveform_Build.Add15 = 0.0;
    motor_B.Waveform_Build.Divide = 0.0;
    motor_B.Waveform_Build.Product1 = 0.0;
    motor_B.Waveform_Build.Saturation1 = 0.0;
    motor_B.Waveform_Build.sampletime = 0.0;
    motor_B.Waveform_Build.deltariselimit = 0.0;
    motor_B.Waveform_Build.Yk1 = 0.0;
    motor_B.Waveform_Build.UkYk1 = 0.0;
    motor_B.Waveform_Build.Gain3 = 0.0;
    motor_B.Waveform_Build.deltafalllimit = 0.0;
    motor_B.Waveform_Build.Switch_c = 0.0;
    motor_B.Waveform_Build.Switch2 = 0.0;
    motor_B.Waveform_Build.DifferenceInputs2 = 0.0;
    motor_B.Waveform_Build.Switch_e = 0.0;
    motor_B.Waveform_Build.Switch2_p = 0.0;
    motor_B.Waveform_Build.In1 = 0.0;
    motor_B.Waveform_Build.In1_n = 0.0;
    motor_B.Waveform_Build.DataStoreRead5_m = 0.0;
    motor_B.Waveform_Build.Add20_j = 0.0;
    motor_B.Waveform_Build.Saturation = 0.0;
    motor_B.Waveform_Build.DataStoreRead5_p = 0.0;
    motor_B.Waveform_Build.In1_m = 0.0;
    motor_B.Waveform_Build.y1 = 0.0;
    motor_B.Waveform_Build.y2 = 0.0;
    motor_B.Waveform_Build.Gain7 = 0.0;
    motor_B.Waveform_Build.Add12 = 0.0;
    motor_B.Waveform_Build.Add19 = 0.0;
    motor_B.Angle_Calculation_HY.DataTypeConversion1 = 0.0;
    motor_B.Angle_Calculation_HY.GHDG5 = 0.0;
    motor_B.Angle_Calculation_HY.GHDG7 = 0.0;
    motor_B.Angle_Calculation_HY.GHDG8 = 0.0;
    motor_B.Angle_Calculation_HY.Fcn7 = 0.0;
    motor_B.Angle_Calculation_HY.Cl1 = 0.0;
    motor_B.Angle_Calculation_HY.Fcn = 0.0;
    motor_B.Angle_Calculation_HY.Fcn4 = 0.0;
    motor_B.Angle_Calculation_HY.GHDG9 = 0.0;
    motor_B.Showing.MultiportSwitch = 0.0;
    motor_B.Showing.DataStoreRead = 0.0;
    motor_B.Showing.Product = 0.0;
    motor_B.Showing.DataTypeConversion1 = 0.0;
    motor_B.Showing.SineWave1 = 0.0;
    motor_B.Showing.SineWave2 = 0.0;
    motor_B.Showing.SineWave3 = 0.0;
    motor_B.Showing.SineWave4 = 0.0;
    motor_B.Showing.SineWave5 = 0.0;
    motor_B.Showing.SineWave6 = 0.0;
    motor_B.Showing.SineWave7 = 0.0;
    motor_B.Showing.SineWave8 = 0.0;
    motor_B.Motor_HYDG1.DiscreteTimeIntegrator = 0.0;
    motor_B.Motor_HYDG1.chu_jd = 0.0;
    motor_B.Motor_HYDG1.Product = 0.0;
    motor_B.Motor_HYDG1.Sum4 = 0.0;
    motor_B.Motor_HYDG1.GHDG2 = 0.0;
    motor_B.Motor_HYDG1.Fcn = 0.0;
    motor_B.Motor_HYDG1.Fcn1 = 0.0;
    motor_B.Motor_HYDG1.Fcn2 = 0.0;
    motor_B.Motor_HYDG1.Fcn3 = 0.0;
    motor_B.Motor_HYDG1.Sum1 = 0.0;
    motor_B.Motor_HYDG1.Fcn4 = 0.0;
    motor_B.Motor_HYDG1.Fcn15 = 0.0;
    motor_B.Motor_HYDG1.GHDG3 = 0.0;
    motor_B.Motor_HYDG1.GHDG4 = 0.0;
    motor_B.Motor_HYDG1.DataTypeConversion1 = 0.0;
    motor_B.Motor_HYDG1.GHDG5 = 0.0;
    motor_B.Motor_HYDG1.fk_dg1 = 0.0;
    motor_B.Motor_HYDG1.fk_dg = 0.0;
    motor_B.Motor_HYDG1.Sum = 0.0;
    motor_B.Motor_HYDG1.Saturation1 = 0.0;
    motor_B.Motor_HYDG1.ZP_Kp = 0.0;
    motor_B.Motor_HYDG1.ZV_KD1 = 0.0;
    motor_B.Motor_HYDG1.Sum_i = 0.0;
    motor_B.Motor_HYDG1.ZP_KN = 0.0;
    motor_B.Motor_HYDG1.KD_KG = 0.0;
    motor_B.Motor_HYDG1.P_KP = 0.0;
    motor_B.Motor_HYDG1.Product_i = 0.0;
    motor_B.Motor_HYDG1.Sum1_n = 0.0;
    motor_B.Motor_HYDG1.DiscreteTimeIntegrator_d = 0.0;
    motor_B.Motor_HYDG1.DiscreteTimeIntegrator1 = 0.0;
    motor_B.Motor_HYDG1.Saturation_limit_speed = 0.0;
    motor_B.Motor_HYDG1.KP_e2 = 0.0;
    motor_B.Motor_HYDG1.Switch = 0.0;
    motor_B.Motor_HYDG1.Switch2 = 0.0;
    motor_B.Motor_HYDG1.UnitDelay = 0.0;
    motor_B.Motor_HYDG1.Sum5 = 0.0;
    motor_B.Motor_HYDG1.GXZ5 = 0.0;
    motor_B.Motor_HYDG1.fk_dg2 = 0.0;
    motor_B.Motor_HYDG1.Sum2 = 0.0;
    motor_B.Motor_HYDG1.ZV_Kp = 0.0;
    motor_B.Motor_HYDG1.ZV_Kp1 = 0.0;
    motor_B.Motor_HYDG1.Sum_o = 0.0;
    motor_B.Motor_HYDG1.ZV_KN = 0.0;
    motor_B.Motor_HYDG1.KD_KG_h = 0.0;
    motor_B.Motor_HYDG1.V_KP = 0.0;
    motor_B.Motor_HYDG1.Product_i4 = 0.0;
    motor_B.Motor_HYDG1.V_KI = 0.0;
    motor_B.Motor_HYDG1.Product1 = 0.0;
    motor_B.Motor_HYDG1.Sign = 0.0;
    motor_B.Motor_HYDG1.ZV1_Kp1 = 0.0;
    motor_B.Motor_HYDG1.ZV1_Kp2 = 0.0;
    motor_B.Motor_HYDG1.Sum2_f = 0.0;
    motor_B.Motor_HYDG1.Sum1_ne = 0.0;
    motor_B.Motor_HYDG1.XF_PID = 0.0;
    motor_B.Motor_HYDG1.Sum3 = 0.0;
    motor_B.Motor_HYDG1.XF_PWM = 0.0;
    motor_B.Motor_HYDG1.GHDG7 = 0.0;
    motor_B.Motor_HYDG1.GHDG8 = 0.0;
    motor_B.Motor_HYDG1.Fcn7 = 0.0;
    motor_B.Motor_HYDG1.Cl1 = 0.0;
    motor_B.Motor_HYDG1.Fcn_l = 0.0;
    motor_B.Motor_HYDG1.Fcn4_g = 0.0;
    motor_B.Motor_HYDG1.GHDG9 = 0.0;
    motor_B.Motor_HYDG1.fk_dg3 = 0.0;
    motor_B.Motor_HYDG1.KP_JD = 0.0;
    motor_B.Motor_HYDG1.Sum1_h = 0.0;
    motor_B.Motor_HYDG1.KP_e = 0.0;
    motor_B.IfActionSubsystem2.IfActionSubsystem1.PulseGenerator = 0.0;
    motor_B.IfActionSubsystem2.IfActionSubsystem.PulseGenerator = 0.0;
    motor_B.IfActionSubsystem1_m.PulseGenerator = 0.0;
    motor_B.IfActionSubsystem_f.PulseGenerator = 0.0;
    motor_B.IfActionSubsystem.IfActionSubsystem1.PulseGenerator = 0.0;
    motor_B.IfActionSubsystem.IfActionSubsystem.PulseGenerator = 0.0;
    motor_B.Motor_XHZY.chu_jd = 0.0;
    motor_B.Motor_XHZY.DataTypeConversion3 = 0.0;
    motor_B.Motor_XHZY.GXZ2 = 0.0;
    motor_B.Motor_XHZY.XF_YJ = 0.0;
    motor_B.Motor_XHZY.Product2 = 0.0;
    motor_B.Motor_XHZY.DataStoreRead2 = 0.0;
    motor_B.Motor_XHZY.DataStoreRead3 = 0.0;
    motor_B.Motor_XHZY.DataTypeConversion1 = 0.0;
    motor_B.Motor_XHZY.GXZ6 = 0.0;
    motor_B.Motor_XHZY.GXZ1 = 0.0;
    motor_B.Motor_XHZY.GXZ9 = 0.0;
    motor_B.Motor_XHZY.Product = 0.0;
    motor_B.Motor_XHZY.GXZ7 = 0.0;
    motor_B.Motor_XHZY.Fcn1 = 0.0;
    motor_B.Motor_XHZY.Fcn2 = 0.0;
    motor_B.Motor_XHZY.Fcn3 = 0.0;
    motor_B.Motor_XHZY.Fcn6 = 0.0;
    motor_B.Motor_XHZY.GXZ8 = 0.0;
    motor_B.Motor_XHZY.Product3 = 0.0;
    motor_B.Motor_XHZY.Sum2 = 0.0;
    motor_B.Motor_XHZY.Sum = 0.0;
    motor_B.Motor_XHZY.JD_ek = 0.0;
    motor_B.Motor_XHZY.CDB_XHHY = 0.0;
    motor_B.Motor_XHZY.DiscreteTimeIntegrator = 0.0;
    motor_B.Motor_XHZY.P_KP = 0.0;
    motor_B.Motor_XHZY.Product_k = 0.0;
    motor_B.Motor_XHZY.ZP_Kp2 = 0.0;
    motor_B.Motor_XHZY.ZV_KD1 = 0.0;
    motor_B.Motor_XHZY.Sum_e = 0.0;
    motor_B.Motor_XHZY.ZP_KN = 0.0;
    motor_B.Motor_XHZY.KD_KG = 0.0;
    motor_B.Motor_XHZY.ZP_Kp1 = 0.0;
    motor_B.Motor_XHZY.Sum1 = 0.0;
    motor_B.Motor_XHZY.DiscreteTimeIntegrator_b = 0.0;
    motor_B.Motor_XHZY.DiscreteTimeIntegrator1 = 0.0;
    motor_B.Motor_XHZY.Saturation = 0.0;
    motor_B.Motor_XHZY.Sum1_n = 0.0;
    motor_B.Motor_XHZY.ZV_Kp = 0.0;
    motor_B.Motor_XHZY.ZV_Kp1 = 0.0;
    motor_B.Motor_XHZY.ZV_KD = 0.0;
    motor_B.Motor_XHZY.Sum_i = 0.0;
    motor_B.Motor_XHZY.ZV_KN = 0.0;
    motor_B.Motor_XHZY.Saturation_p = 0.0;
    motor_B.Motor_XHZY.KD_KG_a = 0.0;
    motor_B.Motor_XHZY.V_KP = 0.0;
    motor_B.Motor_XHZY.Product_p = 0.0;
    motor_B.Motor_XHZY.V_KI = 0.0;
    motor_B.Motor_XHZY.Product1 = 0.0;
    motor_B.Motor_XHZY.Saturation1 = 0.0;
    motor_B.Motor_XHZY.Product4 = 0.0;
    motor_B.Motor_XHZY.Sign = 0.0;
    motor_B.Motor_XHZY.ZV1_Kp1 = 0.0;
    motor_B.Motor_XHZY.ZV1_Kp2 = 0.0;
    motor_B.Motor_XHZY.Sum2_h = 0.0;
    motor_B.Motor_XHZY.Sum1_i = 0.0;
    motor_B.Motor_XHZY.KP_JD1 = 0.0;
    motor_B.Motor_XHZY.KP_JD = 0.0;
    motor_B.Motor_XHZY.KP_e = 0.0;
    motor_B.Motor_XHZY.ZXF_PID = 0.0;
    motor_B.Motor_XHZY.Subtract = 0.0;
    motor_B.Motor_XHZY.ZXF_PWM = 0.0;
    motor_B.Motor_XHZY.DataTypeConversion2 = 0.0;
    motor_B.Motor_XHZY.GXZ3 = 0.0;
    motor_B.Motor_XHZY.GXZ10 = 0.0;
    motor_B.Motor_XHZY.XF_XHZY = 0.0;
    motor_B.Motor_XHZY.Product1_a = 0.0;
    motor_B.Motor_HYDG.chu_jd = 0.0;
    motor_B.Motor_HYDG.Product = 0.0;
    motor_B.Motor_HYDG.DataTypeConversion1 = 0.0;
    motor_B.Motor_HYDG.GHDG5 = 0.0;
    motor_B.Motor_HYDG.GHDG7 = 0.0;
    motor_B.Motor_HYDG.GHDG8 = 0.0;
    motor_B.Motor_HYDG.Fcn7 = 0.0;
    motor_B.Motor_HYDG.Cl1 = 0.0;
    motor_B.Motor_HYDG.Fcn = 0.0;
    motor_B.Motor_HYDG.Fcn4 = 0.0;
    motor_B.Motor_HYDG.GHDG9 = 0.0;
    motor_B.Motor_HYDG.fk_dg = 0.0;
    motor_B.Motor_HYDG.Sum = 0.0;
    motor_B.Motor_HYDG.JD_ek = 0.0;
    motor_B.Motor_HYDG.CDB_XHHY = 0.0;
    motor_B.Motor_HYDG.DiscreteTimeIntegrator = 0.0;
    motor_B.Motor_HYDG.ZP_Kp = 0.0;
    motor_B.Motor_HYDG.ZP_Kp2 = 0.0;
    motor_B.Motor_HYDG.ZV_KD1 = 0.0;
    motor_B.Motor_HYDG.Sum_g = 0.0;
    motor_B.Motor_HYDG.ZP_KN = 0.0;
    motor_B.Motor_HYDG.KD_KG = 0.0;
    motor_B.Motor_HYDG.ZP_Kp1 = 0.0;
    motor_B.Motor_HYDG.Sum1 = 0.0;
    motor_B.Motor_HYDG.DiscreteTimeIntegrator_o = 0.0;
    motor_B.Motor_HYDG.DiscreteTimeIntegrator1 = 0.0;
    motor_B.Motor_HYDG.Saturation = 0.0;
    motor_B.Motor_HYDG.Sum2 = 0.0;
    motor_B.Motor_HYDG.ZV_Kp = 0.0;
    motor_B.Motor_HYDG.ZV_Kp1 = 0.0;
    motor_B.Motor_HYDG.ZV_KD = 0.0;
    motor_B.Motor_HYDG.Sum_n = 0.0;
    motor_B.Motor_HYDG.ZV_KN = 0.0;
    motor_B.Motor_HYDG.Saturation_b = 0.0;
    motor_B.Motor_HYDG.KD_KG_l = 0.0;
    motor_B.Motor_HYDG.Sign = 0.0;
    motor_B.Motor_HYDG.ZV1_Kp1 = 0.0;
    motor_B.Motor_HYDG.ZV1_Kp2 = 0.0;
    motor_B.Motor_HYDG.ZV_Ki1 = 0.0;
    motor_B.Motor_HYDG.ZV_Kpt = 0.0;
    motor_B.Motor_HYDG.Sum2_e = 0.0;
    motor_B.Motor_HYDG.Sum1_g = 0.0;
    motor_B.Motor_HYDG.XF_PID = 0.0;
    motor_B.Motor_HYDG.Sum3 = 0.0;
    motor_B.Motor_HYDG.XF_PWM = 0.0;
    motor_B.Motor_HYDG.KP_JD = 0.0;
    motor_B.Motor_HYDG.KP_e = 0.0;
    motor_B.Motor_XHHY.chu_jd = 0.0;
    motor_B.Motor_XHHY.DataStoreRead1 = 0.0;
    motor_B.Motor_XHHY.DataStoreRead2 = 0.0;
    motor_B.Motor_XHHY.DataTypeConversion1 = 0.0;
    motor_B.Motor_XHHY.GXZ6 = 0.0;
    motor_B.Motor_XHHY.GXZ1 = 0.0;
    motor_B.Motor_XHHY.GXZ9 = 0.0;
    motor_B.Motor_XHHY.Product = 0.0;
    motor_B.Motor_XHHY.DataTypeConversion3 = 0.0;
    motor_B.Motor_XHHY.GXZ2 = 0.0;
    motor_B.Motor_XHHY.Fcn1 = 0.0;
    motor_B.Motor_XHHY.Fcn2 = 0.0;
    motor_B.Motor_XHHY.Fcn3 = 0.0;
    motor_B.Motor_XHHY.Fcn6 = 0.0;
    motor_B.Motor_XHHY.Fcn4 = 0.0;
    motor_B.Motor_XHHY.Fcn10 = 0.0;
    motor_B.Motor_XHHY.GXZ7 = 0.0;
    motor_B.Motor_XHHY.Fcn5 = 0.0;
    motor_B.Motor_XHHY.Fcn7 = 0.0;
    motor_B.Motor_XHHY.Fcn8 = 0.0;
    motor_B.Motor_XHHY.Sum3 = 0.0;
    motor_B.Motor_XHHY.Fcn11 = 0.0;
    motor_B.Motor_XHHY.Sum2 = 0.0;
    motor_B.Motor_XHHY.Fcn9 = 0.0;
    motor_B.Motor_XHHY.Product_p = 0.0;
    motor_B.Motor_XHHY.Fcn12 = 0.0;
    motor_B.Motor_XHHY.GXH7 = 0.0;
    motor_B.Motor_XHHY.Product3 = 0.0;
    motor_B.Motor_XHHY.Sum2_m = 0.0;
    motor_B.Motor_XHHY.Sum = 0.0;
    motor_B.Motor_XHHY.XF_XHZY1 = 0.0;
    motor_B.Motor_XHHY.CDB_XHHY = 0.0;
    motor_B.Motor_XHHY.DiscreteTimeIntegrator = 0.0;
    motor_B.Motor_XHHY.P_KP = 0.0;
    motor_B.Motor_XHHY.Product_h = 0.0;
    motor_B.Motor_XHHY.ZP_Kp2 = 0.0;
    motor_B.Motor_XHHY.ZV_KD1 = 0.0;
    motor_B.Motor_XHHY.Sum_p = 0.0;
    motor_B.Motor_XHHY.ZP_KN = 0.0;
    motor_B.Motor_XHHY.KD_KG = 0.0;
    motor_B.Motor_XHHY.ZP_Kp1 = 0.0;
    motor_B.Motor_XHHY.Sum1 = 0.0;
    motor_B.Motor_XHHY.DiscreteTimeIntegrator_b = 0.0;
    motor_B.Motor_XHHY.DiscreteTimeIntegrator1 = 0.0;
    motor_B.Motor_XHHY.Saturation = 0.0;
    motor_B.Motor_XHHY.Sum1_d = 0.0;
    motor_B.Motor_XHHY.ZV_Kp = 0.0;
    motor_B.Motor_XHHY.ZV_Kp1 = 0.0;
    motor_B.Motor_XHHY.ZV_KD = 0.0;
    motor_B.Motor_XHHY.Sum_b = 0.0;
    motor_B.Motor_XHHY.ZV_KN = 0.0;
    motor_B.Motor_XHHY.Saturation_a = 0.0;
    motor_B.Motor_XHHY.KD_KG_a = 0.0;
    motor_B.Motor_XHHY.V_KP = 0.0;
    motor_B.Motor_XHHY.Product_e = 0.0;
    motor_B.Motor_XHHY.V_KI = 0.0;
    motor_B.Motor_XHHY.Product1 = 0.0;
    motor_B.Motor_XHHY.Sign = 0.0;
    motor_B.Motor_XHHY.ZV1_Kp1 = 0.0;
    motor_B.Motor_XHHY.ZV1_Kp2 = 0.0;
    motor_B.Motor_XHHY.Sum2_n = 0.0;
    motor_B.Motor_XHHY.Sum1_du = 0.0;
    motor_B.Motor_XHHY.KP_JD1 = 0.0;
    motor_B.Motor_XHHY.KP_e = 0.0;
    motor_B.Motor_XHHY.ZXF_PID = 0.0;
    motor_B.Motor_XHHY.Subtract = 0.0;
    motor_B.Motor_XHHY.ZXF_PWM = 0.0;
    motor_B.Motor_XHHY.DataTypeConversion4 = 0.0;
    motor_B.Motor_XHHY.DataTypeConversion2 = 0.0;
    motor_B.Motor_XHHY.GXZ3 = 0.0;
    motor_B.Motor_XHHY.XF_XHZY = 0.0;
    motor_B.Motor_XHHY.Product1_l = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&motor_DWork, 0,
                sizeof(D_Work_motor));
  motor_DWork.UnitDelay_DSTATE = 0.0;
  motor_DWork.DiscreteTimeIntegrator_DSTATE = 0.0;
  motor_DWork.DiscreteTimeIntegrator1_DSTATE = 0.0;
  motor_DWork.Angle_extern = 0.0;
  motor_DWork.Angle_internal = 0.0;
  motor_DWork.P_KP = 0.0;
  motor_DWork.Rate_limit_speed = 0.0;
  motor_DWork.Saturation_limit_speed = 0.0;
  motor_DWork.T = 0.0;
  motor_DWork.T_Count = 0.0;
  motor_DWork.Temp1 = 0.0;
  motor_DWork.Temp2 = 0.0;
  motor_DWork.V_KI = 0.0;
  motor_DWork.V_KP = 0.0;
  motor_DWork.chu_jd = 0.0;
  motor_DWork.Angle_S = 0.0;
  motor_DWork.Ts = 0.0;
  motor_DWork.Encode_Pos0 = 0.0;
  motor_DWork.Showing_Angle0 = 0.0;
  motor_DWork.Showing_Angle_Last = 0.0;
  motor_DWork.Showing_T_Last = 0.0;
  motor_DWork.Average_En = 0.0;
  motor_DWork.XiaoDaShen = 0.0;
  motor_DWork.Cur_GZ_Limit_Down = 0.0;
  motor_DWork.Cur_Limit_Down = 0.0;
  motor_DWork.Sum1_DWORK1 = 0.0;
  motor_DWork.Waveform_Build.Delay5_DSTATE = 0.0;
  motor_DWork.Waveform_Build.Delay7_DSTATE = 0.0;
  motor_DWork.Waveform_Build.Delay6_DSTATE = 0.0;
  motor_DWork.Waveform_Build.DelayInput2_DSTATE = 0.0;
  motor_DWork.Motor_HYDG1.DiscreteTimeIntegrator_DSTATE = 0.0;
  motor_DWork.Motor_HYDG1.DiscreteTimeIntegrator_DSTATE_a = 0.0;
  motor_DWork.Motor_HYDG1.DiscreteTimeIntegrator1_DSTATE = 0.0;
  motor_DWork.Motor_HYDG1.UnitDelay_DSTATE = 0.0;
  motor_DWork.Motor_XHZY.DiscreteTimeIntegrator_DSTATE = 0.0;
  motor_DWork.Motor_XHZY.DiscreteTimeIntegrator_DSTATE_c = 0.0;
  motor_DWork.Motor_XHZY.DiscreteTimeIntegrator1_DSTATE = 0.0;
  motor_DWork.Motor_XHZY.Sum1_DWORK1 = 0.0;
  motor_DWork.Motor_HYDG.DiscreteTimeIntegrator_DSTATE = 0.0;
  motor_DWork.Motor_HYDG.DiscreteTimeIntegrator_DSTATE_i = 0.0;
  motor_DWork.Motor_HYDG.DiscreteTimeIntegrator1_DSTATE = 0.0;
  motor_DWork.Motor_HYDG.Sum2_DWORK1 = 0.0;
  motor_DWork.Motor_XHHY.DiscreteTimeIntegrator_DSTATE = 0.0;
  motor_DWork.Motor_XHHY.DiscreteTimeIntegrator_DSTATE_i = 0.0;
  motor_DWork.Motor_XHHY.DiscreteTimeIntegrator1_DSTATE = 0.0;
  motor_DWork.Motor_XHHY.Sum1_DWORK1 = 0.0;

  /* external inputs */
  (void) memset((void *)&motor_U, 0,
                sizeof(ExternalInputs_motor));

  /* external outputs */
  (void) memset((void *)&motor_Y, 0,
                sizeof(ExternalOutputs_motor));

  {
    uint32_T prevT_idx_1;
    uint32_T prevT_idx_0;

    /* Start for Chart: '<Root>/Chart' incorporates:
     *  Start for SubSystem: '<S1>/BJ'
     */

    /* Start for IfAction SubSystem: '<S5>/If Action Subsystem' */
    motor_IfActionSubsystem_p_Start(&motor_DWork.IfActionSubsystem);

    /* End of Start for SubSystem: '<S5>/If Action Subsystem' */

    /* Start for IfAction SubSystem: '<S5>/If Action Subsystem1' */

    /* Start for IfAction SubSystem: '<S24>/If Action Subsystem' */
    motor_IfActionSubsystem_Start(&motor_DWork.IfActionSubsystem_f);

    /* End of Start for SubSystem: '<S24>/If Action Subsystem' */

    /* Start for IfAction SubSystem: '<S24>/If Action Subsystem1' */
    motor_IfActionSubsystem1_Start(&motor_DWork.IfActionSubsystem1_m);

    /* End of Start for SubSystem: '<S24>/If Action Subsystem1' */

    /* InitializeConditions for IfAction SubSystem: '<S24>/If Action Subsystem2' */
    /* InitializeConditions for DiscretePulseGenerator: '<S31>/Pulse Generator' */
    motor_DWork.clockTickCounter = 0;

    /* End of InitializeConditions for SubSystem: '<S24>/If Action Subsystem2' */
    /* End of Start for SubSystem: '<S5>/If Action Subsystem1' */

    /* Start for IfAction SubSystem: '<S5>/If Action Subsystem2' */
    motor_IfActionSubsystem_p_Start(&motor_DWork.IfActionSubsystem2);

    /* End of Start for SubSystem: '<S5>/If Action Subsystem2' */

    /* Start for Chart: '<Root>/Chart' incorporates:
     *  Start for SubSystem: '<S1>/Waveform_Build'
     */
    motor_Waveform_Build_Start(&motor_DWork.Waveform_Build);

    /* Start for DataStoreMemory: '<Root>/Angle_extern' */
    motor_DWork.Angle_extern = motor_P.Angle_extern_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Angle_internal' */
    motor_DWork.Angle_internal = motor_P.Angle_internal_InitialValue;

    /* Start for DataStoreMemory: '<Root>/EN_extern' */
    motor_DWork.EN_extern = motor_P.EN_extern_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Forword' */
    motor_DWork.Forword = motor_P.Forword_InitialValue;

    /* Start for DataStoreMemory: '<Root>/JD_HYDG' */
    motor_DWork.JD_HYDG = motor_P.JD_HYDG_InitialValue;

    /* Start for DataStoreMemory: '<Root>/JD_HYDG_HC' */
    motor_DWork.JD_HYDG_HC = motor_P.JD_HYDG_HC_InitialValue;

    /* Start for DataStoreMemory: '<Root>/JD_XHHY' */
    motor_DWork.JD_XHHY = motor_P.JD_XHHY_InitialValue;

    /* Start for DataStoreMemory: '<Root>/JD_XHHY_HC' */
    motor_DWork.JD_XHHY_HC = motor_P.JD_XHHY_HC_InitialValue;

    /* Start for DataStoreMemory: '<Root>/JD_XHZY' */
    motor_DWork.JD_XHZY = motor_P.JD_XHZY_InitialValue;

    /* Start for DataStoreMemory: '<Root>/JD_XHZY_HC' */
    motor_DWork.JD_XHZY_HC = motor_P.JD_XHZY_HC_InitialValue;

    /* Start for DataStoreMemory: '<Root>/KG' */
    motor_DWork.KG = motor_P.KG_InitialValue;

    /* Start for DataStoreMemory: '<Root>/KG_En' */
    motor_DWork.KG_En = motor_P.KG_En_InitialValue;

    /* Start for DataStoreMemory: '<Root>/KG_JD' */
    motor_DWork.KG_JD = motor_P.KG_JD_InitialValue;

    /* Start for DataStoreMemory: '<Root>/KG_YJ' */
    motor_DWork.KG_YJ = motor_P.KG_YJ_InitialValue;

    /* Start for DataStoreMemory: '<Root>/KG_clc' */
    motor_DWork.KG_clc = motor_P.KG_clc_InitialValue;

    /* Start for DataStoreMemory: '<Root>/PC1' */
    motor_DWork.PC1 = motor_P.PC1_InitialValue;

    /* Start for DataStoreMemory: '<Root>/PC2' */
    motor_DWork.PC2 = motor_P.PC2_InitialValue;

    /* Start for DataStoreMemory: '<Root>/P_KP' */
    motor_DWork.P_KP = motor_P.P_KP_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Rate_limit_speed' */
    motor_DWork.Rate_limit_speed = motor_P.Rate_limit_speed_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Saturation_limit_speed' */
    motor_DWork.Saturation_limit_speed = motor_P.Saturation_limit_speed_InitialV;

    /* Start for DataStoreMemory: '<Root>/T' */
    motor_DWork.T = motor_P.T_InitialValue;

    /* Start for DataStoreMemory: '<Root>/T_Count' */
    motor_DWork.T_Count = motor_P.T_Count_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Temp1' */
    motor_DWork.Temp1 = motor_P.Temp1_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Temp2' */
    motor_DWork.Temp2 = motor_P.Temp2_InitialValue;

    /* Start for DataStoreMemory: '<Root>/V_KI' */
    motor_DWork.V_KI = motor_P.V_KI_InitialValue;

    /* Start for DataStoreMemory: '<Root>/V_KP' */
    motor_DWork.V_KP = motor_P.V_KP_InitialValue;

    /* Start for DataStoreMemory: '<Root>/YJ_XHZY' */
    motor_DWork.YJ_XHZY = motor_P.YJ_XHZY_InitialValue;

    /* Start for DataStoreMemory: '<Root>/YJ_XHZY_HC' */
    motor_DWork.YJ_XHZY_HC = motor_P.YJ_XHZY_HC_InitialValue;

    /* Start for DataStoreMemory: '<Root>/chu_jd' */
    motor_DWork.chu_jd = motor_P.chu_jd_InitialValue;

    /* Start for DataStoreMemory: '<Root>/chu_jd1' */
    motor_DWork.Angle_S = motor_P.chu_jd1_InitialValue;
    motor_DWork.is_Ready = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Current_check = 0U;
    motor_DWork.is_Current_check = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Fault_Exit = 0U;
    motor_DWork.is_active_Limit_Fault_Exit = 0U;
    motor_DWork.is_Limit_Fault_Exit = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i7 = 0U;
    motor_DWork.is_active_M_Run = 0U;
    motor_DWork.is_M_Run = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Close = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Algorithm = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HYDG_Close = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY_Close = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY_Close = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Initialize = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_hy = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_xhhy = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_xhzy = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Normal_Mode = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Enc_GZ = 0U;
    motor_DWork.is_active_Enc1 = 0U;
    motor_DWork.is_Enc1 = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Enc2 = 0U;
    motor_DWork.is_Enc2 = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i6 = 0U;
    motor_DWork.temporalCounter_i5 = 0U;
    motor_DWork.is_active_RUN = 0U;
    motor_DWork.is_active_Algorithm = 0U;
    motor_DWork.is_Algorithm_l = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HY = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Error_Check = 0U;
    motor_DWork.is_Error_Check = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Error_Check_g = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i9 = 0U;
    motor_DWork.is_active_GXDY_COM_GZ = 0U;
    motor_DWork.is_GXDY_COM_GZ = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i3 = 0U;
    motor_DWork.is_active_GXDY_SJ_BJ = 0U;
    motor_DWork.is_GXDY_SJ_BJ = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Limit_Check = 0U;
    motor_DWork.is_Limit_Check = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i4 = 0U;
    motor_DWork.is_Showing_Mode = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_Algorithm_b = 0U;
    motor_DWork.is_Algorithm_e = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HY_e = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Down_Test_i = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HY_aj = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY_fs = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY_m = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Up_Test_j = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HY_l = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY_nb = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY_d = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY_n = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY_h = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i2 = 0U;
    motor_DWork.is_active_Limit_Check_o = 0U;
    motor_DWork.is_Limit_Check_j = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Test_Mode = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Dspace_Test = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Elevation_Test = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Down_Test = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HY_h = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY_f = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY_i = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_Limit_Up_Test = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_HY_a = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHHY_nl = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_XHZY_a = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i1 = 0U;
    motor_DWork.is_active_Motor_check = 0U;
    motor_DWork.is_Motor_check = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.temporalCounter_i8 = 0U;
    motor_DWork.is_active_Temp_check = 0U;
    motor_DWork.is_active_ZHI_S_D = 0U;
    motor_DWork.is_ZHI_S_D = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.is_active_c3_motor = 0U;
    motor_DWork.is_c3_motor = motor_IN_NO_ACTIVE_CHILD;
    motor_DWork.Cur_Limit = 0U;
    motor_DWork.Temp_Up_Limit = 0U;
    motor_DWork.PWM_Value_Mid = 0U;
    motor_DWork.Encode_Sp_Min = 0U;
    motor_DWork.Encode_Pos1 = 0;
    motor_DWork.Encode_Pos2 = 0;
    motor_DWork.Encode_Pos3 = 0;
    motor_DWork.Encode_Pos_Zero = 0U;
    motor_DWork.Ts = 0.0;
    motor_DWork.JD_Max = 0U;
    motor_DWork.Encode_Sp_Max = 0U;
    motor_DWork.cur_i = 0U;
    motor_DWork.Temp_Down_Limit = 0U;
    motor_DWork.In_State = 0U;
    motor_DWork.Enc_i = 0U;
    motor_DWork.can1_i = 0U;
    motor_DWork.GXDY_i = 0U;
    motor_DWork.Cur_GZ_Limit = 0U;
    motor_DWork.Encode_Pos0 = 0.0;
    motor_DWork.Showing_Angle0 = 0.0;
    motor_DWork.Showing_Angle_Last = 0.0;
    motor_DWork.Showing_T_Last = 0.0;
    motor_DWork.Average_En = 0.0;
    motor_DWork.XiaoDaShen = 0.0;
    motor_DWork.Cur_GZ_Limit_Down = 0.0;
    motor_DWork.Cur_Limit_Down = 0.0;
    motor_DWork.Runing_stable = 0U;

    /* InitializeConditions for Outport: '<Root>/Ini_Result' */
    motor_Y.Ini_Result = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Cur' */
    motor_Y.Flag_Cur = 0U;

    /* InitializeConditions for Outport: '<Root>/Motor_En' */
    motor_Y.Motor_En = false;

    /* InitializeConditions for Outport: '<Root>/Flag_Temp_Up' */
    motor_Y.Flag_Temp_Up = 0U;

    /* InitializeConditions for Outport: '<Root>/Open_Result' */
    motor_Y.Open_Result = 0U;

    /* InitializeConditions for Outport: '<Root>/Encode_Pos' */
    motor_Y.Encode_Pos = 0;

    /* InitializeConditions for Outport: '<Root>/PWMOUT' */
    motor_Y.PWMOUT = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Temp_Down' */
    motor_Y.Flag_Temp_Down = 0U;

    /* InitializeConditions for Outport: '<Root>/QDQ_BJ' */
    motor_Y.QDQ_BJ = 0U;

    /* InitializeConditions for Outport: '<Root>/QDQ_XH' */
    motor_Y.QDQ_XH = true;

    /* InitializeConditions for Outport: '<Root>/QDQ_HY' */
    motor_Y.QDQ_HY = true;

    /* InitializeConditions for Outport: '<Root>/Flag_Up_limit' */
    motor_Y.Flag_Up_limit = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Down_limit' */
    motor_Y.Flag_Down_limit = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Enc_Error' */
    motor_Y.Flag_Enc_Error = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Motor_Error' */
    motor_Y.Flag_Motor_Error = 0U;

    /* InitializeConditions for Outport: '<Root>/DCZD' */
    motor_Y.DCZD = false;

    /* InitializeConditions for Outport: '<Root>/Flag_GXDY_Error' */
    motor_Y.Flag_GXDY_Error = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_GXDY_IT' */
    motor_Y.Flag_GXDY_IT = 0U;

    /* InitializeConditions for Outport: '<Root>/JD_Error' */
    motor_Y.JD_Error = 0;

    /* InitializeConditions for Outport: '<Root>/JD_Out' */
    motor_Y.JD_Out = 0;

    /* InitializeConditions for Outport: '<Root>/SGWY_Out' */
    motor_Y.SGWY_Out = 0;

    /* InitializeConditions for Outport: '<Root>/Flag_GZ_Cur' */
    motor_Y.Flag_GZ_Cur = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Up_GZ_limit' */
    motor_Y.Flag_Up_GZ_limit = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_Down_GZ_limit' */
    motor_Y.Flag_Down_GZ_limit = 0U;

    /* InitializeConditions for Outport: '<Root>/Alarm_Cunt' */
    motor_Y.Alarm_Cunt = 0U;

    /* InitializeConditions for Outport: '<Root>/dSpace_Init' */
    motor_Y.dSpace_Init = 0U;

    /* InitializeConditions for Outport: '<Root>/Flag_AngleError' */
    motor_Y.Flag_AngleError = 0U;

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/Motor_XHHY'
     */
    motor_Motor_XHHY_Init(motor_M, &motor_DWork.Motor_XHHY,
                          (rtP_Motor_XHHY_motor *)&motor_P.Motor_XHHY);

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/Open_Motor'
     */
    prevT_idx_0 = motor_M->Timing.clockTick0;
    prevT_idx_1 = motor_M->Timing.clockTickH0;
    motor_DWork.Open_Motor_PREV_T[0] = prevT_idx_0;
    motor_DWork.Open_Motor_PREV_T[1] = prevT_idx_1;

    /* InitializeConditions for DiscreteIntegrator: '<S66>/Discrete-Time Integrator' */
    motor_DWork.DiscreteTimeIntegrator_DSTATE =
      motor_P.DiscreteTimeIntegrator_IC;
    motor_DWork.DiscreteTimeIntegrator_PrevRese = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S66>/Discrete-Time Integrator1' */
    motor_DWork.DiscreteTimeIntegrator1_DSTATE =
      motor_P.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/Motor_HYDG'
     */
    motor_Motor_HYDG_Init(motor_M, &motor_DWork.Motor_HYDG,
                          (rtP_Motor_HYDG_motor *)&motor_P.Motor_HYDG);

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/Motor_XHZY'
     */
    motor_Motor_XHZY_Init(motor_M, &motor_DWork.Motor_XHZY,
                          (rtP_Motor_XHZY_motor *)&motor_P.Motor_XHZY);

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/COM_Error'
     */
    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
    motor_DWork.UnitDelay_DSTATE = motor_P.UnitDelay_InitialCondition;

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/Motor_HYDG1'
     */
    motor_Motor_HYDG1_Init(motor_M, &motor_DWork.Motor_HYDG1,
      (rtP_Motor_HYDG1_motor *)&motor_P.Motor_HYDG1);

    /* InitializeConditions for Chart: '<Root>/Chart' incorporates:
     *  InitializeConditions for SubSystem: '<S1>/Waveform_Build'
     */
    motor_Waveform_Build_Init(motor_M, &motor_DWork.Waveform_Build,
      (rtP_Waveform_Build_motor *)&motor_P.Waveform_Build);
  }
}

/* Model terminate function */
void motor_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
