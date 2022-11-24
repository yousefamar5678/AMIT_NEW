

// #include <DIO/DIO_Interface.h>


// #include <util/delay.h>


// #define BTN0	DIO_B, PIN_0
// #define LED0	DIO_C, PIN_2

// #define BTN1	DIO_D, PIN_6
// #define LED1	DIO_C, PIN_7

// #define BTN2	DIO_D, PIN_2
// #define LED2	DIO_D, PIN_3

// void leds_resetter()
// {

// 	DIO_VoidDigitalWritePin(LED0, LOW);
// 	DIO_VoidDigitalWritePin(LED1, LOW);
// 	DIO_VoidDigitalWritePin(LED2, LOW);	

// }



// int main(){
// 	DIO_VoidPinMode(BTN0, INPUT);
// 	DIO_VoidPinMode(LED0, OUTPUT);

// 	DIO_VoidPinMode(BTN1, INPUT);
// 	DIO_VoidPinMode(LED1, OUTPUT);

// 	DIO_VoidPinMode(BTN2, INPUT);
// 	DIO_VoidPinMode(LED2, OUTPUT);


// ///////  Task 1 : Illuminate led according to button 

// while(1)
// {
//   ///////  Task 1 : Illuminate led according to button 

// // 	if(	DIO_U8DigitalReadPin(BTN0) == HIGH		)
// //   {
// // 		DIO_VoidDigitalWritePin(LED0, HIGH);
// // 	}
// // 	else if(DIO_U8DigitalReadPin(BTN0) == LOW	)
// //   {
// // 		DIO_VoidDigitalWritePin(LED0, LOW);
// // 	}

// //   if(DIO_U8DigitalReadPin(BTN1) == HIGH)
// //   {
// //     DIO_VoidDigitalWritePin(LED1 , HIGH);    
// //   }
// // 	else if(DIO_U8DigitalReadPin(BTN1) == LOW	)
// //   {
// // 		DIO_VoidDigitalWritePin(LED1, LOW);
// // 	}  
  
// //   if(DIO_U8DigitalReadPin(BTN2) == HIGH)
// //   {
// //     DIO_VoidDigitalWritePin(LED2 , HIGH);    
// //   }
// // 	else if(DIO_U8DigitalReadPin(BTN2) == LOW	)
// //   {
// // 		DIO_VoidDigitalWritePin(LED2, LOW);
// //   }

// 	////////// Task 2 : Illuminate in a loop*********mowled edition*******
// 				//// to use delay we #define delay header
// 	if (DIO_U8DigitalReadPin(BTN0) == HIGH )
// 	{	
// 		u8 x = 50 ;		//user defined time of delay between leds on and off

// 		while (1)
// 		{
// 		DIO_VoidDigitalWritePin(LED0 , HIGH);
// 		_delay_ms(x);
// 		DIO_VoidDigitalWritePin(LED1 , HIGH);
// 		_delay_ms(x);		
// 		DIO_VoidDigitalWritePin(LED2 , HIGH);
// 		_delay_ms(x);
// 		leds_resetter();
		
// 		}
		
// 	}
	





// }


// } 













