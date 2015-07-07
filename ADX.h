/*
 * ADX.h
 *
 *  Created on: 06/07/2015
 *      Author: Ein
 */

#include <msp430g2553.h>
#include "tipos_var.h"
#include "retardos.h"
#include "i2c.h"

#ifndef ADX_H_
#define ADX_H_

#define dir_ADX	0x53
//#define dir_ADX	0x1D

#define reg_ADX_id		0x00
#define reg_ADXxyz		0x32
#define reg_PWRctl		0x2D	 //0; 0; Link; AUTO_SLEEP;Measure;Sleep;Wakeup Wakeup
//Funciones
bool verificaComADX();
void leeADXxyz();
void configADX();

#endif /* ADX_H_ */
