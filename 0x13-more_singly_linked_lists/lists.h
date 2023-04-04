#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* _putchar - write single char to stdout */
int _putchar(char c);

/* print_listint - prints all elements int listint_t */
size_t print_listint(const listint_t *h);

/* listint_len - returns the number of elements in listint_t */
size_t listint_len(const listint_t *h);

/* add_nodeint - adds a listint_t node at the beginning of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* add_nodeint_end - adds a node at the end of a list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free_listint - frees the memory allocated for listint_t list */
void free_listint(listint_t *head);

/* free_listint2 - frees the memory allocated for listint_t list */
void free_listint2(listint_t **head);

/* pop_listint - deletes the head node and returns the head nodes data */
int pop_listint(listint_t **head);

/* get_nodeint_at_index - return a pointer to node at index in list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* sum_listint - returns the sum of all data of a listint_t linked list */
int sum_listint(listint_t *head);

/* insert_nodeint_at_index - insert node at given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* delete_nodeint_at_index - delete a node at a given position */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* reverse_listint - reverses a singly linked list */
listint_t *reverse_listint(listint_t **head);

#endif
