#include <stdio.h>
#include "main.h"
/**
 * _strlen_rev - count the string length recursively
 * @s: string
 * @len: length
 *
 * Return: length of the string
 */
int _strlen_rev(char *s, int len)
{
	if (*s == '\0')
		return (len);
	return (_strlen_rev(s + 1, len + 1));
}
/**
 * _strlen_recursion - count the string length recursivly
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	return (_strlen_rev(s, 0));
}
