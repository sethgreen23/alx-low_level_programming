#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: string
 * @b: constant byte
 * @n: memory length
 *
 * Return: string filled with constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		*(s + i) = b;
	return (s);
}
