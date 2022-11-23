
#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H 



#include "STD_TYPES.h"
#include "BitMath.h"
#include <DIO/DIO_Interface.h>



#define PORT_DATA 	DIO_A
#define PORT_CTRL 	DIO_B

#define RS 			PIN_1 	/*register select*/
#define RW 			PIN_2 	/*read/write*/
#define EN 			PIN_3 	/*enable*/


//rather than always using 0x.. values in writeCMD in "LCD_PROGRAM.h" then we use a #def
// >>> [0010] [0000] >>> [2][0] >>> 0x20  ///best method to convert hexa to binary

#define Func_Set_1and2	0x22		// initial for 32  = 0b0010 0000 
// on page 14  for example func_set line 2&3 we will send 0010 then 0010
// in other words we will send 0x22 
#define Disp_CMD		0x0C
#define Clear_CMD		0x01
#define EntrM_CMD		0x06

#define Func_Zeroo		0x00		// initial for 0   = 0b0000 0000
#define Func_One  		0x01		// initial for 1   = 0b0000 0001
#define Func_Dis2		0xC0		// 192 
#define Func_ent2		0x60		// 96


//Initialize the LCD 
void LCD_Init ();

//to give input and display data
void LCD_voidWriteData( u8 Copy_u8Data);

//to make the LCD do command
void LCD_voidSendCMD( u8 Copy_u8Cmd);

//function to write string
void LCD_voidWriteString( u8* Copy_u8String );



#endif 