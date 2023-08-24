#include <stdio.h>
#include "main.h"
/**
 * print_number - print an integer
 * @n: number
 *
 * Return: nothing
 */
void print_number(int n)
{
	int result, multiplier;

	multiplier = 1000000000;
	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 0)
		_putchar(0 + '0');
	else
	{
		while ((n / multiplier) == 0)
			multiplier /= 10;
		while (multiplier != 1)
		{
			result = n / multiplier;
			if (result < 0)
				_putchar((result * -1) + '0');
			else
				_putchar(result + '0');
			n %= multiplier;
			multiplier /= 10;
		}
		result = n % 10;
		if (result < 0)
			_putchar((result * -1) + '0');
		else
			_putchar(result + '0');
	}
}
