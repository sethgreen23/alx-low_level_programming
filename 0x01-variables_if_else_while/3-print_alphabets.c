#include <stdio.h>
/**
 * main - main
 *
 * Description: print alphabet in lower case
 * and in upper case
 * Return: Noting
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
