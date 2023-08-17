#include "main.h"
/**
 *  _isupper - Entry point
 *  @c: The received character
 *  Return: 1 if true. 0 if false
 */

int _issupper(int c)
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
