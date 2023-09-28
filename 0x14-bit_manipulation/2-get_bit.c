#include "main.h"
/**
 * get_bit - function return value of a bit at given index
 * @n: value of a bit
 * @index: index of the value
 * Return: -1 for failure and f for success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int f;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	f = n >> index;

	return (f & 1);
}
