#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes character to stdout
 * @c: The character parameter to print
 * Return: On success 1, On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
