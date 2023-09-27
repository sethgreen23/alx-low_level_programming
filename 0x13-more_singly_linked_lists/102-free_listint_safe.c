#include "lists.h"
/**
 * save_n - save node
 * @l: list
 * @s: size
 * @h: header node
 *
 * Return: new list with the nodes
 */
listint_t **save_n(listint_t **l, size_t s, listint_t *h)
{
	listint_t **newList = NULL;
	size_t i;

	newList = malloc(sizeof(listint_t *));
	if (newList == NULL)
	{
		free(l);
		free(newList);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
	{
		newList[i] = l[i];
	}
	newList[i] = h;
	free(l);
	return (newList);
}

/**
 * free_listint_safe - frees list
 * @h: head of the list
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t **list = NULL;
	size_t size = 0, i = 0;
	listint_t *temp = NULL;

	if (h == NULL || *h == NULL)
		return (size);
	while (*h != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (size);
			}
		}
		size++;
		list = save_n(list, size, *h);
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	free(list);
	return (size);
}
