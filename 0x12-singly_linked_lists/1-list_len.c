#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - count the size of the list
 * @h: the head of the list
 * Return: size fo the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
