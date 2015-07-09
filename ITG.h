/*
 * ITG.h
 *
 *  Created on: 03/07/2015
 *      Author: Ein
 */

#include <msp430g2553.h>
#include "tipos_var.h"
#include "retardos.h"
#include "i2c.h"



#ifndef ITG_H_
#define ITG_H_

static const uint8 dir_ITG	=0x68;

//Registros//
#define reg_ITG_id			0x00
#define reg_ITG_Rango 	0x16
#define reg_ITG_xyz 		0x1D
#define reg_ITG_pwr 		0x3E



//Funciones
bool verificaComITG();
void leeITGxyz();
void configITG();


#endif /* ITG_H_ */



