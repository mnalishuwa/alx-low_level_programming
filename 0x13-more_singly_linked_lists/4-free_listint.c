#include "lists.h"

/**
 * free_listint - frees a linked list
 * Description: takes a pointer to a head node and frees the
 * memory allocated to the list
 *
 * @head: pointer to head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node)
	{
		current_node = current_node->next;
		free(head);
		if (current_node)
			head = current_node;
	}
}
