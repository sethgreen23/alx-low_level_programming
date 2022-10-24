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
	listint_t *p;

	if (!head)
	{
		p = head;
		while (!p)
		{
			free(p);
			p = p->next;
		}
	}
}
