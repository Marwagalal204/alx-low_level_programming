#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix to print sum
 * @size: size of matrex
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum = a[i] + a[j];
			i++;
			j++;
			_putchar(sum + '0');
		}
	}
	for (i = 0; i < size; i--)
	{
		for (j = 0; j < size; j--)
		{
			sum = a[i] + a[j];
			i--;
			j--;
			_putchar(sum + '0');
		}
	}
}
