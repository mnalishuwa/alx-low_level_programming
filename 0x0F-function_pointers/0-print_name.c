#include "function_pointers.h"

/**
 * print_name - prints out a string to stdout
 * Description: takes a string and a pointer to a function
 * that receives a string argument and returns void.
 *
 * @name: string argument to print
 * @f: pointer to a function that prints out the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	/* return if function pointer is NULL */
	if (!f)
		return;
	/* call function and pass it name as argument */
	(*f)(name); /* the asterix and parentheses can be omitted */
}
