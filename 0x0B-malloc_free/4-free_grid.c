#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees 2d array memory
 * @grid: matrix to be freed
 * @hieght: hieght of matrex
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
