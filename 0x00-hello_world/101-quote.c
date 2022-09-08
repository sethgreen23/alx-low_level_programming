#include<unistd.h>
#include<string.h>
/**
 * main - main function
 *
 * Return: print a string to the starndard error
 */
int main(void)
{
	int s;
	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
