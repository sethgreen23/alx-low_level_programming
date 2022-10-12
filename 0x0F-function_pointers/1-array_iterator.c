#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - fonction that appy function to elemnt of array
 * @array: array
 * @size: the size of array
 * @action: function to apply
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			array[i] = action(array[i]);
		}
	}
}
