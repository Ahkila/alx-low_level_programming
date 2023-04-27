#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Free a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	/* Iterate through the list, freeing each node */
	while (head != NULL)
	{
		listint_t *next_node = head->next;

		free(head);
		head = next_node;
	}
}
