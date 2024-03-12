#include "search_algos.h"
#include <unistd.h>


int binary_s(int *array, int value, size_t low, size_t high);


/**
 * exponential_search - implementation of exponential search
 *
 * @array: the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index otherwise NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t curr, prev;

	if (!array || size == 0)
		return (-1);
	prev = 0;
	curr = 0;
	while (curr < size)
	{
		if (array[curr] == value)
			return (curr);
		if (array[curr] > value)
			break;
		prev = curr;
		if (curr == 0)
			curr = 1;
		else if (curr == 1)
			curr = 2;
		else
			curr = curr *  2;
		if (curr < size && array[curr] < value)
			printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
	}
	if (curr >= size)
		curr = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	return (binary_s(array, value, prev, curr));
}

#include "search_algos.h"

/**
 * binary_s - implementation of binary search
 *
 * @array: the array
 * @value: value to search
 * @low: low value
 * @high: high value
 *
 * Return: index otherwise NULL
 */
int binary_s(int *array, int value, size_t low, size_t high)
{
	size_t middle, i;
	int current_value;

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
