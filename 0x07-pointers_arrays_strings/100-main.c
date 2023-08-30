#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Testing set_string function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
