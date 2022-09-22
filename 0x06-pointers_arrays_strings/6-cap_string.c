#include "main.h"
/**
 * cap_string - capitalise all words
 *
 * @c: paragraph to capicalise
 *
 * Return: capitalised string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	if ((i == 0 ||
	   c[i - 1] == '\n' ||
	   c[i - 1] == '\t' ||
	   c[i - 1] == '.' ||
	   c[i - 1] == ';' ||
	   c[i - 1] == '!' ||
	   c[i - 1] == '?' ||
	   c[i - 1] == '"' ||
	   c[i - 1] == '(' ||
	   c[i - 1] == ')' ||
	   c[i - 1] == '{' ||
	   c[i - 1] == '}' ||
	   c[i - 1] == 32) && c[i] >= 97 && c[i] <= 122)
	c[i] = c[i] - 32;
	}
	return (c);
}
