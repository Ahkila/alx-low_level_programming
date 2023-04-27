#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 *
 * @head: Pointer to a pointer to the head node.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the head node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)

		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set the head to the new node */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Traverse the list to find the last node */
		listint_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		/* Add the new node after the last node */
		last_node->next = new_node;
	}

	/* Return the address of the head node */
	return (*head);
}
