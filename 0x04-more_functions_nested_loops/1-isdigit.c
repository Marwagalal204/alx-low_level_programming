#include "main.h"

/**
 * _isdigit - Entery point
 *  @c:cheks the digits
 *   Return: 1 if true. 0 if false
 */
	int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}
