#include "lists.h"
/**
 * print_list - print all the elements of a list_t list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *current = NULL;

	if (h == NULL)
		return (0);
	current = h;
	count = 0;
	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
