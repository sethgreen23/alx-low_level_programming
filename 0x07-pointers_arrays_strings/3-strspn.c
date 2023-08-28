#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 *
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, j, found;

	found = 0, len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				++len;
				found = 1;
				break;
			}
		}
		if (found)
		{
			found = 0;
		}
	}
	return (len);
}
