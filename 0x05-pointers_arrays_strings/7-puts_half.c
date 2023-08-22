#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - print the half string
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len, half;
	char *p;

	len = strlen(str);
	half = len / 2;
	for (p = (str + half); *p != '\0'; p++)
		putchar(*p);
	putchar('\n');
}
