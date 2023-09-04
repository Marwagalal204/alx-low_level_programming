#include "main.h"
#include <stdlib.h>
/**
 * create_array - function creates and initializes array of char
 * @size: size of array
 * @c: input character
 * Return: 0 for failure and ptr for success
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(int));
	unsigned int i = 0;

	if (size <= 0 || ptr == NULL)
		return (0);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

