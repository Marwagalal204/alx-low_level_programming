#include "main.h"

/**
 * print_diagonal - prints a line of \ n long
 * @n: length of line
 * Return: void
*/

void print_square(int size)
{
	int i;
	int a = 0;
	if(size <= 0)
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
