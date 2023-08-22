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
	char *i, *j;
	char temp;

	for (j = s; *j != '\0'; j++)
	;
	j--;
	for (i = s; i < j; i++, j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}
