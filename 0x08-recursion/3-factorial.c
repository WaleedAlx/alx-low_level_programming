#include "main.h"

/**
 * factorial - Function that return
 * the factorial of a specific number
 * @n: number parameter to return its factorial
 *
 * Return: factorial of passed number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
