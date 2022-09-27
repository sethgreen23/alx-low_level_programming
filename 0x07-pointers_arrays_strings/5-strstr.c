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
	int j, capture, i, count;

	for (j = 0; s[j] != '\0'; j++)
	{
		count = strlen(needle);
		if (s[j] == needle[0])
		{
			capture = j;
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (needle[i] == s[j])
				{
					count--;
					j++;
				}
				else
				{
					break;
				}
			}
			if (count == 0)
				return (&(s[capture]));
		}
	}
	return (0);
}
