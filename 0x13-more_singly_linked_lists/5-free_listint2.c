#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free the list
 * @head: the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = *head;
		free(*head);
		*head = next;
	}
}
