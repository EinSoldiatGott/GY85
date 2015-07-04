/*
 * Retardos.c
 *
 *  Created on: 03/07/2015
 *      Author: Ein
 */
#include "retardos.h"

void delay_ms(unsigned int ms){
	while(ms>0){
		_delay_cycles(ms_1);
		ms--;
	}
}

