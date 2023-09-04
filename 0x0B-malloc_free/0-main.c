#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - Function to print buffer in hexa
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
 * Description: Testing simple_print_buffer Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if  (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
