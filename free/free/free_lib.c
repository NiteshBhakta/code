/*
 * free_lib.c
 *
 * Created: 2/10/2017 8:14:42 AM
 *  Author: NITESH
 */ 


#include <avr/io.h>
#include "Free.h"
#include <util/delay.h>
void vta1( void *pnit )
{
	uint8_t ucx = 0;
	for ( ucx = 0; ucx <= 128; ucx++)
	{
		PORTC |= ( 1 << ucx);
		//ATaskDeley(1000);
		_delay_ms(1000);
		
	}
}

void vta ( void *pnit1 )
{
	uint8_t ucy=0;
	for ( ucy = 0; ucy <=7; ucy++)
	{
		PORTB |= ( 1 << ucy);
		_delay_ms(1000);
	}
	
}


