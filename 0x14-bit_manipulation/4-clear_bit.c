#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 if it works or -1 if  and error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;

	if (index > size)
		return (-1);
	if (*n & (1 << index))
		*n = *n ^ (1 << index);
	return (1);
}
