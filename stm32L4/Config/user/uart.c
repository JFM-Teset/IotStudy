#include "uart.h"


uint8_t aTxBuffer[] = " ****UART_TwoBoards communication based on DMA****  ****UART_TwoBoards communication based on DMA****  ****UART_TwoBoards communication based on DMA**** ";
uint8_t aRxBuffer[1024];
uint8_t RxbufferSize=0;
volatile uint8_t Ufalg=0;
int getMessageIndex=0,putMessageIndex=0;
		
		
		
uint8_t USART_TxBuffer[Buffer_Size];		
uint8_t USART_RxBuffer[Buffer_Size];		
uint8_t USART_Rx_OK = 0;								
uint8_t USART_Buffer_index;							


//void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
//{
//  /* Prevent unused argument(s) compilation warning */
//	//HAL_UART_Transmit(&huart1, (uint8_t*)aTxBuffer, 100 , 100);
//	//HAL_UART_Receive_IT(&huart1, (uint8_t*)aRxBuffer, 1024);
//	__HAL_UART_DISABLE_IT(&huart1 ,UART_IT_IDLE);
//	RxbufferSize=huart1.RxXferSize-huart1.RxXferCount;
//	HAL_UART_AbortReceive(&huart1);
//	HAL_UART_Receive_IT(&huart1, (uint8_t*)aRxBuffer, 1024);
//	
//	 __HAL_UART_ENABLE_IT(&huart1,UART_IT_IDLE);
//}




///*
//void HAL_UART_RxIdleCallback(UART_HandleTypeDef *huart)
//{
//	__HAL_UART_DISABLE_IT(&huart1 ,UART_IT_IDLE);
//	RxbufferSize=huart1.RxXferSize-huart1.RxXferCount;
//	HAL_UART_AbortReceive(&huart1);
//	HAL_UART_Receive_IT(&huart1, (uint8_t*)aRxBuffer, 1024);
//	
//}
//*/
//void UMessageInit()
//{
//	HAL_UART_Transmit(&huart1, (uint8_t*)aTxBuffer, 100 , 100);
//	HAL_UART_Receive_IT(&huart1, (uint8_t*)aRxBuffer, 1024);
//}

//bool getMessage(uint8_t a[])
//{
//	uint8_t ch=0,i=0;
//	//if(Ufalg==1)
//	{
//		getMessageIndex=getMessageIndex+RxbufferSize;
//		if(putMessageIndex>getMessageIndex)
//		{
//			return false;
//		}
//		for(i=0;i<RxbufferSize;i++)
//		{
//			a[i]=aRxBuffer[putMessageIndex++];
//			
//		
//		}
//		aRxBuffer[0]=0;
//	}
//	return true;
//}


