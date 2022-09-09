#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: print all number from 1 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{

		printf("%d", number++);

	}

	printf("\n");

	return (0);
}
