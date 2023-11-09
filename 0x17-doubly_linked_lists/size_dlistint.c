#include "lists.h"
/**
 * size_dlistint - length of the doubly linked list
 * @h: head
 *
 * Return: size of doubly linked list or 0 if empty
 */
size_t size_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
