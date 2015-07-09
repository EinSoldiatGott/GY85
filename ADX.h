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
#define reg_ADX_xyz		0x32
#define reg_ADX_spd	0x2C	 //0 0 0 LOW_POWER  Rate RateRate Rate de medición
#define reg_ADX_pwr	0x2D	 //0; 0; Link; AUTO_SLEEP;Measure;Sleep;Wakeup Wakeup

//Funciones
bool verificaComADX();
void leeADXxyz();
void configADX();

#endif /* ADX_H_ */
