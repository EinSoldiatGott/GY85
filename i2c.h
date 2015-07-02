#include <msp430.h>
#include "tipos_var.h"
#include "uart.h"

#ifndef I2C_H
#define I2C_H

#define duerme 	_BIS_SR(LPM0_bits + GIE)
#define despierta  LPM0_EXIT							//Despierta y sigue con el resto del código

#define ocupado_I2C UCB0STAT & UCBBUSY

//Variables
uint8 dir_i2C, lar_I2C, i_I2C;
uint8 *escritura_I2C, *lectura_I2C;

//volatile bool desOcupado;


//Uso local
void preparaInterrupciónTxI2C(void);
void preparaInterrupciónRxI2C(void);
void detieneInterrupcionesI2C(void);

//Públicas
void escribeI2C(uint8 dir, uint8 *esc_I2C, uint8 larg);
void leeI2C(uint8 dir, uint8 *lec_I2C, uint8 larg);

inline void  rutildeTX(void);
inline void rutildeRX(void);

#endif
