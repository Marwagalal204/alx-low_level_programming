#include "main.h"

/**
 * _strchr - search for specfic character in memory
 * @s: memory to search in
 * @c: character to search for
 * Return: Return s for success and Null for failure.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] <= '\0'; i++)

	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
