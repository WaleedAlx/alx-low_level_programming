#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Function to prints an integer
 * @elem: the integer to print
 *
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - Function to prints
 * an integer, in hexadecimal
 * @elem: The integer element to print
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - Entry point
 * Description: Testing
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
