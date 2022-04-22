#include <avr/io.h>
#include <util/delay.h>
#include "ButtonSensorHeaterLED.h"


void Buttons_LED_Init()
{
SET_LED_AS_OUTPUT; 
SET_BUTTON_AS_INPUT;
PULLUP_BUTTON; 
SET_HEATER_AS_INPUT;
PULLUP_HEATER;

}
