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
		printf("0");
		return;
	}
	for (; bits >= 0; bits--)
	{
		if (flag == 0)
		{
			if ((n >> bits) & 1)
			{
				printf("%ld", (n >> bits) & 1);
				flag = 1;
			}
		}
		else
		{
			printf("%ld", (n >> bits) & 1);
		}
	}
}
