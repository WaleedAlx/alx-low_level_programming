#include "main.h"
/**
 * _strncpy - Function to copy a string
 * @dest: Destination to copy the string to
 * @src: Source string to copy from
 * @n: The number of bytes
 *
 * Return: The result of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
