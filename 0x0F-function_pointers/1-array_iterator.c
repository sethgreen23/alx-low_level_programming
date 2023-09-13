#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function to all elements of an array
 * @array: array
 * @size: size of the array
 * @action: function to pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		array[i] = action(array[i]);
}
