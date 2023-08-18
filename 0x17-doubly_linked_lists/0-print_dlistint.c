#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * Description: prints all node data in doubly lineked list
 *
 * @h: pointer to head node of the list
 *
 * Return: size_t, number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current_node = (dlistint_t *)h;
	size_t list_size = 0;

	if (current_node == NULL)
		return (0);

	while (current_node)
	{
		list_size++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}

	return (list_size);
}
