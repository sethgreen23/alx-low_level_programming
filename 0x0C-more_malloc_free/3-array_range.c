#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the newest created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = (int *)malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= (max - min) ; i++)
		array[i] = min + i;
	return (array);
}
