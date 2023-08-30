#include <stdio.h>
#include "main.h"
/**
 * _sqrt - count the sqrt of an integer
 * @med: half of the number
 * @n: integer
 *
 * Return: sqrt
 */
int _sqrt(int med, int n)
{
	if (med > n / 2)
		return (-1);
	if ((med * med) != n)
		return (_sqrt(med + 1, n));
	else
		return (med);
}
/**
 * _sqrt_recursion - count the sqrt
 * @n: integer
 *
 * Return: sqrt of an integer
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (_sqrt(1, n));
}
