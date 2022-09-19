#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *str)
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
