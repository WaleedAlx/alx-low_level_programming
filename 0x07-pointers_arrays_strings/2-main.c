#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Testing _strchr
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
