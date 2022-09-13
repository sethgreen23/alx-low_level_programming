#include <stdio.h>
#include <stlib.h>
#include "main.h"
/**
 * print_putchar - secondary function
 *
 * Description: print the string "_putchar"
 *
 * Return: return nothing
 */
void print_putchar(void)
{
	printf("_putchar\n");
}

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
