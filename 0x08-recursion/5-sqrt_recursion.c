#include "main.h"

int find_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that returns
 * the natural square root of a number
 * @n: number parameter to calculate
 * the square root of
 *
 * Return: the result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursion(n, 0));
}

/**
 * find_sqrt_recursion - function to find the natural
 * square root of a number
 * @n: number to parameter calculate the sqaure root of
 * @i: iterator parameter
 *
 * Return: the resulting square root
 */
int find_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt_recursion(n, i + 1));
}