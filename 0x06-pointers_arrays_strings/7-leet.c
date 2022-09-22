#include "main.h"
/**
 * leet - encode letters
 *
 * @s: test to encode
 *
 * Return: return character
 */
char *leet(char *s)
{
	char english[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char words[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		j = 0;
		for (j = 0; j < 10; j++)
		{
			if (english[j] == c[i])
				c[i] = words[j];
		}
	}
	return (c);
}
