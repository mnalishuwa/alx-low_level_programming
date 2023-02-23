#include "main.h"

/**
 * print_numbers - prints numbers to stdout
 * Description: takes no input, prints numbers 0 through 9 to stdout
 * Return: void
 */

void print_numbers(void)
{
	int i;

	/* ascii character codes are used to output desired chars */
	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
