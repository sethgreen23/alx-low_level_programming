#include <stdio.h>
#include "main.h"
/**
 * print_square - print square
 * @size: size of the square
 *
 * Description: print a square followed by a new line
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
