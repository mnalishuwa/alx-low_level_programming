#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list
 * Description: adds new node at start of list_t
 *
 * @head: pointer to pointer to the head
 * @str: string supplied to initialize the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	*temp = malloc(sizeof(list_t));

	if (!*temp)
	{
		free(*temp);
		return (NULL);
	}

	(*temp).str = strdup(str);
	(*temp).next = (*(*head)).next;

	*head = temp;
	return (*head);
}
