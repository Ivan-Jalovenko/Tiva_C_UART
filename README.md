# Tiva_C_UART

This project implements a UART-based LED control system for the TM4C123GH6PM microcontroller. The program enables communication between the microcontroller and a PC via UART0, allowing users to control the onboard LEDs (red, green, and blue) through PuTTY or similar serial terminal software.

---

## Features

- UART0 communication at 9600 baud, 8N1 configuration
- Control of three LEDs (red, green, blue) via serial commands
- Interactive prompt for user input
- Input validation with error messaging

---

## Usage

1. Connect the microcontroller to your PC via serial connection.
2. Open PuTTY or similar terminal software with the correct COM port.
3. Set communication parameters to:
   - **Baud rate:** 9600  
   - **Data bits:** 8  
   - **Parity:** None  
   - **Stop bits:** 1
4. Send the following commands to control the LEDs:
   - `'r'`: Turn on red LED
   - `'g'`: Turn on green LED
   - `'b'`: Turn on blue LED
   - `'f'`: Turn off all LEDs

---

## Project Structure

- `constants.h` – Contains all hardware-specific definitions and constants
- `LED.c / LED.h` – Handles LED initialization and control functions
- `UART.c / UART.h` – Manages UART configuration and communication functions
- `main.c` – Implements the main program logic and user interface

---

## Demo Video

You can watch a short demo of the project in action here:

[Watch the video](https://youtube.com/shorts/AMzl4GKKYqE?feature=share)

The video shows:
- PuTTY configuration for UART0 (9600 baud, 8N1)
- Sending commands (`r`, `g`, `b`, `f`) and LED response
- Example of input validation with invalid commands
