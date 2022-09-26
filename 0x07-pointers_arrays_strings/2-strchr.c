#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
