typedef unsigned char         uint8_t;

#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_

#define UDR2 		*((volatile uint8_t*)(0xD6))
#define UBRR2H		*((volatile uint8_t*)(0xD5))
#define UBRR2L		*((volatile uint8_t*)(0xD4))
#define UCSR2C		*((volatile uint8_t*)(0xD2))
#define UCSR2B		*((volatile uint8_t*)(0xD1))
#define UCSR2A		*((volatile uint8_t*)(0xD0))

#define UDR1 		*((volatile uint8_t*)(0xCE))
#define UBRR1H		*((volatile uint8_t*)(0xCD))
#define UBRR1L		*((volatile uint8_t*)(0xCC))
#define UCSR1C		*((volatile uint8_t*)(0xCA))
#define UCSR1B		*((volatile uint8_t*)(0xC9))
#define UCSR1A		*((volatile uint8_t*)(0xC8))


#define UDR0 		*((volatile uint8_t*)(0xC6))
#define UBRR0H		*((volatile uint8_t*)(0xC5))
#define UBRR0L		*((volatile uint8_t*)(0xC4))
#define UCSR0C		*((volatile uint8_t*)(0xC2))
#define UCSR0B		*((volatile uint8_t*)(0xC1))
#define UCSR0A		*((volatile uint8_t*)(0xC0))

#define UDR3		*((volatile uint8_t*)(0X136))
#define UBRR3H		*((volatile uint8_t*)(0x135))
#define UBRR3L		*((volatile uint8_t*)(0x134))
#define UCSR3C		*((volatile uint8_t*)(0x132))
#define UCSR3B		*((volatile uint8_t*)(0x131))
#define UCSR3A		*((volatile uint8_t*)(0x130))

#define MPCM		0
#define U2X			1
#define UPM			2
#define DOR			3
#define FE			4
#define UDRE		5
#define TXC			6
#define RXC			7
#define USBS        1

#endif /* MCAL_UART_UART_PRIVATE_H_ */