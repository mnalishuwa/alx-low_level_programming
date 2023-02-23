#include "main.h"

/**
 * print_most_numbers - prints numbers to stdout, excl 2 and 4
 * Description: takes no input, prints numbers 0 - 9 to stdout excl 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	/* ascii character codes are used to output desired chars */
	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(10);
}
