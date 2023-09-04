#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees 2d array
 * @grid: 2d array to be freed
 * @height: hieght of 2d array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
