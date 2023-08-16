#include <stdio.h>
#include "main.h"
/**
 * times_table - 9 times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, result, element, decimal;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			result = i * j;
			element = result % 10;
			decimal = result / 10;
			if (j == 9)
			{
				if (result < 10)
				{
					_putchar(j + '0');
				}
				else
				{
					_putchar(decimal + '0');
					_putchar(element + '0');
				}
			}
			else
			{
				print_space(result, decimal, element, i, j);
			}
		}
		_putchar('\n');
	}
}
/**
 * print_space - print the space after the elements
 * @result: the value
 * @decimal: decimal value
 * @element: element value
 * @i: i value
 * @j: j value
 *
 * Return: nothing
 */
void print_space(int result, int decimal, int element, int i, int j)
{
	if (result < 10)
	{
		_putchar(j + '0');
	}
	else
	{
		_putchar(decimal + '0');
		_putchar(element + '0');
	}
	_putchar(',');
	result = i * (j + 1);
	if (result > 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
	}
}
/**
 * print_zero_line - print the zero line
 * @i: number
 *
 * Result: nothing
 */
void print_zero_line(int i)
{
	int counter;

	counter = 0;
	while (i == 0)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar(i + '0');
	_putchar('\n');
}
