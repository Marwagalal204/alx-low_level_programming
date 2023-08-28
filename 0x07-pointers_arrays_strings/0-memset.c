#include "main.h"
/**
 * _memset - function fills n bytes of the memory pointed to by s with the byte b
 * @s: pointer to a memory
 * @b: value to be replaced with
 * @n: how long it will replace
 * Return: return s after replacement
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
