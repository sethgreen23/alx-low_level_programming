#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars and
 * initilizes it with a specific char
 * @size: size of the array
 * @c: initilizer character
 *
 * Return: array of character
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		exit(0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
