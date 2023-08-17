#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Description: print numbers from 0 to 14
 * 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, decimal, element;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				decimal = j / 10;
				element = j % 10;
				_putchar(decimal + '0');
				_putchar(element + '0');
			}
		}
		_putchar('\n');
	}
}
