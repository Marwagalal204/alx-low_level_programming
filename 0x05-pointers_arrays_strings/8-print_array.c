#include "main.h"
#include <stdio.h>
/**
 * print_array - print arrays
 * @n: inputs
 * @a: inputs
 * descrption: a function prints elements of an array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i\n", a[i]);
	}
}
