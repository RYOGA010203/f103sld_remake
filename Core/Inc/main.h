/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void main_cpp(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ES_Pin GPIO_PIN_13
#define ES_GPIO_Port GPIOC
#define ES_EXTI_IRQn EXTI15_10_IRQn
#define LED_CAN_Pin GPIO_PIN_14
#define LED_CAN_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_6
#define LED_GREEN_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_7
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_0
#define LED_RED_GPIO_Port GPIOB
#define Solenoid_CH0_Pin GPIO_PIN_10
#define Solenoid_CH0_GPIO_Port GPIOB
#define Solenoid_CH1_Pin GPIO_PIN_11
#define Solenoid_CH1_GPIO_Port GPIOB
#define Solenoid_CH2_Pin GPIO_PIN_12
#define Solenoid_CH2_GPIO_Port GPIOB
#define Solenoid_CH3_Pin GPIO_PIN_13
#define Solenoid_CH3_GPIO_Port GPIOB
#define Solenoid_CH4_Pin GPIO_PIN_14
#define Solenoid_CH4_GPIO_Port GPIOB
#define Solenoid_CH5_Pin GPIO_PIN_15
#define Solenoid_CH5_GPIO_Port GPIOB
#define Solenoid_CH6_Pin GPIO_PIN_8
#define Solenoid_CH6_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
