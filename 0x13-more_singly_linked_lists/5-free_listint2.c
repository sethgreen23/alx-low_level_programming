#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free the list
 * @head: the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	*head = NULL;
	while (current != NULL)
	{
		next = current;
		free(current);
		current = next;
	}
}
