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
	int remainder = n - ((n >> 1) * 2);

	if (n == 2)
	{
		_putchar((n >> 1) + '0');
		_putchar(remainder + '0');
		return;
	}
	if (n == 1 || n == 0)
	{
		_putchar(remainder + '0');
		return;
	}

	n = n >> 1;
	print_binary(n);
	_putchar(remainder + '0');
}
