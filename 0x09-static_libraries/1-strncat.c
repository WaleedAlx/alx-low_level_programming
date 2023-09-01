#include "main.h"
/**
 * _strncat - Function to concatenate two strings
 * @dest: The 1st input parameter value
 * @src: The 2nd input parameter value
 * @n: The number of bytes
 *
 * Return: The result of the two concatenated strings
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
