/*
 * ======== Standard MSP430 includes ========
 */
#include <msp430G2553.h>
/*
 * ======== Grace related includes ========
 */
#include <ti/mcu/msp430/Grace.h>


#include "tipos_var.h"
#include "retardos.h"
#include "uart.h"
#include "i2c.h"
#include "HMC.h"


#define dir_ADXL345	0x53

// DIspositivos
#define disponibleHMC BIT0;
uint8 disponiblesI2Cs=0;


/*
 *  ======== main ========
 */
void main(void)
{
	P1OUT &= ~BIT0 ;
	Grace_init();                   // Activate Grace-generated configuration
	delay_ms(1);
//	envia_uart("Hola",4);

	P1OUT|=BIT0;
	delay_ms(100);				//Tiempo para el Magneto


	if(verificaComHMC()){
//		envia_uart(buffer_lectura_I2C,3);
		disponiblesI2Cs|=disponibleHMC;					//Si encontró al HMC
	}

	// >>>>> Fill-in user code here <<<<<
	while(1){
//		espera_demanda_uart();
		leeHMCxyz();
		envia_uart(buffer_lectura_I2C,6);
		delay_ms(100);
	}
}


