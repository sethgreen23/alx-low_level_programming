#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - calculate the sum of diagonals
 *
 * @a: table
 *
 * @size: size of the table
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + j + size * i);
			if ((i + j) == (size - 1))
				sum2 += *(a + j + size * i);
		}
	}
	printf("%d, %d\n", sum1, sum2);

}
