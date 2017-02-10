/*
 * free.c
 *
 * Created: 2/10/2017 8:13:38 AM
 *  Author: NITESH
 */ 


#define F_CPU 1000000UL
#include <avr/io.h>
#include "Free.h"
#include "Arduino_FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"
#include "portable.h"
#include "event_groups.h"
#include "portmacro.h"
#include "croutine.h"
#include "FreeRTOSConfig.h"
#include "FreeRTOSVariant.h"
#include "list.h"
#include "mpu_wrappers.h"
#include "projdefs.h"
#include "queue.h"
#include "semphr.h"
#include "StackMacros.h"
#include "timers.h"
#include <util/delay.h>
int main(void)
{
	DDRB |=0xff;
	DDRC |=0xff;
	 while(1)
	{
		xTaskCreate(vta1 , "Task_1" , 100 , NULL , 0 , NULL );
		xTaskCreate(vta , "Task_2" , 100 ,NULL , 1 , NULL);
		vTaskStartSchedular();
		
	}
	return 0;
}