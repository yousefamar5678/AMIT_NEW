


#include "LCD_INTERFACE.h"

//to use delay
#include <util/delay.h>

//Number of lines
#define N  0
//Character Font
#define F  0
//Interface Operation
#define DL 1

// //display 0 = OFF
// #define D  1 
// //display Cursor OFF
// #define C  0
// //blink cursor =0 OFF
// #define B  0

//Increment Mode =1 ON
#define IncM	0
//Display Shift =1 ON
#define ShftM	0

void LCD_latch_enable()
{			//latch because in 4 bit mode to get a char of 8 bits we need to make time 
	//so that the 8 bits of char is assembled and viewed as 1 char
	//When data is supplied to data pins, a high-to-low pulse must be applied to 
	//this pin in order for the LCD to latch in the data present at the data pins.
	// This pulse must be a minimum of 450 ns wide
		//latch enable PIN //is needed when i send 4 bits and then 4 bits manually
	
	DIO_VoidDigitalWritePin(PORT_CTRL , EN , HIGH);				//when HIGH it is a signal to reaad data
	_delay_ms(2);                                               // 2 microseconds is enough to store data at buses and avoid data loss
	DIO_VoidDigitalWritePin(PORT_CTRL , EN , LOW);				//when shifting from low to high the resulting signal during shifting means writing
	_delay_ms(2);

}

//Initialize the LCD 
void LCD_Init ()
{
		DIO_VoidPinMode(PORT_CTRL , RS ,OUTPUT);
		DIO_VoidPinMode(PORT_CTRL , RW ,OUTPUT);
		DIO_VoidPinMode(PORT_CTRL , EN ,OUTPUT);
		DIO_VoidPortMode(PORT_DATA , OUTPUT);
		//we do the init sequence from datasheet
		//here we do 4 bit mode

	//Initialize pins output
		DIO_VoidPinMode(DIO_B , PIN_4 , OUTPUT);
		DIO_VoidPinMode(DIO_B , PIN_5 , OUTPUT);
		DIO_VoidPinMode(DIO_B , PIN_6 , OUTPUT);
		DIO_VoidPinMode(DIO_B , PIN_7 , OUTPUT);
		
	//function set###
		_delay_ms(50);
		//either this 
			/* DIO_VoidDigitalWritePort(PORT_DATA , 0b0010 0000 );
			void LCD_voidSendCMD( u8 Copy_u8Cmd) */ 	
		//or this
		LCD_voidSendCMD( Func_Set_1and2	);
		LCD_latch_enable();
		DIO_VoidDigitalWritePin(PORT_CTRL , PIN_7 , N );
		DIO_VoidDigitalWritePin(PORT_CTRL , PIN_6 , F );
		//do latch 
		LCD_latch_enable();


	//Display ON/OFF####

		_delay_ms(1);
		LCD_voidSendCMD( Disp_CMD 		);
	
	
	//Display Clear####
		_delay_ms(1);
		LCD_voidSendCMD( Clear_CMD		);
	
	//Entry Mode###
		_delay_ms(2);
		LCD_voidSendCMD( Func_Zeroo		);
		LCD_voidSendCMD( EntrM_CMD		);

}

//to give input and display data
void LCD_voidWriteData( u8 Copy_u8Data)
{ 
	//to write (1)-set RS to HIGH and (2)-set RW to LOW
	DIO_VoidDigitalWritePin(PORT_CTRL , RS , HIGH);
	DIO_VoidDigitalWritePin(PORT_CTRL , RW , LOW );


	DIO_VoidDigitalWritePin(PORT_DATA , PIN_4 , RET_BIT(Copy_u8Data,4) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_5 , RET_BIT(Copy_u8Data,5) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_6 , RET_BIT(Copy_u8Data,6) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_7 , RET_BIT(Copy_u8Data,7) );							
	

	LCD_latch_enable();


	DIO_VoidDigitalWritePin(PORT_DATA , PIN_4 , RET_BIT(Copy_u8Data,0) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_5 , RET_BIT(Copy_u8Data,1) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_6 , RET_BIT(Copy_u8Data,2) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_7 , RET_BIT(Copy_u8Data,3) );	

	LCD_latch_enable();



}

//to make the LCD do command
void LCD_voidSendCMD( u8 Copy_u8Cmd)
{

	// RS to LOW for sending a command
	DIO_VoidDigitalWritePin(PORT_CTRL , RW , LOW );
	DIO_VoidDigitalWritePin(PORT_CTRL , RS , LOW);

	//DIO_VoidDigitalWritePort(PORT_DATA , Copy_u8Cmd);

	DIO_VoidDigitalWritePin(PORT_DATA , PIN_4 , RET_BIT(Copy_u8Cmd,4) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_5 , RET_BIT(Copy_u8Cmd,5) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_6 , RET_BIT(Copy_u8Cmd,6) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_7 , RET_BIT(Copy_u8Cmd,7) );							
	

	LCD_latch_enable();


	DIO_VoidDigitalWritePin(PORT_DATA , PIN_4 , RET_BIT(Copy_u8Cmd,0) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_5 , RET_BIT(Copy_u8Cmd,1) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_6 , RET_BIT(Copy_u8Cmd,2) );
	DIO_VoidDigitalWritePin(PORT_DATA , PIN_7 , RET_BIT(Copy_u8Cmd,3) );	

	LCD_latch_enable();
}

//function to write string
void LCD_voidWriteString( u8* Copy_u8String )
{
	///to avoid getting out of the array of chars
	///fixate the size of array 
	while (*Copy_u8String != '\0') //end of an array contains null char \0 
	{
		LCD_voidWriteData( *Copy_u8String );
		Copy_u8String ++ ;
	}
	
}
