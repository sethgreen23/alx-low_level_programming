#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;

	if (head == NULL)
		exit(98);
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", &current, current->n);
		current = current->next;
	}
}
