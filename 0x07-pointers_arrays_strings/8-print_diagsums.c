#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonarls
 * of a square matrix of integers
 * @a: matrix
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int diag1, diag2, i, j;

	diag1 = 0, diag2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += *(a + (i * size + j));
			if (j == (size - 1 - i))
				diag2 += *(a + (i * size + j));
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
