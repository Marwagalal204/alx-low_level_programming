#include <stdlib.h>
#include "main.h"
/**
 * _calloc -  a function allocates memory for an array
 * @nmemb: memory to be allocated
 * @size: element to be allocated
 * Return: NULL for failure and pointer for success
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
		if (s == NULL)
			return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
