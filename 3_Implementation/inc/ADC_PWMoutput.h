#ifndef _ADC_PWMOUTPUT_H_
#define _ADC_PWMOUTPUT_H_
#include <avr/io.h>
#include <util/delay.h>

#define SET_TIMER1A_FAST_PWM TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11)

#define PRESCALE_TIMER_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)


#define SET_PWM_AS_OUTPUT DDRB|=(1<<PB1)

void TimerWaveGenMode(void);

const char* outputbyPWM(uint16_t ADC_val);

#endif
