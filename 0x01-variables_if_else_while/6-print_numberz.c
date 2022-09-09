#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: print number from 1 to 9
 * without using printf or char
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{

		putchar(number+'0');

		number++;

	}

	putchar('\n');

	return (0);
}
