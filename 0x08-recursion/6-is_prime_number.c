#include "main.h"
/**
 * is_prime_number - check the number is prime or not
 *
 * @n: the number to check
 *
 * Return: number is prime or not
 */
int is_prime_number(int n)
{
	int half;

	if (n <= 1)
		return (0);
	half = n / 2;

	return (checkPrime(n, half, 2));
}
/**
 * checkPrime - check if number is prime or not
 *
 * @n: number to check
 *
 * @half: half of the number n
 *
 * @count: counter
 *
 * Return: return the number
 */
int checkPrime(int n, int half, int count)
{
	if (count > half)
		return (1);
	if (n % count != 0)
		return (checkPrime(n, half, count + 1));
	return (0);
}
