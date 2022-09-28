#include "main.h"
/**
 * _pow_recursion - return the value of x
 * raised by y
 *
 * @x: the value to raise at y
 *
 * @y: the time i have to multiply x
 *
 * Return: return the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
