#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _is_prime - calculate the prime number
 * @counter: counter
 * @n: integer
 *
 * Return: 1 if n is prime number 0 otherwise
 */
int _is_prime(int counter, int n)
{
	if (counter >= ((int) sqrt(n) + 1))
		return (1);
	if (n % counter == 0)
		return (0);
	return (_is_prime(counter + 1, n));
}
/**
 * is_prime_number - check for prime numbers
 * @n: number to check
 *
 * Return: 1 is n is prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_is_prime(2, n));
}
