#include "main.h"
/**
 * _strlen - Function to return the length of a string
 * @s: string parameter
 * Return: The length of string
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
