#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all its parameters
 * @n: number of elements to sum
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	int s, current;

	if (n == 0)
		return (0);
	va_start(lst, n);
	s = 0;
	for (i = 0; i < n; i++)
	{
		current = va_arg(lst, int);
		s += current;
	}
	va_end(lst);
	return (s);
}
