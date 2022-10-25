#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - sum the data of the list
 * @head: head of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *next;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	next = head;
	while (next != NULL)
	{
		sum += next->n;
		next = next->next;
	}
	return (sum);
}
