#include "main.h"

int find_prime(int n, int i);

/**
 * is_prime_number - Check if a number is
 * a prime number or not
 * @n: number parameter to be checked
 *
 * Return: 1 if number is a prime number
 * otherwise 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - check if a number is prime recursively
 * @n: number parameter to be evaluates
 * @i: iterator parameter
 *
 * Return: 1 if the number is prime, otherwise 0 if not
 */
int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (find_prime(n, i - 1));
}

