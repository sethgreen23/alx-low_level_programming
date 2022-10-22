#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *st;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(*n));
	count = 0;
	for (i = 0; str[i]; count++, i++)
	;
	st = strdup(str);
	n->str = st;
	n->len = count;
	n->next = *(head);
	*(head) = n;
	return (n);
}
