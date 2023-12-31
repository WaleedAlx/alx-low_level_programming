#include "main.h"
/**
 * _strcmp - Function to compare two string values
 * @s1:First string  input value
 * @s2: Second string input value
 *
 * Return: The difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
