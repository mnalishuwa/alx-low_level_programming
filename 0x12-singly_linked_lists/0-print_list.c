#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * Description: receives a pointer to head node and prints list elements
 * one at a time
 *
 * @h: pointer to head node of type list_t
 *
 * Return: size_t, number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;
	const list_t *current_node = h;

	while (current_node->next != NULL)
	{
		elements++;

		if (current_node->str)
			printf("[%d] %s\n", current_node->len, current_node->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		current_node = current_node->next;
	}
	return (elements);
}
