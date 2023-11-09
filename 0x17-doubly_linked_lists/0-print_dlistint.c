#include "lists.h"
/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: head
 *
 * Return: size of the doubly likded list of 0 if empty
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	size = size_dlistint(h);
	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
