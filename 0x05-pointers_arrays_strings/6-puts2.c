#include <stdio.h>
#include "main.h"
/**
 * puts2 - print every other character
 * @str: string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	char *p;

	for (i = 0, p = str; *p != '\0'; i++, p++)
	{
		if (i % 2 == 0)
			putchar(*p);
	}
	putchar('\n');
}
