#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: value less, equal or less than 0 if s1 is found
 */
int _strcmp(char *s1, char *s2)
{
	char *s1_clone, *s2_clone;
	int result;

	result = 0;
	s1_clone = s1;
	s2_clone = s2;
	for (; *s1_clone != '\0' && *s2_clone != '\0'; s1_clone++, s2_clone++)
	{
		if (*s1_clone > *s2_clone)
		{
			result = 15;
			break;
		}
		else if (*s1_clone < *s2_clone)
		{
			result = -15;
			break;
		}
	}
	if (result == 0)
	{
		if (*s1_clone == '\0' && *s2_clone == '\0')
		{
			result = 0;
		}
		else if (*s1_clone != '\0' && *s2_clone == '\0')
		{
			result = 15;
		}
		else if (*s1_clone == '\0' && *s2_clone != '\0')
		{
			result = -15;
		}
	}
	return (result);
}
