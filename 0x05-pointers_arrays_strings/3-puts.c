#include "main.h"
#include <unistd.h>
/**
 * _puts - print string
 *
 * @str: str to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	printf("\n");
}
