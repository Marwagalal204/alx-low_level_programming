#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to memorey allocated
 * @old_size: size of allocated memory
 * @new_size: new block of memory
 * Return: Null for failure and pointer for suceess
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ch, *pt = ptr;

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ch = malloc(new_size);
		return (ch);
	}
	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ch = malloc(new_size);

	if (ch == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		ch[i] = pt[i];
	free(ptr);
	return (ch);
}
