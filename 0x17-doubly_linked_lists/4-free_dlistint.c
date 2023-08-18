#include "lists.h"

/**
 * free_dlistint - frees linked list
 * Description: takes apointer to first node
 * in doubly-linked list and frees the list
 *
 * @head: pointer to first node in list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;

	if (head == NULL)
		return;

	while (current_node)
	{
		current_node = current_node->next;
		free(head);
		head = current_node;
	}
}
