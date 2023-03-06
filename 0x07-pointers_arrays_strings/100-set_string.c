#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * Description: receives a pointer to a char and alters its value
 *
 * @s: char pointer whose argument is to be altered
 * @to: argument to set char pointers to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
