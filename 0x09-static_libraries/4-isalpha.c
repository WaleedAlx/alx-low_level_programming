#include "main.h"

/**
 * _isalpha - Function to check for alphabetic character
 * @c: The character to be checked
 * Return: 1 if the char is a letter, 0 Otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
