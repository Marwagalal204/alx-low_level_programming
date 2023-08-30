#include "main.h"

/**
 * factorial - find the factorial of  given number
 * @n: input number
 * Return: -1 gor failure, factorial for success
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
