#include "lists.h"
/**
 * print_list - print the elements of the list
 * @h: the head of the list
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *p;

	if (h == NULL)
	{
		exit(EXIT_FAILURE);
	}
	count = 0;
	p = h;
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
