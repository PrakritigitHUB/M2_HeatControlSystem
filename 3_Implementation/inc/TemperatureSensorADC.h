#ifndef _TEMPERATURESENSORADC_H_
#define _TEMPERATURESENSORADC_H_


#include <avr/io.h>


#define ADC_ENABLE_PRESCALE ADCSRA=(1<<ADEN)|(7<<ADPS0)


#define SET_REFERENCE_VOLTAGE ADMUX=(1<<REFS0)

#define SET_ADC_INTERRUPT_FLAG ADCSRA|=(1<<ADIF)


#define ADC_INTERRUPT_NOT_OCCURED !(ADCSRA & (1<<ADIF))

void Init_ADC();

uint16_t Read_ADC(uint8_t ch);




#endif
