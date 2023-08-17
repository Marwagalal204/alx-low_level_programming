#include "main.h"

/**
 * print_diagonal - prints a line of \ n long
 *  @n: length of line
 *   Return: void
*/

void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)

	{
		if (size > 0)
			_putchar('#');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
