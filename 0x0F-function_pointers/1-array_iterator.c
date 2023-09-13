#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter on element of an array.
 * @array: input arrey
 * @size: array size
 * @action: function pointers
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
