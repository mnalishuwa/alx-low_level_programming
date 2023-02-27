#include "main.h"

/**
 * print_rev - prints a string in reverse
 * Description: takes str argument, and the prints the string in reverse
 *
 * @s: string argument to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len_s, j;

	for (len_s = 0; *(s + len_s) != '\0'; len_s++)
		;
	for (j = len_s; j >= 0; j--)
	{
		if (j == 0)
		{
			_putchar(*(s + j));
			_putchar(10);
		}
		else
		{
			_putchar(*(s + j));
		}
	}
}
