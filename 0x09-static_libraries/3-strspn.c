#include "main.h"
/**
 * _strspn - Function to find char in a sting
 * @s: The string to search for a speific char
 * @accept: The char to search for
 * Return: The order of the char in the string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;


	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
