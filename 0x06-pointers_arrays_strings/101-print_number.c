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
	int result, len, multiplier;

	multiplier = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while ((n / multiplier) != 0)
		multiplier *= 10;
	multiplier /= 10;
	while (multiplier != 1 && multiplier != 0)
	{
		result = n / multiplier;
		_putchar(result + '0');
		n %= multiplier;
		multiplier /= 10;
	}
	result = n % 10;
	_putchar(result + '0');
}
