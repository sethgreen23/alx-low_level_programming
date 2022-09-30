#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_number - check if the string is a number
 *
 * @str: string to check
 *
 * Return: 0 is not and 1 if is a number
 */
int check_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
/**
 * main - add positives numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, i, number;

	count = 0;
	if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		if (check_number(argv[i]))
		{
			number = atoi(argv[i]);
			count += number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
}
	printf("%d\n", count);
	return (0);
}
