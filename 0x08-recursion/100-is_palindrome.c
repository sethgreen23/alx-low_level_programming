#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * is_pal - check for palandrom string
 * @i: init integer
 * @j: last integer
 * @s: string
 *
 * Return: 1 if palandrom 0 otherwise
 */
int is_pal(char *s, int i, int j)
{
	if (i > j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (is_pal(s, i + 1, j - 1));
}
/**
 * is_palindrome - check of paralndorm
 * @s: string
 *
 * Return: 1 is palandrom 0 otherwise
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0, strlen(s) - 1));
}
