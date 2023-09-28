#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: decimal number
 *
 * Return: binary representaion
 */
void print_binary(unsigned long int n)
{
	int bits = 31;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (; bits >= 0; bits--)
	{
		if (flag == 0)
		{
			if ((n >> bits) & 1)
			{
				_putchar(((n >> bits) & 1) + '0');
				flag = 1;
			}
		}
		else
		{
			_putchar(((n >> bits) & 1) + '0');
		}
	}
}
