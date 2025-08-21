#include <TM4C123GH6PM.h>

#include "LED.h"
#include "constants.h"


int LED_setup(void);

int LED_setup(void) {
	SYSCTL->RCGCGPIO |= GPIO_PORT_F;
	
	GPIOF->DIR |= LED_R | LED_G | LED_B;
	GPIOF->DEN |= LED_R | LED_G | LED_B;
	
	GPIOF->DATA &= ~(LED_R | LED_G | LED_B);
	
	return SUCCESS;
}
