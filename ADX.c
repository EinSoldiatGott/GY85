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
	registro_I2C = reg_PWRctl;
	valor_I2C=0x00;					//Así inicia, sin autosleep
	escribeI2C(dir_ADX,2);
	delay_ms(1);

}


void leeADXxyz(){
	registro_I2C = reg_ADXxyz;
	valor_I2C=0xFE;
	escribeI2C(dir_ADX,2);
	delay_ms(6);
	leeI2C(dir_ADX,6);
}
