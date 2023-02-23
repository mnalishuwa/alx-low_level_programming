#include "main.h"

/**
 * print_diagonal - print a line using _ char
 * Description: takes int n, and outputs a number of '\' chars to stdout
 *
 * @n: int n, number of '\' chars to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
