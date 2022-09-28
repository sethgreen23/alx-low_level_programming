#include "main.h"
/**
 * factorial - return the factorial of specific number
 *
 * @n: number to count its factorial
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
