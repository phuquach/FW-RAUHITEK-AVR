/*
 * main.c
 *
 *  Created on: Apr 27, 2016
 *      Author: Phu Quach
 */


#include "stdlib.h"
#include <Arduino.h>

int
main(void)
{
	pinMode(13, OUTPUT);
	while(1)
	{
		digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
		delay(1000);              // wait for a second
		digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
		delay(1000);              // wait for a second
	}
	return 0;
}
