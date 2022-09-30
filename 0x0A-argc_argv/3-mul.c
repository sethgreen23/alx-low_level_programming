#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a, b, result;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
