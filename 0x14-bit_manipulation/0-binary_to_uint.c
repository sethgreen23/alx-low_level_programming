#include "main.h"
/**
 * power - calculate the power
 * @base: base of the power
 * @p: power
 *
 * Return: result of the power
 */
unsigned int power(int base, int p)
{
	unsigned int product = 1;
	int i;

	for (i = 1; i <= p; i++)
	{
		product *= base;
	}
	return (product);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int size = 0, i;

	if (b == NULL)
		return (0);
	size = strlen(b) - 1;
	for (i = size; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		sum += power(2, size - i) * (b[i] - 48);
	}
	return (sum);
}
