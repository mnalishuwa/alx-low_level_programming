#include "main.h"

/**
 * print_sign: check whether a number is 0, positive, or negative
 * Description: take int n, check if n < 0, or n >= 0
 *
 * @n: integer number to be checked
 *
 * Return: -1 if negative, 0 if 0, 1 if positive
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('+');
	return (1);
}
