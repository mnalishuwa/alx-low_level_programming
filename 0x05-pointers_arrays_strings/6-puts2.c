#include "main.h"

/**
 * puts2 - prints every other char in a string
 * Description: receives str and prints every other char in s
 *
 * @str: string argument
 *
 * Return: void
 */

void puts2(char *str)
{
	int len_s, char_index;

	for (len_s = 0; *(str + len_s) != '\0'; len_s++)
		;
	for (char_index = 0; char_index < len_s; char_index += 2)
		_putchar(*(str + char_index));
	_putchar(10);
}
