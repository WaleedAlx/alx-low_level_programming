#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Testing rev_string
 * Return: Always 0 (success)
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
