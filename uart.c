#include "avr/io.h"
#include "avr/interrupt.h"
#include "uart.h"

/* Global variables to hold the address of the call back function in the application */
static volatile void (*int_callBackPtr)(void) = NULL_PTR;

ISR(USART0_RX_vect){
	if(int_callBackPtr != NULL_PTR)
	{
		/* Call the Call Back function in the application after the edge is detected */
		(*int_callBackPtr)();
	}
}

void SWUART_init(uint32_t baudrate){
    /* Set the baud rate */
    UBRR0H = (uint8_t)(baudrate>>8);
    UBRR0L = (uint8_t)baudrate;
    /* Enable receiver and transmitter */
    UCSR0B = (1<<RXEN0)|(1<<TXEN0);
    /* Set frame format: 8data, 1stop bit */
    UCSR0C = (1<<USBS0)|(3<<UCSZ00);
    /* Enable receive interrupt */
    UCSR0B |= (1<<RXCIE0);
}
void SWUART_send(uint8_t data){
    while ((UCSR0A & (1 << UDRE0)) == 0);//make sure the data register is cleared
    UDR0 = data;//send the data
}

void SWUART_recieve(uint8_t *data){
    /*
    Use this to recieve a single byte, it will split it up into individual parts
    send those parts, and then send the new line code
    */
    while ((UCSR0A & (1 << RXC0)) == 0);//make sure the data register is cleared
    *data = UDR0; //goes through and splits the string into individual bits, sends them
}

void int_setCallBack(void(*a_ptr)(void))
{
	/* Save the address of the Call back function in a global variable */
	int_callBackPtr = a_ptr;
}