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
	int reminder;

	if (number < 0)
	{
		number = -number;
	}
	reminder = quoation % 10;
	_putchar(reminder + '0');
	return (reminder);
}
