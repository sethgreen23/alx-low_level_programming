#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: address of the new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0, i = 0;
	dlistint_t *pointer = *h, *temp = *h, *pointer1 = *h;

	while (pointer != NULL)
	{
		size++;
		pointer = pointer->next;
	}
	if (idx > size)
		return (NULL);
	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	else if (idx == size)
	{
		temp = add_dnodeint_end(h, n);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	while (i < idx - 1)
	{
		i++;
		pointer1 = pointer1->next;
	}
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = pointer1;
	temp->next = pointer1->next;
	pointer1->next->prev = temp;
	pointer1->next = temp;
	return (temp);
}
