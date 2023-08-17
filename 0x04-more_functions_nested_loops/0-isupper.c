#include "main.h"

/**
 * _isupper - checks for uppercase character
 *  @c: character to be checked
 *  Return: 1 if true. 0 if false
 */

int _isupper(int c)
{

	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}
