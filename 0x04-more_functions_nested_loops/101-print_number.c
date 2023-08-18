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
	int max_devisor;
	int result;

	max_devisor = 1000000000;
	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			putchar('-');
			n *= -1;
		}
		while (n / max_devisor == 0)
		{
			n %= max_devisor;
			max_devisor /= 10;
		}
		while (max_devisor != 1)
		{
			result = n / max_devisor;
			n %= max_devisor;
			max_devisor /= 10;
			_putchar(result + '0');
		}
		_putchar(n + '0');
	}
}
