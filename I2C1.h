//--------------------------------------------------------------
// File     : I2C1.h
//--------------------------------------------------------------
#ifndef I2C1_H
#define I2C1_H

//--------------------------------------------------------------
// Includes
//--------------------------------------------------------------
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_i2c.h"
#include "stm32f4xx_gpio.h"

//--------------------------------------------------------------
// Global Functions
//--------------------------------------------------------------
void I2C1_Init(void);
void I2C_start(I2C_TypeDef* I2Cx, uint8_t address, uint8_t direction);
void I2C_stop(I2C_TypeDef* I2Cx);
uint8_t I2C_read_nack(I2C_TypeDef* I2Cx);
uint8_t I2C_read_ack(I2C_TypeDef* I2Cx);
void I2C_write(I2C_TypeDef* I2Cx, uint8_t data);

//--------------------------------------------------------------
#endif // I2C1_H
