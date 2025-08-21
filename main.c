#include <TM4C123GH6PM.h>

#include "constants.h"
#include "UART.h"
#include "LED.h"


int main(void) {
	LED_setup();
	
	UART_pins_setup();
	UART0_setup();
	
	for(;;) {
		UART0_write_string("Enter 'r', 'g', 'b' or 'f': ");
		
		char input = UART0_read_char();
		
		UART0_write_char('\n');
		
		switch (input) {
			case 'r':
				GPIOF->DATA |= LED_R;
				break;
			
			case 'g':
				GPIOF->DATA |= LED_G;
				break;
			
			case 'b':
				GPIOF->DATA |= LED_B;
				break;
			
			case 'f':	// turn off all internal & external LEDs 
				GPIOF->DATA &= ~(LED_R | LED_G | LED_B);
				break;
			
			default:
				UART0_write_string("\nPlease enter valid letter!\n\n");
				break;
		}
	}
	
	return SUCCESS;
}
