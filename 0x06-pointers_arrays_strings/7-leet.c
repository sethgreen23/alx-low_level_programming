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
		switch (c[i])
		{
			case 'a':
			case 'A':
				c[i] = 4 + '0';
				break;
			case 'e':
			case 'E':
				c[i] = 3 + '0';
				break;
			case 'o':
			case 'O':
				c[i] = 0 + '0';
				break;
			case 't':
			case 'T':
				c[i] = 7 + '0';
				break;
			case 'l':
			case 'L':
				c[i] = 1 + '0';
				break;

		}
	}
	return (c);
}
