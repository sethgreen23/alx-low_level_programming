#include <stdio.h>
#include <sdtlib.h>
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
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
