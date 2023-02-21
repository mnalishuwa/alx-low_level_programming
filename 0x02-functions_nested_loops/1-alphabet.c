#include "main.h"

/**
 * print_alphabet - take no input, prints out lowercase alphabet
 * Description: function to print out lowercase alphabet using _putchar
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; alphabet[i] != '\0'; i = i + 1)
		_putchar(alphabet[i]);
}
