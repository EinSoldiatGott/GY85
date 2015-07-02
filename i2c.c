#include "i2c.h"


void escribeI2C(uint8 dir, uint8 *esc_I2C, uint8 larg){

	preparaInterrupciónTxI2C();
	UCB0I2CSA = dir;						//Dir de esclavo
	i_I2C=0;
	escritura_I2C = esc_I2C;
	lar_I2C = larg;
	UCB0CTL1 |= UCTR;					// Modo transmisión
	UCB0CTL1 |= UCTXSTT;			//Manda Start

	while(ocupado_I2C);

	//	return ~((UCB0STAT&UCNACKIFG)&(UCB0STAT&UCALIFG));	//checa por eerores de AKL y árbitro
}


void leeI2C(uint8 dir, uint8 *lec_I2C, uint8 larg){
	preparaInterrupciónRxI2C();
	UCB0I2CSA = dir;
	i_I2C=0;
	lectura_I2C=lec_I2C;
	lar_I2C=larg;
	UCB0CTL1 &= ~UCTR;					//Modo recepción
	UCB0CTL1 |= UCTXSTT;				//Manda Start

	while(ocupado_I2C);

}

void preparaInterrupciónTxI2C(void){
	IFG2 &=~UCB0TXIFG;					//Limpio int solo por seguridad, se limpia cada que transmito
	IE2 |= UCB0TXIE;							//Habilita interrupción de TX, la cual no solo se dispara en envío, sino recepción
}

void preparaInterrupciónRxI2C(void){
	IFG2 &=~UCB0RXIFG;					//Limpio int solo por seguridad, se limpia cada que recibo
	IE2 |= UCB0RXIE;							//Habilita interrupción de TX, la cual no solo se dispara en envío, sino recepción
}

void detieneInterrupciones(void){
	IFG2 &=~UCB0TXIFG;					//no se requiere limpiar el flag, cada que se escribe en el buffer, se limpia// Parece que no está limpio?
	IFG2 &=~UCB0RXIFG;					//no se requiere limpiar el flag, cada que se escribe en el buffer, se limpia// Parece que no está limpio?
	IE2 &= ~UCB0TXIE;					//Habilita interrupción de TX, la cual no solo se dispara en envío, sino AKL y Direccción
	IE2 &= ~UCB0RXIE;					//Habilita interrupción de TX, la cual no solo se dispara en envío, sino AKL y Direccción
}

inline void rutildeTX(void){
	if(i_I2C<lar_I2C){
		UCB0TXBUF=escritura_I2C[i_I2C];
		i_I2C++;
	}
	else{
			UCB0CTL1 |= UCTXSTP;				//Manda STOP
			detieneInterrupciones();				//Desactiva ints
	}
}

inline void rutildeRX(void){

	if(i_I2C<lar_I2C){
		lectura_I2C[i_I2C]= UCB0RXBUF;
		envia_uart(lectura_I2C+i_I2C,1);
		i_I2C++;
		}
	else
	{
		UCB0CTL1 |= UCTXSTP;				//Manda STOP
		detieneInterrupciones();
	}
}

