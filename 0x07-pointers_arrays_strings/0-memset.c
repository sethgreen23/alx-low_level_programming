#include "main.h"
/**
 * char *_memset -  fill n bytes of memory with constant byte b
 *
 * @s: memory pointed by s
 *
 * @b: the byte b
 *
 * @n: the number of bytes
 *
 * Return: return string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
