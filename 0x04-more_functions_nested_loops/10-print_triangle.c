#include "main.h"
/**
 * print_triangle - print triable
 *
 * @n: size of the triagle
 *
 * Return: nothing
 */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < n - i)
					printf(" ");
				else
					printf("#");
			}
			printf("\n");
		}
	}
	printf("\n");
}
