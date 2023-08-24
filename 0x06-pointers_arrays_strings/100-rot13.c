#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	char *str_clone;

	str_clone = str;
	for (; *str_clone != '\0'; ++str_clone)
	{
		for (i = 0; input[i] != '\0'; ++i)
		{
			if (input[i] == *str_clone)
			{
				*str_clone = output[i];
				break;
			}
		}
	}
	return (str);

}
