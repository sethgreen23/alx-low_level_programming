#include "main.h"
/**
 * puts_half - print half
 *
 * @str: string
 *
 * Return: noting;
 */
void puts_half(char *str)
{
	int i, l, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	l = i;
	j = (l % 2 == 0) ? l / 2 : (l - 1) / 2;
	for (; j < l; j++)
		_putchar(str[j]);
	_putchar('\n');
}
