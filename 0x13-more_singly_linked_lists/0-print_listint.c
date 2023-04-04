#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * Description: receives a pointer to the head of a listint_t
 * linked list and then prints each element in the list.
 *
 * @h: pointer or reference to listint_t node representing the head
 *
 * Return: size_t, the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t list_size = 0;
	const listint_t *current_node = h;

	while (current_node)
	{
		list_size++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}

	return (list_size);
}
