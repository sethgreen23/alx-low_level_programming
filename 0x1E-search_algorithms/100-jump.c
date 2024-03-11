#include "search_algos.h"
#include <unistd.h>
/**
 * jump_search - implementation of jump search
 *
 * @array: the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index otherwise NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t end, start, i;

	if (!array)
		return (-1);
	start = 0;
	end = sqrt(size);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = start + sqrt(size);
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	if (end >= size)
		end = size - 1;
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
