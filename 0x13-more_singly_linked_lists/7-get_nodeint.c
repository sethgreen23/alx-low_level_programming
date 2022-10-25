#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - get the node and index
 * @head: head of the list
 * @index: the index we are searching
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	node = head;
	while (node != NULL && count < index)
	{
		node = node->next;
		count++;
	}
	if (node == NULL || count > index)
		return (NULL);
	return (node);
}
