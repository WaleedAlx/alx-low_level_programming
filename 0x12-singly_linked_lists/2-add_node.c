#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function to add a new node in a  linked list
 * @head: The pointer to the head of linked list
 * @str: The new string to add
 *
 * Return: The address of the new element added, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
