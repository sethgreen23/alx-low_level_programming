#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: head of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
