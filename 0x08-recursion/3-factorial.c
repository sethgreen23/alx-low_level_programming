#include <stdio.h>
#include "main.h"
/**
 * factorial - count the factorial of a given number
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (n);
	return (n * factorial(n - 1));
}
