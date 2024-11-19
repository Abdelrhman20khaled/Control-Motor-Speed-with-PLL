/******************************************************************************
 * 	  File Name: App.c														  *
 * 	  Include: source code for motor application 							  *
 * 	  By: Abdelrhman Khaled													  *
 *																			  *
 *******************************************************************************/
#include "dc_motor.h"
#include "gpio.h"
#include "avr/delay.h"

int main()
{
	DcMotor_Init();

	while(1)
	{
		DcMotor_Rotate(Motor_Stop,0);
		_delay_ms(2000);
		DcMotor_Rotate(Motor_CW,50);
		_delay_ms(2000);
		DcMotor_Rotate(Motor_CW,100);
		_delay_ms(2000);
		DcMotor_Rotate(Motor_Stop,0);
		_delay_ms(2000);
		DcMotor_Rotate(Motor_A_CW,50);
		_delay_ms(2000);
		DcMotor_Rotate(Motor_A_CW,100);
		_delay_ms(2000);
	}
}
