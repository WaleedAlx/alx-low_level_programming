#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Program that print
 * the name of the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
