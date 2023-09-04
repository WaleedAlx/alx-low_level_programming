#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Program that prints 
 * the number of arguments passed to the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
