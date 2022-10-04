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
	int h, w;

	tab = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
		*(tab + i) = malloc(sizeof(int) * width);
	for (h = 0; h < height; h++)
		for (int w = 0; w < width; w++)
			*(*(tab + h) + w) = 0;

	return (tab);
}
