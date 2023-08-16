#include <stdio.h>
#include "main.h"
/**
 * _abs - Print absolute value.
 * @i: i is an integer,
 * Return: absolute value of integer.
 */
int _abs(int i)
{
	int p = (i * -1);

	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (p);
	}

	else
	{
		return (0);
	}

	return (0);
}
