#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 * @separator: separator to use
 * @n: numbers of optional arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	int current;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(lst, int);
		printf("%d", current);
		if (i != n - 1)
			printf("%s", separator == NULL ? "" : separator);
	}
	va_end(lst);
	printf("\n");
}
