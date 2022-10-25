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
	listint_t *node, *new_node;

	if (*head == NULL && idx != 0)
		return (NULL);
	node = *head;
	while (node != NULL && count != idx - 1)
	{
		node = node->next;
		count++;
	}
	if (node == NULL && count != idx - 1)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
