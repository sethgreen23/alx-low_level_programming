#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenate all the arguments of your program
 * @ac: size of the array
 * @av: array of arguments
 *
 * Return: return the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}
	str = (char *)malloc((size + ac + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
