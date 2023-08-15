#include "main.h"
/**
 * _islower - a function to check character
 * Description: The character to be checked
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	} 
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
