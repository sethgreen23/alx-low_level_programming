#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all paramethers
 * @n: number of element s
 * Return: sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
