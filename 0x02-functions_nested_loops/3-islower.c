#include "main.h"

/**
 * _islower - Check if the char is lower case
 * 
 * @c: is the char to be checked
 *
 * Return: 1 if char is lowercase or  otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
