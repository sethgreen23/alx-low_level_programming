#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h: head of the list
 *
 * Return: Number of elements in the likedlist
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *current = NULL;

	if (h == NULL)
		return (-1);
	current = h;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
