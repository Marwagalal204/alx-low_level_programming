#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers from input to 98, separated by a comma,
 *              followed by a space.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		printf("%d", i);
	}
	else
	{
		for (i = n; i >= 98; i--)
		printf("%d", i);
	}
}
