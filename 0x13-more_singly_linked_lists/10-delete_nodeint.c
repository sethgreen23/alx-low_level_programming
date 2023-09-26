#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index of a linked list
 * @head: head of the list
 * @index: index where to clear
 *
 * Return: 1 if it successull, -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp, *previous;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (index != 0)
	{
		current = *head;
		previous = NULL;
		for (i = 0; i < index && current != NULL; i++)
		{
			previous = current;
			current = current->next;
		}
		if (current == NULL)
			return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = current;
	previous->next = current->next;
	return (1);

}
