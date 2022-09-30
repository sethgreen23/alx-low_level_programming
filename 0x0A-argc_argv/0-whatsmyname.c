#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if (argc == 1)
			printf("%s\n", argv[count]);
		else
			break;
	}
	return (0);
}
