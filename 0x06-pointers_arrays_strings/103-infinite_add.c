#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
 * calc_two - calculate two numbers till max length for both
 * @s1: string one
 * @s2: string two
 * @r: resulting string
 * @i: increment number
 * @kp: keep number
 * @res: rest number
 * @s_r: size of the buffer
 *
 * Return: nothing
 */
void calc_two(char *s1, char *s2, char *r, int *i, int *kp, int *res, int s_r)
{
	int result;

	for (; *i < s_r && s1[*i] != '\0' && s2[*i] != '\0'; *i = *i + 1)
	{
		result = *kp + (s1[*i] - 48) + (s2[*i] - 48);
		if (result >= 10)
		{
			*res = result % 10;
			*kp = result / 10;
			r[*i] = *res + '0';
			*res = 0;
		}
		else
		{
			r[*i] = result + '0';
		}
	}
}
/**
 * calc_one - calculate one number
 * @s: string
 * @r: resulting string
 * @i: increment number
 * @kp: keep number
 * @res: rest number
 * @s_r: size of the buffer
 *
 * Return: nothing
 */
void calc_one(char *s, char *r, int *i, int *kp, int *res, int s_r)
{
	int result;

	for (; *i < s_r && s[*i] != '\0'; *i = *i + 1)
	{
		result = *kp + (s[*i] - 48);
		if (result >= 10)
		{
			*res = result % 10;
			*kp = result / 10;
			r[*i] = *res + '0';
			*res = 0;
		}
		else
		{
			r[*i] = result + '0';
		}

	}
}
/**
 * infinite_add - infinite add
 * @n1: first string number
 * @n2: second string number
 * @r: return string number
 * @size_r: size of the return string
 *
 * Return: result of addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int keep, rest, result, i;
	int len1, len2;
	char *n1_copy, *n2_copy;

	n1_copy = (char *)malloc(len1 + 1);
	n2_copy = (char *)malloc(len2 + 1);
	keep = 0, rest = 0, i = 0;
	strcpy(n1_copy, n1);
	strcpy(n2_copy, n2);
	reverseStr(n1_copy);
	reverseStr(n2_copy);
	calc_two(n1_copy, n2_copy, r, &i, &keep, &rest, size_r);
	if (n1_copy[i] == '\0' && n2_copy[i] != '\0')
	{
		calc_one(n2_copy, r, &i, &keep, &rest, size_r);
	}
	else if (n1_copy[i] != '\0' && n2_copy[i] == '\0')
	{
		calc_one(n1_copy, r, &i, &keep, &rest, size_r);
	}
	if (i >= size_r)
		return (0);
	if (i < size_r)
	{
		if (keep > 0)
		{
			r[i] = keep + '0';
			i++;
			r[i] = '\0';
		}
	}
	reverseStr(r);
	free(n1_copy);
	free(n2_copy);
	return (r);
}
