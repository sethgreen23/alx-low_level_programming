#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the hole list
 * @head: the head of the list
 * Return: return nothing
 */
void free_list(list_t *head)
{
	list_t *current, *delete;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		free(current->str);
		delete = current;
		current = current->next;
		free(delete);
	}
}
