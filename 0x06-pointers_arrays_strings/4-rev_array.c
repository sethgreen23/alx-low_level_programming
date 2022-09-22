#include "main.h"
/**
 * reverse_array - reverse array
 *
 * @a: the array
 *
 * @n: the array length;
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, end_point, temp;

	end_point = n % 2 == 0 ? n / 2 - 1 : n / 2;
	for (i = 0, j = n - 1; i < (n / 2) && j > end_point; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
