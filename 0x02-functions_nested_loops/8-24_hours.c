#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
*/
void jack_bauer(void)

{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	for (min = 0; min <= 59; min++)
	{
		_putchar(hour);
		_putchar(hour);
		_putchar(':');
		_putchar(min);
		_putchar(min);
	}
	_putchar('\n');
}
