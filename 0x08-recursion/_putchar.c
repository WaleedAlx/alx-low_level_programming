#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function to writes to stdout
 * @c: The char parameter to print
 *
 * Return: On success 1,On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
