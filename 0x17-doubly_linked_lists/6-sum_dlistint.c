#include "lists.h"

/**
 * sum_dlistint - sums all data in a list
 * Description: sums all data in doubly-linked list
 *
 * @head: pointer to first node
 *
 * Return: int, sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int total = 0;

	while (current_node)
	{
		total += current_node->n;
		current_node = current_node->next;
	}

	return (total);
}
