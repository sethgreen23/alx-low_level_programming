#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - return the last digit of an integer
 *
 * @number: the number to extract the last digit from
 *
 * Return: last digit of an integer
 */
int print_last_digit(int number)
{
	int reminder = number, quoation = number;

	if (number < 0)
	{
		quoation = -number;
		reminder = -number;
	}

	while (reminder > 10)
	{
		reminder = quoation % 10;
		quoation = quoation / 10;
	}
	_putchar(remider + '0');
	return (reminder);
}
