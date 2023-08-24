#include <stdio.h>
#include "main.h"
/**
 * string_toupper - change lowercase letter of string to uppercase letters
 * @str: string to operate on
 *
 * Return: the string changed
 */
char *string_toupper(char *str)
{
	char *pointer;

	for (pointer = str; *pointer != '\0'; pointer++)
	{
		if (*pointer >= 97 && *pointer <= 122)
			*pointer -= 32;
	}
	return (str);
}
