#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add a new node to a list
 * @head: the head of the list
 * @n: the value we want to add
 * Return: the adress of the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
