#include "lists.h"
/**
 * free_list - free a list_t
 * @head: head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = NULL;
	list_t *temp = NULL;

	if (head == NULL)
		return;
	current = head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(str);
		free(temp);
	}
}
