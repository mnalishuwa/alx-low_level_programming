#include "lists.h"

/**
 * add_node_end - add node to the end
 * Description: navigates to the end of a list then adds a new node
 *
 * @head: pointer to pointer to list_t head node
 * @str: string for the str membr of newly created node
 *
 * Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	current_node = *head;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	/* initialize new node */
	new_node->str = strdup(str);
	new_node->len = _strlen_(str);
	new_node->next = NULL;

	if (!current_node)
	{
		current_node = new_node;
		*head = new_node;
		return (new_node);
	}

	/* navigate to the end of the list */
	while (current_node->next)
		current_node = current_node->next;

	/* add newly created node */
	current_node->next = new_node;

	return (new_node);
}

/**
 * _strlen_ - get the length of a string
 * Description: Return the length of a string
 *
 * @s: string args
 *
 * Return: int, length or s
 */
int _strlen_(const char *s)
{
	int len_s = 0;

	if (!s)
		return (0);

	while (*s++)
		len_s++;
	return (len_s);
}
