#include "led.h"
#include "button.h"
#include "multi_button.h"

struct Button button1;

uint8_t read_button1_GPIO(void) 
{
	volatile uint8_t a=0;
	a=ReadKey1();
	return a;
}

void BTN1_PRESS_DOWN_Handler(void* btn)
{
	RledToggle();


}

void useMultiButton(void)
{
	button_init(&button1,read_button1_GPIO , 0);
	button_attach(&button1, PRESS_DOWN,  BTN1_PRESS_DOWN_Handler);
	button_start(&button1);
}
