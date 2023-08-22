#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers
 * @a: int first parameter to swap
 * @b: int second parameter to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
