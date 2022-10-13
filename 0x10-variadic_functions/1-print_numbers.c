#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum of all paramethers
 * @n: number of element s
 * @separator: the separator
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n <= 0)
		return;
	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
