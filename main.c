#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <string.h>
#include <util/delay.h>

#include "adc.h"
#include "gpio.h"
#include "i2c.h"
#include "serial.h"
#include "timer.h"


void main (void) {


	i2c_init();
	uart_init();
	char x;

	while (1) {
		eeprom_write_byte(0x10, 'M');
		eeprom_wait_until_write_complete();
		x = eeprom_read_byte(0x10);
		printf("%c", x);

		eeprom_write_byte(0x11, 'a');
		eeprom_wait_until_write_complete();
		x = eeprom_read_byte(0x11);
		printf("%c", x);

		eeprom_write_byte(0x12, 'c');
		eeprom_wait_until_write_complete();
		x = eeprom_read_byte(0x12);
		printf("%c", x);

		eeprom_write_byte(0x13, 'i');
		eeprom_wait_until_write_complete();
		x = eeprom_read_byte(0x13);
		printf("%c", x);

		eeprom_write_byte(0x14, 'e');
		eeprom_wait_until_write_complete();
		x = eeprom_read_byte(0x14);
		printf("%c", x);

		eeprom_write_byte(0x15, 'j');
		eeprom_wait_until_write_complete();
		x = eeprom_read_byte(0x15);
		printf("%c", x);
		_delay_ms(1000);
	}
}

