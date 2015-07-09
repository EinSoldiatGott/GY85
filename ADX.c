/*
 * ADX.c
 *
 *  Created on: 06/07/2015
 *      Author: Ein
 */

#include "ADX.h"

bool verificaComADX(){
	registro_I2C = reg_ADX_id;
	escribeI2C(dir_ADX,1);
	delay_ms(1);
	leeI2C(dir_ADX,1);
	if((buffer_lectura_I2C[0]==0xE5)){
		return TRUE;
	}
	else{
		return FALSE;
	}

}

void configADX(){
	registro_I2C = reg_ADX_pwr;
	valor_I2C=0x08;					//Modo medición
	escribeI2C(dir_ADX,2);
	delay_ms(1);

	registro_I2C = reg_ADX_spd;
	valor_I2C=0x07;					//Vel medición = 6.25Hz
	escribeI2C(dir_ADX,2);
	delay_ms(1);
}


void leeADXxyz(){
	registro_I2C = reg_ADX_xyz;
	escribeI2C(dir_ADX,1);
	delay_ms(5);
	leeI2C(dir_ADX,6);
}
