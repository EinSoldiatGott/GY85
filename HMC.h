/*
 * HMC.h
 *
 *  Created on: 03/07/2015
 *      Author: Ein
 */

#include <msp430g2553.h>
#include "tipos_var.h"
#include "retardos.h"
#include "i2c.h"



#ifndef HMC_H_
#define HMC_H_

static const uint8 dir_HMC	=0x1E;
//Registros//
#define reg_cfA		0x00
#define reg_cfB		0x01
#define reg_HMC_mod		0x02
#define reg_HMC_xzy		0x03
#define reg_est			0x09
#define reg_IDa		0x0A
#define reg_IDb		0x0B
#define reg_IDc		0x0C

#define HMC_modo 	0x00		//0 = contínuo



//Funciones
bool verificaComHMC();
void leeHMCxzy();
void leeHMCtodos();
void configHMC();


#endif /* HMC_H_ */



