#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character to stdout
 * @c: Vhar parameter to be printed
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
