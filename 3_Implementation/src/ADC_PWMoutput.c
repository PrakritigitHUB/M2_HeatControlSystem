#include <avr/io.h>
#include <util/delay.h>
#include "ADC_PWMoutput.h"
#include "SerialCommunicationUART.h"
#include <string.h>
#include <stdlib.h>

void TimerWaveGenMode(void){

    SET_TIMER1A_FAST_PWM; 
    PRESCALE_TIMER_64; 
    SET_PWM_AS_OUTPUT;

}

const char* outputbyPWM(uint16_t ADC_val){
    //int i;
    static char temperature[10]; 

    if(ADC_val<=209){

        OCR1A = 205; 
        temperature[0] = '2';
        temperature[1] = '0';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        return temperature;
        
    }
    else if((ADC_val<=509)){

        OCR1A = 410; 
        temperature[0] = '2';
        temperature[1] = '5';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        return temperature;
        
    }
    else if((ADC_val<=709)){

        OCR1A = 717;
        temperature[0] = '2';
        temperature[1] = '9';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        return temperature; 
        
    }
    else if((ADC_val<=1024)){

        OCR1A = 973;
        temperature[0] = '3';
        temperature[1] = '3';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        return temperature; 
    }
    else{
        OCR1A = 0;
        temperature[0] = 'O';
        temperature[1] = 'F';
        temperature[2] = 'F';
        temperature[3] = ' ';
        temperature[4] = ' ';
        temperature[5] = '\0';
        return temperature;
        
    }

}
