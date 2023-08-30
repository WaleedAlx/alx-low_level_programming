#include "main.h"
/**
 * _memset - Function to fill a block of memory
 * with a specific value
 * @s: the starting address of memory to be filled
 * @b: the specific  value to fill
 * @n: the number of bytes to be changed
 *
 * Return: the changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
