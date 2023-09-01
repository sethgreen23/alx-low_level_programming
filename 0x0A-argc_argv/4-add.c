#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int isInteger(char *s);
/**
 * isInteger - check of integer
 * @s: string
 *
 * Return: 1 is integer 0 othewise
 */
int isInteger(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s < 48 || *s > 57)
			return (0);
		s++;
	}
	return (1);
}
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!isInteger(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
