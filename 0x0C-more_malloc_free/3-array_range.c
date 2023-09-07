#include <stdlib.h>
#include "main.h"

/**
 * array_range -  a function creates an array of integers
 * @min: minmum value stored
 * @max: maximum value stored
 * Return: NULL for failure and pointer for success
*/

int *array_range(int min, int max)
{
	int *p;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	p = malloc(n * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
