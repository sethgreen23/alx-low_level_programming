#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: head of the list
 * @str: string
 *
 * Return: new added element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = NULL;
	list_t *tail = NULL;

	current = (list_t *)malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	if (str == NULL)
		current->len = 0;
	else
		current->len = strlen(str);
	if (!(*head))
	{
		*head = current;
		tail = current;
	}
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = current;
	}
	return (current);
}
