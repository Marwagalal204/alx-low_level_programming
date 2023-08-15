#include <stdio.h>
#include "main.h"
/**
 * _abs - Print absolute value.
 * @n: n is an integer,
 * Return: absolute value of integer.
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
