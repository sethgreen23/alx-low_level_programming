#include "search_algos.h"
#include <unistd.h>
/**
 * interpolation_search - implementation of jump search
 *
 * @array: the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index otherwise NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, probe;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		probe = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return (probe);
		else if (array[probe] > value)
			high = probe - 1;
		else
			low = probe + 1;
	}
	probe = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	printf("Value checked array[%ld] is out of range\n", probe);
	return (-1);
}
