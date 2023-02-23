#include "main.h"

/**
 * print_line - print a line using _ char
 * Description: takes int n, and outputs a number of '_' chars to stdout
 *
 * @n: int n, number of '_' chars to print
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n--)
		_putchar('_');
	_putchar('\n');
}
