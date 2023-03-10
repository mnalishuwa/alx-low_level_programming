#include "main.h"

/**
 * _strlen_recursion - return the length of the string
 * Description: takes string s and uses recursion to print out the length
 *
 * @s: string input
 *
 * Return: int, length of the string s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
