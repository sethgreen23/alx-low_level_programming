#include <stdio.h>
#include "main.h"
/**
 * print_array - print n element of an array of integers
 * @a: array of integers
 * @n: serie of numbers to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
}
