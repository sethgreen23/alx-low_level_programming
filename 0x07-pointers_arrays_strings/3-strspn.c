#include "main.h"
/**
 * _strspn - get the length of prefix substring
 *
 * @s: string to look up inside
 *
 * @accept: the string we will look inside of
 *
 * Return: return the count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	for (; *s != '\0'; s++)
	{
		int flag = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				flag = 1;
				break;
			}
		}
		if (!flag)
			break;
	}
	return (count);
}
