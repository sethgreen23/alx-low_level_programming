#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", *(argv + i ));
	}
	return (0);
}
