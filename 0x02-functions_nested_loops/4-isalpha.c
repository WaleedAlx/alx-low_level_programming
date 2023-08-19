#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: the parameter passed for the character to be checked
 *
 * Return: 1 if the character is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
