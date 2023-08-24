#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to decode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char dict[] = "aAeEoOtTlL";
	char encode[] = "4433007711";
	char *str_clone;
	int i;

	str_clone = str;
	for (; *str_clone != '\0'; ++str_clone)
	{
		for (i = 0; i < 10; i++)
		{
			if (*str_clone == dict[i])
				*str_clone = encode[i];
		}
	}
	return (str);
}
