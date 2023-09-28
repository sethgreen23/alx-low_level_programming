#include "main.h"
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
	size = strlen(b);
	for (i = size; i >= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		sum += pow(2, size - i) * (b[i] - 48);
	}
	return (sum);
}
