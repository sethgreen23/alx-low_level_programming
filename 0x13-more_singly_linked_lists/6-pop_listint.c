#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - pop the head
 * @head: the head of the list
 * Return: the data of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int data;

	if (*head == NULL)
		return (0);
	next = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next;
	return (data);
}
