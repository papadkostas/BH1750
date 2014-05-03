#include "main.h"
int main(){
	SystemInit();
	I2C1_Init();
	BH1750_Init();
	while(1){
		uint16_t x = BH1750_Read();
		delay_ms(200);
	}
}
