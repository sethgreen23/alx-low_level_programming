#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: decimal number
 *
 * Return: binary representaion
 */
void print_binary(unsigned long int n)
{
	int flag = 0, i;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		if (flag)
		{
			(n & i) ? _putchar('1') : putchar('0');		
		}
		else
		{
			if (n & i)
				_putchar('1');
			flag = 1;
		}
	}
}
