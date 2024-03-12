#include "search_algos.h"


int binary_s(int *array, int value, size_t low, size_t high);


/**
 * advanced_binary - implementation of binary search
 *
 * @array: the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index otherwise NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	return (binary_s(array, value, low, high));
}

/**
 * binary_s - implementation of binary search
 *
 * @array: the array
 * @low: low value
 * @value: value to search
 * @high: high value
 *
 * Return: index otherwise NULL
 */
int binary_s(int *array, int value, size_t low, size_t high)
{
	size_t middle, i;

	if (low > high)
		return (-1);
	middle = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	if (array[middle] == value)
	{
		if (middle == 0 || array[middle - 1] != value)
			return (middle);
		else
			return (binary_s(array, value, low, middle));
	}
	else if (array[middle] < value)
	{
		return (binary_s(array, value, middle + 1, high));
	}
	else
	{
		return (binary_s(array, value, low, middle - 1));
	}
}
