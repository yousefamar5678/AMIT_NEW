#include "STD_Types.h"
#include "GIE_INTERFACE.h"

void GIE_voidEnable(void)
{
    SET_BIT(SREG , 7);

}


void GIE_voidDisable(void)
{
    CLR_BIT(SREG , 7);

}