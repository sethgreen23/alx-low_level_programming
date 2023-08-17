#include <stdio.h>
#include "main.h"
/**
 * main - main function
 *
 * Description: if i multiple of 3 print Fizz
 * else if i multiple of 5 print Buzz
 * else if i multiple of 3 and 5 print FizzBuzz
 * else print i
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 100)
		{
			_putchar(' ');
			_putchar('\n');
		}
		else
			_putchar(' ');
	}
}
