#ifndef CONSTANTS_H
#define CONSTANTS_H


/* ==============================
 *				 Return codes
 * ==============================
 */
#define SUCCESS 1


/* ==============================
 *				Periph constants
 * ==============================
 */
#define PERIPH_READY     		1u 
#define PERIPH_NOT_READY 		0


/* ==============================
 *						Port A
 * ==============================
 */
#define GPIO_PORT_A 				(1u << 0)

#define PA0 								(1u << 0)
#define PA1 								(1u << 1)


/* ==============================
 * 						Port F
 * ==============================
 */
#define GPIO_PORT_F 				(1u << 5)

#define PF1 								(1u << 1)
#define PF2 								(1u << 2)
#define PF3 								(1u << 3)


/* ==============================
 *						UART
 * ==============================
 */
// UART Module Selection
#define UART_0              (1u << 0) 

// UART Control Register
#define UART_CTL_DISABLE    (0x0u)
#define UART_CTL_UARTEN     (1u << 0)
#define UART_CTL_TXE        (1u << 8)
#define UART_CTL_RXE 	      (1u << 9)

// UART Flag Register
#define UART_FR_RXFF        (1u << 4)
#define UART_FR_TXFF        (1u << 5)

// UART Clock Configuration
#define UART_CC_PIOSC       0x5

// UART Baud Rate Configuration
#define UART_IBRD_9600      104
#define UART_FBRD_9600      11

// UART Line Control
#define UART_LCRH_8N1       (0x3 << 5) // 8-bit, no parity, 1 stop bit, no FIFO

// GPIO Pin Control for UART
#define GPIO_PCTL_PA0_M     (0xFu << 0)   // Mask for PA0 function bits
#define GPIO_PCTL_PA1_M     (0xFu << 4)   // Mask for PA1 function bits
#define GPIO_PCTL_PA0_U0RX  (0x1u << 0)   // PA0 = U0RX
#define GPIO_PCTL_PA1_U0TX  (0x1u << 4)   // PA1 = U0TX


/* ==============================
 *						LEDs
 * ==============================
 */
#define LED_R PF1
#define LED_B PF2
#define LED_G PF3


#endif // CONSTANTS_H
