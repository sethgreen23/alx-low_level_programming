#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - main function
 *
 * Description: print to the standard error
 * Return: nothing
 */

int main(void)
{
	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buf, strnlen(buf, sizeof(buf)));
	return (0);
}
