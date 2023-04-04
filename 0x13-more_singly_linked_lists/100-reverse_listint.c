#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * Description: receives a pointer to the pointer to the head node
 * and reverses the list
 *
 * @head: pointer to head pointer
 *
 * Return: pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	while (*head)
	{
		next_node = (*(*head)).next;
		(*(*head)).next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
