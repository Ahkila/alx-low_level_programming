#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Find the nth node of a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to find (starting at 0).
 * Return: If the node at the given index exists, return a pointer to it.
 *         Otherwise, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index;

	for (current_index = 0; current_index < index; current_index++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
