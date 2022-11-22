#ifndef EXT_INT0_INTERFACE_H
#define EXT_INT0_INTERFACE_H



#include "EXT_INT0_PRIVATE.h"
#include "STD_Types.h"
#include "BitMath.h"

void (* Gen_External_0) (void) = NULL ;

void EXT_INT0_voidINIT(void);
void EXT_INT0_voidEnable(void);
void EXT_INT0_voidDisable(void);

/*Function to do ISR*/
void EXT_INT0_SetCallBackFunction(void(*ptrfun)(void));

void __vector_1(void)__attribute__((signal));



#endif