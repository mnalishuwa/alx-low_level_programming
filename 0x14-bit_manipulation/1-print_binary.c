#include "main.h"

/**
 * print_binary - prints a number n in binary
 * Description: print binary representation of number
 * it uses shifts to divide by 2
 * @n: int to be printed in binary form
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int remainder = n - (2 * (n >> 1));

	if (n == 0 || n == 1)
	{
		_putchar(remainder + '0');
		return;
	}

	n = n >> 1;
	print_binary(n);
	_putchar(remainder + '0');
}
