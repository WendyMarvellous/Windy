/**
  ******************************************************************************
  * File Name          : mxconstants.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MXCONSTANT_H
#define __MXCONSTANT_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define Temp_Pin GPIO_PIN_0
#define Temp_GPIO_Port GPIOC
#define QDQ_HY_Pin GPIO_PIN_1
#define QDQ_HY_GPIO_Port GPIOC
#define QDQ_XH_Pin GPIO_PIN_2
#define QDQ_XH_GPIO_Port GPIOC
#define Current_Pin GPIO_PIN_1
#define Current_GPIO_Port GPIOA
#define QDQ_ZC_Pin GPIO_PIN_2
#define QDQ_ZC_GPIO_Port GPIOA
#define QDQ_GZ_Pin GPIO_PIN_3
#define QDQ_GZ_GPIO_Port GPIOA
#define DCZD_Pin GPIO_PIN_5
#define DCZD_GPIO_Port GPIOA
#define QDQstate_Pin GPIO_PIN_4
#define QDQstate_GPIO_Port GPIOC
#define DQXW_X_Pin GPIO_PIN_5
#define DQXW_X_GPIO_Port GPIOC
#define DQXW_S_Pin GPIO_PIN_8
#define DQXW_S_GPIO_Port GPIOE
#define Ad2_c_Pin GPIO_PIN_9
#define Ad2_c_GPIO_Port GPIOE
#define Ad1_c_Pin GPIO_PIN_10
#define Ad1_c_GPIO_Port GPIOE
#define PWM1OUT_CN_Pin GPIO_PIN_12
#define PWM1OUT_CN_GPIO_Port GPIOE
#define PWM1OUT_C_Pin GPIO_PIN_13
#define PWM1OUT_C_GPIO_Port GPIOE
#define EN_C_Pin GPIO_PIN_14
#define EN_C_GPIO_Port GPIOE
#define KJ_State_Pin GPIO_PIN_12
#define KJ_State_GPIO_Port GPIOD
#define GXDY_state_Pin GPIO_PIN_13
#define GXDY_state_GPIO_Port GPIOD
#define NM_D_Pin GPIO_PIN_14
#define NM_D_GPIO_Port GPIOD
#define DOS_D_Pin GPIO_PIN_15
#define DOS_D_GPIO_Port GPIOD
#define A_D_Pin GPIO_PIN_6
#define A_D_GPIO_Port GPIOC
#define B_D_Pin GPIO_PIN_7
#define B_D_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MXCONSTANT_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
