/*
 * HMC.c
 *
 *  Created on: 03/07/2015
 *      Author: Ein
 */

#include "HMC.h"

bool verificaComHMC(){
	registro_I2C = reg_IDa;
	escribeI2C(dir_HMC,1);
	delay_ms(1);
	leeI2C(dir_HMC,3);
	if((buffer_lectura_I2C[0]=='H')){
		return TRUE;
	}
	else{
		return FALSE;
	}

}

void configHMC(){
	registro_I2C = reg_cfA;
	valor_I2C=0x70;					//8 promedios por lectura + 15Hz + polarización normal
	escribeI2C(dir_HMC,2);
	delay_ms(1);

	registro_I2C = reg_cfB;
	valor_I2C=0x40;					//Ganancia 1.9Gauss
	valor_I2C=0x20;					//Ganancia 1.3Gauss
	valor_I2C=0x00;					//Ganancia 0.8Gauss
	escribeI2C(dir_HMC,2);


//	leeI2C(dir_HMC,6);
}


void leeHMCxyz(){
	registro_I2C = reg_Mod;
	valor_I2C=mod_continuo;
	escribeI2C(dir_HMC,2);
	delay_ms(6);
	leeI2C(dir_HMC,6);
}

void leeHMCtodos(){
		registro_I2C = 0;
		escribeI2C(dir_HMC,1);
		delay_ms(1);
		leeI2C(dir_HMC,10);

}
