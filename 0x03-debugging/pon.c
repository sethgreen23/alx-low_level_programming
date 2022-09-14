#include "main.h"
/**
 * positive_or_negative - check of if integer is positive or negative
 *
 * @n: the value we want to check
 *
 * Return: Always nothing
 *
 */
void positive_or_negative(int n)
{

	if (n > 0)

		printf("%d is positive\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

	else

		printf("%d is zero\n", n);
}
