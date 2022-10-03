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
	int i;

	char *tab = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
