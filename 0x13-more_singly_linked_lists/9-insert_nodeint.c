#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value for the new node
 *
 * Return: pointer to the new node on success, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	tmp = *head;
	while (i < idx - 1)
	{
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	tmp = tmp->next;
	i++;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
