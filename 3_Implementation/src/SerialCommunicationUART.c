#include <avr/io.h>
#include "SerialCommunicationUART.h"

void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UART_CHARACTER_SIZE; // 8 bit size of data
    UART_ENABLED; //enable rx and tx of uart with interrupts

}

void UARTwritecharacter(char data){

while(UART_DATA_NOT_WRITTEN){

}

UDR0 = data;

}
