// #include "SevenSegment.h"
// #include "util/delay.h"


// void SEG_voidInit(){
// 	DIO_VoidPinMode	(SEG_A,		OUTPUT);
// 	DIO_VoidPinMode	(SEG_B,		OUTPUT);
// 	DIO_VoidPinMode	(SEG_C,		OUTPUT);
// 	DIO_VoidPinMode	(SEG_D,		OUTPUT);

// 	DIO_VoidPinMode	(SEG_DOT,	OUTPUT);
// 	DIO_VoidPinMode	(SEG_En1,	OUTPUT);
// 	DIO_VoidPinMode	(SEG_En2,	OUTPUT);

// }

// void Convert_Deceimal_Binary()
// {
// 	// if num = 5;   -->     0101
// 	//enter number to display 
// 	u8 num = 5 ;
// 	// suppose numval = 0101 then A=0 ; B=1 ; C=0 ; D=1 ;
// 	//then we create an array of decoder values =[A,B,C,D]

// 	volatile u8 units = num % 10,
	
// 	tens  = num / 10;


// 	u8 A,B,C,D;
// 	u8 numval[3]=[A,B,C,D];
// 	u8 temp = num;


// 	if ((num >= 0) && (num <= 9) && (temp!=0))
// 	{
// 		for (u8 i = 0; i < 5; i++)
// 		{	
// 			switch (num%2)
// 			{
// 			case 1:
// 			numval[i] = HIGH ;
// 				break;
// 			case 0:
// 			numval[i] = LOW ;
// 				break;
// 			}
// 			temp = num/2 ;
// 		}
// 	}
// }


// void SEG_voidDisplay(u8 num){

	


// 		if((num>=0) && (num <=99)){

// 		DIO_VoidDigitalWritePin(SEG_A,			(GET_BIT(units, 0))	 );
// 		DIO_VoidDigitalWritePin(SEG_B,			(GET_BIT(units, 1))	 );
// 		DIO_VoidDigitalWritePin(SEG_C,			(GET_BIT(units, 2))	 );
// 		DIO_VoidDigitalWritePin(SEG_D,			(GET_BIT(units, 3))	 );
// 		DIO_VoidDigitalWritePin(SEG_En1, 	HIGH);	_delay_ms(2);	;
// 		DIO_VoidDigitalWritePin(SEG_En1, 	HIGH);
// 	}
	

	
	
	


// }




