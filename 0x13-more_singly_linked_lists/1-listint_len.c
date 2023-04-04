#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * Description: takes a listint_t pointer to the head node, then traverses
 * the list and computes the total number of nodes in the list.
 *
 * @h: pointer to head node
 *
 * Return: size_t, number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t list_size = 0;
	const listint_t *current_node = h;

	while (current_node)
	{
		list_size++;
		current_node = current_node->next;
	}

	return (list_size);
}
