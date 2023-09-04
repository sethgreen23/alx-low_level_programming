#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - return two dimentional array of integers
 * @width: with of the array
 * @height: height of the array
 *
 * Return: 2 dimentional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		exit(0);
	}
	tab = (int **)malloc(height * sizeof(int *));
	if (tab == NULL)
	{
		exit(0);
	}
	for (i = 0; i < height; i++)
	{
		tab[i] = (int *)malloc(width * sizeof(int));
		if (tab[i] == NULL)
		{
			exit(0);
		}
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
