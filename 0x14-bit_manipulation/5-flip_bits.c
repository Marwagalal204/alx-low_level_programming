#include "main.h"
/**
 * flip_bits - function returns bits needed to flip from num to another
 * @n: first num
 * @m:second num
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int count = 0;

	while (xor != 0)
	{
		count++;
		xor &= (xor - 1);
	}
	return (count);
}
