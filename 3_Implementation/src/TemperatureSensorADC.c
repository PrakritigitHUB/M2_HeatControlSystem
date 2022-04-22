#include <avr/io.h>
#include "TemperatureSensorADC.h"


void Init_ADC(){
    SET_REFERENCE_VOLTAGE;
    ADC_ENABLE_PRESCALE;

}

6_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(ADC_INTERRUPT_NOT_OCCURED);
    SET_ADC_INTERRUPT_FLAG;
    return(ADC);

}
