#include "main.h"
/**
 * free_grid - free the grid
 *
 * @grid: it the grid we want to free
 *
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
