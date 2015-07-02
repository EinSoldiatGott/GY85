/*
 * ======== Standard MSP430 includes ========
 */
#include <msp430G2553.h>
/*
 * ======== Grace related includes ========
 */
#include <ti/mcu/msp430/Grace.h>
#include "uart.h"
#include "i2c.h"
#include "tipos_var.h"

//Definiciones de tiempo
#define ms_1 	16000
#define ms_6 	6*16000
#define ms_1000 	16000000
void delay_ms(char ms);

//Definiciones de HMC
#define dir_HMC5883L	0x1E
#define dir_ADXL345	0x53

#define reg_cfA		0x00
#define reg_cfB		0x01
#define reg_Mod		0x02
#define reg_XYZ	0x03
#define reg_est		0x09
//Address Location Name Access
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

#define mod_continuo 	0x01
#define bits_poleo 		0x06
#define registro buffer_escritura[0]
#define valor buffer_escrituraL[1]


uint8 buffer_lectura[20];
uint8 buffer_escritura[20];

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
	delay_ms(100);

	registro = 0;
	escribeI2C(dir_HMC5883L,buffer_escritura,1);

	leeI2C(dir_HMC5883L,buffer_lectura,13);

	delay_ms(1);

//	cicloFOR(buffer_lectura);
	envia_uart(buffer_lectura,13);


	// >>>>> Fill-in user code here <<<<<
	while(1){
//		espera_demanda_uart();
//		registro = 0x02;
//		valor=0x01;
//		escribeI2C(dir_HMC5883L,buffer_escritura,2);
//		delay_ms(6);
//		leeI2C(dir_HMC5883L,buffer_lectura,6);
//		//    	if(escribeI2C(dir_HMC5883L,modo_HMC5883,2)){
		//			_delay_cycles(ms6);
		//			escribeI2C(dir_HMC5883L,6,1);
		//			leeI2C(dir_HMC5883L,buffer_HMC5883L,6);
		//			P1OUT^=BIT0;
		//    	}
		//
		//       	_delay_cycles(ms1000);
	}
}

void delay_ms(char ms){
	while(ms>0){
		_delay_cycles(ms_1);
		ms--;
	}
}
