#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: decimal number
 *
 * Return: binary representaion
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; bits > 0; bits--)
	{
		if (flag == 0)
		{
			if ((n >> (bits - 1)) & 1)
			{
				_putchar('1');
				flag = 1;
			}
		}
		else
			((n >> (bits - 1)) & 1) ? _putchar('1') : _putchar('0');
	}
}
