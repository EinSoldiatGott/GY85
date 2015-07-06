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
//00 Configuration Register A Read/Write
//01 Configuration Register B Read/Write
//02 Mode Register Read/Write
//03 Data Output X MSB Register Read
//04 Data Output X LSB Register Read
//05 Data Output Z MSB Register Read
//06 Data Output Z LSB Register Read
//07 Data Output Y MSB Register Read
//08 Data Output Y LSB Register Read
//09 Status Register Read
//10 Identification Register A Read
//11 Identification Register B Read
//12 Identification Register C Read
#define reg_cfA		0x00
#define reg_cfB		0x01
#define reg_Mod		0x02
#define reg_XYZ		0x03
#define reg_est			0x09
#define reg_IDa		0x0A
#define reg_IDb		0x0B
#define reg_IDc		0x0C

#define mod_continuo 	0x01
#define bits_poleo 		0x06


//Funciones
bool verificaComHMC();
void leeHMCxyz();
void leeHMCtodos();
void configHMC();


#endif /* HMC_H_ */



