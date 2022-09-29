#include "main.h"
#include <math.h>
/**
 * is_prime_number - check the number is prime or not
 *
 * @n: the number to check
 *
 * Return: number is prime or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	int sqt;

	sqt = ceil(sqrt(n));

	return (checkPrime(n, sqt, 2));
}
/**
 * checkPrime - check if number is prime or not
 *
 * @n: number to check
 *
 * @sqt: sqrt of the number n
 *
 * @count: counter
 *
 * Return: return the number
 */
int checkPrime(int n, int sqt, int count)
{
	if (count > sqt)
		return (1);
	if (n % count != 0)
		return (checkPrime(n, sqt, count + 1));
	return (0);
}
