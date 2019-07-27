#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	gpio_set_pin_level( USER_LED, true );
	gpio_set_pin_level( USER_LED, false );	

	/* Replace with your application code */
	while (1) {
	}
}
