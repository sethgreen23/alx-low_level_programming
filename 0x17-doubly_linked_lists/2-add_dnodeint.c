#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of a doubly linked list
 * @head: head
 * @n: data
 *
 * Return: adress of newly created node, or NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (*head == NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		(*head) = temp;
		return (temp);
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;

	temp->next = *head;
	(*head)->prev = temp;
	(*head) = temp;

	return (temp);
}
