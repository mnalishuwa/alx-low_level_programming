#include "lists.h"

/**
 * add_dnodeint_end - and node to end
 * Description: adds a node to end of doubly-linked list
 *
 * @head: pointer to first node
 * @n: int, data
 *
 * Return: new node, dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	current_node = *head;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node->next)
		current_node = current_node->next;

	new_node->prev = current_node;
	current_node->next = new_node;

	return (new_node);
}
