#include "main.h"
/**
 * wildcmp - a fuction thet compares to strings
 * @s1: first input string
 * @s2: second input string
 * Return: 1 for success, 0 for failure
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '*' || *s2 == '*' || (*s1 == '\0' && *s2 == '\0'))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		wildcmp((s1 + 1), (s2 + 1));
	}
	else return (0);

	return (1);
}
