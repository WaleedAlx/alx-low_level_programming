#include "lists.h"

/**
 * insert_nodeint_at_index - Function to insert
 * a new node in a linked list at a given position
 * @head: The pointer to the first node in the list
 * @index: The index where the new node is added
 * @n: The data to insert in the new node
 *
 * Return: The pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < index; i++)
	{
		if (i == index - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
