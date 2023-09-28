#include "main.h"
/**
 * get_bit - value of bit at a given index
 * @n: number you want to treat
 * @index: index you want to check
 *
 * Return: the segnificant bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	if (index > bits)
		return (-1);
	return (n & (1 << index) ? 1 : 0);
}
