#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list.
 *
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev_node = NULL;
	current_node = *head;

	while (current_node != NULL)
	{
	next_node = current_node->next;
	current_node->next = prev_node;
	prev_node = current_node;
	current_node = next_node;
	}

	*head = prev_node;

	return (*head);
}
