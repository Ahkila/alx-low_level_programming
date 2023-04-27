#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the given index of a list.
 *
 * @head: Pointer to a pointer to the first node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}

	previous = NULL;
	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
	current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
