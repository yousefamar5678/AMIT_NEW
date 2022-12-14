#include "DIO_Interface.h"

#define PORT_PIN u8 PORT,u8 PIN



void DIO_VoidPinMode ( PORT_PIN , u8 mode)
{
	switch (mode)
	{
	case INPUT:
			switch (PORT)
			{
			case DIO_A:{	CLEAR_BIT(DDRA , PIN);	}		break;
			case DIO_B:{	CLEAR_BIT(DDRB , PIN);	}		break;
			case DIO_C:{	CLEAR_BIT(DDRC , PIN);	}		break;
			case DIO_D:{	CLEAR_BIT(DDRD , PIN);	}		break;
			}	
	 	break;
	case OUTPUT:
			switch (PORT)
			{
			case DIO_A:{	SET_BIT(DDRA , PIN);	}		break;
			case DIO_B:{	SET_BIT(DDRB , PIN);	}		break;
			case DIO_C:{	SET_BIT(DDRC , PIN);	}		break;
			case DIO_D:{	SET_BIT(DDRD , PIN);	}		break;
			}	
	 	break;
	}
}										//if mode is input set 1 the DDR to the specific PORT



// void DIO_VoidPinMode		(u8 port, u8 pin, u8 mode	){
// 	if(port <4){
// 		if(pin <8){

// 			switch(mode){
// 				case INPUT:{
// 					switch(port){
// 						case DIO_A:{	CLEAR_BIT(DDRA, pin);	}break;
// 						case DIO_B:{	CLEAR_BIT(DDRB, pin);	}break;
// 						case DIO_C:{	CLEAR_BIT(DDRC, pin);	}break;
// 						case DIO_D:{	CLEAR_BIT(DDRD, pin);	}break;
// 					}

// 				}break;
// 				case OUTPUT:{
// 					switch(port){
// 						case DIO_A:{	SET_BIT(DDRA, pin);		}break;
// 						case DIO_B:{	SET_BIT(DDRB, pin);		}break;
// 						case DIO_C:{	SET_BIT(DDRC, pin);		}break;
// 						case DIO_D:{	SET_BIT(DDRD, pin);		}break;
// 					}
// 				}break;
// 			}

// 		}
// 	}
// }

void DIO_VoidDigitalWritePin	(u8 port, u8 pin, u8 val	)
{
	switch(val){
		case LOW:{
			switch(port){
				case DIO_A:{	CLEAR_BIT(PORTA, pin);	}break;
				case DIO_B:{	CLEAR_BIT(PORTB, pin);	}break;
				case DIO_C:{	CLEAR_BIT(PORTC, pin);	}break;
				case DIO_D:{	CLEAR_BIT(PORTD, pin);	}break;

				default: break;
			}

		}break;

		case HIGH:{
			switch(port){
				case DIO_A:{	SET_BIT(PORTA, pin);	}break;
				case DIO_B:{	SET_BIT(PORTB, pin);	}break;
				case DIO_C:{	SET_BIT(PORTC, pin);	}break;
				case DIO_D:{	SET_BIT(PORTD, pin);	}break;

				default: break;
			}
		}break;

		default: break;
	}
		
}

void DIO_VoidDigitalTogglePin	(u8 port, u8 pin		){
	if(port<4){
		if(pin<8){

			switch(port){
				case DIO_A:{	TOGGLE_BIT(PORTA, pin);	}break;
				case DIO_B:{	TOGGLE_BIT(PORTB, pin);	}break;
				case DIO_C:{	TOGGLE_BIT(PORTC, pin);	}break;
				case DIO_D:{	TOGGLE_BIT(PORTD, pin);	}break;
				default: return;
			}

		}
	}
}

u8   DIO_U8DigitalReadPin		(u8 port, u8 pin		){
	volatile bool val=0;
	

	switch(port){
		case DIO_A:{	val=	RET_BIT(PINA, pin);	}break;
		case DIO_B:{	val=	RET_BIT(PINB, pin);	}break;
		case DIO_C:{	val=	RET_BIT(PINC, pin);	}break;
		case DIO_D:{	val=	RET_BIT(PIND, pin);	}break;
		default: break;
	}

	return val;
}

// ************************************************************************ //
//for output set pin with 1, for input 0 from "DIO_Interface.h"

void DIO_VoidPortMode			(u8 port, u8 mode	){
	switch (mode)
	{
		case OUTPUT:	switch (port)
		{
			case DIO_A:		DDRA = 0xFF;	break;
			case DIO_B:		DDRB = 0xFF;	break;
			case DIO_C:		DDRC = 0xFF;	break;
			case DIO_D:		DDRD = 0xFF;	break;
			default:	break;

		} break;

		case  INPUT:	switch (port)
		{
			case DIO_A:		DDRA = 0x00;	break;
			case DIO_B:		DDRB = 0x00;	break;
			case DIO_C:		DDRC = 0x00;	break;
			case DIO_D:		DDRD = 0x00;	break;
			default:	break;

		} break;

		default:		break;
	}

}

void DIO_VoidDigitalWritePort	(u8 port, u8 val	)
{
	switch (port)
	{
		case DIO_A:		PORTA = val;	break;
		case DIO_B:		PORTB = val;	break;
		case DIO_C:		PORTC = val;	break;
		case DIO_D:		PORTD = val;	break;
		
		default:		break;
	}

}

void DIO_VoidDigitalTogglePort	(u8 port			)
{
	switch (port)
	{
		case DIO_A:		TOGGLE_REG(PORTA);	break;
		case DIO_B:		TOGGLE_REG(PORTB);	break;
		case DIO_C:		TOGGLE_REG(PORTC);	break;
		case DIO_D:		TOGGLE_REG(PORTD);	break;
		
		default:		break;
	}
}

u8   DIO_U8DigitalReadPort		(u8 port			)
{
	volatile u8 val;

	switch (port)
	{
		case DIO_A:		val = PINA;	break;
		case DIO_B:		val = PINB;	break;
		case DIO_C:		val = PINC;	break;
		case DIO_D:		val = PIND;	break;
		
		default:		break;
	}
	return val;

}


