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
	int counter = n;

	while (counter != 98)
	{
		if ((counter / 100) != 0)
			printf("%4d,", counter);
		else
			printf("%3d,", counter);
		if (n > 98)
			counter--;
		else
			counter++;
	}
	printf("%3d", 98);
	printf("\n");
}
