#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Description: print the last digit of the n value and
 * determine if is great then 5 or equal to 0 or less then
 * 5 and not 0
 * Return: nothing
 */

int main(void)
{
	int n;
	int  last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	/* your code goes there */
	return (0);
}
