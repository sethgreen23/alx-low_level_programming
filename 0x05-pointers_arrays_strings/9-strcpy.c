#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy the string from source to destination including
 * the null (\0) byte
 * @dest: destination character array
 * @src: source character array
 *
 * Return: array of characters
 */
char *_strcpy(char *dest, char *src)
{
	char *original;

	original = dest;
	for (; *src != '\0'; src++)
		*dest = *src;
	*dest = '\0';
	return (original);
}
