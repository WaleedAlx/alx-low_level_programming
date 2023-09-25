#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function to return
 * the number of elements in a linked list
 * @p: The pointer to the linked list
 *
 * Return: The number of elements in linked list
 */
size_t list_len(const list_t *p)
{
	size_t n = 0;

	while (p)
	{
		n++;
		p = p->next;
	}
	return (n);
}
