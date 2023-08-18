#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node in list
 * Description: inserts node in doubly linked list
 * at specified index
 *
 * @h: pointer to the first node in list
 * @idx: position to insert new node at
 * @n: int, new node data
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = NULL, *new_node = NULL;
	unsigned int position = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
		return (NULL);

	current_node = *h;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL && idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node && position < idx)
	{
		position++;
		current_node = current_node->next;
	}

	if (current_node == NULL && position < idx)
		return (NULL);
	new_node->next = current_node;
	new_node->prev = current_node->prev;
	(current_node->prev)->next = new_node;
	current_node->prev = new_node;
	return (new_node);
}
