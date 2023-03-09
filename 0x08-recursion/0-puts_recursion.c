#include "main.h"
#define LINE_FEED 10

/**
 * _puts_recursion - prints a string
 * Description: prints a string s followed by a newline
 *
 * @s: string input to be printed to stdout
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar(LINE_FEED);
		return;
	}
	_putchar(*(s++));
	_puts_recursion(s);
}
