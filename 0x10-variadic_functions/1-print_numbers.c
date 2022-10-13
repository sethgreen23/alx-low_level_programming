#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum of all paramethers
 * @n: number of element s
 * @separator: the separator
 * Return: sum of all integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int);
			if (i != n-1)
				printf("%s", separtor);
		}
		printf("\n");
	}	
}
