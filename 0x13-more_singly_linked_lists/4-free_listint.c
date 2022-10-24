#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - free the list
 * @head: the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	if (!head)
	{
		current = next = head;
		while (!next)
		{
			next = current->next;
			free(current);
		}
	}
}
