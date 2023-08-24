#include <stdio.h>
#include "main.h"
#define SPACE ' '
#define NEWLINE '\n'
#define COMMA ','
#define SEMICOLON ';'
#define POINT '.'
#define EXCLAMATION '!'
#define INTEROGATION '?'
#define QUOTATION '\"'
#define OPENCURLLY '('
#define CLOSECURLLY ')'
#define OPENBRAKET '{'
#define CLOSEBRAKET '}'
#define TAB '\t'
#define ON 1
#define OFF 0
/**
 * cap_string - capitalize all words of a string
 * @str: string to operate on
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int found, i;
	char *str_clone;
	char ponctuation[] = ",;.!?(){}\"\t\n ";

	found = ON;
	str_clone = str;
	while (*str_clone != '\0')
	{
		for (i = 0; ponctuation[i] != '\0'; i++)
		{
			if (ponctuation[i] == *str_clone)
				found = ON;
		}
		if (found)
		{
			if (*str_clone >= 97 && *str_clone <= 122)
			{
				*str_clone -= 21;
				found = OFF;
			}
			else if (*str_clone >= 65 && *str_clone <= 90)
				found = OFF;
			else if (*str_clone >= 48 && *str_clone <= 57)
				found = OFF;
		}
		str_clone++;
	}
	return (str);
}
