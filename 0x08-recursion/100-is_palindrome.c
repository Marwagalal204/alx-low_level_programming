#include "main.h"

/**
 * _strlen_recursion - a function cout the length og a string
 * @s: input string
 * Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * _pal - function check if a word id palndrome
 * @s: input string
 * @i: beginnig of the word
 * @n: end of the ord
 * Return: 1 for success, 0 for failure
*/
int _pal(char *s, int i, int n)
{
	if (i >= n)
		return (1);
	else if (s[i] == s[n])
		return (_pal(s, i + 1, n - 1));
	return (0);
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: input string
 * Return: 1 for success, 0 for failure
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_pal(s, 0, _strlen_recursion(s) - 1));
}
