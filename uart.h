#ifndef MCAL_UART_UART_H_
#define MCAL_UART_UART_H_
#include "std_types.h"
#include "common_macros.h"


/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

//-------------------------------------------
//Macros (defines)
//-------------------------------------------
#define BAUD 9600
#define BUFF_LEN 700
#define BAUD_PRESCALE (((F_CPU / (BAUD * 16UL))) - 1)
#define DEBUG 0
//-------------------------------------------
//Prototypes
//-------------------------------------------
void SWUART_init(uint32_t baudrate);
void SWUART_send(uint8_t data);
void SWUART_recieve(uint8_t *data);

void int_setCallBack(void(*a_ptr)(void));

//-------------------------------------------
//Variables
//-------------------------------------------
char input_buffer[BUFF_LEN];

uint16_t read_spot;


/* UART Driver Baud Rate */
#define USART_BAUDRATE 9600UL

void USART_Init( );

void USART_Transmit( unsigned char data );

unsigned char USART_Receive(void);

void int_setCallBack(void(*a_ptr)(void));

#endif /* MCAL_UART_UART_H_ */