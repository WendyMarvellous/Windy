/*
 * lvbo.c
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

/* Named constants for Chart: '<Root>/Chart' */
#define lvbo_IN_GPSguan                ((uint8_T)1U)
#define lvbo_IN_GPSkai                 ((uint8_T)2U)
#define lvbo_IN_LoRakai                ((uint8_T)1U)
#define lvbo_IN_LoRakai1               ((uint8_T)2U)
#define lvbo_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define lvbo_IN_main                   ((uint8_T)1U)
#define lvbo_IN_one_min                ((uint8_T)3U)
#define lvbo_IN_ten_sec                ((uint8_T)3U)
#define lvbo_IN_waiting                ((uint8_T)3U)
#define lvbo_IN_xiumian                ((uint8_T)4U)

/* Block signals (auto storage) */
B_lvbo_T lvbo_B;

/* Block states (auto storage) */
DW_lvbo_T lvbo_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_lvbo_T lvbo_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_lvbo_T lvbo_Y;

/* Real-time model */
RT_MODEL_lvbo_T lvbo_M_;
RT_MODEL_lvbo_T *const lvbo_M = &lvbo_M_;

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function1'
 *    '<S13>/MATLAB Function1'
 *    '<S18>/MATLAB Function1'
 */
void lvbo_MATLABFunction1(int32_T rtu_chazhi, real_T rtu_yuzhi,
  B_MATLABFunction1_lvbo_T *localB)
{
  /* MATLAB Function 'If Action Subsystem/If Action Subsystem1/MATLAB Function1': '<S11>:1' */
  if (rtu_chazhi > rtu_yuzhi) {
    /* '<S11>:1:2' */
    /* '<S11>:1:3' */
    localB->youxiao = 1.0;
  } else {
    /* '<S11>:1:4' */
    localB->youxiao = 0.0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function4'
 *    '<S13>/MATLAB Function4'
 *    '<S18>/MATLAB Function4'
 */
void lvbo_MATLABFunction4(real_T rtu_chazhi, real_T rtu_yuzhi,
  B_MATLABFunction4_lvbo_T *localB)
{
  /* MATLAB Function 'If Action Subsystem/If Action Subsystem1/MATLAB Function4': '<S12>:1' */
  if (rtu_chazhi > rtu_yuzhi) {
    /* '<S12>:1:2' */
    /* '<S12>:1:3' */
    localB->youxiao = 1.0;
  } else {
    /* '<S12>:1:4' */
    localB->youxiao = 0.0;
  }
}

/* Model step function */
void lvbo_step(void)
{
  /* local block i/o variables */
  real_T rtb_Average5;
  real_T rtb_Average1;
  real_T rtb_Average2;
  real_T rtb_Delay;
  real_T rtb_Sum;
  real_T rtb_Sum2;
  real_T rtb_Sum5;
  int32_T tmp;

  /* DataStoreWrite: '<Root>/Data Store Write2' incorporates:
   *  Constant: '<Root>/Constant'
   *  DataStoreRead: '<Root>/Data Store Read5'
   *  Sum: '<Root>/Sum4'
   */
  lvbo_DW.time += lvbo_P.Constant_Value;

  /* Outport: '<Root>/bushu' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read3'
   */
  lvbo_Y.bushu = lvbo_DW.bushur;

  /* Chart: '<Root>/Chart' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  Inport: '<Root>/GPS_OK'
   */
  if (lvbo_DW.temporalCounter_i1 < 2047U) {
    lvbo_DW.temporalCounter_i1++;
  }

  if (lvbo_DW.temporalCounter_i2 < 16383U) {
    lvbo_DW.temporalCounter_i2++;
  }

  if (lvbo_DW.temporalCounter_i3 < 65535U) {
    lvbo_DW.temporalCounter_i3++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (lvbo_DW.is_active_c3_lvbo == 0U) {
    /* Entry: Chart */
    lvbo_DW.is_active_c3_lvbo = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:5' */
    lvbo_DW.is_c3_lvbo = lvbo_IN_main;

    /* Entry Internal 'main': '<S1>:4' */
    lvbo_DW.is_active_jibuqi = 1U;

    /* Entry Internal 'jibuqi': '<S1>:7' */
    lvbo_DW.is_active_ten_sec = 1U;

    /* Entry Internal 'ten_sec': '<S1>:9' */
    /* Transition: '<S1>:17' */
    lvbo_DW.is_ten_sec = lvbo_IN_GPSkai;

    /* Entry 'GPSkai': '<S1>:16' */
    lvbo_DW.is_active_one_min = 1U;

    /* Entry Internal 'one_min': '<S1>:11' */
    /* Transition: '<S1>:22' */
    lvbo_DW.is_one_min = lvbo_IN_GPSkai;

    /* Entry 'GPSkai': '<S1>:21' */
    lvbo_DW.is_active_five_min = 1U;

    /* Entry Internal 'five_min': '<S1>:105' */
    /* Transition: '<S1>:100' */
    lvbo_DW.is_five_min = lvbo_IN_GPSkai;

    /* Outport: '<Root>/GPS_state' */
    /* Entry 'GPSkai': '<S1>:104' */
    lvbo_Y.GPS_state = 1;
    lvbo_DW.is_active_logic = 1U;

    /* Entry Internal 'logic': '<S1>:6' */
    /* Transition: '<S1>:60' */
    lvbo_DW.is_logic = lvbo_IN_waiting;

    /* Outport: '<Root>/xiumin' */
    /* Entry 'waiting': '<S1>:59' */
    lvbo_Y.xiumin = 0;
  } else {
    /* During 'main': '<S1>:4' */
    /* During 'jibuqi': '<S1>:7' */
    /* During 'ten_sec': '<S1>:9' */
    switch (lvbo_DW.is_ten_sec) {
     case lvbo_IN_GPSguan:
      /* During 'GPSguan': '<S1>:18' */
      if (lvbo_DW.temporalCounter_i1 >= 2000U) {
        /* Transition: '<S1>:33' */
        /* Exit 'GPSguan': '<S1>:18' */
        lvbo_B.BSqingling = 0;
        lvbo_DW.is_ten_sec = lvbo_IN_ten_sec;

        /* Entry 'ten_sec': '<S1>:32' */
        tmp = lvbo_DW.bushu1 + lvbo_DW.bushur;
        if (tmp > 127) {
          tmp = 127;
        } else {
          if (tmp < -128) {
            tmp = -128;
          }
        }

        lvbo_DW.bushu1 = (int8_T)tmp;
      } else if (lvbo_Y.GPS_state == 1) {
        /* Transition: '<S1>:44' */
        /* Exit 'GPSguan': '<S1>:18' */
        lvbo_B.BSqingling = 0;
        lvbo_DW.is_ten_sec = lvbo_IN_GPSkai;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSkai': '<S1>:16' */
        lvbo_Y.GPS_state = 1;
      } else {
        /* Outport: '<Root>/GPS_OKans' */
        lvbo_Y.GPS_OKans = 0;
      }
      break;

     case lvbo_IN_GPSkai:
      /* During 'GPSkai': '<S1>:16' */
      if (lvbo_U.GPS_OK == 1) {
        /* Transition: '<S1>:34' */
        lvbo_DW.is_ten_sec = lvbo_IN_GPSguan;
        lvbo_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSguan': '<S1>:18' */
        lvbo_Y.GPS_state = 0;
        lvbo_B.BSqingling = 1;

        /* Outport: '<Root>/GPS_OKans' */
        lvbo_Y.GPS_OKans = 1;
      }
      break;

     default:
      /* During 'ten_sec': '<S1>:32' */
      if ((lvbo_DW.bushur >= 10) || (lvbo_Y.GPS_state == 1)) {
        /* Transition: '<S1>:35' */
        lvbo_DW.is_ten_sec = lvbo_IN_GPSkai;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSkai': '<S1>:16' */
        lvbo_Y.GPS_state = 1;
      } else {
        if (lvbo_DW.bushur < 10) {
          /* Transition: '<S1>:36' */
          lvbo_DW.is_ten_sec = lvbo_IN_GPSguan;
          lvbo_DW.temporalCounter_i1 = 0U;

          /* Outport: '<Root>/GPS_state' */
          /* Entry 'GPSguan': '<S1>:18' */
          lvbo_Y.GPS_state = 0;
          lvbo_B.BSqingling = 1;

          /* Outport: '<Root>/GPS_OKans' */
          lvbo_Y.GPS_OKans = 1;
        }
      }
      break;
    }

    /* During 'one_min': '<S1>:11' */
    switch (lvbo_DW.is_one_min) {
     case lvbo_IN_GPSguan:
      /* During 'GPSguan': '<S1>:23' */
      if (lvbo_Y.GPS_state == 1) {
        /* Transition: '<S1>:25' */
        lvbo_DW.is_one_min = lvbo_IN_GPSkai;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSkai': '<S1>:21' */
        lvbo_Y.GPS_state = 1;
      } else {
        if (lvbo_DW.temporalCounter_i2 >= 12200U) {
          /* Transition: '<S1>:27' */
          lvbo_DW.is_one_min = lvbo_IN_one_min;
        }
      }
      break;

     case lvbo_IN_GPSkai:
      /* During 'GPSkai': '<S1>:21' */
      if (lvbo_U.GPS_OK == 1) {
        /* Transition: '<S1>:24' */
        lvbo_DW.is_one_min = lvbo_IN_GPSguan;
        lvbo_DW.temporalCounter_i2 = 0U;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSguan': '<S1>:23' */
        lvbo_Y.GPS_state = 0;
        lvbo_DW.bushu1 = 0;
      }
      break;

     default:
      /* During 'one_min': '<S1>:26' */
      if ((lvbo_DW.bushu1 >= 40) || (lvbo_Y.GPS_state == 1)) {
        /* Transition: '<S1>:31' */
        lvbo_DW.is_one_min = lvbo_IN_GPSkai;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSkai': '<S1>:21' */
        lvbo_Y.GPS_state = 1;
      } else {
        if (lvbo_DW.bushu1 < 40) {
          /* Transition: '<S1>:30' */
          lvbo_DW.is_one_min = lvbo_IN_GPSguan;
          lvbo_DW.temporalCounter_i2 = 0U;

          /* Outport: '<Root>/GPS_state' */
          /* Entry 'GPSguan': '<S1>:23' */
          lvbo_Y.GPS_state = 0;
          lvbo_DW.bushu1 = 0;
        }
      }
      break;
    }

    /* During 'five_min': '<S1>:105' */
    if (lvbo_DW.is_five_min == lvbo_IN_GPSguan) {
      /* During 'GPSguan': '<S1>:102' */
      if ((lvbo_DW.temporalCounter_i3 >= 61200U) || (lvbo_Y.GPS_state == 1)) {
        /* Transition: '<S1>:96' */
        lvbo_DW.is_five_min = lvbo_IN_GPSkai;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSkai': '<S1>:104' */
        lvbo_Y.GPS_state = 1;
      }
    } else {
      /* During 'GPSkai': '<S1>:104' */
      if (lvbo_U.GPS_OK == 1) {
        /* Transition: '<S1>:103' */
        lvbo_DW.is_five_min = lvbo_IN_GPSguan;
        lvbo_DW.temporalCounter_i3 = 0U;

        /* Outport: '<Root>/GPS_state' */
        /* Entry 'GPSguan': '<S1>:102' */
        lvbo_Y.GPS_state = 0;
      }
    }

    /* During 'logic': '<S1>:6' */
    switch (lvbo_DW.is_logic) {
     case lvbo_IN_LoRakai:
      /* During 'LoRakai': '<S1>:57' */
      /* Transition: '<S1>:63' */
      lvbo_DW.is_logic = lvbo_IN_waiting;

      /* Outport: '<Root>/xiumin' */
      /* Entry 'waiting': '<S1>:59' */
      lvbo_Y.xiumin = 0;
      break;

     case lvbo_IN_LoRakai1:
      /* During 'LoRakai1': '<S1>:109' */
      break;

     case lvbo_IN_waiting:
      /* During 'waiting': '<S1>:59' */
      if (lvbo_U.GPS_OK == 1) {
        /* Transition: '<S1>:58' */
        lvbo_DW.is_logic = lvbo_IN_LoRakai;

        /* Outport: '<Root>/LoRa_state' */
        /* Entry 'LoRakai': '<S1>:57' */
        lvbo_Y.LoRa_state = 1;
      } else {
        if (lvbo_DW.time > 20000) {
          /* Transition: '<S1>:107' */
          lvbo_DW.is_logic = lvbo_IN_xiumian;

          /* Outport: '<Root>/xiumin' */
          /* Entry 'xiumian': '<S1>:106' */
          lvbo_Y.xiumin = 1;
        }
      }
      break;

     default:
      /* During 'xiumian': '<S1>:106' */
      if (lvbo_U.GPS_OK == 1) {
        /* Transition: '<S1>:108' */
        lvbo_DW.is_logic = lvbo_IN_LoRakai1;

        /* Outport: '<Root>/LoRa_state' */
        /* Entry 'LoRakai1': '<S1>:109' */
        lvbo_Y.LoRa_state = 1;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* If: '<Root>/If3' incorporates:
   *  Delay: '<Root>/Delay8'
   *  Sum: '<Root>/Sum9'
   */
  if ((int8_T)(lvbo_B.BSqingling - lvbo_DW.Delay8_DSTATE) > 0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* DataStoreWrite: '<S6>/Data Store Write1' incorporates:
     *  Constant: '<S6>/Constant'
     */
    lvbo_DW.bushur = lvbo_P.Constant_Value_e;

    /* DataStoreWrite: '<S6>/Data Store Write2' incorporates:
     *  Constant: '<S6>/Constant'
     */
    lvbo_DW.bushux = lvbo_P.Constant_Value_e;

    /* DataStoreWrite: '<S6>/Data Store Write3' incorporates:
     *  Constant: '<S6>/Constant'
     */
    lvbo_DW.bushuz = lvbo_P.Constant_Value_e;

    /* DataStoreWrite: '<S6>/Data Store Write4' incorporates:
     *  Constant: '<S6>/Constant'
     */
    lvbo_DW.bushuy = lvbo_P.Constant_Value_e;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  }

  /* End of If: '<Root>/If3' */
  /* Weighted Moving Average Block: '<Root>/ Average5'
   *
   *  Finite Impulse Response Filter
   *
   * Input0  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   *
   * Parameter: Gain
   *   Data Type:  Floating Point real_T
   *
   */
  {
    real_T yTemp1;
    rtb_Average5 = lvbo_U.ax * lvbo_P.Average5_mgainval[0];

    {
      int_T i1;
      real_T *dw_TapDelayU = &lvbo_DW.Average5_TapDelayU[1];
      for (i1=0; i1 < 19; i1++) {
        yTemp1 = dw_TapDelayU[((i1)-1)] * lvbo_P.Average5_mgainval[i1+1];
        rtb_Average5 += yTemp1;
      }
    }
  }

  /* Delay: '<Root>/Delay' */
  rtb_Delay = lvbo_DW.Delay_DSTATE;

  /* Sum: '<Root>/Sum' incorporates:
   *  Delay: '<Root>/Delay'
   */
  rtb_Sum = rtb_Average5 - lvbo_DW.Delay_DSTATE;

  /* If: '<Root>/If' incorporates:
   *  Delay: '<Root>/Delay'
   *  Delay: '<Root>/Delay1'
   *  Product: '<Root>/Product'
   *  Sum: '<Root>/Sum1'
   */
  if ((lvbo_DW.Delay_DSTATE - lvbo_DW.Delay1_DSTATE) * rtb_Sum < 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* If: '<S3>/If1' incorporates:
     *  Product: '<S8>/Product1'
     */
    if (rtb_Sum < 0.0) {
      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* DataStoreWrite: '<S9>/Data Store Write3' */
      lvbo_DW.fengzhix = lvbo_DW.Delay_DSTATE;

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
    } else {
      if (rtb_Sum > 0.0) {
        /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S8>/Action Port'
         */
        /* MATLAB Function: '<S8>/MATLAB Function4' incorporates:
         *  Abs: '<S8>/Abs'
         *  DataStoreRead: '<S8>/Data Store Read6'
         *  DataStoreRead: '<S8>/Data Store Read8'
         *  Sum: '<S8>/Add1'
         */
        lvbo_MATLABFunction4(fabs(lvbo_DW.fengzhix - lvbo_DW.Delay_DSTATE),
                             lvbo_DW.yuzhia, &lvbo_B.sf_MATLABFunction4_c);

        /* MATLAB Function: '<S8>/MATLAB Function1' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read1'
         *  DataStoreRead: '<S8>/Data Store Read3'
         */
        lvbo_MATLABFunction1(lvbo_DW.time, lvbo_DW.yuzhit,
                             &lvbo_B.sf_MATLABFunction1);

        /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem2' incorporates:
         *  EnablePort: '<S10>/Enable'
         */
        if (lvbo_B.sf_MATLABFunction4_c.youxiao *
            lvbo_B.sf_MATLABFunction1.youxiao > 0.0) {
          /* DataStoreWrite: '<S10>/Data Store Write1' incorporates:
           *  Constant: '<S10>/Constant'
           *  DataStoreRead: '<S10>/Data Store Read1'
           *  Sum: '<S10>/Sum4'
           */
          lvbo_DW.bushux += lvbo_P.Constant_Value_f;

          /* DataStoreWrite: '<S10>/Data Store Write2' incorporates:
           *  Constant: '<S10>/Constant1'
           */
          lvbo_DW.time = lvbo_P.Constant1_Value_n;
        }

        /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem2' */
        /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S3>/If1' */
    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  }

  /* End of If: '<Root>/If' */
  /* Weighted Moving Average Block: '<Root>/ Average1'
   *
   *  Finite Impulse Response Filter
   *
   * Input0  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   *
   * Parameter: Gain
   *   Data Type:  Floating Point real_T
   *
   */
  {
    real_T yTemp1;
    rtb_Average1 = lvbo_U.ay * lvbo_P.Average1_mgainval[0];

    {
      int_T i1;
      real_T *dw_TapDelayU = &lvbo_DW.Average1_TapDelayU[1];
      for (i1=0; i1 < 19; i1++) {
        yTemp1 = dw_TapDelayU[((i1)-1)] * lvbo_P.Average1_mgainval[i1+1];
        rtb_Average1 += yTemp1;
      }
    }
  }

  /* Delay: '<Root>/Delay2' */
  rtb_Sum = lvbo_DW.Delay2_DSTATE;

  /* Sum: '<Root>/Sum2' incorporates:
   *  Delay: '<Root>/Delay2'
   */
  rtb_Sum2 = rtb_Average1 - lvbo_DW.Delay2_DSTATE;

  /* If: '<Root>/If1' incorporates:
   *  Delay: '<Root>/Delay2'
   *  Delay: '<Root>/Delay3'
   *  Product: '<Root>/Product1'
   *  Sum: '<Root>/Sum3'
   */
  if ((lvbo_DW.Delay2_DSTATE - lvbo_DW.Delay3_DSTATE) * rtb_Sum2 < 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* If: '<S4>/If1' incorporates:
     *  Product: '<S13>/Product1'
     */
    if (rtb_Sum2 < 0.0) {
      /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      /* DataStoreWrite: '<S14>/Data Store Write3' */
      lvbo_DW.fengzhiy = lvbo_DW.Delay2_DSTATE;

      /* End of Outputs for SubSystem: '<S4>/If Action Subsystem2' */
    } else {
      if (rtb_Sum2 > 0.0) {
        /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S13>/Action Port'
         */
        /* MATLAB Function: '<S13>/MATLAB Function4' incorporates:
         *  Abs: '<S13>/Abs'
         *  DataStoreRead: '<S13>/Data Store Read6'
         *  DataStoreRead: '<S13>/Data Store Read8'
         *  Sum: '<S13>/Add1'
         */
        lvbo_MATLABFunction4(fabs(lvbo_DW.fengzhiy - lvbo_DW.Delay2_DSTATE),
                             lvbo_DW.yuzhia, &lvbo_B.sf_MATLABFunction4_b);

        /* MATLAB Function: '<S13>/MATLAB Function1' incorporates:
         *  DataStoreRead: '<S13>/Data Store Read1'
         *  DataStoreRead: '<S13>/Data Store Read3'
         */
        lvbo_MATLABFunction1(lvbo_DW.time, lvbo_DW.yuzhit,
                             &lvbo_B.sf_MATLABFunction1_e);

        /* Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem2' incorporates:
         *  EnablePort: '<S15>/Enable'
         */
        if (lvbo_B.sf_MATLABFunction4_b.youxiao *
            lvbo_B.sf_MATLABFunction1_e.youxiao > 0.0) {
          /* DataStoreWrite: '<S15>/Data Store Write1' incorporates:
           *  Constant: '<S15>/Constant'
           *  DataStoreRead: '<S15>/Data Store Read1'
           *  Sum: '<S15>/Sum4'
           */
          lvbo_DW.bushuy += lvbo_P.Constant_Value_c;

          /* DataStoreWrite: '<S15>/Data Store Write2' incorporates:
           *  Constant: '<S15>/Constant1'
           */
          lvbo_DW.time = lvbo_P.Constant1_Value_h;
        }

        /* End of Outputs for SubSystem: '<S13>/Enabled Subsystem2' */
        /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S4>/If1' */
    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If1' */
  /* Weighted Moving Average Block: '<Root>/ Average2'
   *
   *  Finite Impulse Response Filter
   *
   * Input0  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   *
   * Parameter: Gain
   *   Data Type:  Floating Point real_T
   *
   */
  {
    real_T yTemp1;
    rtb_Average2 = lvbo_U.az * lvbo_P.Average2_mgainval[0];

    {
      int_T i1;
      real_T *dw_TapDelayU = &lvbo_DW.Average2_TapDelayU[1];
      for (i1=0; i1 < 19; i1++) {
        yTemp1 = dw_TapDelayU[((i1)-1)] * lvbo_P.Average2_mgainval[i1+1];
        rtb_Average2 += yTemp1;
      }
    }
  }

  /* Delay: '<Root>/Delay4' */
  rtb_Sum2 = lvbo_DW.Delay4_DSTATE;

  /* Sum: '<Root>/Sum5' incorporates:
   *  Delay: '<Root>/Delay4'
   */
  rtb_Sum5 = rtb_Average2 - lvbo_DW.Delay4_DSTATE;

  /* If: '<Root>/If2' incorporates:
   *  Delay: '<Root>/Delay4'
   *  Delay: '<Root>/Delay5'
   *  Product: '<Root>/Product2'
   *  Sum: '<Root>/Sum6'
   */
  if ((lvbo_DW.Delay4_DSTATE - lvbo_DW.Delay5_DSTATE) * rtb_Sum5 < 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* If: '<S5>/If1' incorporates:
     *  Product: '<S18>/Product1'
     */
    if (rtb_Sum5 < 0.0) {
      /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S19>/Action Port'
       */
      /* DataStoreWrite: '<S19>/Data Store Write3' */
      lvbo_DW.fengzhiz = lvbo_DW.Delay4_DSTATE;

      /* End of Outputs for SubSystem: '<S5>/If Action Subsystem2' */
    } else {
      if (rtb_Sum5 > 0.0) {
        /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S18>/Action Port'
         */
        /* MATLAB Function: '<S18>/MATLAB Function4' incorporates:
         *  Abs: '<S18>/Abs'
         *  DataStoreRead: '<S18>/Data Store Read6'
         *  DataStoreRead: '<S18>/Data Store Read8'
         *  Sum: '<S18>/Add1'
         */
        lvbo_MATLABFunction4(fabs(lvbo_DW.fengzhiz - lvbo_DW.Delay4_DSTATE),
                             lvbo_DW.yuzhia, &lvbo_B.sf_MATLABFunction4_i);

        /* MATLAB Function: '<S18>/MATLAB Function1' incorporates:
         *  DataStoreRead: '<S18>/Data Store Read1'
         *  DataStoreRead: '<S18>/Data Store Read3'
         */
        lvbo_MATLABFunction1(lvbo_DW.time, lvbo_DW.yuzhit,
                             &lvbo_B.sf_MATLABFunction1_a);

        /* Outputs for Enabled SubSystem: '<S18>/Enabled Subsystem3' incorporates:
         *  EnablePort: '<S20>/Enable'
         */
        if (lvbo_B.sf_MATLABFunction4_i.youxiao *
            lvbo_B.sf_MATLABFunction1_a.youxiao > 0.0) {
          /* DataStoreWrite: '<S20>/Data Store Write1' incorporates:
           *  Constant: '<S20>/Constant'
           *  DataStoreRead: '<S20>/Data Store Read1'
           *  Sum: '<S20>/Sum4'
           */
          lvbo_DW.bushuz += lvbo_P.Constant_Value_mo;

          /* DataStoreWrite: '<S20>/Data Store Write2' incorporates:
           *  Constant: '<S20>/Constant1'
           */
          lvbo_DW.time = lvbo_P.Constant1_Value_b;
        }

        /* End of Outputs for SubSystem: '<S18>/Enabled Subsystem3' */
        /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S5>/If1' */
    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  }

  /* End of If: '<Root>/If2' */

  /* MATLAB Function: '<Root>/MATLAB Function4' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read1'
   *  DataStoreRead: '<Root>/Data Store Read2'
   *  Delay: '<Root>/Delay6'
   *  Delay: '<Root>/Delay7'
   *  Delay: '<Root>/Delay9'
   *  Sum: '<Root>/Add1'
   *  Sum: '<Root>/Sum10'
   *  Sum: '<Root>/Sum7'
   *  Sum: '<Root>/Sum8'
   */
  /* MATLAB Function 'MATLAB Function4': '<S7>:1' */
  if ((int8_T)(((int8_T)(lvbo_DW.bushux - lvbo_DW.Delay6_DSTATE) + (int8_T)
                (lvbo_DW.bushuy - lvbo_DW.Delay7_DSTATE)) + (int8_T)
               (lvbo_DW.bushuz - lvbo_DW.Delay9_DSTATE)) > 0) {
    /* '<S7>:1:2' */
    /* '<S7>:1:3' */
    rtb_Sum5 = 1.0;
  } else {
    /* '<S7>:1:4' */
    rtb_Sum5 = 0.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function4' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem2' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (rtb_Sum5 > 0.0) {
    /* DataStoreWrite: '<S2>/Data Store Write1' incorporates:
     *  Constant: '<S2>/Constant'
     *  DataStoreRead: '<S2>/Data Store Read1'
     *  Sum: '<S2>/Sum4'
     */
    lvbo_DW.bushur += lvbo_P.Constant_Value_m;

    /* DataStoreWrite: '<S2>/Data Store Write2' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    lvbo_DW.time = lvbo_P.Constant1_Value;

    /* DataStoreWrite: '<S2>/Data Store Write3' incorporates:
     *  Constant: '<S2>/Constant2'
     *  DataStoreRead: '<S2>/Data Store Read2'
     *  Sum: '<S2>/Sum1'
     */
    lvbo_DW.bushuall += lvbo_P.Constant2_Value;
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem2' */

  /* Update for Delay: '<Root>/Delay8' */
  lvbo_DW.Delay8_DSTATE = lvbo_B.BSqingling;

  /* Weighted Moving Average Block: '<Root>/ Average5'
   */
  {
    int32_T iObj;

    /*
     * shift all the discrete states on time delay
     *  being careful not to overwrite a value before it
     *  has been moved.
     */
    for (iObj = (18); iObj > 0; iObj-- ) {
      lvbo_DW.Average5_TapDelayU[iObj] = lvbo_DW.Average5_TapDelayU[iObj-1];
    }

    /*
     * the top state is the current input
     */
    lvbo_DW.Average5_TapDelayU[0] = lvbo_U.ax;
  }

  /* Update for Delay: '<Root>/Delay' */
  lvbo_DW.Delay_DSTATE = rtb_Average5;

  /* Update for Delay: '<Root>/Delay1' */
  lvbo_DW.Delay1_DSTATE = rtb_Delay;

  /* Weighted Moving Average Block: '<Root>/ Average1'
   */
  {
    int32_T iObj;

    /*
     * shift all the discrete states on time delay
     *  being careful not to overwrite a value before it
     *  has been moved.
     */
    for (iObj = (18); iObj > 0; iObj-- ) {
      lvbo_DW.Average1_TapDelayU[iObj] = lvbo_DW.Average1_TapDelayU[iObj-1];
    }

    /*
     * the top state is the current input
     */
    lvbo_DW.Average1_TapDelayU[0] = lvbo_U.ay;
  }

  /* Update for Delay: '<Root>/Delay2' */
  lvbo_DW.Delay2_DSTATE = rtb_Average1;

  /* Update for Delay: '<Root>/Delay3' */
  lvbo_DW.Delay3_DSTATE = rtb_Sum;

  /* Weighted Moving Average Block: '<Root>/ Average2'
   */
  {
    int32_T iObj;

    /*
     * shift all the discrete states on time delay
     *  being careful not to overwrite a value before it
     *  has been moved.
     */
    for (iObj = (18); iObj > 0; iObj-- ) {
      lvbo_DW.Average2_TapDelayU[iObj] = lvbo_DW.Average2_TapDelayU[iObj-1];
    }

    /*
     * the top state is the current input
     */
    lvbo_DW.Average2_TapDelayU[0] = lvbo_U.az;
  }

  /* Update for Delay: '<Root>/Delay4' */
  lvbo_DW.Delay4_DSTATE = rtb_Average2;

  /* Update for Delay: '<Root>/Delay5' */
  lvbo_DW.Delay5_DSTATE = rtb_Sum2;

  /* Update for Delay: '<Root>/Delay6' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  lvbo_DW.Delay6_DSTATE = lvbo_DW.bushux;

  /* Update for Delay: '<Root>/Delay7' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read1'
   */
  lvbo_DW.Delay7_DSTATE = lvbo_DW.bushuy;

  /* Update for Delay: '<Root>/Delay9' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read2'
   */
  lvbo_DW.Delay9_DSTATE = lvbo_DW.bushuz;

  /* Matfile logging */
  //rt_UpdateTXYLogVars(lvbo_M->rtwLogInfo, (&lvbo_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(lvbo_M)!=-1) &&
        !((rtmGetTFinal(lvbo_M)-lvbo_M->Timing.taskTime0) >
          lvbo_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(lvbo_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++lvbo_M->Timing.clockTick0)) {
    ++lvbo_M->Timing.clockTickH0;
  }

  lvbo_M->Timing.taskTime0 = lvbo_M->Timing.clockTick0 *
    lvbo_M->Timing.stepSize0 + lvbo_M->Timing.clockTickH0 *
    lvbo_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void lvbo_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)lvbo_M, 0,
                sizeof(RT_MODEL_lvbo_T));
  rtmSetTFinal(lvbo_M, 10.0);
  lvbo_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    //rt_DataLoggingInfo.loggingInterval = NULL;
    lvbo_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(lvbo_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(lvbo_M->rtwLogInfo, (NULL));
    rtliSetLogT(lvbo_M->rtwLogInfo, "tout");
    rtliSetLogX(lvbo_M->rtwLogInfo, "");
    rtliSetLogXFinal(lvbo_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(lvbo_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(lvbo_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(lvbo_M->rtwLogInfo, 0);
    rtliSetLogDecimation(lvbo_M->rtwLogInfo, 1);
    rtliSetLogY(lvbo_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(lvbo_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(lvbo_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &lvbo_B), 0,
                sizeof(B_lvbo_T));

  /* states (dwork) */
  (void) memset((void *)&lvbo_DW, 0,
                sizeof(DW_lvbo_T));

  /* external inputs */
  (void)memset((void *)&lvbo_U, 0, sizeof(ExtU_lvbo_T));

  /* external outputs */
  (void) memset((void *)&lvbo_Y, 0,
                sizeof(ExtY_lvbo_T));

  /* Matfile logging */
//  rt_StartDataLoggingWithStartTime(lvbo_M->rtwLogInfo, 0.0, rtmGetTFinal(lvbo_M),
//    lvbo_M->Timing.stepSize0, (&rtmGetErrorStatus(lvbo_M)));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  lvbo_DW.yuzhit = lvbo_P.DataStoreMemory1_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
  lvbo_DW.fengzhix = lvbo_P.DataStoreMemory10_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
  lvbo_DW.bushuall = lvbo_P.DataStoreMemory11_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  lvbo_DW.bushuy = lvbo_P.DataStoreMemory2_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  lvbo_DW.yuzhia = lvbo_P.DataStoreMemory3_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
  lvbo_DW.bushuz = lvbo_P.DataStoreMemory4_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
  lvbo_DW.fengzhiy = lvbo_P.DataStoreMemory5_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
  lvbo_DW.time = lvbo_P.DataStoreMemory6_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
  lvbo_DW.bushux = lvbo_P.DataStoreMemory7_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
  lvbo_DW.fengzhiz = lvbo_P.DataStoreMemory8_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory9' */
  lvbo_DW.bushur = lvbo_P.DataStoreMemory9_InitialValue;

  /* InitializeConditions for Delay: '<Root>/Delay8' */
  lvbo_DW.Delay8_DSTATE = lvbo_P.Delay8_InitialCondition;

  /* Weighted Moving Average Block: '<Root>/ Average5'
   * Initialize State
   *
   * Initial Condition parameter uses the same data type and scaling as Input0
   */
  {
    {
      int_T i1;
      real_T *dw_TapDelayU = &lvbo_DW.Average5_TapDelayU[0];
      for (i1=0; i1 < 19; i1++) {
        dw_TapDelayU[i1] = lvbo_P.Average5_vinit;
      }
    }
  }

  /* InitializeConditions for Delay: '<Root>/Delay' */
  lvbo_DW.Delay_DSTATE = lvbo_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  lvbo_DW.Delay1_DSTATE = lvbo_P.Delay1_InitialCondition;

  /* Weighted Moving Average Block: '<Root>/ Average1'
   * Initialize State
   *
   * Initial Condition parameter uses the same data type and scaling as Input0
   */
  {
    {
      int_T i1;
      real_T *dw_TapDelayU = &lvbo_DW.Average1_TapDelayU[0];
      for (i1=0; i1 < 19; i1++) {
        dw_TapDelayU[i1] = lvbo_P.Average1_vinit;
      }
    }
  }

  /* InitializeConditions for Delay: '<Root>/Delay2' */
  lvbo_DW.Delay2_DSTATE = lvbo_P.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay3' */
  lvbo_DW.Delay3_DSTATE = lvbo_P.Delay3_InitialCondition;

  /* Weighted Moving Average Block: '<Root>/ Average2'
   * Initialize State
   *
   * Initial Condition parameter uses the same data type and scaling as Input0
   */
  {
    {
      int_T i1;
      real_T *dw_TapDelayU = &lvbo_DW.Average2_TapDelayU[0];
      for (i1=0; i1 < 19; i1++) {
        dw_TapDelayU[i1] = lvbo_P.Average2_vinit;
      }
    }
  }

  /* InitializeConditions for Delay: '<Root>/Delay4' */
  lvbo_DW.Delay4_DSTATE = lvbo_P.Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay5' */
  lvbo_DW.Delay5_DSTATE = lvbo_P.Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay6' */
  lvbo_DW.Delay6_DSTATE = lvbo_P.Delay6_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay7' */
  lvbo_DW.Delay7_DSTATE = lvbo_P.Delay7_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay9' */
  lvbo_DW.Delay9_DSTATE = lvbo_P.Delay9_InitialCondition;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  lvbo_DW.is_active_jibuqi = 0U;
  lvbo_DW.is_active_five_min = 0U;
  lvbo_DW.is_five_min = lvbo_IN_NO_ACTIVE_CHILD;
  lvbo_DW.temporalCounter_i3 = 0U;
  lvbo_DW.is_active_one_min = 0U;
  lvbo_DW.is_one_min = lvbo_IN_NO_ACTIVE_CHILD;
  lvbo_DW.temporalCounter_i2 = 0U;
  lvbo_DW.is_active_ten_sec = 0U;
  lvbo_DW.is_ten_sec = lvbo_IN_NO_ACTIVE_CHILD;
  lvbo_DW.temporalCounter_i1 = 0U;
  lvbo_DW.is_active_logic = 0U;
  lvbo_DW.is_logic = lvbo_IN_NO_ACTIVE_CHILD;
  lvbo_DW.is_active_c3_lvbo = 0U;
  lvbo_DW.is_c3_lvbo = lvbo_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void lvbo_terminate(void)
{
  /* (no terminate code required) */
}
