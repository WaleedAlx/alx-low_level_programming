#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: string parameter to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
