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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n')
	}
}
