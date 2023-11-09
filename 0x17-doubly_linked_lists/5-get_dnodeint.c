#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of doubly linked list
 * @head: head
 * @index: index
 *
 * Return: return node , if not return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index >= dlistint_len(head))
		return (NULL);
	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}

