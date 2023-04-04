#include "lists.h"

/**
 * add_nodeint_end - add listint_t node to the end of list
 * Description: creates a new listint_t node, initializes the members
 * then add the node to the end of a listint_t linked list
 *
 * @head: pointer to pointer to head node
 * @n: int, member of listint_t node
 *
 * Return: pointer to the new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->next = NULL;

	while (current_node)
	{
		if (!(current_node->next))
			break;
		current_node = current_node->next;
	}

	if (!(*head))
		*head = new_node;
	else
		current_node->next = new_node;

	return (new_node);
}
