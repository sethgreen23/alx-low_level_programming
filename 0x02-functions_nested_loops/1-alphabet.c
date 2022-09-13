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
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}

/**
 * main - main function
 *
 * Description: print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
