#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at specified index
 * Description: create a new node and insert it at index specified
 *
 * @head: pointer to pointer to head node
 * @idx: int, index where the new node is to be inserted
 * @n: int, data member for new node
 *
 * Return: listint pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node = *head;
	unsigned int pos = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (current_node)
	{
		if (!(current_node->next) && idx > pos)
			return (NULL);
		if (idx == 0 || (pos == idx - 1))
			break;
		pos++;
		if (!(current_node->next))
			break;
		current_node = current_node->next;
	}

	if (idx == 0)
	{
		if (*head)
			new_node->next = *head;
		*head = new_node;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
