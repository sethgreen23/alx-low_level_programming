#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - copy the string given as a parameter
 * @str: string
 *
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	copy = malloc((size * sizeof(char)) + 1);
	if (copy == NULL)
	{
		exit(0);
	}
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
