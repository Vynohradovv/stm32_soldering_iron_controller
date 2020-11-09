/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <stdint.h>
#include "setup.h"


/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define OLED_CS_Pin GPIO_PIN_13
#define OLED_CS_GPIO_Port GPIOC
#define VREF_Pin GPIO_PIN_1
#define VREF_GPIO_Port GPIOA
#define NTC_Pin GPIO_PIN_2
#define NTC_GPIO_Port GPIOA
#define V_INPUT_Pin GPIO_PIN_3
#define V_INPUT_GPIO_Port GPIOA
#define IRON_TEMP_Pin GPIO_PIN_5
#define IRON_TEMP_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_11
#define OLED_DC_GPIO_Port GPIOB
#define OLED_RST_Pin GPIO_PIN_12
#define OLED_RST_GPIO_Port GPIOB
#define SCK_Pin GPIO_PIN_13
#define SCK_GPIO_Port GPIOB
#define SDO_Pin GPIO_PIN_15
#define SDO_GPIO_Port GPIOB
#define ROT_ENC_R_Pin GPIO_PIN_8
#define ROT_ENC_R_GPIO_Port GPIOA
#define ROT_ENC_R_EXTI_IRQn EXTI4_15_IRQn
#define ROT_ENC_L_Pin GPIO_PIN_9
#define ROT_ENC_L_GPIO_Port GPIOA
#define ROT_ENC_L_EXTI_IRQn EXTI4_15_IRQn
#define WAKE_Pin GPIO_PIN_10
#define WAKE_GPIO_Port GPIOA
#define WAKE_EXTI_IRQn EXTI4_15_IRQn
#define ROT_ENC_BUTTON_Pin GPIO_PIN_11
#define ROT_ENC_BUTTON_GPIO_Port GPIOA
#define ROT_ENC_BUTTON_EXTI_IRQn EXTI4_15_IRQn
#define BUZZER_Pin GPIO_PIN_12
#define BUZZER_GPIO_Port GPIOA
#define PWM_OUTPUT_Pin GPIO_PIN_7
#define PWM_OUTPUT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define WAKE_input			HAL_GPIO_ReadPin(WAKE_GPIO_Port, WAKE_Pin)
#define BUTTON_input		HAL_GPIO_ReadPin(ROT_ENC_BUTTON_GPIO_Port, ROT_ENC_BUTTON_Pin)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
