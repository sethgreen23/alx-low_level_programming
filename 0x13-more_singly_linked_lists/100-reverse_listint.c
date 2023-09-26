#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	previous = NULL;
	current = *head;
	*head = (*head)->next;
	while (*head != NULL)
	{
		current->next = previous;
		previous = current;
		current = *head;
	       *head = (*head)->next;
	}
	current->next = previous;
	*head = current;
	return (*head);
}
