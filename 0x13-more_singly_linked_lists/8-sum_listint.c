#include "lists.h"

/**
 * sum_listint - aggregate all int data in linked list
 * Description: traverse each node in listint_t linked list and
 * sum each int member at each node
 *
 * @head: pointer to head node of linked list
 *
 * Return: int, sum of all int data in the linked list
 */
int sum_listint(listint_t *head)
{
	int _total = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		_total += current_node->n;
		current_node = current_node->next;
	}

	return (_total);
}
