#include <stdio.h>
/**
 * main - main function
 *
 * Description: print alphabet in lower case
 * Return: Nothing
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
