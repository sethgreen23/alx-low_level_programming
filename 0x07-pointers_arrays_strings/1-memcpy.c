#include "main.h"
/**
 * _memcpy - copy sertain memory
 *
 * @dest: memory to recive the bytes
 *
 * @src: source memoery
 *
 * @n: number of writen memory
 *
 * Return: return memory after geting copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
