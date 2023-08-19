#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: check if char is number and print the result
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
