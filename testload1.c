// Copyright 2015 Richard A Burton
// richardaburton@gmail.com
// See license.txt for license terms.

#include <stdint.h>

void call_user_start(void) {
	uint8_t loop;
	for(loop = 0; loop < 50; loop++) {
		ets_printf("testload 1\r\n");
		ets_delay_us(20000);
	}
}
