#include "main.h"
 /**
 * _strcat - Function to concatenate two strings
 * @dest: input parameter 1st string value
 * @src: input parameter 2nd string value
 *
 * Return: The result of two concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
