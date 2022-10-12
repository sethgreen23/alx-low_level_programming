#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/**
 * main - function main
 * @argc: the number of arguments
 * @argv: the string of variable
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int a;
	int b;
	char *op;
	int result;
	int (*f)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if ((op[0] == '%' || op[0] == '/') && b == 0 && op[1] == '\0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(op);
	result = f(a, b);
	printf("%d\n", f(a, b));
	return (0);
}
