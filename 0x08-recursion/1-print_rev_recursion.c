#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * Description: takes string input s and reverses string using recursion
 *
 * @s: string input
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
