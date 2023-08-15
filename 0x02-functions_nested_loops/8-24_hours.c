#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print every minutes of the day of jack bauer
 *
 * Result: nothing
 */
void jack_bauer(void)
{
	int i, j, element, decimal;

	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				element = i % 10;
				decimal = i / 10;
				_putchar(decimal + '0');
				_putchar(element + '0');
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				element = j % 10;
				decimal = j / 10;
				_putchar(decimal + '0');
				_putchar(element + '0');
			}
			_putchar('\n');
		}
	}
}
