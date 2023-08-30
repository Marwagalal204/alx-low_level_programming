#include "main.h"
/**
 * _check_prime - function to check if the number is prime
 * @n: number to be checked
 * @i: number to be itreated
 * Return: 1 for sucess, 0 for failure
*/

int _check_prime(int i, int n)
{
	if (i > 5)
		return (1);
	else if (n % i == 0)
		return (0);
	return _check_prime(i + 1, n);
}

/**
 * is_prime_number - function checks of the number is prime
 * @n: input number to be checked
 * Return: checker function
*/
int is_prime_number(int n)
{
	if(n == 1 || n == -1) return(0);
	return _check_prime(2, n);
}

