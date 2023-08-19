#include "main.h"

/**
 * _isdigit - Checks if numbers is digit from 0 - 9
 *
 * @c: int passed parameter to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
