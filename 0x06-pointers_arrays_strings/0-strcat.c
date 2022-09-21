#include "main.h"
/**
 * _strcat - concatenate to strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: return a sting
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0;

	while (dest[counter] != '\0')
		counter++;
	while (*src != '\0')
	{
		dest[counter] = *src;
		src++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
