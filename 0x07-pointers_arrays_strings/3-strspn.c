#include "main.h"
/**
 * _strspn - find and return first matching char
 * @s: memory to search in
 * @accept: character search for
 * Return: Always i
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
