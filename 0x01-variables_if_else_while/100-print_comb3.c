#include <stdio.h>
/**
 * main - main function
 *
 * Description: print all possible small combination
 * of two digits
 * Return: Nothing
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j)
				continue;
			if (((i * 10 + j) / (j * 10 + i)) >= 1)
				continue;
			putchar(i + '0');
			putchar(i + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	puchar('\n');
	return (0);
}
