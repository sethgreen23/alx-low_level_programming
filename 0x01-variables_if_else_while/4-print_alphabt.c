#include <stdio.h>
/**
 * main - function main
 *
 * Description: print alphabet except q and e
 * Return: Nothing
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
