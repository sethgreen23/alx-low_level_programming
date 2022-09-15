#include "main.h"
/**
 * more_numbers - print from 1 to 14 ten times
 *
 * REturn: nothing
 */
void more_numbers(void)
{
	int i, j, tens, digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			tens = j / 10;
			digit = j % 10;
			if (tens == 1)
				_putchar(tens + '0');
			_putchar(digit + '0');
		}
		_putchar('\n');
	}
}
