#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (j = 0; s[j] != '\0'; j++)
	;
	j--;
	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');
}
