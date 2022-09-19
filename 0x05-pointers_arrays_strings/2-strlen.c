#include "main.h"
/**
 * _strlen - count the length of string
 *
 * @s: the string
 *
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int counter = 0;

	if (*s == '\0')
		return (0);

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
