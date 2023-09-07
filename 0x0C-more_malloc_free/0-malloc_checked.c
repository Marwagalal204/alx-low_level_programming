#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function allocates memory using malloc.
 * @b: inputed arguments
 * Return: 98 for failure and void pointer for success
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
