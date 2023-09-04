#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two days
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	copy = malloc(((strlen(s1) + strlen(s2)) * sizeof(char)) + 1);
	if (copy == NULL)
		exit(0);
	for (i = 0; i < strlen(s1); i++)
	{
		copy[i] = s1[i];
	}
	for (j = 0; j < strlen(s2); i++, j++)
	{
		copy[i] = s2[j];
	}
	copy[i] = '\0';
	return (copy);
}
