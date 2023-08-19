#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: checks if character is upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
