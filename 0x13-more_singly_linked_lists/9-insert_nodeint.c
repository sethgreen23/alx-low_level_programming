#include "lists.h"
/**
 * insert_nodeint_at_index - insert element at given position
 * @head: head of the list
 * @idx: index of the new node
 * @n: data
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (idx > len(*head))
		return (NULL);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		node  = *head;
	}
	else
	{
		i = 0;
		current = *head;
		while (i < idx - 1)
		{
			i++;
			current = current->next;
		}
		node->next = current->next;
		current->next = node;
	}
	return (node);
}
