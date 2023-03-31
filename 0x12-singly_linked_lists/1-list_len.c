#include "lists.h"

/**
 * list_len - return number of elements in a list
 * Description: count the number of elements in a linked list
 *
 * @h: pointer to list head
 *
 * Return: size_t, number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size_l = 0;
	const list_t *cur_node = h;

	while(cur_node->next)
	{
		size_l++;
		cur_node = cur_node->next;
	}
	return (size_l);
}
