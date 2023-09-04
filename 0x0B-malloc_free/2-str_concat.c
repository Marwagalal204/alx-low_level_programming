#include <stdlib.h>
#include"main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first inputed string
 * @s2: string to be conctinated
 * Return: NULL for failure and concatinated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, n, f;
	char *strcon;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; s2[j] != '\0'; j++)

	strcon = (char *)malloc((i + j + 1) * sizeof(char));

	if (strcon == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		strcon[n] = s1[n];

	f = j;
	for (j = 0; j <= f; j++, n++)
		strcon[n] = s2[j];

	return (strcon);
}
