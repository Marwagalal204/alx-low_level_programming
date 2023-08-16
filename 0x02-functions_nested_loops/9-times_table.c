#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, m;

	for (i = 0; i <= 9; i++)
	{
		m = (i * 9);
		_putchar(m + '0');
	}
}
