#include "lists.h"
/**
 * pop_listint - delete the head node of a list
 * @head: head of the list
 *
 * Return: return the head nodes data (n), if head is null return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	current = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = current;
	return (data);
}
