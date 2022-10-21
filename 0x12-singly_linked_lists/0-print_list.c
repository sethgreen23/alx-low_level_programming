#include "lists.h"
/**
 * print_list - print the elements of the list
 * @h: the head of the list
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *p = h;

	if (h == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", p->len, p->str);
		}
		count++;
		p = p->next;
	}
	return (count);
}
