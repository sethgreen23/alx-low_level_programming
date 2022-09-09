#include <stdio.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description: print all the alphabet in lower case
 * except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 97;

	while (letter < 123)
	{
		
		if (letter == 'e' || letter== 'q')

			continue;

		putchar(letter++);

	}

	putchar("\n");

	return (0);
}
