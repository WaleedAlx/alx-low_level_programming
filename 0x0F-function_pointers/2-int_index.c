#include "function_pointers.h"
/**
 * int_index - Function to return index
 * place if comparison = true, Otherwise -1
 * @array: The pointer to array
 * @size: The size of elements in array
 * @cmp: The pointer to func of
 * one of the 3 in main
 * Return: The size of array if suceess,
 * otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
