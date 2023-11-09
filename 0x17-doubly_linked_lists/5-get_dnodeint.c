#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of doubly linked list
 * @head: head
 * @index: index
 *
 * Return: node , if not return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, size = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	if (index >= size)
		return (NULL);
	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}

