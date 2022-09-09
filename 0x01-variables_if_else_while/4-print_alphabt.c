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

	letter = 'a';

	while (letter <= 'z')
	{
		
		if (letter != 'e' || letter != 'q')
			putchar(letter++);

}

	putchar('\n');

	return (0);
}
