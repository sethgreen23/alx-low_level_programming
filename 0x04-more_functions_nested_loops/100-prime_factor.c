#include <stdio.h>
#include <math.h>
/**
 * main - main function
 *
 * Description: print the largest prime factor
 * of the number 612852475143
 * Return: nothing
 */
int main(void)
{
	long i, j, last_prime_factor, n;
	int state;

	n = 612852475143;
	state = 0;
	for (i = 2; i < sqrt(n) + 1; i++)
	{
		if (n % i == 0)
		{
			for (j = 2; j < sqrt(i) + 1; j++)
			{
				if (i % j == 0)
				{
					state = 1;
					break;
				}
			}
			if (state == 0)
				last_prime_factor = i;
			else
				state = 0;
		}
	}
	printf("%ld\n", last_prime_factor);
	return (0);
}
