#include "lists.h"

/**
 * print_listint_safe - print each element in list along with address
 * DEscription: takes a head pointer and traverses a list printing each
 * element
 *
 * @head: pointer to the head node
 *
 * Return: size_t, number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t _size = 0;

	if (!head)
		exit(98);

	while(current_node)
	{
		_size++;
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		current_node = current_node->next;
	}

	return (_size);
}
