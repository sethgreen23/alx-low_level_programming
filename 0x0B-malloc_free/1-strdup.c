#include "main.h"
#include <string.h>
/**
 * _strdup - return pointer to newly allocated space
 *
 * @str: the string to copy
 *
 * Return: return the pointer
 */
char *_strdup(char *str)
{
	char *string;
	size_t i;

	if (str == NULL)
	return (NULL);
	string = (char *) malloc(strlen(str) * sizeof(char) + 1);
	if (string == NULL)
	return (NULL);
	for (i = 0; i < strlen(str); i++)
		string[i] = str[i];
	string[i] = '\0';
	return (string);
}
