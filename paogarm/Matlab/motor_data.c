/*
 * File: motor_data.c
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

/* Block parameters (auto storage) */
Parameters_motor motor_P = {
  2500.0,                              /* Expression: 2500
                                        * Referenced by: '<S11>/Con_ZPWM'
                                        */
  1200.0,                              /* Expression: 1200
                                        * Referenced by: '<S11>/SUDU_IN'
                                        */
  0.002,                               /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S66>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S66>/Discrete-Time Integrator'
                                        */
  1000.0,                              /* Expression: 1000
                                        * Referenced by: '<S66>/Discrete-Time Integrator'
                                        */
  -1000.0,                             /* Expression: -1000
                                        * Referenced by: '<S66>/Discrete-Time Integrator'
                                        */
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<S66>/ZV_Kp'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S66>/ZV_Kpt'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S66>/ZV_Kp1'
                                        */
  0.095,                               /* Expression: 0.095
                                        * Referenced by: '<S66>/ZV_KD'
                                        */
  0.002,                               /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S66>/Discrete-Time Integrator1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S66>/Discrete-Time Integrator1'
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<S66>/ZV_KN'
                                        */
  300.0,                               /* Expression: 300
                                        * Referenced by: '<S66>/Saturation'
                                        */
  -300.0,                              /* Expression: -300
                                        * Referenced by: '<S66>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S66>/KD_KG'
                                        */
  2500.0,                              /* Expression: 2500
                                        * Referenced by: '<S11>/ZXF_PID'
                                        */
  -2500.0,                             /* Expression: -2500
                                        * Referenced by: '<S11>/ZXF_PID'
                                        */
  4800.0,                              /* Expression: 4800
                                        * Referenced by: '<S11>/ZXF_PWM'
                                        */
  200.0,                               /* Expression: 200
                                        * Referenced by: '<S11>/ZXF_PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S66>/ZV_Ki'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  500.0,                               /* Expression: 500
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  250.0,                               /* Expression: 250
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Pulse Generator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay'
                                        */
  0.0054931640625,                     /* Expression: 360/65536
                                        * Referenced by: '<S4>/GXZ6'
                                        */
  0.003105590062111801,                /* Expression: 1/322
                                        * Referenced by: '<S4>/GXZ1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Angle_extern'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Angle_internal'
                                        */
  330.0,                               /* Expression: 330
                                        * Referenced by: '<Root>/P_KP'
                                        */
  50000.0,                             /* Expression: 50000
                                        * Referenced by: '<Root>/Rate_limit_speed'
                                        */
  16000.0,                             /* Expression: 16000
                                        * Referenced by: '<Root>/Saturation_limit_speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/T'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/T_Count'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Temp1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Temp2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/V_KI'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/V_KP'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/chu_jd'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/chu_jd1'
                                        */

  { { 0UL, 0x7D000000UL } },           /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S11>/GXZ5'
                                        */
  0,                                   /* Computed Parameter: JD_HYDG_InitialValue
                                        * Referenced by: '<Root>/JD_HYDG'
                                        */
  0,                                   /* Computed Parameter: JD_HYDG_HC_InitialValue
                                        * Referenced by: '<Root>/JD_HYDG_HC'
                                        */
  0,                                   /* Computed Parameter: JD_XHHY_InitialValue
                                        * Referenced by: '<Root>/JD_XHHY'
                                        */
  0,                                   /* Computed Parameter: JD_XHHY_HC_InitialValue
                                        * Referenced by: '<Root>/JD_XHHY_HC'
                                        */
  0,                                   /* Computed Parameter: JD_XHZY_InitialValue
                                        * Referenced by: '<Root>/JD_XHZY'
                                        */
  0,                                   /* Computed Parameter: JD_XHZY_HC_InitialValue
                                        * Referenced by: '<Root>/JD_XHZY_HC'
                                        */
  0,                                   /* Computed Parameter: YJ_XHZY_InitialValue
                                        * Referenced by: '<Root>/YJ_XHZY'
                                        */
  0,                                   /* Computed Parameter: YJ_XHZY_HC_InitialValue
                                        * Referenced by: '<Root>/YJ_XHZY_HC'
                                        */
  1509949440,                          /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S11>/GXZ4'
                                        */
  0U,                                  /* Computed Parameter: EN_extern_InitialValue
                                        * Referenced by: '<Root>/EN_extern'
                                        */
  1U,                                  /* Computed Parameter: Forword_InitialValue
                                        * Referenced by: '<Root>/Forword'
                                        */
  0U,                                  /* Computed Parameter: KG_InitialValue
                                        * Referenced by: '<Root>/KG'
                                        */
  0U,                                  /* Computed Parameter: KG_En_InitialValue
                                        * Referenced by: '<Root>/KG_En'
                                        */
  0U,                                  /* Computed Parameter: KG_JD_InitialValue
                                        * Referenced by: '<Root>/KG_JD'
                                        */
  0U,                                  /* Computed Parameter: KG_YJ_InitialValue
                                        * Referenced by: '<Root>/KG_YJ'
                                        */
  0U,                                  /* Computed Parameter: KG_clc_InitialValue
                                        * Referenced by: '<Root>/KG_clc'
                                        */
  1,                                   /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S31>/Constant'
                                        */
  0,                                   /* Computed Parameter: PC1_InitialValue
                                        * Referenced by: '<Root>/PC1'
                                        */
  0,                                   /* Computed Parameter: PC2_InitialValue
                                        * Referenced by: '<Root>/PC2'
                                        */

  /* Start of '<S1>/Showing_XHHY' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
    0.20943951023931953,               /* Expression: pi/15
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave8'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
    0.241660973353061,                 /* Expression: pi/13
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave7'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
    0.31415926535897931,               /* Expression: pi/10
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave6'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
    0.39269908169872414,               /* Expression: pi/8
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave5'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
    0.52359877559829882,               /* Expression: pi/6
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave4'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
    0.62831853071795862,               /* Expression: pi/5
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave3'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
    0.78539816339744828,               /* Expression: pi/4
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave2'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
    1.0471975511965976,                /* Expression: pi/3
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
    1.5707963267948966,                /* Expression: pi/2
                                        * Referenced by: '<S13>/Sine Wave1'
                                        */
    -1.0                               /* Expression: -1
                                        * Referenced by: '<S13>/Gain'
                                        */
  }
  /* End of '<S1>/Showing_XHHY' */
  ,

  /* Start of '<S1>/Waveform_Build' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S14>/Gain7'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S69>/Constant3'
                                        */
    999.0,                             /* Expression: 999
                                        * Referenced by: '<S69>/Saturation'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S69>/Saturation'
                                        */
    0.0,                               /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay5'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S14>/Gain1'
                                        */
    25.0,                              /* Expression: 25
                                        * Referenced by: '<S14>/XF_XHZY'
                                        */
    -25.0,                             /* Expression: -25
                                        * Referenced by: '<S14>/XF_XHZY'
                                        */
    0.0,                               /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay7'
                                        */
    0.0,                               /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay6'
                                        */
    150.0,                             /* Expression: 150
                                        * Referenced by: '<S14>/Switch'
                                        */
    25.0,                              /* Expression: 25
                                        * Referenced by: '<S14>/Constant2'
                                        */
    5.0,                               /* Expression: 5
                                        * Referenced by: '<S14>/Saturation2'
                                        */
    0.1,                               /* Expression: 0.1
                                        * Referenced by: '<S14>/Saturation2'
                                        */
    500.0,                             /* Expression: 500
                                        * Referenced by: '<S14>/Constant3'
                                        */
    50.0,                              /* Expression: 50
                                        * Referenced by: '<S14>/Saturation1'
                                        */
    0.01,                              /* Expression: 0.01
                                        * Referenced by: '<S14>/Saturation1'
                                        */
    1.0,                               /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S71>/sample time'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S71>/Delay Input2'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S14>/Gain3'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S14>/Gain2'
                                        */
    1U,                                /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<S14>/Delay5'
                                        */
    1U,                                /* Computed Parameter: Delay7_DelayLength
                                        * Referenced by: '<S14>/Delay7'
                                        */
    1U                                 /* Computed Parameter: Delay6_DelayLength
                                        * Referenced by: '<S14>/Delay6'
                                        */
  }
  /* End of '<S1>/Waveform_Build' */
  ,

  /* Start of '<S1>/Angle_Calculation_HY' */
  {
    0.0054931640625,                   /* Expression: 360/65536
                                        * Referenced by: '<S3>/GHDG5'
                                        */
    0.0054131054131054132,             /* Expression: 19*4/(360*39)
                                        * Referenced by: '<S21>/GHDG7'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S21>/GHDG8'
                                        */
    -57.295779513082323                /* Expression: (-180)/pi
                                        * Referenced by: '<S21>/GHDG9'
                                        */
  }
  /* End of '<S1>/Angle_Calculation_HY' */
  ,

  /* Start of '<S1>/Showing' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
    0.20943951023931953,               /* Expression: pi/15
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave8'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
    0.241660973353061,                 /* Expression: pi/13
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave7'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
    0.31415926535897931,               /* Expression: pi/10
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave6'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
    0.39269908169872414,               /* Expression: pi/8
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave5'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
    0.52359877559829882,               /* Expression: pi/6
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave4'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
    0.62831853071795862,               /* Expression: pi/5
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave3'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
    0.78539816339744828,               /* Expression: pi/4
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave2'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
    1.0471975511965976,                /* Expression: pi/3
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
    0.0                                /* Expression: 0
                                        * Referenced by: '<S12>/Sine Wave1'
                                        */
  }
  /* End of '<S1>/Showing' */
  ,

  /* Start of '<S1>/Motor_HYDG1' */
  {
    { { 0UL, 0UL, 0UL, 0xA00UL } },    /* Computed Parameter: XF_XHZY_UpperSat
                                        * Referenced by: '<S8>/XF_XHZY'
                                        */

    { { 0UL, 0UL, 0UL, 0xFFFFF600UL } },/* Computed Parameter: XF_XHZY_LowerSat
                                         * Referenced by: '<S8>/XF_XHZY'
                                         */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S8>/Constant'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S42>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S42>/Discrete-Time Integrator'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S42>/Discrete-Time Integrator'
                                        */
    -1000.0,                           /* Expression: -1000
                                        * Referenced by: '<S42>/Discrete-Time Integrator'
                                        */
    0.017453292519943295,              /* Expression: pi/180
                                        * Referenced by: '<S8>/GHDG2'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S8>/GHDG3'
                                        */
    184.73684210526315,                /* Expression: (360*39)/(19*4)
                                        * Referenced by: '<S8>/GHDG4'
                                        */
    -0.0054931640625,                  /* Expression: (-360)/65536
                                        * Referenced by: '<S8>/GHDG5'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S8>/fk_dg1'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S8>/fk_dg'
                                        */
    200.0,                             /* Expression: 200
                                        * Referenced by: '<S8>/Saturation1'
                                        */
    -200.0,                            /* Expression: -200
                                        * Referenced by: '<S8>/Saturation1'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S42>/ZP_Kp'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S42>/ZV_KD1'
                                        */
    400.0,                             /* Expression: 400
                                        * Referenced by: '<S42>/ZP_KN'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S42>/KD_KG'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainva_p
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
    2000.0,                            /* Expression: 2000
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
    -2000.0,                           /* Expression: -2000
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S43>/Discrete-Time Integrator1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S43>/Discrete-Time Integrator1'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S43>/Discrete-Time Integrator1'
                                        */
    -1000.0,                           /* Expression: -1000
                                        * Referenced by: '<S43>/Discrete-Time Integrator1'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S8>/KP_e2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S8>/Unit Delay'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S8>/GXZ5'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S8>/fk_dg2'
                                        */
    1.5,                               /* Expression: 1.5
                                        * Referenced by: '<S43>/ZV_Kp'
                                        */
    1.0E-5,                            /* Expression: 0.00001
                                        * Referenced by: '<S43>/ZV_Kp1'
                                        */
    500.0,                             /* Expression: 500
                                        * Referenced by: '<S43>/ZV_KN'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S43>/KD_KG'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S43>/ZV1_Kp1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S43>/ZV1_Kp2'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S8>/XF_PID'
                                        */
    -2500.0,                           /* Expression: -2500
                                        * Referenced by: '<S8>/XF_PID'
                                        */
    4900.0,                            /* Expression: 4900
                                        * Referenced by: '<S8>/XF_PWM'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S8>/XF_PWM'
                                        */
    0.0054131054131054132,             /* Expression: 19*4/(360*39)
                                        * Referenced by: '<S8>/GHDG7'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S8>/GHDG8'
                                        */
    -57.295779513082323,               /* Expression: (-180)/pi
                                        * Referenced by: '<S8>/GHDG9'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S8>/fk_dg3'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S8>/KP_JD'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S8>/KP_e'
                                        */

    { { 0xC6A7F000UL, 0x4189374BUL } },/* Computed Parameter: GHDG1_Gain
                                        * Referenced by: '<S8>/GHDG1'
                                        */
    MIN_int32_T                        /* Computed Parameter: GHDG10_Gain
                                        * Referenced by: '<S8>/GHDG10'
                                        */
  }
  /* End of '<S1>/Motor_HYDG1' */
  ,

  /* Start of '<S5>/If Action Subsystem2' */
  {
    1,                                 /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S34>/Constant'
                                        */
    0,                                 /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S34>/Constant1'
                                        */

    /* Start of '<S23>/If Action Subsystem1' */
    {
      1.0,                             /* Expression: 1
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
      500.0,                           /* Expression: 500
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
      250.0,                           /* Expression: 250
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
      0.0,                             /* Expression: 0
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
      1                                /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S33>/Constant'
                                        */
    }
    /* End of '<S23>/If Action Subsystem1' */
    ,

    /* Start of '<S23>/If Action Subsystem' */
    {
      1.0,                             /* Expression: 1
                                        * Referenced by: '<S32>/Pulse Generator'
                                        */
      500.0,                           /* Expression: 500
                                        * Referenced by: '<S32>/Pulse Generator'
                                        */
      250.0,                           /* Expression: 250
                                        * Referenced by: '<S32>/Pulse Generator'
                                        */
      0.0                              /* Expression: 0
                                        * Referenced by: '<S32>/Pulse Generator'
                                        */
    }
    /* End of '<S23>/If Action Subsystem' */
  }
  /* End of '<S5>/If Action Subsystem2' */
  ,

  /* Start of '<S24>/If Action Subsystem1' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S30>/Pulse Generator'
                                        */
    500.0,                             /* Expression: 500
                                        * Referenced by: '<S30>/Pulse Generator'
                                        */
    250.0,                             /* Expression: 250
                                        * Referenced by: '<S30>/Pulse Generator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S30>/Pulse Generator'
                                        */
    1                                  /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S30>/Constant'
                                        */
  }
  /* End of '<S24>/If Action Subsystem1' */
  ,

  /* Start of '<S24>/If Action Subsystem' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
    500.0,                             /* Expression: 500
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
    250.0,                             /* Expression: 250
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
    0.0                                /* Expression: 0
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
  }
  /* End of '<S24>/If Action Subsystem' */
  ,

  /* Start of '<S5>/If Action Subsystem' */
  {
    1,                                 /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S28>/Constant'
                                        */
    0,                                 /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S28>/Constant1'
                                        */

    /* Start of '<S23>/If Action Subsystem1' */
    {
      1.0,                             /* Expression: 1
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
      500.0,                           /* Expression: 500
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
      250.0,                           /* Expression: 250
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
      0.0,                             /* Expression: 0
                                        * Referenced by: '<S27>/Pulse Generator'
                                        */
      1                                /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S27>/Constant'
                                        */
    }
    /* End of '<S23>/If Action Subsystem1' */
    ,

    /* Start of '<S23>/If Action Subsystem' */
    {
      1.0,                             /* Expression: 1
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
      500.0,                           /* Expression: 500
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
      250.0,                           /* Expression: 250
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
      0.0                              /* Expression: 0
                                        * Referenced by: '<S26>/Pulse Generator'
                                        */
    }
    /* End of '<S23>/If Action Subsystem' */
  }
  /* End of '<S5>/If Action Subsystem' */
  ,

  /* Start of '<S1>/Motor_XHZY' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S63>/Constant'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S64>/Constant'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S10>/GXZ2'
                                        */
    10.0,                              /* Expression: 10
                                        * Referenced by: '<S10>/XF_YJ'
                                        */
    -10.0,                             /* Expression: -10
                                        * Referenced by: '<S10>/XF_YJ'
                                        */
    -0.0054931640625,                  /* Expression: (-360)/65536
                                        * Referenced by: '<S10>/GXZ6'
                                        */
    0.003105590062111801,              /* Expression: 1/322
                                        * Referenced by: '<S10>/GXZ1'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S10>/GXZ9'
                                        */
    0.0054131054131054132,             /* Expression: 19/(39*90)
                                        * Referenced by: '<S10>/GXZ7'
                                        */
    -57.295779513082323,               /* Expression: (-180)/pi
                                        * Referenced by: '<S10>/GXZ8'
                                        */
    15.0,                              /* Expression: 15
                                        * Referenced by: '<S10>/JD_e(k)'
                                        */
    -15.0,                             /* Expression: -15
                                        * Referenced by: '<S10>/JD_e(k)'
                                        */
    322.0,                             /* Expression: 322
                                        * Referenced by: '<S10>/CDB_XHHY'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S10>/Con_ZPWM'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S58>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S58>/Discrete-Time Integrator'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S58>/ZP_Kp2'
                                        */
    0.036,                             /* Expression: 0.036
                                        * Referenced by: '<S58>/ZV_KD1'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S58>/ZP_KN'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S58>/KD_KG'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S58>/ZP_Kp1'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
    2000.0,                            /* Expression: 2000
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
    -2000.0,                           /* Expression: -2000
                                        * Referenced by: '<S59>/Discrete-Time Integrator'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S59>/Discrete-Time Integrator1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S59>/Discrete-Time Integrator1'
                                        */
    8000.0,                            /* Expression: 8000
                                        * Referenced by: '<S10>/Saturation'
                                        */
    -8000.0,                           /* Expression: -8000
                                        * Referenced by: '<S10>/Saturation'
                                        */
    0.12,                              /* Expression: 0.12
                                        * Referenced by: '<S59>/ZV_Kp'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S59>/ZV_Kp1'
                                        */
    0.05,                              /* Expression: 0.05
                                        * Referenced by: '<S59>/ZV_KD'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S59>/ZV_KN'
                                        */
    300.0,                             /* Expression: 300
                                        * Referenced by: '<S59>/Saturation'
                                        */
    -300.0,                            /* Expression: -300
                                        * Referenced by: '<S59>/Saturation'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S59>/KD_KG'
                                        */
    3000.0,                            /* Expression: 3000
                                        * Referenced by: '<S10>/Saturation1'
                                        */
    -3000.0,                           /* Expression: -3000
                                        * Referenced by: '<S10>/Saturation1'
                                        */
    -0.09,                             /* Expression: -0.09
                                        * Referenced by: '<S59>/ZV1_Kp1'
                                        */
    -20.0,                             /* Expression: -20
                                        * Referenced by: '<S59>/ZV1_Kp2'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S10>/KP_JD1'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S10>/KP_JD'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S10>/KP_e'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S10>/ZXF_PID'
                                        */
    -2500.0,                           /* Expression: -2500
                                        * Referenced by: '<S10>/ZXF_PID'
                                        */
    4900.0,                            /* Expression: 4900
                                        * Referenced by: '<S10>/ZXF_PWM'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S10>/ZXF_PWM'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S10>/GXZ3'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S10>/GXZ10'
                                        */
    15.0,                              /* Expression: 15
                                        * Referenced by: '<S10>/XF_XHZY'
                                        */
    -15.0,                             /* Expression: -15
                                        * Referenced by: '<S10>/XF_XHZY'
                                        */

    { { 0UL, 0x7D000000UL } },         /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S10>/GXZ5'
                                        */
    1509949440                         /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S10>/GXZ4'
                                        */
  }
  /* End of '<S1>/Motor_XHZY' */
  ,

  /* Start of '<S1>/Motor_HYDG' */
  {
    { { 0UL, 0UL, 0UL, 0x3C0UL } },    /* Computed Parameter: XF_XHZY_UpperSat
                                        * Referenced by: '<S7>/XF_XHZY'
                                        */

    { { 0UL, 0UL, 0UL, 0xFFFFFC40UL } },/* Computed Parameter: XF_XHZY_LowerSat
                                         * Referenced by: '<S7>/XF_XHZY'
                                         */
    -0.0054931640625,                  /* Expression: (-360)/65536
                                        * Referenced by: '<S7>/GHDG5'
                                        */
    0.0054131054131054132,             /* Expression: 19*4/(360*39)
                                        * Referenced by: '<S40>/GHDG7'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S40>/GHDG8'
                                        */
    -57.295779513082323,               /* Expression: (-180)/pi
                                        * Referenced by: '<S40>/GHDG9'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S7>/fk_dg'
                                        */
    15.0,                              /* Expression: 15
                                        * Referenced by: '<S7>/JD_e(k)'
                                        */
    -15.0,                             /* Expression: -15
                                        * Referenced by: '<S7>/JD_e(k)'
                                        */
    322.0,                             /* Expression: 322
                                        * Referenced by: '<S7>/CDB_XHHY'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S7>/Constant'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S35>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S35>/Discrete-Time Integrator'
                                        */
    600.0,                             /* Expression: 600
                                        * Referenced by: '<S35>/ZP_Kp'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S35>/ZP_Kp2'
                                        */
    0.036,                             /* Expression: 0.036
                                        * Referenced by: '<S35>/ZV_KD1'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S35>/ZP_KN'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S35>/KD_KG'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S35>/ZP_Kp1'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainva_p
                                        * Referenced by: '<S36>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S36>/Discrete-Time Integrator'
                                        */
    2000.0,                            /* Expression: 2000
                                        * Referenced by: '<S36>/Discrete-Time Integrator'
                                        */
    -2000.0,                           /* Expression: -2000
                                        * Referenced by: '<S36>/Discrete-Time Integrator'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S36>/Discrete-Time Integrator1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S36>/Discrete-Time Integrator1'
                                        */
    8000.0,                            /* Expression: 8000
                                        * Referenced by: '<S7>/Saturation'
                                        */
    -8000.0,                           /* Expression: -8000
                                        * Referenced by: '<S7>/Saturation'
                                        */
    1.5,                               /* Expression: 1.5
                                        * Referenced by: '<S36>/ZV_Kp'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S36>/ZV_Kp1'
                                        */
    0.05,                              /* Expression: 0.05
                                        * Referenced by: '<S36>/ZV_KD'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S36>/ZV_KN'
                                        */
    300.0,                             /* Expression: 300
                                        * Referenced by: '<S36>/Saturation'
                                        */
    -300.0,                            /* Expression: -300
                                        * Referenced by: '<S36>/Saturation'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S36>/KD_KG'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S36>/ZV1_Kp1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S36>/ZV1_Kp2'
                                        */
    0.8,                               /* Expression: 0.8
                                        * Referenced by: '<S36>/ZV_Ki1'
                                        */
    0.1,                               /* Expression: 0.1
                                        * Referenced by: '<S36>/ZV_Kpt'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S7>/XF_PID'
                                        */
    -2500.0,                           /* Expression: -2500
                                        * Referenced by: '<S7>/XF_PID'
                                        */
    4000.0,                            /* Expression: 4000
                                        * Referenced by: '<S7>/XF_PWM'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S7>/XF_PWM'
                                        */
    -1000.0,                           /* Expression: -1000
                                        * Referenced by: '<S7>/KP_JD'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S7>/KP_e'
                                        */

    { { 0xC6A7F000UL, 0x4189374BUL } },/* Computed Parameter: GHDG1_Gain
                                        * Referenced by: '<S7>/GHDG1'
                                        */

    { { 0UL, 0x7D000000UL } },         /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S7>/GXZ5'
                                        */
    1073741824,                        /* Computed Parameter: GHDG10_Gain
                                        * Referenced by: '<S7>/GHDG10'
                                        */
    1509949440                         /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S7>/GXZ4'
                                        */
  }
  /* End of '<S1>/Motor_HYDG' */
  ,

  /* Start of '<S1>/Motor_XHHY' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S55>/Constant'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S56>/Constant'
                                        */
    -0.0054931640625,                  /* Expression: (-360)/65536
                                        * Referenced by: '<S9>/GXZ6'
                                        */
    0.003105590062111801,              /* Expression: 1/322
                                        * Referenced by: '<S9>/GXZ1'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S9>/GXZ9'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S9>/GXZ2'
                                        */
    0.0054131054131054132,             /* Expression: 19/(39*90)
                                        * Referenced by: '<S9>/GXZ7'
                                        */
    -57.295779513082323,               /* Expression: (-180)/pi
                                        * Referenced by: '<S9>/GXH7'
                                        */
    15.0,                              /* Expression: 15
                                        * Referenced by: '<S9>/XF_XHZY1'
                                        */
    -15.0,                             /* Expression: -15
                                        * Referenced by: '<S9>/XF_XHZY1'
                                        */
    322.0,                             /* Expression: 322
                                        * Referenced by: '<S9>/CDB_XHHY'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S9>/Con_ZPWM'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S50>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S50>/Discrete-Time Integrator'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S50>/ZP_Kp2'
                                        */
    0.036,                             /* Expression: 0.036
                                        * Referenced by: '<S50>/ZV_KD1'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S50>/ZP_KN'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S50>/KD_KG'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S50>/ZP_Kp1'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                                        * Referenced by: '<S51>/Discrete-Time Integrator'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S51>/Discrete-Time Integrator'
                                        */
    2000.0,                            /* Expression: 2000
                                        * Referenced by: '<S51>/Discrete-Time Integrator'
                                        */
    -2000.0,                           /* Expression: -2000
                                        * Referenced by: '<S51>/Discrete-Time Integrator'
                                        */
    0.002,                             /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S51>/Discrete-Time Integrator1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S51>/Discrete-Time Integrator1'
                                        */
    2000.0,                            /* Expression: 2000
                                        * Referenced by: '<S51>/Discrete-Time Integrator1'
                                        */
    -2000.0,                           /* Expression: -2000
                                        * Referenced by: '<S51>/Discrete-Time Integrator1'
                                        */
    6600.0,                            /* Expression: 6600
                                        * Referenced by: '<S9>/Saturation'
                                        */
    -6600.0,                           /* Expression: -6600
                                        * Referenced by: '<S9>/Saturation'
                                        */
    0.12,                              /* Expression: 0.12
                                        * Referenced by: '<S51>/ZV_Kp'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S51>/ZV_Kp1'
                                        */
    0.01,                              /* Expression: 0.01
                                        * Referenced by: '<S51>/ZV_KD'
                                        */
    100.0,                             /* Expression: 100
                                        * Referenced by: '<S51>/ZV_KN'
                                        */
    300.0,                             /* Expression: 300
                                        * Referenced by: '<S51>/Saturation'
                                        */
    -300.0,                            /* Expression: -300
                                        * Referenced by: '<S51>/Saturation'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S51>/KD_KG'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S51>/ZV1_Kp1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S51>/ZV1_Kp2'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S9>/KP_JD1'
                                        */
    1000.0,                            /* Expression: 1000
                                        * Referenced by: '<S9>/KP_e'
                                        */
    2500.0,                            /* Expression: 2500
                                        * Referenced by: '<S9>/ZXF_PID'
                                        */
    -2500.0,                           /* Expression: -2500
                                        * Referenced by: '<S9>/ZXF_PID'
                                        */
    4800.0,                            /* Expression: 4800
                                        * Referenced by: '<S9>/ZXF_PWM'
                                        */
    200.0,                             /* Expression: 200
                                        * Referenced by: '<S9>/ZXF_PWM'
                                        */
    0.001,                             /* Expression: 1/1000
                                        * Referenced by: '<S9>/GXZ3'
                                        */
    15.0,                              /* Expression: 15
                                        * Referenced by: '<S9>/XF_XHZY'
                                        */
    -15.0,                             /* Expression: -15
                                        * Referenced by: '<S9>/XF_XHZY'
                                        */

    { { 0UL, 0x7D000000UL } },         /* Computed Parameter: GXZ5_Gain
                                        * Referenced by: '<S9>/GXZ5'
                                        */
    1509949440                         /* Computed Parameter: GXZ4_Gain
                                        * Referenced by: '<S9>/GXZ4'
                                        */
  }
  /* End of '<S1>/Motor_XHHY' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
