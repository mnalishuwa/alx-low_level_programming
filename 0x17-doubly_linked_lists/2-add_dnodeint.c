#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of list
 * Description: add node to start of doubly-linked list
 *
 * @head: pointer to first node in the list
 * @n: int, data
 *
 * Return: dlistint *, pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
