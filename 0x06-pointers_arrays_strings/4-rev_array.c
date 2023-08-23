#include "main.h"
/**
 * reverse_array - function that reverse arrays
 * @a: array
 * n: the number of elements to swap
*/

void reverse_array(int *a, int n)
{
	int i;

	while (a[i] != '\0' && i < n)
	{
		i++;
	}
	while (i < n)
	{
		a[i] = i - 1;
		i--;
	}
}
