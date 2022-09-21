#include "main.c"
/**
 * _strncpy - copy a string
 *
 * @dest: destination
 *
 * @src: source string
 *
 * @n: number of element to copy
 *
 * Return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i  < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
