#include "main.h"
/**
 * reverse_array - function that reverse arrays
 * @a: array
 * @n: the number of elements to swap
*/

void reverse_array(int *a, int n)
{
	int i = 0, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
