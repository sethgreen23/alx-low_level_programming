#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create two dimentional array
 *
 * @width: the with of the array
 *
 * @height: the height of the array
 *
 * Return: return a dimentional array;
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int h, w, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(tab + i) = malloc(sizeof(int) * width);
		if (*(tab + i) == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(*(tab + j));
			}
			free(tab);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			*(*(tab + h) + w) = 0;

	return (tab);
}
