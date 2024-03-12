#include "search_algos.h"
#include <unistd.h>


/**
 * jump_list - implementation of jump search
 *
 * @list: the singly linked list
 * @size: size of the array
 * @value: value to search
 *
 * Return: index otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t end, start, i;
	int end_v, value_i;

	if (!list)
		return (NULL);
	start = 0;
	end = sqrt(size);
	while (end < size && (jump(list, size, end))->n < value)
	{
		end_v = (jump(list, size, end))->n;
		printf("Value checked at index [%ld] = [%d]\n", end, end_v);
		start = end;
		end = start + sqrt(size);
	}
	if (end >= size)
		end = size - 1;
	if (end < size)
	{
		end_v = (jump(list, size, end))->n;
		printf("Value checked at index [%ld] = [%d]\n", end, end_v);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end; i++)
	{
		value_i = (jump(list, size, i))->n;
		printf("Value checked at index [%ld] = [%d]\n", i, value_i);
		if (value_i == value)
			return (jump(list, size, i));
	}
	return (NULL);
}

/**
 * jump - go to sertain index in list
 *
 * @list: the singly linked list
 * @size: size of the array
 * @index: index to go to
 *
 * Return: index otherwise NULL
 */
listint_t *jump(listint_t *list, size_t size, size_t index)
{
	listint_t *p;

	p = list;
	if (index > size)
		return (NULL);
	while (index > 0)
	{
		p = p->next;
		index--;
	}
	return (p);
}
