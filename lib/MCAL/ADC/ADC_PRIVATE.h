#ifndef ADC_PRIVATE_HEADER
#define ADC_PRIVATE

#include "STD_Types.h"
#include "BitMath.h"

/**********************************Registry addresses***************************/

/*Analog Comparator Control and Status Register*/
#define ADC_REG_ACSR	*((volatile u8*)(0x28))
		
#define CSR_ACD 
#define CSR
#define CSR
#define CSR
#define CSR
#define CSR
#define CSR



/*Multiplexer address*/
#define ADC_REG_ADMUX	*((volatile u8*)(0x27))
		//BITS IN MULTIPLEXER REGISTER
#define ADC_MUX0		0
#define ADC_MUX1		1
#define ADC_MUX2		2
#define ADC_MUX3		3
#define ADC_MUX4		4
#define ADC_LEFT_RIGHT	5
#define ADC_REF_SELECT0	6
#define ADC_REF_SELECT1	7




/*ADC control and status register*/
#define ADC_REG_ADCSRA	*((volatile u8*)(0x26))

#define CSRA_ADEN		7
#define CSRA_SC			6		/// ADSC
#define CSRA_ATE		5
// #define CSRA_IF			4
// #define CSRA_IE			3
#define CSRA_PS2		2
#define CSRA_PS1		1
#define CSRA_PS0		0




/*Data Registers*/
#define ADC_REG_ADCH	*((volatile u8*)(0x25))   	//higher byte 
#define ADC_REG_ADCL	*((volatile u8*)(0x24))		//lower byte

/*Special Function Register*/
#define ADC_REG_SFIOR	*((volatile u8*)(0x50))
	//Bit 4 Reserved
#define RESERVED 3

#endif // !ADC_PRIVATE_HEADER








