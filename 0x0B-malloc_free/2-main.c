#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Testing str_concat function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
