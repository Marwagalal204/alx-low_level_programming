#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function retun pointer to a 2 dimensional.
 * @width: coulmn of array
 * @height: rows of array
 * Return: Null for failure and 2d array for success.
*/

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= height; j++)
				free(arr[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
