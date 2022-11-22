
#include "STD_Types.h"
#include "BitMath.h"
#include "EXT_INT0_PRIVATE.h"
#include "EXT_INT0_INTERFACE.h"

void EXT_INT0_voidINIT(void)
{

    /*Clear all sense modes*/

    /*Interupt 0*/
    CLR_BIT(MCUCR,ISC01);
    CLR_BIT(MCUCR,ISC00);

    /*Interupt 1*/
    CLR_BIT(MCUCR,ISC11);
    CLR_BIT(MCUCR,ISC10);

    /*Interupt 2*/
    CLR_BIT(MCUCSR,ISC2);

    /*Choose the sense mode*/
    if (SENSE_MODE == FALLING)
    {
        SET_BIT(MCUCR,ISC01);
        CLR_BIT(MCUCR,ISC00);
    }
    else if (SENSE_MODE == RISING)
    {
        SET_BIT(MCUCR,ISC01);
        SET_BIT(MCUCR,ISC00);
    }
    else if (SENSE_MODE == LOW)
    {
        CLR_BIT(MCUCR,ISC01);
        CLR_BIT(MCUCR,ISC00);
    }
    else if (SENSE_MODE == ANY_LC)
    {
        SET_BIT(MCUCR,ISC00);
        CLR_BIT(MCUCR,ISC01);
    }
    else{/*Diable interupt*/}

    
    /*Disable flags by make it high*/
    SET_BIT(GIFR,INTF1);
    SET_BIT(GIFR,INTF0);
    SET_BIT(GIFR,INTF2);
}


void EXT_INT0_voidEnable(void)
{
    SET_BIT(GICR,EXTI0);
}


void EXT_INT0_voidDisable(void)
{
    CLR_BIT(GICR,EXTI0);
}

void EXT_INT0_SetCallBackFunction(void(*ptrfun)(void))
{	
	
if (ptrfun != 0)
{
	Gen_External_0 = ptrfun ;
}


}

void __vector_1(void)
{
    /*Calls pointer called by hardware circuit when interupt */
    /*Global pointer saved in it the name of the function*/

	EXT_INT0_SetCallBackFunction(Gen_External_0);



}

