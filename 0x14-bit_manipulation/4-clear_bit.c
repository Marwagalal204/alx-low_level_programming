#include "main.h"
/**
 * clear_bit - function sets value of a bit to 0 at a given index
 * @n: iput number
 * @index: index of a number
 * Return: -1 for failure and 1 for success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f;

	if (index > 64)
		return (-1);

	f = ~(1UL << index);
	*n = (*n & f);

	return (1);
}
