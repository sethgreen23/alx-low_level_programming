#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Description: find the number is positive or negative
 * Return: nothing
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		puts("is positive\n");
	else if (n < 0)
		puts("is negative\n");
	else
		puts("is zero\n");

	return (0);
}
