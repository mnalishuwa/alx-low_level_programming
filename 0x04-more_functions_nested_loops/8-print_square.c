#include "main.h"

/**
 * print_square - print a square using # char
 * Description: takes int n, and outputs a number of '#' chars to stdout
 *
 * @n: int n, number of '#' to print
 *
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
