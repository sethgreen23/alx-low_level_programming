#include <stdio.h>
#include "main.h"
/**
 * reverseStr - reverse a string
 * @str: string
 *
 * Return: nothing
 */
void reverseStr(char *str)
{
	int i, j;
	char temp;

	for (i = 0; str[i] != '\0'; i++)
	;
	i--;
	for (j = 0; j < i; i--, j++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
/**
 * infinite_add - infinite add
 * @n1: first string number
 * @n2: second string number
 * @r: return string number
 * @size_r: size of the return string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int keep, rest, result, i;

	keep = 0, rest = 0;
	reverseStr(n1);
	reverseStr(n2);
	for (i = 0; i < size_r && n1[i] != '\0' && n2[i] != '\0'; i++)
	{
		result = keep + (n1[i] - 48) + (n2[i] - 48);
		if (result >= 10)
		{
			rest = result % 10;
			keep = result / 10;
			r[i] = rest + '0';
			rest = 0;
		}
		else
		{
			r[i] = result + '0';
		}
	}
	if (n1[i] == '\0' && n2[i] != '\0')
	{
		for (; i < size_r && n2[i] != '\0'; i++)
		{
			result = keep + (n2[i] - 48);
			if (result >= 10)
			{
				rest = result % 10;
				keep = result / 10;
				r[i] = rest + '0';
				rest = 0;
			}
			else
			{
				r[i] = result + '0';
			}
		}
	}
	else if (n1[i] != '\0' && n2[i] == '\0')
	{
		for (; i < size_r && n1[i] != '\0'; i++)
		{
			result = keep + (n1[i] - 48);
			if (result >= 10)
			{
				rest = result % 10;
				keep = result / 10;
				r[i] = rest + '0';
				rest = 0;
			}
			else
			{
				r[i] = result + '0';
			}
		}
	}
	if (i >= size_r)
		r = NULL;
	else
	{
		if (keep > 0)
		{
			r[i] = keep + '0';
			i++;
			r[i] = '\0';
		}
	}
	reverseStr(r);
	reverseStr(n1);
	reverseStr(n2);
	return(r);
}
