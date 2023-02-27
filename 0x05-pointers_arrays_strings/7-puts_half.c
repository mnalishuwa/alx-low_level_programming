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
	int len_s, char_index, start_index;

	for (len_s = 0; *(str + len_s) != '\0'; len_s++)
		;

	start_index = len_s / 2;
	if (len_s % 2 == 1)
		start_index++;

	for (char_index = start_index; char_index < len_s; char_index++)
		_putchar(*(str + char_index));
	_putchar(10);
}
