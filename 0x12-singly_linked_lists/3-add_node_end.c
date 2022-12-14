#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - add at the end
 *@head: head of the list
 *@str: string we want to add
 *Return: the element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *current, *the_one;
	char *st;

	if (str == NULL)
		return (NULL);
	the_one = malloc(sizeof(*the_one));
	if (the_one == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	;
	st = strdup(str);
	if (st == NULL)
	{
		free(the_one);
		return (NULL);
	}
	the_one->str = st;
	the_one->len = i;
	the_one->next = NULL;
	if (*head == NULL)
	{
		*head = the_one;
		return (the_one);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = the_one;
	return (the_one);
}
