#include "main.h"
/**
 * _islower - a function to check character
 * @c : The recieve character
 * Return: 1 if true. 0 if false.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
