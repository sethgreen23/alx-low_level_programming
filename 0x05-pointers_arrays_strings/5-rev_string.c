#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *str)
{
	int i;

	for (i = 0; *str!='\0'; i--, str--)
	;

	for (--i, --str; i>=0; i--, str--)
		printf("%c", *str);
	printf("\n");
}
