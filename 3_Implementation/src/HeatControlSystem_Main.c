#include <avr/io.h>
#include <util/delay.h>
#include "ButtonSensorHeaterLED.h"
#include "TemperatureSensorADC.h"
#include "ADC_PWMoutput.h"
#include "SerialCommunicationUART.h"

typedef struct{

    uint16_t temp;
    const char* tempvalue;

}variables;

variables var;

int main(void)
{
    Buttons_LED_Init(); 
    Init_ADC(); 
    TimerWaveGenMode();
    UARTinit(103);
    
    int i;

    
    while(1)
    {
       if(BUTTON_SENSOR_ON) 
        {

            if(HEATER_ON)
            {
                _delay_ms(20);
                SET_LED; 
                var.temp = Read_ADC(0);
                var.tempvalue = outputbyPWM(var.temp);
                for(i=0;i<=5;i++){
                UARTwritecharacter(var.tempvalue[i]);

                }
                _delay_ms(20);
                
            }
            else
            {
                _delay_ms(20);
                OCR1A = 0; 
                CLEAR_LED; 
            }
        }
        else
        {
                
                CLEAR_LED;
                OCR1A = 0; 
                _delay_ms(20);
        }
    }

 return 0;   
}
