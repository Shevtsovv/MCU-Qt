#include <stdio.h>
#include "pico/stdlib.h"
#define DEVICE_NAME "my-pico-device"
#define DEVICE_VRSN "v0.0.1"
int main() {
	const int time_all = 1000;
	stdio_init_all();
	while(true)
	{
		printf("Hello world");
		printf("Device name: '%s'\n", DEVICE_NAME, DEVICE_VRSN);
		sleep_ms(time_all);
	}
	return 0;
}
