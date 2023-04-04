#include "lists.h"

/**
 * pop_listint - deletes the first node from a linked list
 * Description: deletes the head node of a linked list and
 * returns the data.
 *
 * @head: pointer to a pointer to the head node of a listint_t list
 *
 * Return: int, data member n of the node
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp = *head;

	if (!temp)
		return (data);

	data = temp->n;
	temp = temp->next;
	free(*head);
	free(head);
	if (temp)
		*head = temp;

	return (data);
}
