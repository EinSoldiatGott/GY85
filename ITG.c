/*
 * ITG.c
 *
 *  Created on: 03/07/2015
 *      Author: Ein
 */

#include "ITG.h"

bool verificaComITG(){
	registro_I2C = reg_ITG_id;
	escribeI2C(dir_ITG,1);
	delay_ms(1);
	leeI2C(dir_ITG,3);
	if((buffer_lectura_I2C[0]==0x68)){
		return TRUE;
	}
	else{
		return FALSE;
	}
}

void configITG(){
	registro_I2C = reg_ITG_Rango;
//	valor_I2C=0x18;					//±2000°/sec |256Hz FPB
	valor_I2C=0x18|0x06;		//±2000°/sec |5Hz FPB
	escribeI2C(dir_ITG,2);
	delay_ms(1);
}


void leeITGxyz(){
	registro_I2C = reg_ITG_xyz;
	escribeI2C(dir_ITG,1);
	delay_ms(5);
	leeI2C(dir_ITG,6);
}

