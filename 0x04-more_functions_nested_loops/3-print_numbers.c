#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Description: print number from 0 to 9
 * Return: Nothing
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
