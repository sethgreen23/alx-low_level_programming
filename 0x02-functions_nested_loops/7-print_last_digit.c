#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *@n: number
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int result, last_digit;

	last_digit = n % 10;
	if (last_digit > 0)
	{
		_putchar(last_digit);
		result = last_digit;
	}
	else if (last_digit < 0)
	{
		result = last_digit * -1;
		_putchar(result);
	}
	else
	{
		result = 0;
		_putchar(0);
	}

	return (result);
}
