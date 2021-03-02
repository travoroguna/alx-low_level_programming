#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid to be filled
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int idx = 0;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);
}
