#include "main.h"
/**
 * _strncat - Function to concatenate two strings
 * @dest: First string parameter value
 * @src: Second string parameter value
 * @n: Number of characters parameter
 *
 * Return: Return the result of concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
