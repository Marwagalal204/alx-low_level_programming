#include "main.h"

/**
 * _strlen_recursion - a function cout the length og a string
 * @s: input string
 * Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
