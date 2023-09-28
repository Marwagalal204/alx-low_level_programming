#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: inputed number
 * @index: index of a number
 * Return: 1 for success -1 for failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f;

	if (index > 64)
		return (-1);

	f = 1UL << index;
	*n = (*n | f);

	return (1);
}
