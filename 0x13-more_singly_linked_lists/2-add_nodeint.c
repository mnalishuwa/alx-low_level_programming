#include "lists.h"

/**
 * add_nodeint - add node at beginning of listint_t
 * Description: creates a new listint_t node and adds it to the beginning
 * of listint_t linked list
 *
 * @head: pointer to a pointer to the head node of a listint_t linked list
 * @n: int, data member for new node
 *
 * Return: pointer/reference to the new_node
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	/* initialize new node */
	new_node->n = n;
	new_node->next = NULL;
	/* set new node reference to head node reference if it exists */
	if (*head)
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}
