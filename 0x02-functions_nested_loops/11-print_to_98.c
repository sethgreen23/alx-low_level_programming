#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print integers to 98
 *
 * @n: the number from we start printing
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
		for (counter = n; counter >= 98; counter--)
		{
			if (counter == 98)
			{
				printf("%3d", counter);
			}
			else
			{
				printf("%3d,", counter);
			}
		}
	}
	else
	{
		for (counter = n; counter <= 98; counter++)
		{
			if (counter == 98)
			{
				printf("%3d", counter);
			}
			else
			{
				printf("%3d,", counter);
			}
		}
	}
	printf("\n");
}
