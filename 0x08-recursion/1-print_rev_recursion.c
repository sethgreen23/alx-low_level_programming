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
 * reverse_str - go to the end of the string and return a pointer
 * @s: string
 *
 * Return: pointer ot the end of the string
 */
char *reverse_str(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (reverse_str(s + 1));
}
/**
 * print_str - print the string on reverse
 * @str: string
 * @len: length
 *
 * Return: nothing
 */
void print_str(char *str, int len)
{
	if (len < 0)
		return;
	_putchar(*str);
	print_str(str - 1, len - 1);
}
/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int len;
	char *reverse_string;

	len = 0;
	len = _strlen_rev(s, len);
	reverse_string = reverse_str(s);
	print_str(reverse_string, len - 1);
}
