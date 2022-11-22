#ifndef BITMATH_H_INCLUDED
#define BITMATH_H_INCLUDED

// registry is the variable in memory where there is address for the value of port
// there are three types of registers : Port, Pin , DDR in "DIO_Private.h" file


#define SET_REG(reg)	(reg =  0xFF)  //0xFF is 11111111 in hexa
#define CLEAR_REG(reg)	(reg =  0x00)  //0x00 is 00000000 in hexa
#define TOGGLE_REG(reg)	(reg ^= reg )  //^ XOR 


#define SET_BIT(	reg, bit)	(reg |= (1<<bit))
#define CLEAR_BIT(	reg, bit)	(reg &=~(1<<bit))
#define TOGGLE_BIT(	reg, bit)	(reg ^= (1<<bit))
#define RET_BIT(	reg, bit)	(1   &(reg>>bit))




#endif //BITMATH_H_INCLUDED

