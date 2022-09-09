#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: print the hexadecimal codes
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char character;

	for (character = 0; character <= 9; character++)
	{

		putchar(character + '0');

	}

	for (character = 97; character < 103; character++)
	{

		putchar(character);

	}

	putchar('\n');

	return (0);
}
