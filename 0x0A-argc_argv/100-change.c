#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arguments numbers
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	coin = 0;
	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
