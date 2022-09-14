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

	for (x = 0; x < m; x++)
	{
		for (y = 0; y < m; y++)
		{
			if (y == 0)
			printf("%d,", x * y);
		else if (y < n)
			printf("%3d,", x * y);
		else
			printf("%3d", x * y);
		}
		printf("\n");
	}
}
