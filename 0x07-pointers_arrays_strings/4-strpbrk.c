#include "main.h"
/**
 * _strpbrk - look in *s for the first occurence of *accept
 * @s: memory to look in
 * @accept: string lookin for in *s
 * Return: s+i for success and Null for failure
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
