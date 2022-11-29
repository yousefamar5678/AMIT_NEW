
#include "STD_Types.h"

/// INSTRUCTOR FUNCTIONS



  
void TIMER0_voidInit(void);
void TIMER0_voidSetCompareMatch(u8 Copy_u8OCR0Value);  //ocr value

void TIMER0_TIMSK_ENABLE (void);
void TIMER0_TIMSK_DISABLE(void);

void __vector_11(void) __attribute((signal));           //ISR for OVF
void TIMER0_SetCallBack_OV0( void(*Copy_ptrfun)(void) );

void __vector_10(void) __attribute((signal));           //ISR for OCM
void TIMER0_SetCallBack_OC0( void(*Copy_ptrfun)(void) );


























