#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator
 * @n: number of string to print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *current;

	va_start(lst, n);
	for (i = 0;  i < n; i++)
	{
		current = va_arg(lst, char *);
		printf("%s", current == NULL ? "(nil)" : current);
		if (i != n - 1)
		{
			printf("%s", separator == NULL ? "" : separator);
		}
	}
	va_end(lst);
	printf("\n");
}
