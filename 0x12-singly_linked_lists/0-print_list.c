#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t
 * Description: receives a pointer to head node and prints list elements
 * one at a time
 *
 * @h: pointer to head node of type list_t
 *
 * Return: size_t, number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;
	list_t *current_node = h;

	while (current_node->next)
	{
		elements++;
		if (!current_node->str)
			current_node->len = 0;

		_putchar('[');
		_print_number(current_node->len);
		_putchar(']');
		_putchar(' ');
		_print_string(current_node->str);
		current_node = current_node->next;
		_putchar('\n');
	}
	return (elements);
}

/**
 * _print_string - prints a string to stdout
 * Description: prints a string of chars
 *
 * @s: string args
 *
 * Return: void
 */
void _print_string(char *s)
{
	const char *dflt = "(nil)";

	if (s == NULL)
	{
		while (*dflt)
		{
			_putchar(*dflt);
			dflt++;
		}
		return;
	}
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * _print_number - prints a number
 * Description: print an int to stdout
 *
 * @n: int arg
 *
 * Return: void
 */
void _print_number(int n)
{
	int remainder = n % 10;

	if (remainder < 0)
		remainder = -1 * remainder;

	if (n < 0)
		_putchar(MINUS_SIGN);

	if (n >= -9 && n <= 9)
	{
		if (n < 0)
			n = -1 * n;
		_putchar(n + ZERO);
		return;
	}

	n = n / 10;
	if (n < 0)
		n = -1 * n;
	_print_number(n);
	_putchar(remainder + ZERO);
}
