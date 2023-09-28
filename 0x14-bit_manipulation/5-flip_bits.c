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
	unsigned long int difference = n ^ m, result = 1, i = 0;
	int count = 0;

	for (; i < bits; i++)
	{
		if (result & difference)
			count++;
		result <<= 1;
	}
	return (count);
}
