#include "main.h"

/**
 * puts_half - prints half of a string
 * Description: takes str input and prints the 2nd half of str
 *
 * @str: string input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len_s, char_index;

	for (len_s = 0; *(str + len_s) != '\0'; len_s++)
		;
	for (char_index = len_s / 2; char_index < len_s; char_index++)
		_putchar(*(str + char_index));
	_putchar(10);
}
