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
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
