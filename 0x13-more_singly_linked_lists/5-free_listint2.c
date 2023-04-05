#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * Description: takes a pointer to a head node and frees the
 * memory allocated to the list
 *
 * @head: pointer to pointer to head node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (!head)
		return;

	current_node = *head;

	while (current_node)
	{
		current_node = current_node->next;
		free(*head);
		*head = current_node;
	}
}
