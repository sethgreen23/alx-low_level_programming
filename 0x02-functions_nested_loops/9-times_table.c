#include <stdio.h>
#include "main.h"
/**
 * times_table - print 9 times multipation times_table
 *
 * Return: return nothing
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
		if (y == 0)
			printf("%d,", x * y);
		else if (y < 9)
			printf("%3d,", x * y);
		else
			printf("%3d", x * y);
		}
		printf("\n");
	}
}
