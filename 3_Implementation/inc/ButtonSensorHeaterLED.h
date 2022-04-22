#ifndef _BUTTONSENSORHEATERLED_H_
#define _BUTTONSENSORHEATERLED_H_

#include <avr/io.h>

#define BUTTON_SENSOR_ON !(PINB&(1<<PB7))

#define HEATER_ON !(PINB&(1<<PB6))

#define SET_LED PORTB|=(1<<PB0)

#define CLEAR_LED PORTB&=~(1<<PB0)

#define SET_LED_AS_OUTPUT DDRB|=(1<<PB0)


#define SET_BUTTON_AS_INPUT DDRB&=~(1<<PB6)


#define SET_HEATER_AS_INPUT DDRB&=~(1<<PB7)


#define PULLUP_BUTTON PORTB|=(1<<PB6)


#define PULLUP_HEATER PORTB|=(1<<PB7)

void Buttons_LED_Init();

#endif 
