#include "lists.h"

/**
 * get_dnodeint_at_index - get node at specified index
 * Description: returns a pointer to node at index
 *
 * @head: pointer to first node in list
 * @index: int, position of node in list
 *
 * Return: pointer to specified node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int position = 0;

	if (head == NULL)
		return (NULL);

	while (current_node && position < index)
	{
		position++;
		current_node = current_node->next;
	}

	return (current_node);
}
