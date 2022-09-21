#include "main.h"
/**
 * _strncat - concatenate strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of character to concatenate
 *
 * Return: return a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0, counter1 = 0;

	while (dest[counter] != '\0')
		counter++;
	while (*src != '\0' && counter1 < n)
	{
		dest[counter] = *src;
		src++;
		counter++;
		counter1++;
	}
	dest[counter] = '\0';
	return (dest);
}
