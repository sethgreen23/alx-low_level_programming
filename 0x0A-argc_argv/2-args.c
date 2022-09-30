#include "main.h"
#include <stdio.h>
/**
 * main - print all arguments it receives
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
		printf("%s\n", argv[count]);
	}
	return (0);
}
