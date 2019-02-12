/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __queue_H
#define __queue_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32l4xx_hal.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define QUEUE_MAXSIZE 1025
typedef struct 
{
	uint8_t data[QUEUE_MAXSIZE];
	int front,rear;
}Queue;


/* USER CODE END Private defines */



/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ LED_H */

