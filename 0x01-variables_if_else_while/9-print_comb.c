#include <stdio.h>
/**
 * main - main function
 *
 * Description: all posible combinations of single digit
 * Return: Nothing
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
