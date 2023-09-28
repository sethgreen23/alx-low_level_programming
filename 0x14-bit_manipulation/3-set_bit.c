#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index where we want to operate the 1
 *
 * Return: 1 if it works -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	if (index > bits)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
