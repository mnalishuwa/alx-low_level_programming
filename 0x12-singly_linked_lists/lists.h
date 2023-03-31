#ifndef LISTS_H
#define LISTS_H

#define ZERO 48
#define MINUS_SIGN 45

#include <stddef.h>

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

/* _print_string - print a string */
void _print_string(char *s);

/* _print_number - prints an int */
void _print_number(int n);

#endif
