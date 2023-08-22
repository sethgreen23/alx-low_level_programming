#include <stdio.h>
#include "main.h"
/**
 * print_rev - print as string in reverse
 * @c: String
 *
 * Return: Nothing
 */
void print_rev(char *c)
{
	int i, j;
	char itemp;

	for (j = 0; c[j] != '\0' ; j++)
	;
	j--;
	for (; j >= 0; j++)
	{
		putchar(c[j]);
	}
	putchar('\n');
}
