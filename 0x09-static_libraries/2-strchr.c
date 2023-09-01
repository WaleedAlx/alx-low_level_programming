#include "main.h"
/**
 * _strchr - Function to find a specific char in a string
 * @s: String parameter to search for a specific char
 * @c: The char to search for it
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
