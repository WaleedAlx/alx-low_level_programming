#include <stdio.h>
#include "linked_lists.h"

/**
 * print_linked_list - Function to  prints
 * all the elements in a linked list
 * @p: The pointer to the list to print
 *
 * Return: The number of nodes printed
 */
size_t print_linked_list(const list_t *p)
{
	size_t siz = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		siz++;
	}
	return (siz);
}
