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
	return (getSquare(n, 1));
}
/**
 * getSquare - return the square root
 *
 * @n: number to find its root
 *
 * @i: counter to find the root
 *
 * Return: the root of exist or the next counter to search
 * or -1 is doesnt exist
 */

int getSquare(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) < n)
		return (getSquare(n, i + 1));
	return (-1);
}
