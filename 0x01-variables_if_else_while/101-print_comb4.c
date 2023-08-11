#include <stdio.h>
/**
 * main - main function
 *
 * Description: print smallest combination of
 * three numbers
 * Return: Nothing
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i == j == k)
					continue;
				if ((i < j && j < k) && (i != j && j != k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
