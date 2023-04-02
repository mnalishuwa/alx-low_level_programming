#include "lists.h"

/**
 * free_list - frees memory allocated for linked list
 * Description: takes a pointer to head of a linked list
 * and free's the memory allocated.
 *
 * @head: pointer to head of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node =  NULL;

	if (!current_node)
	{
		return;
	}
	next_node = current_node->next;

	while(current_node)
	{
		free(current_node->str);
		free(current_node);
		current_node = next_node;
		if (current_node)
			next_node = next_node->next;
	}

}
