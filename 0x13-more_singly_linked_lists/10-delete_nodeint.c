#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at specified index
 * Description: traverses a list upto a given index and deletes the
 * node at that index
 *
 * @head: pointr to pointer to the head of the linked list
 * @index: int, node index to delete
 *
 * Return: int, 1 (Success) or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *temp = NULL, *current_node = *head;

	if (!current_node)
		return (-1);

	while (current_node)
	{
		if (!(current_node->next) && (index > pos))
			return (-1);
		if (index == 0 || (pos == index - 1))
			break;
		pos++;
		if (!(current_node->next))
			break;
		current_node = current_node->next;
	}

	if (index == 0)
	{
		if (current_node->next)
		{
			current_node = current_node->next;
			free(*head);
			*head = current_node;
		}
		return (1);
	}

	temp = current_node->next;
	if (temp->next)
		current_node->next = temp->next;
	free(temp);

	return (1);
}
