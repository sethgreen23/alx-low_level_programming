#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *@n: number
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	return ((n % 10) < 0 ? -(n % 10) : (n % 10) > 0 ? (n % 10) : 0);
}
