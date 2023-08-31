#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Function that checks if
 * a string is a palindrome
 * @s: string parameter to reverse
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Function that returns
 * the length of a string
 * @s: string parameter to calculate its length
 *
 * Return: The length of the passed string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Function to checks
 * the characters recursively for palindrome
 * @s: string parameter to check
 * @i: iterator parameter
 * @len: the length of the string
 *
 * Return: 1 if the number is palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
