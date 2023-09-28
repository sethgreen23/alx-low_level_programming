#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get from
 * one number to another
 * @n: number one
 * @m: number two
 *
 * Return: number of bit you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = sizeof(n) * 8;
	int count = 0;

	while (bits > 0)
	{
		if ((get_bit(n, bits - 1)) != get_bit(m, bits - 1))
			count++;
		--bits;
	}
	return (count >> 1);
}
