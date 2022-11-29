/*guard*/
#ifndef _KEYPAD_INCLUDED_H_
#define _KEYPAD_INCLUDED_H_


#include "DIO/DIO_Interface.h"
//to display output on LCD
#include "LCD/LCD_INTERFACE.h"




#define col_1 PORTC,PIN_0
#define col_2 PORTC,PIN_1 
#define col_3 PORTC,PIN_2
#define col_4 PORTC,PIN_3 

#define row_a PORTB,PIN_0
#define row_b PORTB,PIN_1
#define row_c PORTB,PIN_2
#define row_d PORTB,PIN_3

// u8 keypad[4][4] = //the matrix should look like this
// {
// 	{'a1','a2','a3','a4'},
// 	{'b1','b2','b3','b4'},
// 	{'c1','c2','c3','c4'},
// 	{'d1','d2','d3','d4'}
// };


u8 keypad[4][4] = 
{
	{'1','2','3','A'},
	{'4','5','6','B'},
	{'7','8','9','C'},
	{'*','0','#','D'}
};



void Keypad_Init();

u8 Find_touched();



#endif