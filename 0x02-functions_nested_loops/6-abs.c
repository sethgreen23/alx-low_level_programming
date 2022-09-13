#include <stdio.h>
#include "main.h"
/**
 * _abs - return the absolute value of an integer
 *
 * @i: the variable to check
 *
 * Return: abs of interger
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}
