#include <stdio.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description: print all the alphabet in lower case
 * each one followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 97;

	while (letter < 123)
	{

		printf("%c", letter++);

	}

	printf("\n");

	return (0);
}
