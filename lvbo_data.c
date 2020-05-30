/*
 * lvbo_data.c
 *
 * Code generation for model "lvbo".
 *
 * Model version              : 1.137
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Nov 23 16:11:53 2017
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lvbo.h"
#include "lvbo_private.h"

/* Block parameters (auto storage) */
P_lvbo_T lvbo_P = {
  /*  Mask Parameter: Average5_mgainval
   * Referenced by: '<Root>/ Average5'
   */
  { 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05,
    0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05 },

  /*  Mask Parameter: Average1_mgainval
   * Referenced by: '<Root>/ Average1'
   */
  { 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05,
    0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05 },

  /*  Mask Parameter: Average2_mgainval
   * Referenced by: '<Root>/ Average2'
   */
  { 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05,
    0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05 },
  0.0,                                 /* Mask Parameter: Average5_vinit
                                        * Referenced by: '<Root>/ Average5'
                                        */
  0.0,                                 /* Mask Parameter: Average1_vinit
                                        * Referenced by: '<Root>/ Average1'
                                        */
  0.0,                                 /* Mask Parameter: Average2_vinit
                                        * Referenced by: '<Root>/ Average2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Delay2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Delay3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Delay4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Delay5'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory10'
                                        */
  150.0,                               /* Expression: 150
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory8'
                                        */
  0,                                   /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S2>/Constant1'
                                        */
  0,                                   /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S10>/Constant1'
                                        */
  0,                                   /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S15>/Constant1'
                                        */
  0,                                   /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S20>/Constant1'
                                        */
  1,                                   /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  0,                                   /* Computed Parameter: DataStoreMemory6_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory6'
                                        */
  1U,                                  /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S2>/Constant2'
                                        */
  1U,                                  /* Computed Parameter: Delay8_DelayLength
                                        * Referenced by: '<Root>/Delay8'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<Root>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<Root>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<Root>/Delay2'
                                        */
  1U,                                  /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<Root>/Delay3'
                                        */
  1U,                                  /* Computed Parameter: Delay4_DelayLength
                                        * Referenced by: '<Root>/Delay4'
                                        */
  1U,                                  /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<Root>/Delay5'
                                        */
  1U,                                  /* Computed Parameter: Delay6_DelayLength
                                        * Referenced by: '<Root>/Delay6'
                                        */
  1U,                                  /* Computed Parameter: Delay7_DelayLength
                                        * Referenced by: '<Root>/Delay7'
                                        */
  1U,                                  /* Computed Parameter: Delay9_DelayLength
                                        * Referenced by: '<Root>/Delay9'
                                        */
  0U,                                  /* Computed Parameter: DataStoreMemory11_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory11'
                                        */
  1,                                   /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S2>/Constant'
                                        */
  1,                                   /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S10>/Constant'
                                        */
  1,                                   /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S15>/Constant'
                                        */
  1,                                   /* Computed Parameter: Constant_Value_mo
                                        * Referenced by: '<S20>/Constant'
                                        */
  0,                                   /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S6>/Constant'
                                        */
  0,                                   /* Computed Parameter: Delay8_InitialCondition
                                        * Referenced by: '<Root>/Delay8'
                                        */
  0,                                   /* Computed Parameter: Delay6_InitialCondition
                                        * Referenced by: '<Root>/Delay6'
                                        */
  0,                                   /* Computed Parameter: Delay7_InitialCondition
                                        * Referenced by: '<Root>/Delay7'
                                        */
  0,                                   /* Computed Parameter: Delay9_InitialCondition
                                        * Referenced by: '<Root>/Delay9'
                                        */
  0,                                   /* Computed Parameter: DataStoreMemory2_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  0,                                   /* Computed Parameter: DataStoreMemory4_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory4'
                                        */
  0,                                   /* Computed Parameter: DataStoreMemory7_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory7'
                                        */
  0                                    /* Computed Parameter: DataStoreMemory9_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory9'
                                        */
};
