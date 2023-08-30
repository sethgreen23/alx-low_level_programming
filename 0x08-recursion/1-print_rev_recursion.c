#include <stdio.h>
#include "main.h"
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
