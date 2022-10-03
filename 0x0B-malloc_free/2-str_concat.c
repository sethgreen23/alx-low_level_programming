#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: return the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	for (j = 0; j < strlen(s2); j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
