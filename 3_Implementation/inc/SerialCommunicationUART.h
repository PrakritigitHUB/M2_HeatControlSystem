#ifndef _SERIALCOMMUNICATIONUART_H_
#define _SERIALCOMMUNICATIONUART_H_


#include <avr/io.h>
#include <util/delay.h>


#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))


#define UART_ENABLED UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)

#define UART_CHARACTER_SIZE UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01)

void UARTinit(uint16_t ubrr_value);

void UARTwritecharacter(char data);


#endif
