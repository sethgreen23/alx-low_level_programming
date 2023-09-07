#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of s2
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size2, i, j;
	char *string;

	if (s2 == NULL || n == 0)
		size2 = 0;
	if (n < strlen(s2))
		size2 = n;
	else if (n >= strlen(s2))
		size2 = strlen(s2);
	string = (char *)malloc((strlen(s1) + size2 + 1) * sizeof(char));
	if (string == NULL)
		exit(98);
	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < size2; j++, i++)
		string[i] = s2[j];
	string[i] = '\0';
	return (string);
}
