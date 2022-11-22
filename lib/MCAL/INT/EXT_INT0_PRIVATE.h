
#ifndef EXT_INT0_PRIVATE_H
#define EXT_INT0_PRIVATE_H


/*Rgisters*/
#define     GICR    *((volatile u8*)(0x5B)) // for external inputs 			//GENERAL INTERRUPT CONTROL REGISTRY
#define     GIFR    *((volatile u8*)(0x5A)) // Flag Reg						//GENERAL INTERRUPT FLAG REGISTRY
#define     MCUCR   *((volatile u8*)(0x55)) // Sense control for INT0,INT1	//MCU CONTROL REGISTER
#define     MCUCSR  *((volatile u8*)(0x54)) // Sense control for INT2		//MCU CONTROL & STATUS REGISTER
/*************************/

/*Senses mode*/
#define LOW     1
#define RISING  2
#define FALLING 3
#define ANY_LC  4 		//ANY LOGIC

#define SENSE_MODE FALLING
/**************************/

/*Sense mode bits for EXT0 */
/*there are 3 interrupts*/
/*MCUCR register bits that control interrupt_0 and interrupt_1 */
/*Interupt 0*/
#define ISC01    0
#define ISC00    1
/*Interupt 1*/
#define ISC11    2
#define ISC10    3
/*Interupt 2            */
/* MCUCSR register controls interrupt_2 */
#define ISC2     6
/**************************/

/*Flags*/
#define INTF0 6
#define INTF1 7
#define INTF2 5
/**************************/

/*Enable bit for EXT i0*/
// GC
#define EXTI0   6



#endif