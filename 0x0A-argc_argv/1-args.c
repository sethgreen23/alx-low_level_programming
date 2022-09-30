#include "main.h"
/**
 * main - print the number of arguments
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}
