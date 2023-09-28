#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: decimal number
 *
 * Return: binary representaion
 */
void print_binary(unsigned long int n)
{
	int flag = 0, bit = 31;
	unsigned long int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1 << bit; bit >= 0; i = 1 << bit)
	{
		if (flag)
		{
			(n & i) ? _putchar('1') : _putchar('0');		
		}
		else
		{
			if (n & i)
			{
				_putchar('1');
				flag = 1;
			}
		}
		--bit;
	}
}
