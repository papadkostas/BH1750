#include "BH1750.h"
uint8_t buff[2];

void BH1750_Init(){
	I2C_start(I2C1,0x23,I2C_Direction_Transmitter);
	I2C_write(I2C1,0x10);
	I2C_stop(I2C1);
}

uint16_t BH1750_Read(){
	uint16_t val=0;
	I2C_start(I2C1,0x23,I2C_Direction_Transmitter);
	buff[1]=I2C_read_ack(I2C1);
	buff[2]=I2C_read_nack(I2C1);
	I2C_stop(I2C1);
	val=((buff[0]<<8)|buff[1])/1.2;
	return val;
}

void delay_ms( uint32_t _time ){
	_time = _time * 420;
	while( _time-- ){
	}
}
