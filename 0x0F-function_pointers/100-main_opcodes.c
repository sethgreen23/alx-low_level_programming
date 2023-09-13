#include <stdio.h>
#include <stdlib.h>
/**
 * printBytes - print function bytes
 * @func: function pointer
 * @n: number of bytes prited
 *
 * Return: nothing
 */
void printBytes(void *func, int n)
{
	int i;
	char *bytes;

	bytes = (char *)func;
	for (i = 0; i < n; i++)
	{
		printf("%x", bytes[i] & 0xff);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - main function
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printBytes(&main, n);
	return (0);
}
