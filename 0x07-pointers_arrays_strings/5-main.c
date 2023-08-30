#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Testing _strstr Function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
