#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triangle
 * @size: integer
 *
 * Description: print a triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		space = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < space)
					_putchar(' ');
				else
					_putchar('#');
			}
			--space;
			_putchar('\n');
		}
	}
}
