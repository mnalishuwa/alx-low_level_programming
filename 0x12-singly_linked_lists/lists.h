#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* _putchar - write a single char to stdout */
int _putchar(char c);

/* print_list - prints elements of linked list */
size_t print_list(const list_t *h);

/* list_len - return the number of elements in linked list */
size_t list_len(const list_t *h);

/* add_node - adds a new node to list_t at the beginning */
list_t *add_node(list_t **head, const char *str);

/* _print_string - print a string */
void _print_string(char *s);

/* _print_number - prints an int */
void _print_number(int n);

#endif
