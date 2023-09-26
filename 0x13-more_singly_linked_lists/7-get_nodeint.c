#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of list_t
 * @head: head of the list
 * @index: index of the element
 *
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int i = 0;

	if (index >= listint_len(head) || head == NULL)
		return (NULL);
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
