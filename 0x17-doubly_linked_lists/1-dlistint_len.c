#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a list
 * Description: returns the number of elements in a
 * doubly-linked list
 *
 * @h: pointer to head node in list
 *
 * Return: size_t, list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current_node = (dlistint_t *)h;
	size_t list_size = 0;

	if (current_node == NULL)
		return (0);

	while (current_node)
	{
		list_size++;
		current_node = current_node->next;
	}

	return (list_size);
}
