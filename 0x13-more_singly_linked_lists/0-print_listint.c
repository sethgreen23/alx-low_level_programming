#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: head of the list of integers
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *current;

	count = 0;
	current = h;
	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
