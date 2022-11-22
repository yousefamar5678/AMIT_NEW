

#ifndef DIO_INTERFACE_h
#define DIO_INTERFACE_h

#include "DIO_Private.h"
#include "BitMath.h"

#define INPUT  	0
#define OUTPUT 	1


//deine the ports
#define DIO_A	0
#define DIO_B	1
#define DIO_C	2
#define DIO_D	3

//define pins
#define PIN_0	0
#define PIN_1	1
#define PIN_2	2
#define PIN_3	3
#define PIN_4	4
#define PIN_5	5
#define PIN_6	6
#define PIN_7	7


// port -> A,B,C,D
// pin  -> 0,1,2,3,4,5,6,7
// mode -> input or output
//  val -> high , low



void DIO_VoidPinMode			(u8 port, u8 pin, 	u8 mode	);
void DIO_VoidDigitalWritePin	(u8 port, u8 pin, 	u8 val	);
void DIO_VoidDigitalTogglePin	(u8 port, u8 pin			);
u8   DIO_U8DigitalReadPin		(u8 port, u8 pin			);


void DIO_VoidPortMode			(u8 port,		 	u8 mode	);
void DIO_VoidDigitalWritePort	(u8 port,		 	u8 val	);
void DIO_VoidDigitalTogglePort	(u8 port					);
u8   DIO_U8DigitalReadPort		(u8 port					);




#endif // !DIO_INTERFACE_h