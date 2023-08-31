#include "main.h"

/**
 * _pow_recursion - Function that returns the value
 * of x raised to the power of y
 * @x: int parameter value to raise
 * @y: int power parameter
 *
 * Return: The result of power for passed number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
