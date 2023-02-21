#include "main.h"

/**
 * print_last_digit - finds the last digit of a number n
 * Description: take int input n and returns the last digit of n
 *
 * @n: int to obtain last digit
 *
 * Return: n modulo 10
 */

int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
