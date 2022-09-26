#include "main.h"
/**
 * _strchr - locate character in a string
 *
 * @s: the string to search on
 *
 * @c: the caracter to find
 *
 * Return: return pointer to the first element
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
