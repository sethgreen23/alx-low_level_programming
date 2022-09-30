#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * is_number - check if it is a number
 *
 * @str: strin to check
 *
 * Return: return 1 if is a number else 0
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
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
	int coins[4];

	int number, length, count, i;

	coins[0] = 25;
	coins[1] = 10;
	coins[2] = 2;
	coins[3] = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (!is_number(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number <= 0)
	{
		printf("0\n");
		return (0);
	}
	length = sizeof(coins) / sizeof(int);
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
