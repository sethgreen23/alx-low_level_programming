#include "main.h"
/**
 * _isdigit - check for digit
 *
 * @c: the digit we want to check
 *
 * Return: 1 if digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
