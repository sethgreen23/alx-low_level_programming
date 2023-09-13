#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - function main
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (strcmp(operator, "+") != 0 &&
		strcmp(operator, "-") != 0 &&
		strcmp(operator, "*") != 0 &&
		strcmp(operator, "/") != 0 &&
		strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(operator, "%") == 0 || strcmp(operator, "/") == 0) &&
		b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(a, b));
	return (0);
}
