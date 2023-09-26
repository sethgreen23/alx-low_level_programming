#include "lists.h"
/**
 * len - length of the list
 * @head: head of list
 *
 * Return: length of a list
 */
unsigned int len(listint_t *head)
{
	unsigned int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
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

	if (index > listint_len(head) || head == NULL)
		return (NULL);
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
