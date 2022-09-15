#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 * @n: number of time to print diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar('\t');
			_putchar('\\');
			_putchar('\n');
		}
	}
	putchar('\n');
}
