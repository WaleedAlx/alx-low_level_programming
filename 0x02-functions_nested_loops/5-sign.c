#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n:  int parameter to check
 *
 * Return: Returns 1 if passed parameter is greater than zero 0, prints 0 if n is zero -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
