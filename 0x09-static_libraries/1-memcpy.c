#include "main.h"
/**
 *_memcpy - Function that copies memory area
 *@dest: Reference to memory where is stored
 *@src: Reference to memory where is copied
 *@n: The number of bytes
 *
 *Return: The result of copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
