#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - add node to the list in the beggining
 * @head: the head of the list
 * @str: the string to add
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	int count, i;
	list_t *n;

	n = malloc(sizeof(*n));
	for (i = 0; str[i]; count++, i++)
	;
	n->str = malloc(sizeof(char) * count + 1);
	for (i = 0; i < count; i++)
	{
		n->str[i] = str[i];
	}
	n->str[i] = '\0';
	n->len = count;
	n->next = *(head);
	*(head) = n;
	return (n);
}
