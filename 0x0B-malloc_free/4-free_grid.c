#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - free a 2 dimensional grid previously created by alloc_grid
 * @grid: matrix of integer
 * @height: height of the matrix
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
