#include "main.h"

/**
 * print_triangle - prints a # of \ n long
 * @size: length of line
 * Return: void
*/

void print_triangle(int size)
{
	int space, hash, space1;

	if (size <= 0)
		_putchar('\n');

	for (space = size - 1; space > -1; space--)

	{
		for (hash = 0; hash < space ; hash++)
			_putchar(' ');

		for (space1 = space; space1 < size; space1++)
			_putchar('#');
		_putchar('\n');
	}
}
