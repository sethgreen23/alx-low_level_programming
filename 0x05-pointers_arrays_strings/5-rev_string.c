#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @str: string
 *
 * Return: return nothing
 */
void rev_string(char *str)
{
	int i, j, l;
	char c;

	for (i = 0; str[i] != '\0'; i++)
		;
	l = i;
	for (i--, j = 0; j < l / 2; i--, j++)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}
