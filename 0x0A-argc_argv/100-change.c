#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - minimal number of coins to change
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: 1 is error and 0 if not
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 2, 1};

	if (argc == 1)
	{
		int number;

		number = atoi(argv[1]);
		if (number < 0)
		{
			printf("0\n");
			return (0);
		}
		int length;

		length = sizeof(coins) / sizeof(int);

		int count, i;

		count	= 0;
		for (i = 0; i < length; i++)
		{
			if (number / coins[i] == 0)
				continue;
			count += number / coins[i];
			number %= coins[i];
		}
		printf("%d\n", count);
		return (0);
	}
	printf("Error\n");
	return (1);

}
