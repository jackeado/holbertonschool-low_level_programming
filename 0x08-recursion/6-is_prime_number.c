#include "holberton.h"

/**
 * prime_check - checks to see if number is prime
 * @g: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int g, int p)
{
	if (p < 2 || p % g == 0)
		return (0);
	else if (g > p / 2)
		return (1);
	else
		return (prime_check(g + 1, p));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
