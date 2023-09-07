#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function concatenates two strings.
 * @s1: first inputed string
 * @s2: second inputed string
 * @n: long of second string
 * Return: NULL for failure and pointer for sucess
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;

	p = malloc(i + j + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';
	return (p);
}
