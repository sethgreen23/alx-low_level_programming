#include <stdio.h>
/**
 * print_times_table - print multiplication table
 *
 * @n: print multiplication table of n
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int x, y, m = n + 1;

	if (n == 0)
	{
		printf("%d", 0);
		printf("\n");
	}
	else if (n >= 100)
	{
		printf("\n");
	}
	for (x = 0; x < m; x++)
	{
		for (y = 0; y < m; y++)
		{
			if (y == 0)
			printf("%d,", x * y);
		else if (y < n)
			printf("%4d,", x * y);
		else
			printf("%4d", x * y);
		}
		printf("\n");
	}
}
