#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * Description: deletes node at specified index from a
 * doubly-linked list.
 *
 * @head: pointer to first node in linked list
 * @index: int, position of node to be deleted
 *
 * Return: int, 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = NULL;
	unsigned int position = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	while (current_node && position < index)
	{
		position++;
		current_node = current_node->next;
	}

	if (current_node == NULL && position < index)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next)
			(current_node->next)->prev = NULL;
		free(current_node);
		return (1);
	}
	if (current_node->prev)
		(current_node->prev)->next = current_node->next;
	if (current_node->next)
		(current_node->next)->prev = current_node->prev;
	free(current_node);
	current_node = NULL;

	return (1);
}
