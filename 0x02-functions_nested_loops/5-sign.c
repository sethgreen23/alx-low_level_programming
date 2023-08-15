#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign
 * @n: number
 *
 * Return: 1 is positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else
	{
		_putchar('-');
		sign = -1;
	}
	return (sign);
}
