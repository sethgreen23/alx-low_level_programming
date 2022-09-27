#include "main.h"
#include "string.h"
/**
 * _strstr - locate substring
 *
 * @haystack: the string to seach in
 *
 * @needle: the substring to seach
 *
 * Return: the first position of substring in original string
 * or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *res, *aux;

	while (*haystack != '\0')
	{
		res = haystack;
		aux = needle;
		while (*aux == *haystack && *aux != '\0' && *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack = res + 1;
	}
	return (NULL);
}
