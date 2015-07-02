/*
 * uart.h
 *
 *  Created on: 17/06/2015
 *      Author: EinSoldiatGott
 */
#include <msp430g2553.h>
#include "tipos_var.h"

#ifndef UART_H_
#define UART_H_


//Variables
//uint8 *escritura_UART, *lectura_UART;

void envia_uart(uint8 *texto, uint8 len);
void espera_demanda_uart(void);

#endif /* UART_H_ */
