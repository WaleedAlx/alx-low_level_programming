#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: string parameter to return its length
 * Return: length of passed parameter
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
