#include "lists.h"
/**
 * add_node - add a new node at the beggining of the list
 * @head: head of the list
 * @str: content of the node
 *
 * Return: address of the the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	const list_t *current;

	current = (list_t *)malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	current->next = NULL;
	if (!(*head))
	{
		*head = current;
	}
	else
	{
		current->next = *head;
		*head = current;
	}
	return (current);
}
