#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at nth position
 * @head: head
 * @index: index
 *
 * Return: 1 if deletion successfull 0 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int size = 0, i = 0;
	dlistint_t *pointer = *head, *temp = *head, *pointer1 = *head;

	if (*head == NULL)
		return (-1);
	while (pointer1 != NULL)
	{
		size++;
		pointer1 = pointer1->next;
	}
	if (index >= size)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		(*head)->prev = NULL;
		return (1);
	}
	else if (index == size - 1)
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->prev->next = NULL;
		free(pointer);

		return (1);
	}
	while (i < index)
	{
		i++;
		pointer = pointer->next;
	}
	pointer->next->prev = pointer->prev;
	pointer->prev->next = pointer->next;
	free(pointer);
	return (1);
}
