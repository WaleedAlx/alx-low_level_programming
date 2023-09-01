#include "main.h"
/**
 * _strstr - Function to search for needle in haystack
 * @haystack: input haystack
 * @needle: input needle
 * Return: haystack or 0 Otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
