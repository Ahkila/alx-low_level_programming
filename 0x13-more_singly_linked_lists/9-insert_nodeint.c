#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 *                            node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value for the new node
 * Return: pointer to the new node on success, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	if (!head)
	return (NULL);

	if (idx == 0)
	return (add_nodeint(head, n));

	prev_node = *head;
	for (i = 0; i < idx - 1 && prev_node; i++)
	prev_node = prev_node->next;

	if (i != idx - 1 || !prev_node)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
