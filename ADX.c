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

//void configADX(){
//	registro_I2C = reg_cfA;
//	valor_I2C=0x70;					//8 promedios por lectura + 15Hz + polarización normal
//	escribeI2C(dir_ADX,2);
//	delay_ms(1);
//
//	registro_I2C = reg_cfB;
//	valor_I2C=0x40;					//Ganancia 1.9Gauss
//	valor_I2C=0x20;					//Ganancia 1.3Gauss
//	valor_I2C=0x00;					//Ganancia 0.8Gauss
//	escribeI2C(dir_ADX,2);
//
//
////	leeI2C(dir_HMC,6);
//}
//
//
void leeADXxyz(){
	registro_I2C = reg_ADXxyz;
	valor_I2C=mod_continuo;
	escribeI2C(dir_HMC,2);
	delay_ms(6);
	leeI2C(dir_HMC,6);
}

