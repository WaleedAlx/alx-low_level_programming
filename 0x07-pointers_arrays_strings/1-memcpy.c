#include "main.h"
/**
 *_memcpy - Function to copy memory area
 *@dest: The memory pointer where is stored
 *@src: The memory pointer where is copied
 *@n: The number of bytes
 *
 *Return: The copied memory with n bytes changed
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
