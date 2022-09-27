#include "main.h"
/**
 * print_chessboard - print chessboard
 *
 * @a: multiple array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j != 7)
				_putchar(' ');
			j++;
		}
		_putchar('\n');
	}
}
