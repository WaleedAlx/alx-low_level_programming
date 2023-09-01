#include "main.h"
/**
 * _strpbrk - Function to match a specific string
 * @s: The string parameter
 * @accept: The string to match
 * Return: The matched string
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}
