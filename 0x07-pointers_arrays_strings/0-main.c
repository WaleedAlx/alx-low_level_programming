#include "main.h"
#include <stdio.h>
/**
 * simple_print_buffer - Function to prints buffer in hexa
 * @buffer: The address of memory to print
 * @size: The size of the memory to print
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Entry point
 * Description: Testing _memset function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-----------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
