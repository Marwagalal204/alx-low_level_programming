#include "function_pointers.h"
/**
 * int_index - a function searches for an integer
 * @array: array of int
 * @size: number of elements in the array
 * @cmp: function pointer.
 * Return: int for success -1 for failure
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			return (cmp(array[i]));
	}
	return (-1);
}
