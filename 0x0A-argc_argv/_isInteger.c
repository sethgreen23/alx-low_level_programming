#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * isInteger - check for integer
 * @s: string
 *
 * Return: 0 if not integer 1 is yes
 */
int isInteger(char *s)
{
	char *clone;

	clone = s;
	if (clone == NULL || *clone == '\0')
		return (0);
	if (*clone == '+' || *clone == '-')
		clone++;
	while (*clone != '\0')
	{
		if (*clone < 48 || *clone > 57)
			return (0);
		clone++;
	}
	return (1);
}
