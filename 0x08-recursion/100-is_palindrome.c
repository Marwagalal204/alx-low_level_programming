#include "main.h"

/**
 *  * _strlen_recursion - a function cout the length og a string
 *   * @s: input string
 *    * Return: lenght of string
 *    */
int _strlen_recursion(char *s)
{
		if (*s == '\0')
			return (0);
		return (1 + _strlen_recursion(s + 1));
}

int _pal (char *s, int i, int n)
{
	if (i >= n)
		return (1);
	else if (s[i] == s[n])
		return (_pal(s, i + 1, n -1));
	return (0);
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_pal(s, 0, _strlen_recursion(s)- 1));
}
