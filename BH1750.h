//--------------------------------------------------------------
// File     : RDA5807M.h
//--------------------------------------------------------------
#ifndef __BH1750_H
#define __BH1750_H

//--------------------------------------------------------------
// Includes
//--------------------------------------------------------------
#include "I2C1.h"

//--------------------------------------------------------------
// Global Function
//--------------------------------------------------------------
void BH1750_Init();
uint16_t BH1750_Read(void);
void delay_ms( uint32_t _time );
//--------------------------------------------------------------
#endif // __BH1750_H