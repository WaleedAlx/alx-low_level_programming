#include "main.h"
/**
 * _strncpy - Function to copy a string
 * @dest: First input parameter value
 * @src: Second input parameter value
 * @n: Number of characters
 *
 * Return: The resukt of copied string
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
