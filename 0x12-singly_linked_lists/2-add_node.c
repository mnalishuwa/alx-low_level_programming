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

	temp = malloc(sizeof(list_t));

	if (!temp)
	{
		return (NULL);
	}

	(*temp).str = strdup(str);
	(*temp).len = _strlen((*temp).str);
	(*temp).next = *head;

	*head = temp;
	return (*head);
}

/**
 * _strlen - get the length of a string
 * Description: Return the length of a string
 *
 * @s: string args
 *
 * Return: int, length or s
 */
int _strlen(char *s)
{
	int len_s = 0;

	if (!s)
		return (0);
	while (*s++)
		len_s++;
	return (len_s);
}
