#include <stdio.h>

#include "hangman.h"
#include "movement.h"
#include "rps.h"

#ifdef PICO_ON_DEVICE
#include <pico/stdlib.h>
#endif


int main(void)
{
#ifdef PICO_ON_DEVICE
	stdio_init_all();
#endif
	while (1) {
		printf("Hello world\n");
		sleep_ms(1000);
	}
	return 0;

	while (1) {
		printf("1) movement\n");
		printf("2) hangman\n");
		printf("3) rps\n");
		printf("> ");

		int d;
		if (1 != scanf("%d", &d)) {
			scanf("%*s");
			continue;
		}

		switch (d) {
		case 1:
			movement();
			break;
		case 2:
			hangman();
			break;
		case 3:
			rps();
			break;
		}

	}

	return 0;
}
