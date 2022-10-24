#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - print th length of the linkedlist
 * @h: the head of the list
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *p;

	count = 0;
	p = h;
	if (p != NULL)
	{
		while (p != NULL)
		{
			count++;
			p = p->next;
		}
	}
	return (count);
}
