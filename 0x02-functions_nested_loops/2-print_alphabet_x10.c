#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - secondary function
 *
 * Description: print the alphabet 10 times
 *
 * Return: return nothing
 */
void print_alphabet_x10(void)
{
	int counter;

	for (counter = 0; counter < 10 ; counter++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}

}
