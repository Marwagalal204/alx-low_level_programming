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
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min - 1) * sizeof(int));

		if (p == NULL)
			return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
