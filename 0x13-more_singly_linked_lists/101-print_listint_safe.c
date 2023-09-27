#include "lists.h"
/**
 * save_node - save the node in a array
 * @list: the list containing the nodes
 * @size: size of the list
 * @head: is the node we will store
 *
 * Return: new list with the new node
 */
const listint_t **save_node(const listint_t **l, int s, const listint_t *h)
{
	int i = 0;
	const listint_t **newList = NULL;

	newList = (const listint_t **)malloc(sizeof(listint_t *) * s);
	if (newList == NULL)
	{
		free(newList);
		free(l);
		exit(98);
	}
	for (; i < s - 1; i++)
	{
		newList[i] = l[i];
	}
	newList[i] = h;
	free(l);
	return (newList);
}
/**
 * print_listint_safe - prints linked list
 * @head: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	int i = 0;
	int size = 0;

	while (head != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (size);
			}
		}
		size++;
		list = save_node(list, size, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (size);
}
