#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * print_number - print and integer
 * @n: number to print
 *
 * Description: print a number with using only putchar
 * Return: nothing
 */
void print_number(int n)
{
	int m, c;

	m = 1;
	c = 1;
	while (c)
	{
		if (n / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}
	while (m != 1)
	{
		_putchar((n / m) % 10 + '0');
		m /= 10;
	}
	_putchar(n % 10 + '0');
}
