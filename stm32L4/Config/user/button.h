/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __button_H
#define __button_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32l4xx_hal.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define ReadKey2()    HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_8)	
#define ReadKey1()    HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_9)	
#define ReadKey0()    HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_10)	
#define ReadWakeUp()	HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13)	



/* USER CODE END Private defines */



/* USER CODE BEGIN Prototypes */
void useMultiButton(void);



/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ BUTTON_H */

