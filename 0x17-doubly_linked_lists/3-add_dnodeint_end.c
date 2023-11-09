#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: head
 * @n: data
 *
 * Return: address of the new node, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *pointer = *head;

	if (*head == NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
		return (temp);
	}

	while (pointer->next != NULL)
		pointer = pointer->next;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = pointer;
	pointer->next = temp;
	return (temp);
}
