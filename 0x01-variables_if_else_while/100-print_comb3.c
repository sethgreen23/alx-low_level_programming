#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Description: print all combination of single
 * decimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, current, next;

	for (x = 0; x < 10; x++)
	{
		if (x == y)
			continue;
		current = x * 10 + y;
		next = y * 10 + x;
		if (current < next)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x <= 8 && y <= 9)
			{
				if (!(x == 8 && y == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
