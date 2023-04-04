#include "lists.h"

/**
 * get_nodeint_at_index - get node at specified index
 * Description: receive a head pointer and an index number,
 * traverse the list upto the index number node and then
 * returns a pointer to the index number node
 *
 * @head: pointer to head node of linked list
 * @index: unsigned int, index of the desired node
 *
 * Return: listint_t pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cur_pos = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		/* check if reached end of the list and index > position */
		if (!(current_node->next) && index > cur_pos)
			return (NULL); /*return null cause index not found */
		/* check if node position matches desired index */
		if (index == cur_pos)
			break;
		cur_pos++;
		current_node = current_node->next;
	}

	return (current_node);
}
