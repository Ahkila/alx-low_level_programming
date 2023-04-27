#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 *               and return its data.
 *
 * @head: Pointer to the pointer to the head node of the list.
 *
 * Return: If the list is empty, return 0. Otherwise, return the
 *         data of the former head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int data;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Save the current head node and its data */
	old_head = *head;
	data = old_head->n;

	/* Update the head pointer to skip over the old head node */
	*head = old_head->next;

	/* Free the old head node */
	free(old_head);

	/* Return the data of the old head node */
	return (data);
}
