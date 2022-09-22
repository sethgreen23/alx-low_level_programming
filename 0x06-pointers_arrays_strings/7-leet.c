#include "main.h"
/**
 * leet - encode letters
 *
 * @c: test to encode
 *
 * Return: return character
 */
char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		while (c[i] == 'a' || c[i] == 'A')
			c[i] = '4';
		while (c[i] == 'e' || c[i] == 'E')
			c[i] = '3';
		while (c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		while (c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		while (c[i] == 'l' || c[i] == 'L')
			c[i] = '1';
	}
	return (c);
}
