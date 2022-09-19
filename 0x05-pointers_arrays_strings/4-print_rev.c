#include "main.h"
/**
 * print_rev - print string on revese
 *
 * @str: string
 *
 * Return: reversed string
 */
void print_rev(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		counter++;
		str++;
	}
	str--;
	while (counter != 0)
	{
		printf("%c", *str);
		counter--;
		str--;
	}
	printf("\n");
}
