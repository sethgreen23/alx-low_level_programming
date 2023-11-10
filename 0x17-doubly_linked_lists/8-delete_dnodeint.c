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
	dlistint_t *pointer = *head, *temp = *head;

	while (pointer != NULL)
	{
		size++;
		pointer = pointer->next;
	}
	if (idx > size)
		return (-1);
	if (idx == 0)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else if (idx == size)
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->prev->next = NULL;
		pointer->prev = NULL;
		free(pointer);
		return (1);
	}
	while (i < idx)
	{
		i++;
		pointer = pointer->next;
	}
	pointer->next->prev = pointer->prev;
	pointer->prev->next = pointer->next;
	pointer->next = NULL;
	pointer->prev = NULL;
	free(pointer);
	return (1);
}
