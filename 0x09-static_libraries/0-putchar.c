#include <unistd.h>

/**
 * _putchar - Function to writes character to stdout
 * @c: The character parameter to print
 *
 * Return: On success 1, On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}