#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Free a listint_t linked list and set head to NULL.
 *
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	/* If head is NULL, there is nothing to free */
	if (head == NULL)
		return;

	/* Iterate through the list, freeing each node */
	while (*head != NULL)
	{
		listint_t *next_node = (*head)->next;

		free(*head);
		*head = next_node;
	}

	/* Set head to NULL to indicate that the list is now empty */
	*head = NULL;
}
