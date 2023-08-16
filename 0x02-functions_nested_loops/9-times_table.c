#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
**/

void times_table(void)
{
	int n, i, mult;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			mult = n * i;
			{
			if (mult <= 9)
			_putchar(' ');
			else
			_putchar((mult / 10) + '0');
			_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
