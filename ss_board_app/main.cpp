/*
 * ss_board_app.cpp
 *
 * Created: 7/7/2019 6:44:27 PM
 * Author : Rafael Dias
 */ 


#include "sam.h"

#include "atmel_start.h"


int main(void)
{
    /* Initialize the SAM system */	
	atmel_start_init();
	
	gpio_set_pin_level( USER_LED, true );
	
	for (uint32_t i= 0; i < 0xefffffff; i++) ;
	
	gpio_set_pin_level( USER_LED, false );
	
    /* Replace with your application code */
    while (1) 
    {
    }
}
