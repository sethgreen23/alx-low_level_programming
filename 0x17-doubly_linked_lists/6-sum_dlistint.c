#include "lists.h"
/**
 * sum_dlistint - sum of all the data of doubly linked list
 * @head: head
 *
 * Return: sum of all numbers if not return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_list = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum_list += head->n;
		head = head->next;
	}
	return (sum_list);
}
