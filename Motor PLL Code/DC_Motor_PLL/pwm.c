/******************************************************************************
 * 	  File Name: pwm.c														  *
 * 	  Include: source code for pulsw width modulation						  *
 * 	  By: Abdelrhman Khaled													  *
 *																			  *
 *******************************************************************************/

#include "pwm.h"
#include "avr/interrupt.h"
#include "gpio.h"

/*
 * the function take on argument:
 * 1- take an argument duty_cycle
 * 2- initialize he value on TCNT0 register to zero
 * 3- store that duty_cycle in OCR0 register.
 * 4- put the pin 3 in portB as output pin for get output value from it.
 * 5- enable the compare match mode and FAST PWM mode then choose prescaler.
 *
 */
void PWM_Timer0_Start(uint8 duty_cycle){

	TCNT0 = 0;
	// if the input is 0 the result value on the pin is zero
	if(duty_cycle == 0){
		OCR0 = 0;
	}
	// if the input is 25 the result value on the pin is (1/4) of max value (255)
	else if(duty_cycle == 25){
		OCR0 = (25/100.0)*255;
	}
	// if the input is 25 the result value on the pin is (1/2) of max value (255)
	else if(duty_cycle == 50){
		OCR0 = (50/100.0)*255;
	}
	// if the input is 25 the result value on the pin is (3/4) of max value (255)
	else if(duty_cycle == 75){
		OCR0 = (75/100.0)*255;
	}
	// if the input is 25 the result value on the pin is the max value (255)
	else if(duty_cycle == 100){
		OCR0 = (100/100.0)*255;
	}
	GPIO_setupPinDirection(TIMER0_PWM_PORT,TIMER0_PWM_PIN,PIN_OUTPUT);
	TCCR0 = (1<<WGM00) | (1<<COM01) | (1<<WGM01)|(1<<CS01);
}
