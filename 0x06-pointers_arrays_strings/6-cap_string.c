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
	int word;
	char *str_clone;

	word = OFF;
	str_clone = str;
	while (*str_clone != '\0')
	{
		if (*str_clone == SPACE ||
			*str_clone == TAB ||
			*str_clone == NEWLINE ||
			*str_clone == COMMA ||
			*str_clone == SEMICOLON ||
			*str_clone == POINT ||
			*str_clone == EXCLAMATION ||
			*str_clone == INTEROGATION ||
			*str_clone == QUOTATION ||
			*str_clone == OPENCURLLY ||
			*str_clone == CLOSECURLLY ||
			*str_clone == OPENBRAKET ||
			*str_clone == CLOSEBRAKET)
		{
			word = OFF;
		}
		else if (word == OFF)
		{
				if (*str_clone >= 97 && *str_clone <= 122)
					*str_clone -= 32;
				word = ON;
		}
		else
			word = ON;
		++str_clone;
	}
	return (str);
}
