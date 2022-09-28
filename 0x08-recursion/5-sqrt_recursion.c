#include "main.h"
/**
 * _sqrt_recursion - return the natural square root
 *
 * @n: the number
 *
 * Return: return natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return getsquare(n, 1);
}

int getSquare(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) < n)
		return getSquare(n, i + 1);
	return (-1);
}
