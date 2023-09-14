#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "variadic_functions.h"
#include <stdarg.h>
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

	if (separator == NULL)
		return;
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(lst, int);
		printf("%d", current);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(lst);
	putchar('\n');
}
