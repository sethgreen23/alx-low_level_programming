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
	int m, c, num;

	m = 1;
	c = 1;
	num = n;
	if (num < 0)
		num *= -1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}
	while (m != 1)
	{
		_putchar((num / m) % 10 + '0');
		m /= 10;
	}
	_putchar(num % 10 + '0');
}
