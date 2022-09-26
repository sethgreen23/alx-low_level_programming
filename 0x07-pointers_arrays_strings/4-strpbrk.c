#include "main.h"

/**
 * _strpbrk - search a string for any of ta set of bytes
 *
 * @s: string to search in
 *
 * @accept: the pathern
 *
 * Return: return pointer of first occurence of
 * any element in c of null
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		int i;

		for (i = 0; accpet[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (0);
}
