#include "main.h"

/**
 * print_alphabet_x10 - take no input, prints out lowercase alphabet
 * Description: function to print out lowercase alphabet using _putchar
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j = j + 1)
			_putchar(alphabet[j]);
	}
}
