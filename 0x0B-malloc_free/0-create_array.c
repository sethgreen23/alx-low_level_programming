#include "main.h"
/**
 * create_array - create a table of character and filed with a character
 *
 * @size: the size of the table
 *
 * @c: character to populate with it the table
 *
 * Return: return the table of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *tab;

	*tab = malloc(sizeof(char) * size);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
