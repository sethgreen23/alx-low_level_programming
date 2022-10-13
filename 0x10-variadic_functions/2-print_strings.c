#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - sum of all paramethers
 * @n: number of element s
 * @separator: the separator
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *check;
	unsigned int i;

	if (n > 0)
	{
	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	check = va_arg(ap, char *);
	if (check != NULL)
		printf("%s", check);
	else
		printf("(nil)");
	for (i = 1; i < n; i++)
	{
		check = va_arg(ap, char *);
		if (check != NULL)
			printf("%s%s", separator, check);
		else
		printf("%s(nil)", separator);
	}
	va_end(ap);
	}
	printf("\n");
}
