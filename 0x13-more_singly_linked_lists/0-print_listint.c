#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_listint - print the list content
 * @h: the head of the list
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t count;

	count = 0;
	p = h;
	if (p != NULL)
	{
		while (p != NULL)
		{
			printf("%d\n", p->n);
			p = p->next;
			count++;
		}
	}
	return (count);
}
