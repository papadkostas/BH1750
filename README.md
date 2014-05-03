CoIDE project for BH1750 using STM32F4-29-Discovery Board 

BH1750 is an digital Ambient Light Sensor IC for I2C bus interface

###################################################################

Instructions Set Bellow
Opcode(sample Time) Instruction                     Comments    
0000_0000           Power Down                      No active state. 
0000_0001           Power On                        Waiting for measurement command. 
0000_0111           Reset                           Reset Data register value.
                                                    Reset command is not acceptable in Power Down mode. 
0001_0000 (120ms)   Continuously H-Resolution Mode  Start measurement at 1 lx resolution.
0001_0001 (120ms)   Continuously H-Resolution Mode2 Start measurement at 0.5 lx resolution.
0001_0011 (16ms)    Continuously L-Resolution Mode  Start measurement at 4 lx resolution.
0010_0000 (120ms)   One Time H-Resolution Mode      Start measurement at 1 lx resolution.
                                                    It is automatically set to Power Down mode after measurement.
0010_0001 (120ms)   One Time H-Resolution Mode2     Start measurement at 0.5 lx resolution. 
                                                    It is automatically set to Power Down mode after measurement.

0010_0011 (16ms)    One Time L-Resolution Mode      Start measurement at 4 lx resolution.       
                                                    It is automatically set to Power Down mode after measurement.
