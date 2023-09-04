#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ptr = (char*)malloc(size * sizeof(int));
	unsigned int i = 0;

	if (size <= 0 || ptr == NULL)
		return(0);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return(ptr);
}

