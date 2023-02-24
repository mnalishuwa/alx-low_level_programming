#include "main.h"

/**
 * print_triangle - print a triangle using #
 * Description: takes int n, and outputs a triangle of '#' chars to stdout
 *
 * @n: int n, size the triangle to print
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = n; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = n - 1 - j; k < n; k++)
			_putchar('#');
		_putchar('\n');
	}
}
