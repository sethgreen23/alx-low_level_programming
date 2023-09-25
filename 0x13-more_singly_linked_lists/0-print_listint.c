#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: head of the list of integers
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	listint_t *current = NULL;

	current = h;
	while (!current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
