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
	size_t i, j, width;

	for (i = 0; i < height; i++)
	{
		width = sizeof(grid[i]);
		for (j = 0; j < width; j++)
		{
			free(grid[i][j]);
		}
		free(grid[i]);
	}
}
