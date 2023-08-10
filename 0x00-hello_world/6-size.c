#include <stdio.h>

/**
 * main - main function
 *
 * Description: printing size of variables in c
 * Return: nothing
 */

int main(void)
{
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
