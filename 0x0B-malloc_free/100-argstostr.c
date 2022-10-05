#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenate all the strings
 *
 * @ac: the length of the string array
 *
 * @av: the string array it self
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int length, i, j, k;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 1; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
