/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __led_H
#define __led_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32l4xx_hal.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define RledSwitch(a)     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_7, a)	
#define GledSwitch(a)     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, a)	
#define BledSwitch(a)     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, a)	

#define RledToggle()  		HAL_GPIO_TogglePin(GPIOE,GPIO_PIN_7)
/* USER CODE END Private defines */



/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ LED_H */

