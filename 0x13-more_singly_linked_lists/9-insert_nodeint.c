#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at index
 * @head: head of the list
 * @idx: the index
 * @n: the data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *current, *new_node;

	if (*head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (count = 0; count < idx - 1 && current != NULL; count++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current->next;
	current = new_node;
	return (new_node);	
}
