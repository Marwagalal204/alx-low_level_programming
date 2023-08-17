#include "main.h"

/**
 * print_square - prints a line of # n long
 *
 * @size: length and width of square
 *
*/

void print_square(int size)
{
	int i;
	int a = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (a < size)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	a++;
	}
}
