#include "search_algos.h"

/**
 * binary_search - implementation of binary search
 *
 * @array: the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index otherwise NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, middle, i;
	int current_value;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		middle = low + (high - low) / 2;
		current_value = array[middle];
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (current_value < value)
			low = middle + 1;
		else if (current_value > value)
			high = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
