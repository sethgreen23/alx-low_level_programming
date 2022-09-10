#include <stlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description: a function that print the
 * combination of 3 single digits with ometing
 * the same number combination and the numbers
 * combintion of two numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		l = i / 100;
		k = (i % 100) / 10;
		j = (i % 100) % 10;
		if (j > k && k > l)
		{
			putchar(l + '0');
			putchar(k + '0');
			putchar(j + '0');
			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
