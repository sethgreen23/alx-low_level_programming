#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: printing the alphabet
 * in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char character;

	character = 'z';

	while (character >= 'a')
	{

		putchar(character--);

	}

	putchar('\n');

	return (0);
}
