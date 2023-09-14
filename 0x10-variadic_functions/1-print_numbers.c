#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print - print and integer
 * @n: number to print
 *
 * Return:nothing
 */
void print(int n)
{
	char num[32];
	int length;

	length = snprintf(buf, sizeof(buf), "%d", num);
	write(1, buf, length);
}
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
		print(current);
		if (i < n - 1)
			write(1, ", ", 2);
	}
	va_end(lst);
	write(1, "\n", 1);
}
