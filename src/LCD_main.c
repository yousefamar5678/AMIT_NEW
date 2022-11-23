#include <LCD/LCD_INTERFACE.h>

//to use delay
#include <util/delay.h>

int main()
{	
	LCD_Init();

	u8 myname[10] =  " #Mona" ;
	//u8 * myname = "YOUSEF" ;
	
	while (1)
	{	LCD_voidWriteString(myname);
		// LCD_voidWriteData( 'L' );
		_delay_ms(100);
		
	}
	
}
