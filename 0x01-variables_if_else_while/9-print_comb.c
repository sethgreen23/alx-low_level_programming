#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: printing all single digit
 * sparated by ',' and ' '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int character;

	character = 0;

	while (character < 10)
	{

		putchar(character + '0');

		if (character < 9)
		{

			putchar(',');
			putchar(' ');

		}

		character++;
	}

	putchar('\n');

	return (0);
}
