#include "main.h"
/**
 * res_sqrt - function calculate the natural square root of a number.
 * @result: number to be checked as result
 * @n: number to calculte sqrt for
 * Return: result for sucess, -1 for failure
*/

int res_sqrt(int result, int n)
{
	if ((result * result) > n)
	{
		return (-1);
	}
	else if ((result * result) == n)
	{
		return (result);
	}
	return (res_sqrt((result + 1), n));
}
/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: input sqrt
 * Return: Always res_sqrt
*/

int _sqrt_recursion(int n)
{
	return (res_sqrt(0, n));
}
