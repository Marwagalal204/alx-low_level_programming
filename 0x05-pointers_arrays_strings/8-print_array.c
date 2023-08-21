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
	for (n = 0; n < *a; n++)
		printf("%d\n", *a);
}
