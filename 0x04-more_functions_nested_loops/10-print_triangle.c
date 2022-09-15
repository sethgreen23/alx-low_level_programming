#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triable
 *
 * @size: size of the triagle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - i))
					printf(" ");
				else
					printf("#");
			}
			if (i != size)
				printf("\n");
		}
	}
	printf("\n");
}
