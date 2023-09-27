#include "lists.h"

/**
 * print_listint - Function to print
 * all the elements of a linked list
 * @p: linked list of type listint_t
 *
 * Return: The number of nodes in linked list
 */
size_t print_listint(const listint_t *p)
{
	size_t num = 0;

	while (p)
	{
		printf("%d\n", p->n);
		num++;
		p = p->next;
	}

	return (num);
}
