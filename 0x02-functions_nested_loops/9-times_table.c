#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, n, mult;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
			mult = (i * n);
		{
			if (mult >= 10)
			{
				_putchar((mult / n) + '0');
				_putchar(' ');
				_putchar(',');
			}
			else if (mult == 0)
			{
				_putchar(mult + '0');
				_putchar(' ');
			}
			else if (mult < 10)
			{
				_putchar(mult + '0');
				_putchar(' ');
				_putchar(',');
			}
		}
	}
}
