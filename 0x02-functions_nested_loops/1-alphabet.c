#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - secondary function
 *
 * Description: print the alphabet in lowercase
 *
 * Return: return nothing
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
